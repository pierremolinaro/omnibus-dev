#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type::GGS_genericFormalParameter_2E_type (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type::GGS_genericFormalParameter_2E_type (const GGS_genericFormalParameter_2E_type & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type & GGS_genericFormalParameter_2E_type::operator = (const GGS_genericFormalParameter_2E_type & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_genericFormalParameter_2E_type GGS_genericFormalParameter_2E_type::init_21_ (const GGS_lstring & in_name,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter_2E_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_type::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type::GGS_genericFormalParameter_2E_type (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type GGS_genericFormalParameter_2E_type::class_func_new (const GGS_lstring & in_name,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter_2E_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_genericFormalParameter_2E_type::objectCompare (const GGS_genericFormalParameter_2E_type & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericFormalParameter_2E_type::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_type::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_type::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericFormalParameter.type:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @genericFormalParameter.type generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter_2E_type ("genericFormalParameter.type",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericFormalParameter_2E_type::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter_2E_type ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameter_2E_type::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameter_2E_type (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type GGS_genericFormalParameter_2E_type::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameter_2E_type result ;
  const GGS_genericFormalParameter_2E_type * p = (const GGS_genericFormalParameter_2E_type *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameter_2E_type *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter.type", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @genericFormalParameter_2E_type_3F_
//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type_3F_::GGS_genericFormalParameter_2E_type_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type_3F_::GGS_genericFormalParameter_2E_type_3F_ (const GGS_genericFormalParameter_2E_type & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type_3F_ GGS_genericFormalParameter_2E_type_3F_::init_nil (void) {
  GGS_genericFormalParameter_2E_type_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericFormalParameter_2E_type_3F_::isValid (void) const {
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

bool GGS_genericFormalParameter_2E_type_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter_2E_type_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_genericFormalParameter_2E_type () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_genericFormalParameter_2E_type_3F_::objectCompare (const GGS_genericFormalParameter_2E_type_3F_ & inOperand) const {
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

void GGS_genericFormalParameter_2E_type_3F_::description (String & ioString,
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
//     @genericFormalParameter.type? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter_2E_type_3F_ ("genericFormalParameter.type?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericFormalParameter_2E_type_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter_2E_type_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameter_2E_type_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameter_2E_type_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type_3F_ GGS_genericFormalParameter_2E_type_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameter_2E_type_3F_ result ;
  const GGS_genericFormalParameter_2E_type_3F_ * p = (const GGS_genericFormalParameter_2E_type_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameter_2E_type_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter.type?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable::GGS_llvmStringDefinitionElement_2E_variable (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable::GGS_llvmStringDefinitionElement_2E_variable (const GGS_llvmStringDefinitionElement_2E_variable & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable & GGS_llvmStringDefinitionElement_2E_variable::operator = (const GGS_llvmStringDefinitionElement_2E_variable & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable GGS_llvmStringDefinitionElement_2E_variable::init_21_ (const GGS_lstring & in_name,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement_2E_variable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement_2E_variable::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable::GGS_llvmStringDefinitionElement_2E_variable (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable GGS_llvmStringDefinitionElement_2E_variable::class_func_new (const GGS_lstring & in_name,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement_2E_variable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinitionElement_2E_variable::objectCompare (const GGS_llvmStringDefinitionElement_2E_variable & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmStringDefinitionElement_2E_variable::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement_2E_variable::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement_2E_variable::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmStringDefinitionElement.variable:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmStringDefinitionElement.variable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_variable ("llvmStringDefinitionElement.variable",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinitionElement_2E_variable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_variable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinitionElement_2E_variable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinitionElement_2E_variable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable GGS_llvmStringDefinitionElement_2E_variable::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement_2E_variable result ;
  const GGS_llvmStringDefinitionElement_2E_variable * p = (const GGS_llvmStringDefinitionElement_2E_variable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinitionElement_2E_variable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement.variable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @llvmStringDefinitionElement_2E_variable_3F_
//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable_3F_::GGS_llvmStringDefinitionElement_2E_variable_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable_3F_::GGS_llvmStringDefinitionElement_2E_variable_3F_ (const GGS_llvmStringDefinitionElement_2E_variable & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable_3F_ GGS_llvmStringDefinitionElement_2E_variable_3F_::init_nil (void) {
  GGS_llvmStringDefinitionElement_2E_variable_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmStringDefinitionElement_2E_variable_3F_::isValid (void) const {
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

bool GGS_llvmStringDefinitionElement_2E_variable_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement_2E_variable_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_llvmStringDefinitionElement_2E_variable () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinitionElement_2E_variable_3F_::objectCompare (const GGS_llvmStringDefinitionElement_2E_variable_3F_ & inOperand) const {
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

void GGS_llvmStringDefinitionElement_2E_variable_3F_::description (String & ioString,
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
//     @llvmStringDefinitionElement.variable? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_variable_3F_ ("llvmStringDefinitionElement.variable?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinitionElement_2E_variable_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_variable_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinitionElement_2E_variable_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinitionElement_2E_variable_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable_3F_ GGS_llvmStringDefinitionElement_2E_variable_3F_::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement_2E_variable_3F_ result ;
  const GGS_llvmStringDefinitionElement_2E_variable_3F_ * p = (const GGS_llvmStringDefinitionElement_2E_variable_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinitionElement_2E_variable_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement.variable?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string::GGS_llvmStringDefinitionElement_2E_string (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string::GGS_llvmStringDefinitionElement_2E_string (const GGS_llvmStringDefinitionElement_2E_string & inSource) :
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string & GGS_llvmStringDefinitionElement_2E_string::operator = (const GGS_llvmStringDefinitionElement_2E_string & inSource) {
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string GGS_llvmStringDefinitionElement_2E_string::init_21_ (const GGS_lstring & in_value,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement_2E_string result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement_2E_string::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string::GGS_llvmStringDefinitionElement_2E_string (const GGS_lstring & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string GGS_llvmStringDefinitionElement_2E_string::class_func_new (const GGS_lstring & in_value,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement_2E_string result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinitionElement_2E_string::objectCompare (const GGS_llvmStringDefinitionElement_2E_string & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_value.objectCompare (inOperand.mProperty_value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmStringDefinitionElement_2E_string::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement_2E_string::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement_2E_string::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmStringDefinitionElement.string:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmStringDefinitionElement.string generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_string ("llvmStringDefinitionElement.string",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinitionElement_2E_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_string ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinitionElement_2E_string::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinitionElement_2E_string (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string GGS_llvmStringDefinitionElement_2E_string::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement_2E_string result ;
  const GGS_llvmStringDefinitionElement_2E_string * p = (const GGS_llvmStringDefinitionElement_2E_string *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinitionElement_2E_string *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement.string", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @llvmStringDefinitionElement_2E_string_3F_
//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string_3F_::GGS_llvmStringDefinitionElement_2E_string_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string_3F_::GGS_llvmStringDefinitionElement_2E_string_3F_ (const GGS_llvmStringDefinitionElement_2E_string & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string_3F_ GGS_llvmStringDefinitionElement_2E_string_3F_::init_nil (void) {
  GGS_llvmStringDefinitionElement_2E_string_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmStringDefinitionElement_2E_string_3F_::isValid (void) const {
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

bool GGS_llvmStringDefinitionElement_2E_string_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement_2E_string_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_llvmStringDefinitionElement_2E_string () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinitionElement_2E_string_3F_::objectCompare (const GGS_llvmStringDefinitionElement_2E_string_3F_ & inOperand) const {
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

void GGS_llvmStringDefinitionElement_2E_string_3F_::description (String & ioString,
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
//     @llvmStringDefinitionElement.string? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_string_3F_ ("llvmStringDefinitionElement.string?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinitionElement_2E_string_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_string_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinitionElement_2E_string_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinitionElement_2E_string_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string_3F_ GGS_llvmStringDefinitionElement_2E_string_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement_2E_string_3F_ result ;
  const GGS_llvmStringDefinitionElement_2E_string_3F_ * p = (const GGS_llvmStringDefinitionElement_2E_string_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinitionElement_2E_string_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement.string?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element::GGS_assignmentOperatorMap_2E_element (void) :
mProperty_lkey (),
mProperty_mOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element::GGS_assignmentOperatorMap_2E_element (const GGS_assignmentOperatorMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mOperatorUsage (inSource.mProperty_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element & GGS_assignmentOperatorMap_2E_element::operator = (const GGS_assignmentOperatorMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mOperatorUsage = inSource.mProperty_mOperatorUsage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element GGS_assignmentOperatorMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_abstractAssignmentOperatorUsage & in_mOperatorUsage,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_assignmentOperatorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOperatorUsage = in_mOperatorUsage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element::GGS_assignmentOperatorMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_abstractAssignmentOperatorUsage & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mOperatorUsage (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element GGS_assignmentOperatorMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                           const GGS_abstractAssignmentOperatorUsage & in_mOperatorUsage,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_assignmentOperatorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOperatorUsage = in_mOperatorUsage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentOperatorMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOperatorUsage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @assignmentOperatorMap.element:") ;
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
//     @assignmentOperatorMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2E_element ("assignmentOperatorMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentOperatorMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentOperatorMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentOperatorMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element GGS_assignmentOperatorMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_assignmentOperatorMap_2E_element result ;
  const GGS_assignmentOperatorMap_2E_element * p = (const GGS_assignmentOperatorMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentOperatorMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @assignmentOperatorMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element_3F_::GGS_assignmentOperatorMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element_3F_::GGS_assignmentOperatorMap_2E_element_3F_ (const GGS_assignmentOperatorMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element_3F_ GGS_assignmentOperatorMap_2E_element_3F_::init_nil (void) {
  GGS_assignmentOperatorMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentOperatorMap_2E_element_3F_::isValid (void) const {
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

bool GGS_assignmentOperatorMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_assignmentOperatorMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap_2E_element_3F_::description (String & ioString,
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
//     @assignmentOperatorMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2E_element_3F_ ("assignmentOperatorMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentOperatorMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentOperatorMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentOperatorMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element_3F_ GGS_assignmentOperatorMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_assignmentOperatorMap_2E_element_3F_ result ;
  const GGS_assignmentOperatorMap_2E_element_3F_ * p = (const GGS_assignmentOperatorMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentOperatorMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol::GGS_llvmGenerationInstructionElement_2E_symbol (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol::GGS_llvmGenerationInstructionElement_2E_symbol (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol & GGS_llvmGenerationInstructionElement_2E_symbol::operator = (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol GGS_llvmGenerationInstructionElement_2E_symbol::init_21_ (const GGS_lstring & in_name,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_symbol result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_symbol::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol::GGS_llvmGenerationInstructionElement_2E_symbol (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol GGS_llvmGenerationInstructionElement_2E_symbol::class_func_new (const GGS_lstring & in_name,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_symbol result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmGenerationInstructionElement_2E_symbol::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_symbol::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_symbol::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmGenerationInstructionElement.symbol:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionElement.symbol generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_symbol ("llvmGenerationInstructionElement.symbol",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElement_2E_symbol::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_symbol ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElement_2E_symbol::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElement_2E_symbol (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol GGS_llvmGenerationInstructionElement_2E_symbol::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_symbol result ;
  const GGS_llvmGenerationInstructionElement_2E_symbol * p = (const GGS_llvmGenerationInstructionElement_2E_symbol *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElement_2E_symbol *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement.symbol", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @llvmGenerationInstructionElement_2E_symbol_3F_
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol_3F_::GGS_llvmGenerationInstructionElement_2E_symbol_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol_3F_::GGS_llvmGenerationInstructionElement_2E_symbol_3F_ (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol_3F_ GGS_llvmGenerationInstructionElement_2E_symbol_3F_::init_nil (void) {
  GGS_llvmGenerationInstructionElement_2E_symbol_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmGenerationInstructionElement_2E_symbol_3F_::isValid (void) const {
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

bool GGS_llvmGenerationInstructionElement_2E_symbol_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_symbol_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_llvmGenerationInstructionElement_2E_symbol () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_symbol_3F_::description (String & ioString,
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
//     @llvmGenerationInstructionElement.symbol? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_symbol_3F_ ("llvmGenerationInstructionElement.symbol?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElement_2E_symbol_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_symbol_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElement_2E_symbol_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElement_2E_symbol_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol_3F_ GGS_llvmGenerationInstructionElement_2E_symbol_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_symbol_3F_ result ;
  const GGS_llvmGenerationInstructionElement_2E_symbol_3F_ * p = (const GGS_llvmGenerationInstructionElement_2E_symbol_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElement_2E_symbol_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement.symbol?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type::GGS_llvmGenerationInstructionElement_2E_type (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type::GGS_llvmGenerationInstructionElement_2E_type (const GGS_llvmGenerationInstructionElement_2E_type & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type & GGS_llvmGenerationInstructionElement_2E_type::operator = (const GGS_llvmGenerationInstructionElement_2E_type & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type GGS_llvmGenerationInstructionElement_2E_type::init_21_ (const GGS_lstring & in_name,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_type::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type::GGS_llvmGenerationInstructionElement_2E_type (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type GGS_llvmGenerationInstructionElement_2E_type::class_func_new (const GGS_lstring & in_name,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmGenerationInstructionElement_2E_type::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_type::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_type::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmGenerationInstructionElement.type:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionElement.type generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_type ("llvmGenerationInstructionElement.type",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElement_2E_type::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_type ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElement_2E_type::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElement_2E_type (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type GGS_llvmGenerationInstructionElement_2E_type::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_type result ;
  const GGS_llvmGenerationInstructionElement_2E_type * p = (const GGS_llvmGenerationInstructionElement_2E_type *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElement_2E_type *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement.type", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @llvmGenerationInstructionElement_2E_type_3F_
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type_3F_::GGS_llvmGenerationInstructionElement_2E_type_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type_3F_::GGS_llvmGenerationInstructionElement_2E_type_3F_ (const GGS_llvmGenerationInstructionElement_2E_type & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type_3F_ GGS_llvmGenerationInstructionElement_2E_type_3F_::init_nil (void) {
  GGS_llvmGenerationInstructionElement_2E_type_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmGenerationInstructionElement_2E_type_3F_::isValid (void) const {
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

bool GGS_llvmGenerationInstructionElement_2E_type_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_type_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_llvmGenerationInstructionElement_2E_type () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_type_3F_::description (String & ioString,
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
//     @llvmGenerationInstructionElement.type? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_type_3F_ ("llvmGenerationInstructionElement.type?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElement_2E_type_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_type_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElement_2E_type_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElement_2E_type_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type_3F_ GGS_llvmGenerationInstructionElement_2E_type_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_type_3F_ result ;
  const GGS_llvmGenerationInstructionElement_2E_type_3F_ * p = (const GGS_llvmGenerationInstructionElement_2E_type_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElement_2E_type_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement.type?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element::GGS_assignmentGenerationVarMap_2E_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element::GGS_assignmentGenerationVarMap_2E_element (const GGS_assignmentGenerationVarMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element & GGS_assignmentGenerationVarMap_2E_element::operator = (const GGS_assignmentGenerationVarMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element GGS_assignmentGenerationVarMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_string & in_mValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element::GGS_assignmentGenerationVarMap_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element GGS_assignmentGenerationVarMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                     const GGS_string & in_mValue,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentGenerationVarMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @assignmentGenerationVarMap.element:") ;
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
//     @assignmentGenerationVarMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element ("assignmentGenerationVarMap.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentGenerationVarMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentGenerationVarMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentGenerationVarMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element GGS_assignmentGenerationVarMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap_2E_element result ;
  const GGS_assignmentGenerationVarMap_2E_element * p = (const GGS_assignmentGenerationVarMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentGenerationVarMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @assignmentGenerationVarMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_::GGS_assignmentGenerationVarMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_::GGS_assignmentGenerationVarMap_2E_element_3F_ (const GGS_assignmentGenerationVarMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_ GGS_assignmentGenerationVarMap_2E_element_3F_::init_nil (void) {
  GGS_assignmentGenerationVarMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentGenerationVarMap_2E_element_3F_::isValid (void) const {
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

bool GGS_assignmentGenerationVarMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_assignmentGenerationVarMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap_2E_element_3F_::description (String & ioString,
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
//     @assignmentGenerationVarMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element_3F_ ("assignmentGenerationVarMap.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentGenerationVarMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentGenerationVarMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentGenerationVarMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_ GGS_assignmentGenerationVarMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap_2E_element_3F_ result ;
  const GGS_assignmentGenerationVarMap_2E_element_3F_ * p = (const GGS_assignmentGenerationVarMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentGenerationVarMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters::GGS_targetParameters (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_targetParameters::GGS_targetParameters (const GGS_targetParameters & inSource) :
mProperty_mConfigurationLocation (inSource.mProperty_mConfigurationLocation),
mProperty_mPython_5F_utilityToolList (inSource.mProperty_mPython_5F_utilityToolList),
mProperty_mPython_5F_build (inSource.mProperty_mPython_5F_build),
mProperty_mLinkerScript (inSource.mProperty_mLinkerScript),
mProperty_mPointerSize (inSource.mProperty_mPointerSize),
mProperty_mHandleDynamicArray (inSource.mProperty_mHandleDynamicArray),
mProperty_mSystemStackSize (inSource.mProperty_mSystemStackSize),
mProperty_mStackedUserRegisterOnInterruptByteSize (inSource.mProperty_mStackedUserRegisterOnInterruptByteSize),
mProperty_mNopInstructionStringInLLVM (inSource.mProperty_mNopInstructionStringInLLVM),
mProperty_mBitbandRegisterBaseAddress (inSource.mProperty_mBitbandRegisterBaseAddress),
mProperty_mBitbandRegisterEndAddress (inSource.mProperty_mBitbandRegisterEndAddress),
mProperty_mBitbandRegisterRelocationAddress (inSource.mProperty_mBitbandRegisterRelocationAddress),
mProperty_mBitbandRegisterOffsetMultiplier (inSource.mProperty_mBitbandRegisterOffsetMultiplier),
mProperty_mBitbandRegisterBitMultiplier (inSource.mProperty_mBitbandRegisterBitMultiplier),
mProperty_mSectionHandler (inSource.mProperty_mSectionHandler),
mProperty_mSectionPushedRegisterByteSize (inSource.mProperty_mSectionPushedRegisterByteSize),
mProperty_mSectionDispatcherHeader (inSource.mProperty_mSectionDispatcherHeader),
mProperty_mSectionDispatcherEntry (inSource.mProperty_mSectionDispatcherEntry),
mProperty_mSectionDispatcherInvocationFromAnyMode (inSource.mProperty_mSectionDispatcherInvocationFromAnyMode),
mProperty_mSectionDispatcherInvocationFromUserMode (inSource.mProperty_mSectionDispatcherInvocationFromUserMode),
mProperty_m_5F_C_5F_definitionFiles (inSource.mProperty_m_5F_C_5F_definitionFiles),
mProperty_m_5F_S_5F_definitionFiles (inSource.mProperty_m_5F_S_5F_definitionFiles),
mProperty_m_5F_LL_5F_definitionFiles (inSource.mProperty_m_5F_LL_5F_definitionFiles),
mProperty_mXtrInterruptHandler (inSource.mProperty_mXtrInterruptHandler),
mProperty_mUndefinedInterruptHandler (inSource.mProperty_mUndefinedInterruptHandler),
mProperty_mServiceHandler (inSource.mProperty_mServiceHandler),
mProperty_mServicePushedRegisterByteSize (inSource.mProperty_mServicePushedRegisterByteSize),
mProperty_mServiceDispatcherEntry (inSource.mProperty_mServiceDispatcherEntry),
mProperty_mServiceDispatcherHeader (inSource.mProperty_mServiceDispatcherHeader),
mProperty_mServiceEntryNoReturnedValue (inSource.mProperty_mServiceEntryNoReturnedValue),
mProperty_mServiceEntryWithReturnValue (inSource.mProperty_mServiceEntryWithReturnValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters & GGS_targetParameters::operator = (const GGS_targetParameters & inSource) {
  mProperty_mConfigurationLocation = inSource.mProperty_mConfigurationLocation ;
  mProperty_mPython_5F_utilityToolList = inSource.mProperty_mPython_5F_utilityToolList ;
  mProperty_mPython_5F_build = inSource.mProperty_mPython_5F_build ;
  mProperty_mLinkerScript = inSource.mProperty_mLinkerScript ;
  mProperty_mPointerSize = inSource.mProperty_mPointerSize ;
  mProperty_mHandleDynamicArray = inSource.mProperty_mHandleDynamicArray ;
  mProperty_mSystemStackSize = inSource.mProperty_mSystemStackSize ;
  mProperty_mStackedUserRegisterOnInterruptByteSize = inSource.mProperty_mStackedUserRegisterOnInterruptByteSize ;
  mProperty_mNopInstructionStringInLLVM = inSource.mProperty_mNopInstructionStringInLLVM ;
  mProperty_mBitbandRegisterBaseAddress = inSource.mProperty_mBitbandRegisterBaseAddress ;
  mProperty_mBitbandRegisterEndAddress = inSource.mProperty_mBitbandRegisterEndAddress ;
  mProperty_mBitbandRegisterRelocationAddress = inSource.mProperty_mBitbandRegisterRelocationAddress ;
  mProperty_mBitbandRegisterOffsetMultiplier = inSource.mProperty_mBitbandRegisterOffsetMultiplier ;
  mProperty_mBitbandRegisterBitMultiplier = inSource.mProperty_mBitbandRegisterBitMultiplier ;
  mProperty_mSectionHandler = inSource.mProperty_mSectionHandler ;
  mProperty_mSectionPushedRegisterByteSize = inSource.mProperty_mSectionPushedRegisterByteSize ;
  mProperty_mSectionDispatcherHeader = inSource.mProperty_mSectionDispatcherHeader ;
  mProperty_mSectionDispatcherEntry = inSource.mProperty_mSectionDispatcherEntry ;
  mProperty_mSectionDispatcherInvocationFromAnyMode = inSource.mProperty_mSectionDispatcherInvocationFromAnyMode ;
  mProperty_mSectionDispatcherInvocationFromUserMode = inSource.mProperty_mSectionDispatcherInvocationFromUserMode ;
  mProperty_m_5F_C_5F_definitionFiles = inSource.mProperty_m_5F_C_5F_definitionFiles ;
  mProperty_m_5F_S_5F_definitionFiles = inSource.mProperty_m_5F_S_5F_definitionFiles ;
  mProperty_m_5F_LL_5F_definitionFiles = inSource.mProperty_m_5F_LL_5F_definitionFiles ;
  mProperty_mXtrInterruptHandler = inSource.mProperty_mXtrInterruptHandler ;
  mProperty_mUndefinedInterruptHandler = inSource.mProperty_mUndefinedInterruptHandler ;
  mProperty_mServiceHandler = inSource.mProperty_mServiceHandler ;
  mProperty_mServicePushedRegisterByteSize = inSource.mProperty_mServicePushedRegisterByteSize ;
  mProperty_mServiceDispatcherEntry = inSource.mProperty_mServiceDispatcherEntry ;
  mProperty_mServiceDispatcherHeader = inSource.mProperty_mServiceDispatcherHeader ;
  mProperty_mServiceEntryNoReturnedValue = inSource.mProperty_mServiceEntryNoReturnedValue ;
  mProperty_mServiceEntryWithReturnValue = inSource.mProperty_mServiceEntryWithReturnValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_targetParameters GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mConfigurationLocation,
                                                                                                                                                                             const GGS__32_lstringlist & in_mPython_5F_utilityToolList,
                                                                                                                                                                             const GGS_lstring & in_mPython_5F_build,
                                                                                                                                                                             const GGS_lstring & in_mLinkerScript,
                                                                                                                                                                             const GGS_uint & in_mPointerSize,
                                                                                                                                                                             const GGS_bool & in_mHandleDynamicArray,
                                                                                                                                                                             const GGS_lbigint & in_mSystemStackSize,
                                                                                                                                                                             const GGS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                                                                                                                                                             const GGS_lstring & in_mNopInstructionStringInLLVM,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterBaseAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterEndAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterRelocationAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterBitMultiplier,
                                                                                                                                                                             const GGS_lstring & in_mSectionHandler,
                                                                                                                                                                             const GGS_lbigint & in_mSectionPushedRegisterByteSize,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherHeader,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherEntry,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_C_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_S_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_LL_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstring & in_mXtrInterruptHandler,
                                                                                                                                                                             const GGS_lstring & in_mUndefinedInterruptHandler,
                                                                                                                                                                             const GGS_lstring & in_mServiceHandler,
                                                                                                                                                                             const GGS_lbigint & in_mServicePushedRegisterByteSize,
                                                                                                                                                                             const GGS_lstring & in_mServiceDispatcherEntry,
                                                                                                                                                                             const GGS_lstring & in_mServiceDispatcherHeader,
                                                                                                                                                                             const GGS_lstring & in_mServiceEntryNoReturnedValue,
                                                                                                                                                                             const GGS_lstring & in_mServiceEntryWithReturnValue,
                                                                                                                                                                             Compiler * inCompiler
                                                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_targetParameters result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConfigurationLocation = in_mConfigurationLocation ;
  result.mProperty_mPython_5F_utilityToolList = in_mPython_5F_utilityToolList ;
  result.mProperty_mPython_5F_build = in_mPython_5F_build ;
  result.mProperty_mLinkerScript = in_mLinkerScript ;
  result.mProperty_mPointerSize = in_mPointerSize ;
  result.mProperty_mHandleDynamicArray = in_mHandleDynamicArray ;
  result.mProperty_mSystemStackSize = in_mSystemStackSize ;
  result.mProperty_mStackedUserRegisterOnInterruptByteSize = in_mStackedUserRegisterOnInterruptByteSize ;
  result.mProperty_mNopInstructionStringInLLVM = in_mNopInstructionStringInLLVM ;
  result.mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  result.mProperty_mBitbandRegisterEndAddress = in_mBitbandRegisterEndAddress ;
  result.mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  result.mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  result.mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
  result.mProperty_mSectionHandler = in_mSectionHandler ;
  result.mProperty_mSectionPushedRegisterByteSize = in_mSectionPushedRegisterByteSize ;
  result.mProperty_mSectionDispatcherHeader = in_mSectionDispatcherHeader ;
  result.mProperty_mSectionDispatcherEntry = in_mSectionDispatcherEntry ;
  result.mProperty_mSectionDispatcherInvocationFromAnyMode = in_mSectionDispatcherInvocationFromAnyMode ;
  result.mProperty_mSectionDispatcherInvocationFromUserMode = in_mSectionDispatcherInvocationFromUserMode ;
  result.mProperty_m_5F_C_5F_definitionFiles = in_m_5F_C_5F_definitionFiles ;
  result.mProperty_m_5F_S_5F_definitionFiles = in_m_5F_S_5F_definitionFiles ;
  result.mProperty_m_5F_LL_5F_definitionFiles = in_m_5F_LL_5F_definitionFiles ;
  result.mProperty_mXtrInterruptHandler = in_mXtrInterruptHandler ;
  result.mProperty_mUndefinedInterruptHandler = in_mUndefinedInterruptHandler ;
  result.mProperty_mServiceHandler = in_mServiceHandler ;
  result.mProperty_mServicePushedRegisterByteSize = in_mServicePushedRegisterByteSize ;
  result.mProperty_mServiceDispatcherEntry = in_mServiceDispatcherEntry ;
  result.mProperty_mServiceDispatcherHeader = in_mServiceDispatcherHeader ;
  result.mProperty_mServiceEntryNoReturnedValue = in_mServiceEntryNoReturnedValue ;
  result.mProperty_mServiceEntryWithReturnValue = in_mServiceEntryWithReturnValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters::GGS_targetParameters (const GGS_location & inOperand0,
                                            const GGS__32_lstringlist & inOperand1,
                                            const GGS_lstring & inOperand2,
                                            const GGS_lstring & inOperand3,
                                            const GGS_uint & inOperand4,
                                            const GGS_bool & inOperand5,
                                            const GGS_lbigint & inOperand6,
                                            const GGS_lbigint & inOperand7,
                                            const GGS_lstring & inOperand8,
                                            const GGS_lbigint & inOperand9,
                                            const GGS_lbigint & inOperand10,
                                            const GGS_lbigint & inOperand11,
                                            const GGS_lbigint & inOperand12,
                                            const GGS_lbigint & inOperand13,
                                            const GGS_lstring & inOperand14,
                                            const GGS_lbigint & inOperand15,
                                            const GGS_lstring & inOperand16,
                                            const GGS_lstring & inOperand17,
                                            const GGS_lstring & inOperand18,
                                            const GGS_lstring & inOperand19,
                                            const GGS_lstringlist & inOperand20,
                                            const GGS_lstringlist & inOperand21,
                                            const GGS_lstringlist & inOperand22,
                                            const GGS_lstring & inOperand23,
                                            const GGS_lstring & inOperand24,
                                            const GGS_lstring & inOperand25,
                                            const GGS_lbigint & inOperand26,
                                            const GGS_lstring & inOperand27,
                                            const GGS_lstring & inOperand28,
                                            const GGS_lstring & inOperand29,
                                            const GGS_lstring & inOperand30) :
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

//--------------------------------------------------------------------------------------------------

GGS_targetParameters GGS_targetParameters::class_func_new (const GGS_location & in_mConfigurationLocation,
                                                           const GGS__32_lstringlist & in_mPython_utilityToolList,
                                                           const GGS_lstring & in_mPython_build,
                                                           const GGS_lstring & in_mLinkerScript,
                                                           const GGS_uint & in_mPointerSize,
                                                           const GGS_bool & in_mHandleDynamicArray,
                                                           const GGS_lbigint & in_mSystemStackSize,
                                                           const GGS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                                           const GGS_lstring & in_mNopInstructionStringInLLVM,
                                                           const GGS_lbigint & in_mBitbandRegisterBaseAddress,
                                                           const GGS_lbigint & in_mBitbandRegisterEndAddress,
                                                           const GGS_lbigint & in_mBitbandRegisterRelocationAddress,
                                                           const GGS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                                           const GGS_lbigint & in_mBitbandRegisterBitMultiplier,
                                                           const GGS_lstring & in_mSectionHandler,
                                                           const GGS_lbigint & in_mSectionPushedRegisterByteSize,
                                                           const GGS_lstring & in_mSectionDispatcherHeader,
                                                           const GGS_lstring & in_mSectionDispatcherEntry,
                                                           const GGS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                                           const GGS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                                           const GGS_lstringlist & in_m_C_definitionFiles,
                                                           const GGS_lstringlist & in_m_S_definitionFiles,
                                                           const GGS_lstringlist & in_m_LL_definitionFiles,
                                                           const GGS_lstring & in_mXtrInterruptHandler,
                                                           const GGS_lstring & in_mUndefinedInterruptHandler,
                                                           const GGS_lstring & in_mServiceHandler,
                                                           const GGS_lbigint & in_mServicePushedRegisterByteSize,
                                                           const GGS_lstring & in_mServiceDispatcherEntry,
                                                           const GGS_lstring & in_mServiceDispatcherHeader,
                                                           const GGS_lstring & in_mServiceEntryNoReturnedValue,
                                                           const GGS_lstring & in_mServiceEntryWithReturnValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_targetParameters result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConfigurationLocation = in_mConfigurationLocation ;
  result.mProperty_mPython_5F_utilityToolList = in_mPython_utilityToolList ;
  result.mProperty_mPython_5F_build = in_mPython_build ;
  result.mProperty_mLinkerScript = in_mLinkerScript ;
  result.mProperty_mPointerSize = in_mPointerSize ;
  result.mProperty_mHandleDynamicArray = in_mHandleDynamicArray ;
  result.mProperty_mSystemStackSize = in_mSystemStackSize ;
  result.mProperty_mStackedUserRegisterOnInterruptByteSize = in_mStackedUserRegisterOnInterruptByteSize ;
  result.mProperty_mNopInstructionStringInLLVM = in_mNopInstructionStringInLLVM ;
  result.mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  result.mProperty_mBitbandRegisterEndAddress = in_mBitbandRegisterEndAddress ;
  result.mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  result.mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  result.mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
  result.mProperty_mSectionHandler = in_mSectionHandler ;
  result.mProperty_mSectionPushedRegisterByteSize = in_mSectionPushedRegisterByteSize ;
  result.mProperty_mSectionDispatcherHeader = in_mSectionDispatcherHeader ;
  result.mProperty_mSectionDispatcherEntry = in_mSectionDispatcherEntry ;
  result.mProperty_mSectionDispatcherInvocationFromAnyMode = in_mSectionDispatcherInvocationFromAnyMode ;
  result.mProperty_mSectionDispatcherInvocationFromUserMode = in_mSectionDispatcherInvocationFromUserMode ;
  result.mProperty_m_5F_C_5F_definitionFiles = in_m_C_definitionFiles ;
  result.mProperty_m_5F_S_5F_definitionFiles = in_m_S_definitionFiles ;
  result.mProperty_m_5F_LL_5F_definitionFiles = in_m_LL_definitionFiles ;
  result.mProperty_mXtrInterruptHandler = in_mXtrInterruptHandler ;
  result.mProperty_mUndefinedInterruptHandler = in_mUndefinedInterruptHandler ;
  result.mProperty_mServiceHandler = in_mServiceHandler ;
  result.mProperty_mServicePushedRegisterByteSize = in_mServicePushedRegisterByteSize ;
  result.mProperty_mServiceDispatcherEntry = in_mServiceDispatcherEntry ;
  result.mProperty_mServiceDispatcherHeader = in_mServiceDispatcherHeader ;
  result.mProperty_mServiceEntryNoReturnedValue = in_mServiceEntryNoReturnedValue ;
  result.mProperty_mServiceEntryWithReturnValue = in_mServiceEntryWithReturnValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_targetParameters::isValid (void) const {
  return mProperty_mConfigurationLocation.isValid () && mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mHandleDynamicArray.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mBitbandRegisterBaseAddress.isValid () && mProperty_mBitbandRegisterEndAddress.isValid () && mProperty_mBitbandRegisterRelocationAddress.isValid () && mProperty_mBitbandRegisterOffsetMultiplier.isValid () && mProperty_mBitbandRegisterBitMultiplier.isValid () && mProperty_mSectionHandler.isValid () && mProperty_mSectionPushedRegisterByteSize.isValid () && mProperty_mSectionDispatcherHeader.isValid () && mProperty_mSectionDispatcherEntry.isValid () && mProperty_mSectionDispatcherInvocationFromAnyMode.isValid () && mProperty_mSectionDispatcherInvocationFromUserMode.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntryNoReturnedValue.isValid () && mProperty_mServiceEntryWithReturnValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @targetParameters:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConfigurationLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPython_5F_utilityToolList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPython_5F_build.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLinkerScript.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandleDynamicArray.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNopInstructionStringInLLVM.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterEndAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionPushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherInvocationFromAnyMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherInvocationFromUserMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_C_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_S_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_LL_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXtrInterruptHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUndefinedInterruptHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceEntryNoReturnedValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceEntryWithReturnValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @targetParameters generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_targetParameters (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters GGS_targetParameters::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_targetParameters result ;
  const GGS_targetParameters * p = (const GGS_targetParameters *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_targetParameters *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetParameters", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @configurationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_configurationDeclarationAST::objectCompare (const GGS_configurationDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST::GGS_configurationDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mPanicCodeTypeName,
                      const GGS_lstring & in_mPanicLineTypeName,
                      const GGS_targetParameters & in_mTargetParameters,
                      const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_configurationDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_configurationDeclarationAST (inCompiler COMMA_THERE)) ;
  object->configurationDeclarationAST_init_21__21__21__21_ (in_mPanicCodeTypeName, in_mPanicLineTypeName, in_mTargetParameters, in_mInterruptionConfigurationList, inCompiler) ;
  const GGS_configurationDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::
configurationDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mPanicCodeTypeName,
                                                  const GGS_lstring & in_mPanicLineTypeName,
                                                  const GGS_targetParameters & in_mTargetParameters,
                                                  const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                                  Compiler * /* inCompiler */) {
  mProperty_mPanicCodeTypeName = in_mPanicCodeTypeName ;
  mProperty_mPanicLineTypeName = in_mPanicLineTypeName ;
  mProperty_mTargetParameters = in_mTargetParameters ;
  mProperty_mInterruptionConfigurationList = in_mInterruptionConfigurationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST::GGS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST::class_func_new (const GGS_lstring & in_mPanicCodeTypeName,
                                                                                 const GGS_lstring & in_mPanicLineTypeName,
                                                                                 const GGS_targetParameters & in_mTargetParameters,
                                                                                 const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_configurationDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_configurationDeclarationAST (in_mPanicCodeTypeName, in_mPanicLineTypeName, in_mTargetParameters, in_mInterruptionConfigurationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configurationDeclarationAST::readProperty_mPanicCodeTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicCodeTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mPanicCodeTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicCodeTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configurationDeclarationAST::readProperty_mPanicLineTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicLineTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mPanicLineTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicLineTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters GGS_configurationDeclarationAST::readProperty_mTargetParameters (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_targetParameters () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mTargetParameters ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mTargetParameters (const GGS_targetParameters & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mTargetParameters = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_configurationDeclarationAST::readProperty_mInterruptionConfigurationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_interruptionConfigurationList () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mInterruptionConfigurationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mInterruptionConfigurationList (const GGS_interruptionConfigurationList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mInterruptionConfigurationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @configurationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPanicCodeTypeName (),
mProperty_mPanicLineTypeName (),
mProperty_mTargetParameters (),
mProperty_mInterruptionConfigurationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (const GGS_lstring & in_mPanicCodeTypeName,
                                                                    const GGS_lstring & in_mPanicLineTypeName,
                                                                    const GGS_targetParameters & in_mTargetParameters,
                                                                    const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPanicCodeTypeName (),
mProperty_mPanicLineTypeName (),
mProperty_mTargetParameters (),
mProperty_mInterruptionConfigurationList () {
  mProperty_mPanicCodeTypeName = in_mPanicCodeTypeName ;
  mProperty_mPanicLineTypeName = in_mPanicLineTypeName ;
  mProperty_mTargetParameters = in_mTargetParameters ;
  mProperty_mInterruptionConfigurationList = in_mInterruptionConfigurationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_configurationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

void cPtr_configurationDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@configurationDeclarationAST:") ;
  mProperty_mPanicCodeTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicLineTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInterruptionConfigurationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_configurationDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_configurationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPanicCodeTypeName.printNonNullClassInstanceProperties ("mPanicCodeTypeName") ;
    mProperty_mPanicLineTypeName.printNonNullClassInstanceProperties ("mPanicLineTypeName") ;
    mProperty_mTargetParameters.printNonNullClassInstanceProperties ("mTargetParameters") ;
    mProperty_mInterruptionConfigurationList.printNonNullClassInstanceProperties ("mInterruptionConfigurationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @configurationDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_configurationDeclarationAST result ;
  const GGS_configurationDeclarationAST * p = (const GGS_configurationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configurationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
mProperty_mTargetParameters (),
mProperty_mPanicCodeType (),
mProperty_mPanicLineType (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mRoutineMap (),
mProperty_mGuardMap (),
mProperty_mControlRegisterGroupMap (),
mProperty_mGlobalConstantMap (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mStaticListMap (),
mProperty_mRequiredRoutineSet (),
mProperty_mTypeMap (),
mProperty_mTypeConstantMap (),
mProperty_mTypeConstructorMap (),
mProperty_mTypePropertySetterMap (),
mProperty_mTypePropertyGetterMap (),
mProperty_mAvailableInterruptMap (),
mProperty_mInfixOperatorMap (),
mProperty_mPrefixOperatorMap (),
mProperty_mAssignmentOperatorMap (),
mProperty_mImplicitConversionToBooleanMap (),
mProperty_mTaskMap (),
mProperty_mGlobalTaskVariableList (),
mProperty_mValuedObjectMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_semanticContext & inSource) :
mProperty_mTargetParameters (inSource.mProperty_mTargetParameters),
mProperty_mPanicCodeType (inSource.mProperty_mPanicCodeType),
mProperty_mPanicLineType (inSource.mProperty_mPanicLineType),
mProperty_mPanicSetupRoutinePriorityMap (inSource.mProperty_mPanicSetupRoutinePriorityMap),
mProperty_mPanicLoopRoutinePriorityMap (inSource.mProperty_mPanicLoopRoutinePriorityMap),
mProperty_mRoutineMap (inSource.mProperty_mRoutineMap),
mProperty_mGuardMap (inSource.mProperty_mGuardMap),
mProperty_mControlRegisterGroupMap (inSource.mProperty_mControlRegisterGroupMap),
mProperty_mGlobalConstantMap (inSource.mProperty_mGlobalConstantMap),
mProperty_mGlobalSyncInstanceMap (inSource.mProperty_mGlobalSyncInstanceMap),
mProperty_mStaticListMap (inSource.mProperty_mStaticListMap),
mProperty_mRequiredRoutineSet (inSource.mProperty_mRequiredRoutineSet),
mProperty_mTypeMap (inSource.mProperty_mTypeMap),
mProperty_mTypeConstantMap (inSource.mProperty_mTypeConstantMap),
mProperty_mTypeConstructorMap (inSource.mProperty_mTypeConstructorMap),
mProperty_mTypePropertySetterMap (inSource.mProperty_mTypePropertySetterMap),
mProperty_mTypePropertyGetterMap (inSource.mProperty_mTypePropertyGetterMap),
mProperty_mAvailableInterruptMap (inSource.mProperty_mAvailableInterruptMap),
mProperty_mInfixOperatorMap (inSource.mProperty_mInfixOperatorMap),
mProperty_mPrefixOperatorMap (inSource.mProperty_mPrefixOperatorMap),
mProperty_mAssignmentOperatorMap (inSource.mProperty_mAssignmentOperatorMap),
mProperty_mImplicitConversionToBooleanMap (inSource.mProperty_mImplicitConversionToBooleanMap),
mProperty_mTaskMap (inSource.mProperty_mTaskMap),
mProperty_mGlobalTaskVariableList (inSource.mProperty_mGlobalTaskVariableList),
mProperty_mValuedObjectMap (inSource.mProperty_mValuedObjectMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext & GGS_semanticContext::operator = (const GGS_semanticContext & inSource) {
  mProperty_mTargetParameters = inSource.mProperty_mTargetParameters ;
  mProperty_mPanicCodeType = inSource.mProperty_mPanicCodeType ;
  mProperty_mPanicLineType = inSource.mProperty_mPanicLineType ;
  mProperty_mPanicSetupRoutinePriorityMap = inSource.mProperty_mPanicSetupRoutinePriorityMap ;
  mProperty_mPanicLoopRoutinePriorityMap = inSource.mProperty_mPanicLoopRoutinePriorityMap ;
  mProperty_mRoutineMap = inSource.mProperty_mRoutineMap ;
  mProperty_mGuardMap = inSource.mProperty_mGuardMap ;
  mProperty_mControlRegisterGroupMap = inSource.mProperty_mControlRegisterGroupMap ;
  mProperty_mGlobalConstantMap = inSource.mProperty_mGlobalConstantMap ;
  mProperty_mGlobalSyncInstanceMap = inSource.mProperty_mGlobalSyncInstanceMap ;
  mProperty_mStaticListMap = inSource.mProperty_mStaticListMap ;
  mProperty_mRequiredRoutineSet = inSource.mProperty_mRequiredRoutineSet ;
  mProperty_mTypeMap = inSource.mProperty_mTypeMap ;
  mProperty_mTypeConstantMap = inSource.mProperty_mTypeConstantMap ;
  mProperty_mTypeConstructorMap = inSource.mProperty_mTypeConstructorMap ;
  mProperty_mTypePropertySetterMap = inSource.mProperty_mTypePropertySetterMap ;
  mProperty_mTypePropertyGetterMap = inSource.mProperty_mTypePropertyGetterMap ;
  mProperty_mAvailableInterruptMap = inSource.mProperty_mAvailableInterruptMap ;
  mProperty_mInfixOperatorMap = inSource.mProperty_mInfixOperatorMap ;
  mProperty_mPrefixOperatorMap = inSource.mProperty_mPrefixOperatorMap ;
  mProperty_mAssignmentOperatorMap = inSource.mProperty_mAssignmentOperatorMap ;
  mProperty_mImplicitConversionToBooleanMap = inSource.mProperty_mImplicitConversionToBooleanMap ;
  mProperty_mTaskMap = inSource.mProperty_mTaskMap ;
  mProperty_mGlobalTaskVariableList = inSource.mProperty_mGlobalTaskVariableList ;
  mProperty_mValuedObjectMap = inSource.mProperty_mValuedObjectMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mTargetParameters = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("context.galgas", 9)), GGS__32_lstringlist::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 11)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 12)), GGS_uint (uint32_t (0U)), GGS_bool (false), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 15)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 15)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 16)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 16)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 17)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 18)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 18)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 19)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 19)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 20)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 20)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 21)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 21)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 22)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 22)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 23)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 24)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 24)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 25)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 26)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 27)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 28)), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 32)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 33)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 34)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 35)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 35)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 36)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 37)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 38)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 39)), inCompiler COMMA_HERE) ;
  mProperty_mPanicCodeType = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("context.galgas", 43)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string ("<<unknown>>"), GGS_typeKind::class_func_void (SOURCE_FILE ("context.galgas", 46)), GGS_string ("<<unknown>>"), inCompiler COMMA_HERE) ;
  mProperty_mPanicLineType = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("context.galgas", 50)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string ("<<unknown>>"), GGS_typeKind::class_func_void (SOURCE_FILE ("context.galgas", 53)), GGS_string ("<<unknown>>"), inCompiler COMMA_HERE) ;
  mProperty_mPanicSetupRoutinePriorityMap = GGS_panicRoutinePriorityMap::init (inCompiler COMMA_HERE) ;
  mProperty_mPanicLoopRoutinePriorityMap = GGS_panicRoutinePriorityMap::init (inCompiler COMMA_HERE) ;
  mProperty_mRoutineMap = GGS_routineMapForContext::init (inCompiler COMMA_HERE) ;
  mProperty_mGuardMap = GGS_guardMapForContext::init (inCompiler COMMA_HERE) ;
  mProperty_mControlRegisterGroupMap = GGS_controlRegisterGroupMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalConstantMap = GGS_globalConstantMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalSyncInstanceMap = GGS_globalSyncInstanceMap::init (inCompiler COMMA_HERE) ;
  mProperty_mStaticListMap = GGS_staticlistMap::init (inCompiler COMMA_HERE) ;
  mProperty_mRequiredRoutineSet = GGS_stringset::init (inCompiler COMMA_HERE) ;
  mProperty_mTypeMap = GGS_unifiedTypeMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTypeConstantMap = GGS_typeConstantMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTypeConstructorMap = GGS_typeConstructorMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTypePropertySetterMap = GGS_typePropertySetterMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTypePropertyGetterMap = GGS_typePropertyGetterMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAvailableInterruptMap = GGS_availableInterruptMap::init (inCompiler COMMA_HERE) ;
  mProperty_mInfixOperatorMap = GGS_infixOperatorMap::init (inCompiler COMMA_HERE) ;
  mProperty_mPrefixOperatorMap = GGS_prefixOperatorMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAssignmentOperatorMap = GGS_assignmentOperatorMap::init (inCompiler COMMA_HERE) ;
  mProperty_mImplicitConversionToBooleanMap = GGS_implicitConversionToBooleanMap::init (inCompiler COMMA_HERE) ;
  mProperty_mTaskMap = GGS_taskMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalTaskVariableList = GGS_globalTaskVariableList::init (inCompiler COMMA_HERE) ;
  mProperty_mValuedObjectMap = GGS_universalValuedObjectMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_targetParameters & inOperand0,
                                          const GGS_omnibusType & inOperand1,
                                          const GGS_omnibusType & inOperand2,
                                          const GGS_panicRoutinePriorityMap & inOperand3,
                                          const GGS_panicRoutinePriorityMap & inOperand4,
                                          const GGS_routineMapForContext & inOperand5,
                                          const GGS_guardMapForContext & inOperand6,
                                          const GGS_controlRegisterGroupMap & inOperand7,
                                          const GGS_globalConstantMap & inOperand8,
                                          const GGS_globalSyncInstanceMap & inOperand9,
                                          const GGS_staticlistMap & inOperand10,
                                          const GGS_stringset & inOperand11,
                                          const GGS_unifiedTypeMap & inOperand12,
                                          const GGS_typeConstantMap & inOperand13,
                                          const GGS_typeConstructorMap & inOperand14,
                                          const GGS_typePropertySetterMap & inOperand15,
                                          const GGS_typePropertyGetterMap & inOperand16,
                                          const GGS_availableInterruptMap & inOperand17,
                                          const GGS_infixOperatorMap & inOperand18,
                                          const GGS_prefixOperatorMap & inOperand19,
                                          const GGS_assignmentOperatorMap & inOperand20,
                                          const GGS_implicitConversionToBooleanMap & inOperand21,
                                          const GGS_taskMap & inOperand22,
                                          const GGS_globalTaskVariableList & inOperand23,
                                          const GGS_universalValuedObjectMap & inOperand24) :
mProperty_mTargetParameters (inOperand0),
mProperty_mPanicCodeType (inOperand1),
mProperty_mPanicLineType (inOperand2),
mProperty_mPanicSetupRoutinePriorityMap (inOperand3),
mProperty_mPanicLoopRoutinePriorityMap (inOperand4),
mProperty_mRoutineMap (inOperand5),
mProperty_mGuardMap (inOperand6),
mProperty_mControlRegisterGroupMap (inOperand7),
mProperty_mGlobalConstantMap (inOperand8),
mProperty_mGlobalSyncInstanceMap (inOperand9),
mProperty_mStaticListMap (inOperand10),
mProperty_mRequiredRoutineSet (inOperand11),
mProperty_mTypeMap (inOperand12),
mProperty_mTypeConstantMap (inOperand13),
mProperty_mTypeConstructorMap (inOperand14),
mProperty_mTypePropertySetterMap (inOperand15),
mProperty_mTypePropertyGetterMap (inOperand16),
mProperty_mAvailableInterruptMap (inOperand17),
mProperty_mInfixOperatorMap (inOperand18),
mProperty_mPrefixOperatorMap (inOperand19),
mProperty_mAssignmentOperatorMap (inOperand20),
mProperty_mImplicitConversionToBooleanMap (inOperand21),
mProperty_mTaskMap (inOperand22),
mProperty_mGlobalTaskVariableList (inOperand23),
mProperty_mValuedObjectMap (inOperand24) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::class_func_new (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mGuardMap.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mRequiredRoutineSet.isValid () && mProperty_mTypeMap.isValid () && mProperty_mTypeConstantMap.isValid () && mProperty_mTypeConstructorMap.isValid () && mProperty_mTypePropertySetterMap.isValid () && mProperty_mTypePropertyGetterMap.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mInfixOperatorMap.isValid () && mProperty_mPrefixOperatorMap.isValid () && mProperty_mAssignmentOperatorMap.isValid () && mProperty_mImplicitConversionToBooleanMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
  mProperty_mTargetParameters.drop () ;
  mProperty_mPanicCodeType.drop () ;
  mProperty_mPanicLineType.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mRoutineMap.drop () ;
  mProperty_mGuardMap.drop () ;
  mProperty_mControlRegisterGroupMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mStaticListMap.drop () ;
  mProperty_mRequiredRoutineSet.drop () ;
  mProperty_mTypeMap.drop () ;
  mProperty_mTypeConstantMap.drop () ;
  mProperty_mTypeConstructorMap.drop () ;
  mProperty_mTypePropertySetterMap.drop () ;
  mProperty_mTypePropertyGetterMap.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
  mProperty_mInfixOperatorMap.drop () ;
  mProperty_mPrefixOperatorMap.drop () ;
  mProperty_mAssignmentOperatorMap.drop () ;
  mProperty_mImplicitConversionToBooleanMap.drop () ;
  mProperty_mTaskMap.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mValuedObjectMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGuardMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterGroupMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredRoutineSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeConstantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeConstructorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypePropertySetterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypePropertyGetterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInfixOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPrefixOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssignmentOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImplicitConversionToBooleanMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValuedObjectMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticContext result ;
  const GGS_semanticContext * p = (const GGS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (GGS_semanticContext & ioObject,
                                   const GGS_lstring constinArgument_inTypeName,
                                   const GGS_lstring constinArgument_inGetterName,
                                   const GGS_propertyVisibility constinArgument_inVisibility,
                                   const GGS_propertyGetterKind constinArgument_inAccess,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = ioObject ;
    GGS_typePropertyGetterMap_2E_element var_entry_6621 = temp_1.readProperty_mTypePropertyGetterMap ().readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mTypePropertyGetterMap ().readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      {
      var_entry_6621.mProperty_mGetterMap.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 179)) ;
      }
      {
      ioObject.mProperty_mTypePropertyGetterMap.setter_replaceKey (var_entry_6621, inCompiler COMMA_SOURCE_FILE ("context.galgas", 180)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_propertyGetterMap var_getterMap_6851 = GGS_propertyGetterMap::init (inCompiler COMMA_HERE) ;
    {
    var_getterMap_6851.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 183)) ;
    }
    {
    ioObject.mProperty_mTypePropertyGetterMap.setter_insertKey (constinArgument_inTypeName, var_getterMap_6851, inCompiler COMMA_SOURCE_FILE ("context.galgas", 184)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@semanticContext propertyGetterMap'
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap extensionGetter_propertyGetterMap (const GGS_semanticContext & inObject,
                                                         const GGS_omnibusType & constinArgument_inType,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterMap result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = inObject ;
    const GGS_typePropertyGetterMap_2E_element var_entry_7565 = temp_1.readProperty_mTypePropertyGetterMap ().readSubscript__3F_ (constinArgument_inType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mTypePropertyGetterMap ().readSubscript__3F_ (constinArgument_inType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result_result = var_entry_7565.readProperty_mGetterMap () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_propertyGetterMap::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext addComputedPropertyGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (GGS_semanticContext & ioObject,
                                                const GGS_lstring constinArgument_inTypeName,
                                                const GGS_string constinArgument_inLLVMBaseTypeName,
                                                const GGS_lstring constinArgument_inPropertyName,
                                                const GGS_mode constinArgument_inMode,
                                                const GGS_propertyVisibility constinArgument_inVisibility,
                                                const GGS_unifiedTypeMapEntry constinArgument_inResultTypeProxy,
                                                GGS_lstring & outArgument_outRoutineLLVMName,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GGS_propertyGetterMap var_getterMap_8229 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mTypePropertyGetterMap ().getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("context.galgas", 217)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_semanticContext temp_2 = ioObject ;
      temp_2.readProperty_mTypePropertyGetterMap ().method_searchKey (constinArgument_inTypeName, var_getterMap_8229, inCompiler COMMA_SOURCE_FILE ("context.galgas", 218)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_getterMap_8229 = GGS_propertyGetterMap::init (inCompiler COMMA_HERE) ;
  }
  outArgument_outRoutineLLVMName = GGS_lstring::init_21__21_ (function_getterLLVMName (constinArgument_inLLVMBaseTypeName, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 222)), constinArgument_inPropertyName.readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_routineLLVMNameDict var_modeDictionary_8507 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 223)) ;
  {
  var_getterMap_8229.setter_insertKey (constinArgument_inPropertyName, constinArgument_inVisibility, GGS_propertyGetterKind::class_func_computedProperty (constinArgument_inResultTypeProxy, var_modeDictionary_8507  COMMA_SOURCE_FILE ("context.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 224)) ;
  }
  {
  ioObject.mProperty_mTypePropertyGetterMap.setter_insertOrReplace (constinArgument_inTypeName, var_getterMap_8229 COMMA_SOURCE_FILE ("context.galgas", 229)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertPropertySetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (GGS_semanticContext & ioObject,
                                           const GGS_lstring constinArgument_inTypeName,
                                           const GGS_lstring constinArgument_inSetterName,
                                           const GGS_propertyVisibility constinArgument_inVisibility,
                                           const GGS_propertySetterKind constinArgument_inAccess,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = ioObject ;
    GGS_typePropertySetterMap_2E_element var_entry_10724 = temp_1.readProperty_mTypePropertySetterMap ().readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mTypePropertySetterMap ().readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      {
      var_entry_10724.mProperty_mSetterMap.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 276)) ;
      }
      {
      ioObject.mProperty_mTypePropertySetterMap.setter_replaceKey (var_entry_10724, inCompiler COMMA_SOURCE_FILE ("context.galgas", 277)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_propertySetterMap var_setterMap_10953 = GGS_propertySetterMap::init (inCompiler COMMA_HERE) ;
    {
    var_setterMap_10953.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 280)) ;
    }
    {
    ioObject.mProperty_mTypePropertySetterMap.setter_insertKey (constinArgument_inTypeName, var_setterMap_10953, inCompiler COMMA_SOURCE_FILE ("context.galgas", 281)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@semanticContext propertySetterMap'
//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap extensionGetter_propertySetterMap (const GGS_semanticContext & inObject,
                                                         const GGS_omnibusType & constinArgument_inType,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_semanticContext temp_1 = inObject ;
    const GGS_typePropertySetterMap_2E_element var_entry_11667 = temp_1.readProperty_mTypePropertySetterMap ().readSubscript__3F_ (constinArgument_inType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mTypePropertySetterMap ().readSubscript__3F_ (constinArgument_inType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result_result = var_entry_11667.readProperty_mSetterMap () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_propertySetterMap::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@semanticContext booleanType'
//--------------------------------------------------------------------------------------------------

GGS_omnibusType extensionGetter_booleanType (const GGS_semanticContext & inObject,
                                             const GGS_location &,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  const GGS_semanticContext temp_0 = inObject ;
  extensionMethod_searchType (temp_0.readProperty_mTypeMap (), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 380)).getter_nowhere (SOURCE_FILE ("context.galgas", 380)), result_result, inCompiler COMMA_SOURCE_FILE ("context.galgas", 380)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @assignRepeatedValueToFixedSizeArrayElementsFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::objectCompare (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                     const GGS_bool & in_isRequired,
                                                     const GGS_bool & in_warnsIfUnused,
                                                     const GGS_omnibusType & in_mFixedSizeArrayType,
                                                     const GGS_omnibusType & in_mElementType,
                                                     const GGS_uint & in_mArraySize,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (inCompiler COMMA_THERE)) ;
  object->assignRepeatedValueToFixedSizeArrayElementsFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType, in_mElementType, in_mArraySize, inCompiler) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::
assignRepeatedValueToFixedSizeArrayElementsFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                                           const GGS_bool & in_isRequired,
                                                                                                           const GGS_bool & in_warnsIfUnused,
                                                                                                           const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                                           const GGS_omnibusType & in_mElementType,
                                                                                                           const GGS_uint & in_mArraySize,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                                                                     const GGS_bool & in_isRequired,
                                                                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                                                                     const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                                                                     const GGS_omnibusType & in_mElementType,
                                                                                                                                     const GGS_uint & in_mArraySize,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType, in_mElementType, in_mArraySize,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mFixedSizeArrayType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mArraySize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementType (),
mProperty_mArraySize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                                                                        const GGS_bool & in_isRequired,
                                                                                                                        const GGS_bool & in_warnsIfUnused,
                                                                                                                        const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                                                        const GGS_omnibusType & in_mElementType,
                                                                                                                        const GGS_uint & in_mArraySize,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementType (),
mProperty_mArraySize () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@assignRepeatedValueToFixedSizeArrayElementsFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType, mProperty_mElementType, mProperty_mArraySize, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR",
                                                                                                          & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@structurePropertyListAST.element enterPropertyInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterPropertyInContext (const GGS_structurePropertyListAST_2E_element inObject,
                                             GGS_semanticContext & ioArgument_ioContext,
                                             GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             const GGS_lstring constinArgument_inReceiverTypeName,
                                             const GGS_lstring constinArgument_inOmnibusTypeSpecificName,
                                             const GGS_string constinArgument_inReceiverLLVMBaseTypeName,
                                             GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                             GGS_propertyList & ioArgument_ioPropertyList,
                                             GGS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                             GGS_constructorSignature & ioArgument_constructorSignature,
                                             GGS_string & ioArgument_ioConstructorKey,
                                             GGS_bool & ioArgument_canBeCopied,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbigint var_explicitAlignment_12162 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 339)), inCompiler COMMA_HERE) ;
  GGS_bool var_alignmentDefined_12204 = GGS_bool (false) ;
  const GGS_structurePropertyListAST_2E_element temp_0 = inObject ;
  UpEnumerator_propertyAttributeList enumerator_12246 (temp_0.readProperty_mPropertyAttributeList ()) ;
  while (enumerator_12246.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_12246.current_mAttributeName (HERE).readProperty_string ().objectCompare (GGS_string ("align"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_12246.current_mAttributeName (HERE).readProperty_location (), GGS_string ("only the @align attribute is allowed here"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 343)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_alignmentDefined_12204.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_12246.current_mAttributeName (HERE).readProperty_location (), GGS_string ("@align attribute already defined"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 345)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, enumerator_12246.current_mAttributeValue (HERE).readProperty_bigint ().objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)).left_shift_operation (enumerator_12246.current_mAttributeValue (HERE).readProperty_bigint ().substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_12246.current_mAttributeValue (HERE).readProperty_location (), GGS_string ("alignment should be a power of 2"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)) ;
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          var_explicitAlignment_12162 = enumerator_12246.current_mAttributeValue (HERE) ;
          var_alignmentDefined_12204 = GGS_bool (true) ;
        }
      }
    }
    enumerator_12246.gotoNextObject () ;
  }
  const GGS_structurePropertyListAST_2E_element temp_7 = inObject ;
  GGS_omnibusType temp_8 ;
  const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mPropertyTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_9) {
    temp_8 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 358)) ;
  }else if (GalgasBool::boolFalse == test_9) {
    const GGS_structurePropertyListAST_2E_element temp_10 = inObject ;
    temp_8 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_10.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)) ;
  }
  GGS_omnibusType var_optionalPropertyType_12829 = temp_8 ;
  const GGS_structurePropertyListAST_2E_element temp_11 = inObject ;
  switch (temp_11.readProperty_mPropertyKind ().enumValue ()) {
  case GGS_propertyKindAST::Enumeration::invalid:
    break ;
  case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
    {
      GGS_expressionAST extractedValue_13081_initExpression_0 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_initializedConstantProperty (extractedValue_13081_initExpression_0) ;
      GGS_objectIR var_expressionIR_13368 ;
      {
      const GGS_structurePropertyListAST_2E_element temp_12 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_13 = inObject ;
      routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_13081_initExpression_0, temp_12.readProperty_mPropertyName ().readProperty_location (), temp_13.readProperty_mPropertyTypeName (), var_expressionIR_13368, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 364)) ;
      }
      GGS_omnibusType var_actualPropertyType_13408 ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_optionalPropertyType_12829.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("type-structure-declaration.galgas", 373)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_actualPropertyType_13408 = var_optionalPropertyType_12829 ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        var_actualPropertyType_13408 = extensionGetter_type (var_expressionIR_13368, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 376)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_13408.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 378)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_structurePropertyListAST_2E_element temp_16 = inObject ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_13408.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)) ;
        }
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_13408.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 381)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 381)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          ioArgument_canBeCopied = GGS_bool (false) ;
        }
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_19 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_20 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_19.readProperty_mPropertyName (), temp_20.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_constantProperty (extensionGetter_withType (var_expressionIR_13368, var_actualPropertyType_13408, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 384)) ;
      }
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
    {
      GGS_expressionAST extractedValue_14081_initExpression_0 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_initializedStoredProperty (extractedValue_14081_initExpression_0) ;
      GGS_objectIR var_expressionIR_14368 ;
      {
      const GGS_structurePropertyListAST_2E_element temp_21 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_22 = inObject ;
      routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_14081_initExpression_0, temp_21.readProperty_mPropertyName ().readProperty_location (), temp_22.readProperty_mPropertyTypeName (), var_expressionIR_14368, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 391)) ;
      }
      GGS_omnibusType var_actualPropertyType_14408 ;
      GalgasBool test_23 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_23) {
        test_23 = GGS_bool (ComparisonKind::notEqual, var_optionalPropertyType_12829.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("type-structure-declaration.galgas", 400)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_23) {
          var_actualPropertyType_14408 = var_optionalPropertyType_12829 ;
        }
      }
      if (GalgasBool::boolFalse == test_23) {
        var_actualPropertyType_14408 = extensionGetter_type (var_expressionIR_14368, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 403)) ;
      }
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = var_actualPropertyType_14408.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("type-structure-declaration.galgas", 405)).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          var_actualPropertyType_14408 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 406)) ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = var_actualPropertyType_14408.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("type-structure-declaration.galgas", 407)).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            const GGS_structurePropertyListAST_2E_element temp_26 = inObject ;
            GenericArray <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (temp_26.readProperty_mPropertyName ().readProperty_location (), GGS_string ("$").add_operation (var_actualPropertyType_14408.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)).add_operation (GGS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)), fixItArray27  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 408)) ;
          }
        }
        if (GalgasBool::boolFalse == test_25) {
          GalgasBool test_28 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_28) {
            test_28 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_14408.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 410)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 410)).boolEnum () ;
            if (GalgasBool::boolTrue == test_28) {
              const GGS_structurePropertyListAST_2E_element temp_29 = inObject ;
              GenericArray <FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (temp_29.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_14408.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)), fixItArray30  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)) ;
            }
          }
        }
      }
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_14408.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 413)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 413)).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          ioArgument_canBeCopied = GGS_bool (false) ;
        }
      }
      GGS_uint var_propertyIndex_15150 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 416)) ;
      const GGS_structurePropertyListAST_2E_element temp_32 = inObject ;
      ioArgument_ioPropertyList.addAssignOperation (temp_32.readProperty_mPropertyName ().readProperty_string (), var_actualPropertyType_14408  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 417)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_33 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_34 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_33.readProperty_mPropertyName (), temp_34.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_actualPropertyType_14408, var_propertyIndex_15150  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 418)) ;
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_35 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_36 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_35.readProperty_mPropertyName (), temp_36.readProperty_mVisibility (), GGS_propertySetterKind::class_func_storedProperty (var_actualPropertyType_14408, var_propertyIndex_15150  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)) ;
      }
      ioArgument_sortedOperandIRList.addAssignOperation (extensionGetter_withType (var_expressionIR_14368, var_actualPropertyType_14408, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)), var_propertyIndex_15150  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    {
      GalgasBool test_37 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_37) {
        test_37 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12829.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 432)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 432)).boolEnum () ;
        if (GalgasBool::boolTrue == test_37) {
          const GGS_structurePropertyListAST_2E_element temp_38 = inObject ;
          GenericArray <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12829.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)), fixItArray39  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)) ;
        }
      }
      GGS_uint var_propertyIndex_15957 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
      const GGS_structurePropertyListAST_2E_element temp_40 = inObject ;
      ioArgument_ioPropertyList.addAssignOperation (temp_40.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12829  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_41 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_42 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_41.readProperty_mPropertyName (), temp_42.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_optionalPropertyType_12829, var_propertyIndex_15957  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)) ;
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_43 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_44 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_43.readProperty_mPropertyName (), temp_44.readProperty_mVisibility (), GGS_propertySetterKind::class_func_storedProperty (var_optionalPropertyType_12829, var_propertyIndex_15957  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_45 = inObject ;
      ioArgument_constructorSignature.addAssignOperation (temp_45.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12829, var_propertyIndex_15957  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 449)) ;
      const GGS_structurePropertyListAST_2E_element temp_46 = inObject ;
      ioArgument_ioConstructorKey.plusAssignOperation(GGS_string ("!").add_operation (temp_46.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
    {
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12829.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 452)).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          const GGS_structurePropertyListAST_2E_element temp_48 = inObject ;
          GenericArray <FixItDescription> fixItArray49 ;
          inCompiler->emitSemanticError (temp_48.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12829.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)), fixItArray49  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)) ;
        }
      }
      GGS_uint var_propertyIndex_16826 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 455)) ;
      const GGS_structurePropertyListAST_2E_element temp_50 = inObject ;
      ioArgument_ioPropertyList.addAssignOperation (temp_50.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12829  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 456)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_51 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_52 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_51.readProperty_mPropertyName (), temp_52.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_optionalPropertyType_12829, var_propertyIndex_16826  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 457)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_53 = inObject ;
      ioArgument_constructorSignature.addAssignOperation (temp_53.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12829, var_propertyIndex_16826  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 463)) ;
      const GGS_structurePropertyListAST_2E_element temp_54 = inObject ;
      ioArgument_ioConstructorKey.plusAssignOperation(GGS_string ("!").add_operation (temp_54.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
    {
      GGS_instructionListAST extractedValue_17318_instructionList_0 ;
      GGS_location extractedValue_17334_endOfInstructionList_1 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_17318_instructionList_0, extractedValue_17334_endOfInstructionList_1) ;
      GalgasBool test_55 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_55) {
        test_55 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12829.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 466)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 466)).boolEnum () ;
        if (GalgasBool::boolTrue == test_55) {
          const GGS_structurePropertyListAST_2E_element temp_56 = inObject ;
          GenericArray <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (temp_56.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12829.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)), fixItArray57  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)) ;
        }
      }
      const GGS_structurePropertyListAST_2E_element temp_58 = inObject ;
      GGS_string var_llvmRoutineName_17537 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_58.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 469)) ;
      GGS_routineLLVMNameDict var_modeDictionary_17628 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 470)), var_llvmRoutineName_17537, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 470)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_59 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_60 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_61 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_59.readProperty_mPropertyName (), temp_60.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_61.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 476)), var_modeDictionary_17628  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 471)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_62 = inObject ;
      GGS_lstring var_functionLLVMName_18003 = GGS_lstring::init_21__21_ (var_llvmRoutineName_17537, temp_62.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_routineFormalArgumentListAST temp_63 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 493)) ;
      const GGS_structurePropertyListAST_2E_element temp_64 = inObject ;
      ioArgument_ioDecoratedRoutineList.addAssignOperation (constinArgument_inReceiverTypeName, GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 486)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("type-structure-declaration.galgas", 488)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_functionLLVMName_18003, temp_63, GGS_bool (false), extractedValue_17318_instructionList_0, extractedValue_17334_endOfInstructionList_1, temp_64.readProperty_mPropertyTypeName ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 484)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
    {
      GGS_instructionListAST extractedValue_18575_writeInstructionList_0 ;
      GGS_location extractedValue_18596_endOfWriteInstructionList_1 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_writeComputedProperty (extractedValue_18575_writeInstructionList_0, extractedValue_18596_endOfWriteInstructionList_1) ;
      GalgasBool test_65 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_65) {
        test_65 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12829.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 499)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 499)).boolEnum () ;
        if (GalgasBool::boolTrue == test_65) {
          const GGS_structurePropertyListAST_2E_element temp_66 = inObject ;
          GenericArray <FixItDescription> fixItArray67 ;
          inCompiler->emitSemanticError (temp_66.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12829.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)), fixItArray67  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)) ;
        }
      }
      const GGS_structurePropertyListAST_2E_element temp_68 = inObject ;
      GGS_string var_llvmGetterRoutineName_18804 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_68.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 502)) ;
      GGS_routineLLVMNameDict var_getterModeDictionary_18901 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 503)), var_llvmGetterRoutineName_18804, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)) ;
      const GGS_structurePropertyListAST_2E_element temp_69 = inObject ;
      GGS_string var_llvmSetterRoutineName_19004 = function_setterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_69.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 504)) ;
      GGS_routineLLVMNameDict var_setterModeDictionary_19101 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 505)), var_llvmSetterRoutineName_19004, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 505)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_70 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_71 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_72 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_70.readProperty_mPropertyName (), temp_71.readProperty_mVisibility (), GGS_propertySetterKind::class_func_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_72.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)), var_getterModeDictionary_18901, var_setterModeDictionary_19101  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 506)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_73 = inObject ;
      GGS_lstring var_functionLLVMName_19538 = GGS_lstring::init_21__21_ (var_llvmSetterRoutineName_19004, temp_73.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_routineFormalArgumentListAST temp_74 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 526)) ;
      const GGS_structurePropertyListAST_2E_element temp_75 = inObject ;
      temp_74.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-structure-declaration.galgas", 522)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 523)), temp_75.readProperty_mPropertyTypeName (), GGS_lstring::init_21__21_ (GGS_string ("newValue"), extractedValue_18596_endOfWriteInstructionList_1, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 526)) ;
      GGS_routineFormalArgumentListAST var_formalArgumentList_19676 = temp_74 ;
      ioArgument_ioDecoratedRoutineList.addAssignOperation (constinArgument_inReceiverTypeName, GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 530)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("type-structure-declaration.galgas", 532)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("type-structure-declaration.galgas", 535)), var_functionLLVMName_19538, var_formalArgumentList_19676, GGS_bool (false), extractedValue_18575_writeInstructionList_0, extractedValue_18596_endOfWriteInstructionList_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 541))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 528)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterDeclarationList.element buildControlRegisterMapForGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildControlRegisterMapForGroup (const GGS_controlRegisterDeclarationList_2E_element inObject,
                                                      GGS_semanticContext & ioArgument_ioContext,
                                                      GGS_controlRegisterMap & ioArgument_ioControlRegisterMap,
                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_registerType_20053 ;
  GGS_uint var_registerBitCount_20080 ;
  {
  const GGS_controlRegisterDeclarationList_2E_element temp_0 = inObject ;
  routine_controlRegisterType_3F__26_context_21_type_21_bitCount (temp_0.readProperty_mRegisterTypeName (), ioArgument_ioContext, var_registerType_20053, var_registerBitCount_20080, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 492)) ;
  }
  GGS_controlRegisterFieldMap var_registerFieldMap_20316 ;
  GGS_sliceMap var_registerBitSliceMap_20342 ;
  GGS_controlRegisterFieldList var_controlRegisterFieldList_20371 ;
  {
  const GGS_controlRegisterDeclarationList_2E_element temp_1 = inObject ;
  const GGS_controlRegisterDeclarationList_2E_element temp_2 = inObject ;
  routine_buildControlRegisterSliceMap_3F__3F__26_context_26_type_3F_bitCount_21__21__21_ (temp_1.readProperty_mRegisterBitSliceList (), temp_2.readProperty_mRegisterBitSliceListLocation (), ioArgument_ioContext, var_registerType_20053, var_registerBitCount_20080, var_registerFieldMap_20316, var_registerBitSliceMap_20342, var_controlRegisterFieldList_20371, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)) ;
  }
  const GGS_controlRegisterDeclarationList_2E_element temp_3 = inObject ;
  UpEnumerator_controlRegisterNameListAST enumerator_20452 (temp_3.readProperty_mRegisterArrayList ()) ;
  while (enumerator_20452.hasCurrentObject ()) {
    GGS_objectIR var_addressOffsetExpressionResult_20789 ;
    {
    routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, enumerator_20452.current (HERE).readProperty_mRegisterOffset (), enumerator_20452.current (HERE).readProperty_mRegisterOffsetLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 512)), var_addressOffsetExpressionResult_20789, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 507)) ;
    }
    GGS_bigint var_registerAddressOffset_20841 ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_addressOffsetExpressionResult_20789.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 516)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 516)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_20452.current (HERE).readProperty_mRegisterOffsetLocation (), GGS_string ("control register address offset is not a static integer expression"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 517)) ;
        var_registerAddressOffset_20841.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_omnibusType joker_21152_1 ; // Joker input parameter
      var_addressOffsetExpressionResult_20789.method_extractLiteralInteger (joker_21152_1, var_registerAddressOffset_20841, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 521)) ;
    }
    GGS_bigint var_arraySize_21210 ;
    GGS_uint var_elementArraySize_21234 ;
    switch (enumerator_20452.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
    case GGS_controlRegisterKind::Enumeration::invalid:
      break ;
    case GGS_controlRegisterKind::Enumeration::enum_scalar:
      {
        var_arraySize_21210 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 527)) ;
        var_elementArraySize_21234 = GGS_uint (uint32_t (0U)) ;
      }
      break ;
    case GGS_controlRegisterKind::Enumeration::enum_registerArray:
      {
        GGS_expressionAST extractedValue_21396_arraySizeExpression_0 ;
        GGS_location extractedValue_21426_arraySizeLocation_1 ;
        GGS_expressionAST extractedValue_21483_arrayElementSizeExpression_2 ;
        GGS_location extractedValue_21520_arrayElementSizeLocation_3 ;
        enumerator_20452.current (HERE).readProperty_mControlRegisterKind ().getAssociatedValuesFor_registerArray (extractedValue_21396_arraySizeExpression_0, extractedValue_21426_arraySizeLocation_1, extractedValue_21483_arrayElementSizeExpression_2, extractedValue_21520_arrayElementSizeLocation_3) ;
        GGS_objectIR var_sizeExpressionResult_21861 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_21396_arraySizeExpression_0, extractedValue_21426_arraySizeLocation_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 537)), var_sizeExpressionResult_21861, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 532)) ;
        }
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_sizeExpressionResult_21861.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 540)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 540)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_21426_arraySizeLocation_1, GGS_string ("control register address is not a static integer expression"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 541)) ;
            var_arraySize_21210.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GGS_omnibusType joker_22119_1 ; // Joker input parameter
          var_sizeExpressionResult_21861.method_extractLiteralInteger (joker_22119_1, var_arraySize_21210, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 543)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::lowerThan, var_arraySize_21210.objectCompare (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 544)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_21426_arraySizeLocation_1, GGS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)) ;
              var_arraySize_21210.drop () ; // Release error dropped variable
            }
          }
        }
        GGS_objectIR var_elementArraySizeExpressionResult_22687 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_21483_arrayElementSizeExpression_2, extractedValue_21520_arrayElementSizeLocation_3, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 556)), var_elementArraySizeExpressionResult_22687, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 551)) ;
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_elementArraySizeExpressionResult_22687.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 559)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 559)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_21520_arrayElementSizeLocation_3, GGS_string ("element size is not a static integer expression"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 560)) ;
            var_elementArraySize_21234.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_bigint var_elementArraySizeAsBigInt_23018 ;
          GGS_omnibusType joker_23003_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_22687.method_extractLiteralInteger (joker_23003_1, var_elementArraySizeAsBigInt_23018, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)) ;
          var_elementArraySize_21234 = var_elementArraySizeAsBigInt_23018.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 565)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioControlRegisterMap.setter_insertKey (enumerator_20452.current (HERE).readProperty_mRegisterName (), var_registerType_20053, enumerator_20452.current (HERE).readProperty_mIsReadOnly (), GGS_bool (false), var_registerBitSliceMap_20342, var_registerFieldMap_20316, var_registerAddressOffset_20841, var_controlRegisterFieldList_20371, var_registerBitCount_20080, var_arraySize_21210.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 578)), var_elementArraySize_21234, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 568)) ;
    }
    enumerator_20452.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@globalSyncInstanceMapIR.element generateLLVM'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVM (const GGS_globalSyncInstanceMapIR_2E_element inObject,
                                   GGS_string & ioArgument_ioLLVMcode,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_globalSyncInstanceMapIR_2E_element temp_0 = inObject ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalSyncInstance (temp_0.readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)).add_operation (GGS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)) ;
  const GGS_globalSyncInstanceMapIR_2E_element temp_1 = inObject ;
  const GGS_globalSyncInstanceMapIR_2E_element temp_2 = inObject ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_1.readProperty_mInitialValue (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (extensionGetter_llvmValue (temp_2.readProperty_mInitialValue (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR.element generateLLVMDriverVariableDefinition'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const GGS_driverListIR_2E_element inObject,
                                                           GGS_string & ioArgument_ioLLVMcode,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element temp_0 = inObject ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)).add_operation (GGS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)) ;
  const GGS_driverListIR_2E_element temp_1 = inObject ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)).add_operation (GGS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)) ;
  const GGS_driverListIR_2E_element temp_2 = inObject ;
  UpEnumerator_operandIRList enumerator_17998 (temp_2.readProperty_mInitialValueList ()) ;
  while (enumerator_17998.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_17998.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)).add_operation (extensionGetter_llvmValue (enumerator_17998.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)) ;
    enumerator_17998.gotoNextObject () ;
    if (enumerator_17998.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 430)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 432)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedTaskList.element taskSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_taskSemanticAnalysis (const GGS_decoratedTaskList_2E_element inObject,
                                           const GGS_semanticContext constinArgument_inContext,
                                           const GGS_uint constinArgument_inPriority,
                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                           GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_taskType_14738 ;
  const GGS_decoratedTaskList_2E_element temp_0 = inObject ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTaskName (), var_taskType_14738, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 392)) ;
  const GGS_decoratedTaskList_2E_element temp_1 = inObject ;
  GGS_bigint var_stackSize_14846 = temp_1.readProperty_mStackSize ().readProperty_bigint () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerThan, var_stackSize_14846.objectCompare (GGS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)))) ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::notEqual, var_stackSize_14846.modulo_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 395)).objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)))) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_decoratedTaskList_2E_element temp_4 = inObject ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mStackSize ().readProperty_location (), GGS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray5  COMMA_SOURCE_FILE ("task-declaration.galgas", 396)) ;
    }
  }
  GGS_stringlist var_setupOrderedList_15161 ;
  {
  const GGS_decoratedTaskList_2E_element temp_6 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_6.readProperty_mTaskSetupListAST (), var_setupOrderedList_15161, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 399)) ;
  }
  GGS_stringlist var_activateOrderedList_15329 ;
  {
  const GGS_decoratedTaskList_2E_element temp_7 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_7.readProperty_mTaskActivateListAST (), var_activateOrderedList_15329, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 404)) ;
  }
  GGS_stringlist var_deactivateOrderedList_15504 ;
  {
  const GGS_decoratedTaskList_2E_element temp_8 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_8.readProperty_mTaskDeactivateListAST (), var_deactivateOrderedList_15504, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 409)) ;
  }
  GGS_uint var_taskNameStringIndex_15704 ;
  {
  const GGS_decoratedTaskList_2E_element temp_9 = inObject ;
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, temp_9.readProperty_mTaskName ().readProperty_string (), var_taskNameStringIndex_15704, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 414)) ;
  }
  {
  const GGS_decoratedTaskList_2E_element temp_10 = inObject ;
  const GGS_decoratedTaskList_2E_element temp_11 = inObject ;
  const GGS_decoratedTaskList_2E_element temp_12 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (temp_10.readProperty_mTaskName (), var_taskType_14738, constinArgument_inPriority, temp_11.readProperty_mStackSize ().readProperty_bigint (), var_setupOrderedList_15161, var_activateOrderedList_15329, var_deactivateOrderedList_15504, var_taskNameStringIndex_15704, temp_12.readProperty_mAutoStart (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 416)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST.element enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const GGS_externFunctionDeclarationListAST_2E_element inObject,
                                               GGS_semanticContext & ioArgument_ioContext,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature var_signature_3427 ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_0 = inObject ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mProcFormalArgumentList (), var_signature_3427, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 87)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_3524 ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_1 = inObject ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mReturnTypeName (), var_returnTypeProxy_3524, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)) ;
  }
  const GGS_externFunctionDeclarationListAST_2E_element temp_2 = inObject ;
  const GGS_externFunctionDeclarationListAST_2E_element temp_3 = inObject ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_3590 = extensionGetter_routineLLVMDictionaryForFunction (temp_2.readProperty_mMode (), temp_3.readProperty_mRoutineNameForGeneration ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 91)) ;
  const GGS_externFunctionDeclarationListAST_2E_element temp_4 = inObject ;
  GGS_lstring var_routineMangledName_3696 = extensionGetter_mangledName (var_signature_3427, GGS_string::makeEmptyString (), temp_4.readProperty_mExternProcedureName (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 92)) ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_5 = inObject ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_3696, GGS_bool (true), var_signature_3427, var_returnTypeProxy_3524, var_routineLLVMNameDict_3590, GGS_bool (false), temp_5.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 93)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR.element llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const GGS_externProcedureMapIR_2E_element inObject,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externProcedureMapIR_2E_element temp_0 = inObject ;
  GGS_string var_procName_8300 = function_llvmNameForFunction (temp_0.readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 215)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externProcedureMapIR_2E_element temp_2 = inObject ;
    test_1 = temp_2.readProperty_mReturnType ().getter_isNull (SOURCE_FILE ("declaration-extern-proc.galgas", 216)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 217)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_externProcedureMapIR_2E_element temp_3 = inObject ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_3.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (var_procName_8300, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)) ;
  const GGS_externProcedureMapIR_2E_element temp_4 = inObject ;
  UpEnumerator_routineFormalArgumentListIR enumerator_8603 (temp_4.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_8603.hasCurrentObject ()) {
    switch (enumerator_8603.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8603.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (enumerator_8603.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8603.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (function_llvmNameForLocalVariable (enumerator_8603.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8603.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (function_llvmNameForLocalVariable (enumerator_8603.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)) ;
      }
      break ;
    }
    enumerator_8603.gotoNextObject () ;
    if (enumerator_8603.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)).add_operation (GGS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@callInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_baseGuardAnalyze (cPtr_callInstructionAST * inObject,
                                           const GGS_omnibusType constin_inSelfType,
                                           const GGS_routineAttributes constin_inRoutineAttributes,
                                           const GGS_semanticContext constin_inContext,
                                           const GGS_mode constin_inMode,
                                           GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           GGS_staticEntityMap & io_ioStaticEntityMap,
                                           GGS_universalValuedObjectMap & io_ioUniversalMap,
                                           GGS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outConvenienceGuardGenerationIR.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_callInstructionAST) ;
    inObject->method_baseGuardAnalyze (constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList.element semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_semanticAnalysis (const GGS_decoratedRegularRoutineList_2E_element inObject,
                                       const GGS_semanticContext constinArgument_inContext,
                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex = GGS_uint (uint32_t (0U)) ;
  const GGS_decoratedRegularRoutineList_2E_element temp_0 = inObject ;
  GGS_omnibusType temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, temp_0.readProperty_receiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 48)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    const GGS_decoratedRegularRoutineList_2E_element temp_3 = inObject ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_receiverTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)) ;
  }
  GGS_omnibusType var_receiverType_2049 = temp_1 ;
  GGS_universalValuedObjectMap var_universalMap_2225 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_2225, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 53)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_2225, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 54)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_decoratedRegularRoutineList_2E_element temp_5 = inObject ;
    test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_returnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_decoratedRegularRoutineList_2E_element temp_6 = inObject ;
      GGS_lstring var_resultVarName_2414 = GGS_lstring::init_21__21_ (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 57)), temp_6.readProperty_returnTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
      const GGS_decoratedRegularRoutineList_2E_element temp_7 = inObject ;
      GGS_omnibusType var_resultType_2510 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_7.readProperty_returnTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_2225, var_resultVarName_2414, var_resultType_2510, var_resultVarName_2414, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("regular-routine-analysis.galgas", 59)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 59)) ;
      }
    }
  }
  GGS_routineFormalArgumentListIR temp_8 = GGS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 62)) ;
  GGS_routineFormalArgumentListIR var_formalArguments_2752 = temp_8 ;
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_9 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_10 = inObject ;
  routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_9.readProperty_formalArgumentList (), var_universalMap_2225, var_formalArguments_2752, temp_10.readProperty_warningOnUnusedArgs (), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 63)) ;
  }
  GGS_allocaList temp_11 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 71)) ;
  GGS_allocaList var_allocaList_2995 = temp_11 ;
  GGS_instructionListIR temp_12 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 72)) ;
  GGS_instructionListIR var_instructionGenerationList_3037 = temp_12 ;
  const GGS_decoratedRegularRoutineList_2E_element temp_13 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_14 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_15 = inObject ;
  extensionMethod_analyzeRoutineInstructionList (temp_13.readProperty_mInstructionList (), var_receiverType_2049, temp_14.readProperty_routineAttributes (), constinArgument_inContext, temp_15.readProperty_mode (), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_2225, var_allocaList_2995, var_instructionGenerationList_3037, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 73)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_2225, var_instructionGenerationList_3037, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 85)) ;
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_16 = inObject ;
  extensionSetter_closeBranch (var_universalMap_2225, temp_16.readProperty_mEndOfRoutineDeclaration (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 86)) ;
  }
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_17 = inObject ;
  extensionSetter_closeOverride (var_universalMap_2225, temp_17.readProperty_mEndOfRoutineDeclaration (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 87)) ;
  }
  const GGS_decoratedRegularRoutineList_2E_element temp_18 = inObject ;
  GGS_omnibusType temp_19 ;
  const GalgasBool test_20 = GGS_bool (ComparisonKind::equal, temp_18.readProperty_returnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_20) {
    temp_19 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 90)) ;
  }else if (GalgasBool::boolFalse == test_20) {
    const GGS_decoratedRegularRoutineList_2E_element temp_21 = inObject ;
    temp_19 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_21.readProperty_returnTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 92)) ;
  }
  GGS_omnibusType var_returnType_3687 = temp_19 ;
  const GGS_decoratedRegularRoutineList_2E_element temp_22 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_23 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_24 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_25 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_26 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_regularRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (temp_22.readProperty_routineMangledLLVMName (), temp_23.readProperty_isRequired (), temp_24.readProperty_warnIfUnused (), var_receiverType_2049, var_formalArguments_2752, var_allocaList_2995, var_instructionGenerationList_3037, temp_25.readProperty_exportedRoutine (), temp_26.readProperty_routineKind (), var_returnType_3687, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 94)) ;
}


//--------------------------------------------------------------------------------------------------
// @addressofControlRegisterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofControlRegisterAST::objectCompare (const GGS_addressofControlRegisterAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST::GGS_addressofControlRegisterAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addressofControlRegisterAST GGS_addressofControlRegisterAST::
init_21_ (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_addressofControlRegisterAST * object = nullptr ;
  macroMyNew (object, cPtr_addressofControlRegisterAST (inCompiler COMMA_THERE)) ;
  object->addressofControlRegisterAST_init_21_ (in_mControlRegisterLValue, inCompiler) ;
  const GGS_addressofControlRegisterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::
addressofControlRegisterAST_init_21_ (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                      Compiler * /* inCompiler */) {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST::GGS_addressofControlRegisterAST (const cPtr_addressofControlRegisterAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofControlRegisterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST GGS_addressofControlRegisterAST::class_func_new (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_addressofControlRegisterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_addressofControlRegisterAST (in_mControlRegisterLValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_addressofControlRegisterAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_addressofControlRegisterAST * p = (cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofControlRegisterAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofControlRegisterAST * p = (cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addressofControlRegisterAST class
//--------------------------------------------------------------------------------------------------

cPtr_addressofControlRegisterAST::cPtr_addressofControlRegisterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addressofControlRegisterAST::cPtr_addressofControlRegisterAST (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue () {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_addressofControlRegisterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

void cPtr_addressofControlRegisterAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@addressofControlRegisterAST:") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofControlRegisterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addressofControlRegisterAST (mProperty_mControlRegisterLValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofControlRegisterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addressofControlRegisterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST ("addressofControlRegisterAST",
                                                                                & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addressofControlRegisterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofControlRegisterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofControlRegisterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST GGS_addressofControlRegisterAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_addressofControlRegisterAST result ;
  const GGS_addressofControlRegisterAST * p = (const GGS_addressofControlRegisterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofControlRegisterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofControlRegisterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addressofExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofExpressionAST::objectCompare (const GGS_addressofExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST::GGS_addressofExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addressofExpressionAST GGS_addressofExpressionAST::
init_21_ (const GGS_LValueAST & in_mLValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_addressofExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_addressofExpressionAST (inCompiler COMMA_THERE)) ;
  object->addressofExpressionAST_init_21_ (in_mLValue, inCompiler) ;
  const GGS_addressofExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::
addressofExpressionAST_init_21_ (const GGS_LValueAST & in_mLValue,
                                 Compiler * /* inCompiler */) {
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST::GGS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST GGS_addressofExpressionAST::class_func_new (const GGS_LValueAST & in_mLValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_addressofExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_addressofExpressionAST (in_mLValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST GGS_addressofExpressionAST::readProperty_mLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueAST () ;
  }else{
    cPtr_addressofExpressionAST * p = (cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    return p->mProperty_mLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofExpressionAST::setProperty_mLValue (const GGS_LValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofExpressionAST * p = (cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    p->mProperty_mLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addressofExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (const GGS_LValueAST & in_mLValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLValue () {
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_addressofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

void cPtr_addressofExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@addressofExpressionAST:") ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addressofExpressionAST (mProperty_mLValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addressofExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofExpressionAST ("addressofExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addressofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST GGS_addressofExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_addressofExpressionAST result ;
  const GGS_addressofExpressionAST * p = (const GGS_addressofExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addressofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofInstructionIR::objectCompare (const GGS_addressofInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR::GGS_addressofInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR::
init_21__21_ (const GGS_objectIR & in_mTarget,
              const GGS_LValueRepresentation & in_mLValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_addressofInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_addressofInstructionIR (inCompiler COMMA_THERE)) ;
  object->addressofInstructionIR_init_21__21_ (in_mTarget, in_mLValue, inCompiler) ;
  const GGS_addressofInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addressofInstructionIR::
addressofInstructionIR_init_21__21_ (const GGS_objectIR & in_mTarget,
                                     const GGS_LValueRepresentation & in_mLValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR::GGS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR::class_func_new (const GGS_objectIR & in_mTarget,
                                                                       const GGS_LValueRepresentation & in_mLValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_addressofInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_addressofInstructionIR (in_mTarget, in_mLValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_addressofInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofInstructionIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation GGS_addressofInstructionIR::readProperty_mLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueRepresentation () ;
  }else{
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    return p->mProperty_mLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofInstructionIR::setProperty_mLValue (const GGS_LValueRepresentation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    p->mProperty_mLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addressofInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mLValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (const GGS_objectIR & in_mTarget,
                                                          const GGS_LValueRepresentation & in_mLValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mLValue () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_addressofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

void cPtr_addressofInstructionIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@addressofInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addressofInstructionIR (mProperty_mTarget, mProperty_mLValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addressofInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofInstructionIR ("addressofInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addressofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_addressofInstructionIR result ;
  const GGS_addressofInstructionIR * p = (const GGS_addressofInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::GGS_intermediateCodeStruct (void) :
mProperty_mStaticEntityMap (),
mProperty_mInterruptMapIR (),
mProperty_mExternProcedureMapIR (),
mProperty_mPanicSetupListIR (),
mProperty_mPanicLoopListIR (),
mProperty_mTaskMapIR (),
mProperty_mGlobalTaskVariableList (),
mProperty_mMaxBranchOfOnInstructions (),
mProperty_mTargetParameters (),
mProperty_mDriverList (),
mProperty_mStaticArrayMapForIntermediate (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mControlRegisterGroupArrayList (),
mProperty_mRoutineListIR () {
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::GGS_intermediateCodeStruct (const GGS_intermediateCodeStruct & inSource) :
mProperty_mStaticEntityMap (inSource.mProperty_mStaticEntityMap),
mProperty_mInterruptMapIR (inSource.mProperty_mInterruptMapIR),
mProperty_mExternProcedureMapIR (inSource.mProperty_mExternProcedureMapIR),
mProperty_mPanicSetupListIR (inSource.mProperty_mPanicSetupListIR),
mProperty_mPanicLoopListIR (inSource.mProperty_mPanicLoopListIR),
mProperty_mTaskMapIR (inSource.mProperty_mTaskMapIR),
mProperty_mGlobalTaskVariableList (inSource.mProperty_mGlobalTaskVariableList),
mProperty_mMaxBranchOfOnInstructions (inSource.mProperty_mMaxBranchOfOnInstructions),
mProperty_mTargetParameters (inSource.mProperty_mTargetParameters),
mProperty_mDriverList (inSource.mProperty_mDriverList),
mProperty_mStaticArrayMapForIntermediate (inSource.mProperty_mStaticArrayMapForIntermediate),
mProperty_mGlobalSyncInstanceMap (inSource.mProperty_mGlobalSyncInstanceMap),
mProperty_mControlRegisterGroupArrayList (inSource.mProperty_mControlRegisterGroupArrayList),
mProperty_mRoutineListIR (inSource.mProperty_mRoutineListIR) {
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct & GGS_intermediateCodeStruct::operator = (const GGS_intermediateCodeStruct & inSource) {
  mProperty_mStaticEntityMap = inSource.mProperty_mStaticEntityMap ;
  mProperty_mInterruptMapIR = inSource.mProperty_mInterruptMapIR ;
  mProperty_mExternProcedureMapIR = inSource.mProperty_mExternProcedureMapIR ;
  mProperty_mPanicSetupListIR = inSource.mProperty_mPanicSetupListIR ;
  mProperty_mPanicLoopListIR = inSource.mProperty_mPanicLoopListIR ;
  mProperty_mTaskMapIR = inSource.mProperty_mTaskMapIR ;
  mProperty_mGlobalTaskVariableList = inSource.mProperty_mGlobalTaskVariableList ;
  mProperty_mMaxBranchOfOnInstructions = inSource.mProperty_mMaxBranchOfOnInstructions ;
  mProperty_mTargetParameters = inSource.mProperty_mTargetParameters ;
  mProperty_mDriverList = inSource.mProperty_mDriverList ;
  mProperty_mStaticArrayMapForIntermediate = inSource.mProperty_mStaticArrayMapForIntermediate ;
  mProperty_mGlobalSyncInstanceMap = inSource.mProperty_mGlobalSyncInstanceMap ;
  mProperty_mControlRegisterGroupArrayList = inSource.mProperty_mControlRegisterGroupArrayList ;
  mProperty_mRoutineListIR = inSource.mProperty_mRoutineListIR ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_intermediateCodeStruct GGS_intermediateCodeStruct::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_intermediateCodeStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mStaticEntityMap = GGS_staticEntityMap::init (inCompiler COMMA_HERE) ;
  mProperty_mInterruptMapIR = GGS_interruptMapIR::init (inCompiler COMMA_HERE) ;
  mProperty_mExternProcedureMapIR = GGS_externProcedureMapIR::init (inCompiler COMMA_HERE) ;
GGS_panicSortedListIR temp_0 = GGS_panicSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 11)) ;
  mProperty_mPanicSetupListIR = temp_0 ;
GGS_panicSortedListIR temp_1 = GGS_panicSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 12)) ;
  mProperty_mPanicLoopListIR = temp_1 ;
  mProperty_mTaskMapIR = GGS_taskMapIR::init (inCompiler COMMA_HERE) ;
GGS_globalTaskVariableList temp_2 = GGS_globalTaskVariableList::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 14)) ;
  mProperty_mGlobalTaskVariableList = temp_2 ;
  mProperty_mMaxBranchOfOnInstructions = GGS_uint (uint32_t (0U)) ;
GGS__32_lstringlist temp_3 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 18)) ;
GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 37)) ;
GGS_lstringlist temp_5 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 38)) ;
GGS_lstringlist temp_6 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 39)) ;
  mProperty_mTargetParameters = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 17)), temp_3, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 19)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 20)), GGS_uint (uint32_t (0U)), GGS_bool (false), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 23)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 23)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 24)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 24)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 25)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 26)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 26)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 27)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 27)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 28)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 28)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 29)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 29)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 30)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 30)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 31)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 32)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 32)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 33)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 34)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 35)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 36)), temp_4, temp_5, temp_6, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 40)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 41)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 42)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 43)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 43)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 44)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 45)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 46)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 47)), inCompiler COMMA_HERE) ;
GGS_driverListIR temp_7 = GGS_driverListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 49)) ;
  mProperty_mDriverList = temp_7 ;
  mProperty_mStaticArrayMapForIntermediate = GGS_staticListInvokedFunctionSetMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalSyncInstanceMap = GGS_globalSyncInstanceMapIR::init (inCompiler COMMA_HERE) ;
GGS_controlRegisterGroupArrayList temp_8 = GGS_controlRegisterGroupArrayList::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 52)) ;
  mProperty_mControlRegisterGroupArrayList = temp_8 ;
GGS_routineListIR temp_9 = GGS_routineListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 53)) ;
  mProperty_mRoutineListIR = temp_9 ;
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::GGS_intermediateCodeStruct (const GGS_staticEntityMap & inOperand0,
                                                        const GGS_interruptMapIR & inOperand1,
                                                        const GGS_externProcedureMapIR & inOperand2,
                                                        const GGS_panicSortedListIR & inOperand3,
                                                        const GGS_panicSortedListIR & inOperand4,
                                                        const GGS_taskMapIR & inOperand5,
                                                        const GGS_globalTaskVariableList & inOperand6,
                                                        const GGS_uint & inOperand7,
                                                        const GGS_targetParameters & inOperand8,
                                                        const GGS_driverListIR & inOperand9,
                                                        const GGS_staticListInvokedFunctionSetMap & inOperand10,
                                                        const GGS_globalSyncInstanceMapIR & inOperand11,
                                                        const GGS_controlRegisterGroupArrayList & inOperand12,
                                                        const GGS_routineListIR & inOperand13) :
mProperty_mStaticEntityMap (inOperand0),
mProperty_mInterruptMapIR (inOperand1),
mProperty_mExternProcedureMapIR (inOperand2),
mProperty_mPanicSetupListIR (inOperand3),
mProperty_mPanicLoopListIR (inOperand4),
mProperty_mTaskMapIR (inOperand5),
mProperty_mGlobalTaskVariableList (inOperand6),
mProperty_mMaxBranchOfOnInstructions (inOperand7),
mProperty_mTargetParameters (inOperand8),
mProperty_mDriverList (inOperand9),
mProperty_mStaticArrayMapForIntermediate (inOperand10),
mProperty_mGlobalSyncInstanceMap (inOperand11),
mProperty_mControlRegisterGroupArrayList (inOperand12),
mProperty_mRoutineListIR (inOperand13) {
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct GGS_intermediateCodeStruct::class_func_new (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_intermediateCodeStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticEntityMap.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mPanicSetupListIR.isValid () && mProperty_mPanicLoopListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mDriverList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mControlRegisterGroupArrayList.isValid () && mProperty_mRoutineListIR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::drop (void) {
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mInterruptMapIR.drop () ;
  mProperty_mExternProcedureMapIR.drop () ;
  mProperty_mPanicSetupListIR.drop () ;
  mProperty_mPanicLoopListIR.drop () ;
  mProperty_mTaskMapIR.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mMaxBranchOfOnInstructions.drop () ;
  mProperty_mTargetParameters.drop () ;
  mProperty_mDriverList.drop () ;
  mProperty_mStaticArrayMapForIntermediate.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mControlRegisterGroupArrayList.drop () ;
  mProperty_mRoutineListIR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @intermediateCodeStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaxBranchOfOnInstructions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticArrayMapForIntermediate.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterGroupArrayList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineListIR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @intermediateCodeStruct generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct GGS_intermediateCodeStruct::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_intermediateCodeStruct result ;
  const GGS_intermediateCodeStruct * p = (const GGS_intermediateCodeStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_intermediateCodeStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("intermediateCodeStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_omnibus_5F_options_doNotDetectRecursiveCalls ("omnibus_options",
                                         "doNotDetectRecursiveCalls",
                                         114,
                                         "do-not-detect-recursive-calls",
                                         "Do not detect recursive calls") ;

BoolCommandLineOption gOption_omnibus_5F_options_noPanicGeneration ("omnibus_options",
                                         "noPanicGeneration",
                                         0,
                                         "no-panic-generation",
                                         "Do not generate panic code") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile ("omnibus_options",
                                         "emitControlRegisterHTMLDumpFile",
                                         0,
                                         "emit-control-register-map",
                                         "Emit control register map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile ("omnibus_options",
                                         "emitDeclarationDependencyGraphFile",
                                         100,
                                         "emit-declaration-dependency-graph",
                                         "Emit declaration dependency graph file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile ("omnibus_options",
                                         "emitGlobalConstantHTMLDumpFile",
                                         0,
                                         "emit-global-constant-map",
                                         "Emit global constant map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitRoutineInvocationGraphFile ("omnibus_options",
                                         "emitRoutineInvocationGraphFile",
                                         105,
                                         "emit-routine-invocation-graph",
                                         "Emit routine invocation graph file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitTypeMap ("omnibus_options",
                                         "emitTypeMap",
                                         116,
                                         "emit-type-map",
                                         "Emit type map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_taskStrictPriorityOrder ("omnibus_options",
                                         "taskStrictPriorityOrder",
                                         0,
                                         "task-strict-priority-order",
                                         "Ensure task strict priority order") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ ("omnibus_options",
                                         "optimizationZ",
                                         0,
                                         "Oz",
                                         "Like previous option but reduces code size further") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationS ("omnibus_options",
                                         "optimizationS",
                                         0,
                                         "Os",
                                         "Like previous option with extra optimizations for size") ;

BoolCommandLineOption gOption_omnibus_5F_options_listEmbeddedSampleFiles ("omnibus_options",
                                         "listEmbeddedSampleFiles",
                                         108,
                                         "list-embedded-samples",
                                         "List embedded sample files") ;

BoolCommandLineOption gOption_omnibus_5F_options_listTargets ("omnibus_options",
                                         "listTargets",
                                         76,
                                         "list-targets",
                                         "List targets") ;

BoolCommandLineOption gOption_omnibus_5F_options_noDeadCodeElimination ("omnibus_options",
                                         "noDeadCodeElimination",
                                         0,
                                         "no-deadcode-elimination",
                                         "No dead code elimination") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimization_31_ ("omnibus_options",
                                         "optimization1",
                                         0,
                                         "O1",
                                         "Optimization level 1") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimization_32_ ("omnibus_options",
                                         "optimization2",
                                         0,
                                         "O2",
                                         "Optimization level 2") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ_33_ ("omnibus_options",
                                         "optimizationZ3",
                                         0,
                                         "O3",
                                         "Optimization level 3") ;

BoolCommandLineOption gOption_omnibus_5F_options_printPasses ("omnibus_options",
                                         "printPasses",
                                         0,
                                         "print-passes",
                                         "Print pass information") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedSampleFile ("omnibus_options",
                                         "extractEmbeddedSampleFile",
                                         120,
                                         "extract-embedded-sample-code",
                                         "Extract an embedded sample file",
                                         "") ;

StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedTargets ("omnibus_options",
                                         "extractEmbeddedTargets",
                                         88,
                                         "extract-embedded-targets",
                                         "Extract embedded targets",
                                         "") ;

StringCommandLineOption gOption_omnibus_5F_options_useDirAsTargetDir ("omnibus_options",
                                         "useDirAsTargetDir",
                                         84,
                                         "use-target-dir",
                                         "Use directory as target definition directory, instead of using embedded targets",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

StringListCommandLineOption gOption_omnibus_5F_options_pathList ("omnibus_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ("omnibus_option_not_appearing_in_cocoa",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Once function 'configurationNodeNameForPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_configurationNodeNameForPrecedenceGraph (Compiler *
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("config") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GGS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//--------------------------------------------------------------------------------------------------

GGS_string function_configurationNodeNameForPrecedenceGraph (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (nullptr,
                                                                                   releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GGS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'isrSlotTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_isrSlotTypeName (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ISRSlot") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GGS_string gOnceFunctionResult_isrSlotTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_isrSlotTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (nullptr,
                                                           releaseOnceFunctionResult_isrSlotTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_isrSlotTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_isrSlotTypeName (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_configurationDeclarationAST temp_0 = this ;
  GGS_lstring var_rootNode_11455 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 312)), temp_0.readProperty_mPanicCodeTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_configurationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11455, temp_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 313)) ;
  }
  {
  const GGS_configurationDeclarationAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11455, temp_2.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas", 314)) ;
  }
  {
  const GGS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11455, temp_3.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11455, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 316)).getter_nowhere (SOURCE_FILE ("configuration.galgas", 316)) COMMA_SOURCE_FILE ("configuration.galgas", 316)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@configurationDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_configurationDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_configurationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPanicCodeTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_configurationDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 328)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@configurationDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_configurationDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTargetParameters ().readProperty_mConfigurationLocation (), GGS_string ("duplicate configuration"), fixItArray2  COMMA_SOURCE_FILE ("configuration.galgas", 348)) ;
    }
  }
  const GGS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.mProperty_mTargetParameters = temp_3.readProperty_mTargetParameters () ;
  GGS_omnibusType var_panicCodeType_13667 ;
  const GGS_configurationDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mPanicCodeTypeName (), var_panicCodeType_13667, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 352)) ;
  ioArgument_ioContext.mProperty_mPanicCodeType = var_panicCodeType_13667 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas", 357)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_bool var_unsigned_13848 ;
      GGS_bigint joker_13830_2 ; // Joker input parameter
      GGS_bigint joker_13830_1 ; // Joker input parameter
      GGS_uint joker_13857_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().method_extractInteger (joker_13830_2, joker_13830_1, var_unsigned_13848, joker_13857_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unsigned_13848.operator_not (SOURCE_FILE ("configuration.galgas", 359)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_configurationDeclarationAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mPanicCodeTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas", 360)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_configurationDeclarationAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mPanicCodeTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas", 363)) ;
  }
  GGS_omnibusType var_panicLineType_14178 ;
  const GGS_configurationDeclarationAST temp_11 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_11.readProperty_mPanicLineTypeName (), var_panicLineType_14178, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 366)) ;
  ioArgument_ioContext.mProperty_mPanicLineType = var_panicLineType_14178 ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas", 371)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_bool var_unsigned_14359 ;
      GGS_bigint joker_14341_2 ; // Joker input parameter
      GGS_bigint joker_14341_1 ; // Joker input parameter
      GGS_uint joker_14368_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().method_extractInteger (joker_14341_2, joker_14341_1, var_unsigned_14359, joker_14368_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 372)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = var_unsigned_14359.operator_not (SOURCE_FILE ("configuration.galgas", 373)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_configurationDeclarationAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mPanicLineTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray15  COMMA_SOURCE_FILE ("configuration.galgas", 374)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    const GGS_configurationDeclarationAST temp_16 = this ;
    GenericArray <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mPanicLineTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray17  COMMA_SOURCE_FILE ("configuration.galgas", 377)) ;
  }
  GGS_stringset temp_18 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 380)) ;
  GGS_stringset var_panicCodeSet_14661 = temp_18 ;
  const GGS_configurationDeclarationAST temp_19 = this ;
  UpEnumerator_interruptionConfigurationList enumerator_14692 (temp_19.readProperty_mInterruptionConfigurationList ()) ;
  while (enumerator_14692.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14692.current_mInterruptName (HERE), enumerator_14692.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 382)) ;
    }
    switch (enumerator_14692.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GGS_interruptionPanicCode::Enumeration::invalid:
      break ;
    case GGS_interruptionPanicCode::Enumeration::enum_noCode:
      break ;
    case GGS_interruptionPanicCode::Enumeration::enum_code:
      {
        GGS_lbigint extractedValue_14867_value_0 ;
        enumerator_14692.current_mInterruptionPanicCode (HERE).getAssociatedValuesFor_code (extractedValue_14867_value_0) ;
        GGS_string var_s_14886 = extractedValue_14867_value_0.readProperty_bigint ().getter_string (SOURCE_FILE ("configuration.galgas", 386)) ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_panicCodeSet_14661.getter_hasKey (var_s_14886 COMMA_SOURCE_FILE ("configuration.galgas", 387)).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_14867_value_0.readProperty_location (), GGS_string ("duplicate interrupt code"), fixItArray21  COMMA_SOURCE_FILE ("configuration.galgas", 388)) ;
          }
        }
        var_panicCodeSet_14661.plusPlusAssignOperation (var_s_14886  COMMA_SOURCE_FILE ("configuration.galgas", 390)) ;
      }
      break ;
    }
    enumerator_14692.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledNameFromAST (const GGS_string & constinArgument_inReceiverTypeName,
                                                const GGS_lstring & constinArgument_inRoutineName,
                                                const GGS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_548 = GGS_string ("func.") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_548.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 18)) ;
    }
  }
  var_s_548.plusAssignOperation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 20)) ;
  var_s_548.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 21)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_718 (constinArgument_inFormalArgumentList) ;
  while (enumerator_718.hasCurrentObject ()) {
    var_s_548.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_718.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (enumerator_718.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 23)) ;
    enumerator_718.gotoNextObject () ;
  }
  var_s_548.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 25)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_548, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledNameFromAST (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_routineFormalArgumentListAST operand2 = GGS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                     inCompiler
                                                                                                     COMMA_THERE) ;
  return function_routineMangledNameFromAST (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromCall'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledNameFromCall (const GGS_string & constinArgument_inReceiverTypeName,
                                                 const GGS_lstring & constinArgument_inRoutineName,
                                                 const GGS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1240 = GGS_string ("func.") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_1240.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 37)) ;
    }
  }
  var_s_1240.plusAssignOperation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 39)) ;
  var_s_1240.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 40)) ;
  UpEnumerator_effectiveArgumentListAST enumerator_1385 (constinArgument_inEffectiveParameterList) ;
  while (enumerator_1385.hasCurrentObject ()) {
    var_s_1240.plusAssignOperation(extensionGetter_matchingFormalArgument (enumerator_1385.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (enumerator_1385.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
    enumerator_1385.gotoNextObject () ;
  }
  var_s_1240.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1240, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledNameFromCall (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_effectiveArgumentListAST operand2 = GGS_effectiveArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineMangledNameFromCall (operand0,
                                              operand1,
                                              operand2,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeDeclarationBarrierAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_compileTimeDeclarationBarrierAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)), temp_0, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeDeclarationBarrierAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeDeclarationBarrierAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeDeclarationBarrierAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeDeclarationBarrierAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeDeclarationBarrierAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInContext (GGS_semanticContext & /* ioArgument_ioContext */,
                                                                   GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                   GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendUnsignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendUnsignedOperatorsTo_3F__26_ (const GGS_string constinArgument_inTypeName,
                                                GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), GGS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 80)), GGS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 80)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 83)), GGS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 86)), GGS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 87)), GGS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 89)), GGS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 90)), GGS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement_3F__26_ (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 100)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendSignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendSignedOperatorsTo_3F__26_ (const GGS_string constinArgument_inTypeName,
                                              GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 113)), GGS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 113)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 116)), GGS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 116)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 119)), GGS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 119)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 122)), GGS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 122)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 123)), GGS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 123)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 125)), GGS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 125)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 126)), GGS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 126)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_minus_3F__26_ (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 136)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedDeclarationList?ast?sourceFile?endOfSourceFile!orderedDeclarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedDeclarationList_3F_ast_3F_sourceFile_3F_endOfSourceFile_21_orderedDeclarationList (const GGS_ast constinArgument_inAST,
                                                                                                            const GGS_string constinArgument_inSourceFile,
                                                                                                            const GGS_location constinArgument_inEndOfSourceFile,
                                                                                                            GGS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GGS_semanticTypePrecedenceGraph var_precedenceGraph_7917 = GGS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_7946 (constinArgument_inAST.readProperty_mDeclarationListAST ()) ;
  while (enumerator_7946.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_7946.current_mDeclaration (HERE).ptr (), var_precedenceGraph_7917, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 150)) ;
    enumerator_7946.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mExternFunctionListAST (), var_precedenceGraph_7917, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 153)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mTaskListAST (), var_precedenceGraph_7917, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 154)) ;
  GGS_bigint var_addintegerTypeCount_8374 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 156)) ;
  UpEnumerator_stringlist enumerator_8405 (var_precedenceGraph_7917.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 157))) ;
  while (enumerator_8405.hasCurrentObject ()) {
    GGS_stringlist var_Uxx_8490 = enumerator_8405.current_mValue (HERE).getter_componentsSeparatedByString (GGS_string ("u") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 159)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_Uxx_8490.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GGS_uint (uint32_t (2U)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = GGS_bool (ComparisonKind::equal, var_Uxx_8490.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GGS_string::makeEmptyString ())) ;
      }
      GGS_bool test_2 = test_1 ;
      if (GalgasBool::boolTrue == test_2.boolEnum ()) {
        test_2 = var_Uxx_8490.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 160)) ;
      }
      test_0 = test_2.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_n_8666 = var_Uxx_8490.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)) ;
        GGS_integerDeclarationAST var_declaration_8727 = GGS_integerDeclarationAST::init_21__21_ (GGS_bool (false), var_n_8666, inCompiler COMMA_HERE) ;
        callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_8727.ptr (), var_precedenceGraph_7917, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 163)) ;
        {
        routine_appendUnsignedOperatorsTo_3F__26_ (enumerator_8405.current_mValue (HERE), var_precedenceGraph_7917, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 165)) ;
        }
        var_addintegerTypeCount_8374.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_stringlist var_Ixx_9001 = enumerator_8405.current_mValue (HERE).getter_componentsSeparatedByString (GGS_string ("i") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 169)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_bool test_4 = GGS_bool (ComparisonKind::equal, var_Ixx_9001.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 170)).objectCompare (GGS_uint (uint32_t (2U)))) ;
        if (GalgasBool::boolTrue == test_4.boolEnum ()) {
          test_4 = GGS_bool (ComparisonKind::equal, var_Ixx_9001.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)).objectCompare (GGS_string::makeEmptyString ())) ;
        }
        GGS_bool test_5 = test_4 ;
        if (GalgasBool::boolTrue == test_5.boolEnum ()) {
          test_5 = var_Ixx_9001.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 170)) ;
        }
        test_3 = test_5.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_uint var_n_9181 = var_Ixx_9001.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)) ;
          GGS_integerDeclarationAST var_declaration_9244 = GGS_integerDeclarationAST::init_21__21_ (GGS_bool (true), var_n_9181, inCompiler COMMA_HERE) ;
          callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_9244.ptr (), var_precedenceGraph_7917, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 173)) ;
          {
          routine_appendSignedOperatorsTo_3F__26_ (enumerator_8405.current_mValue (HERE), var_precedenceGraph_7917, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 175)) ;
          }
          var_addintegerTypeCount_8374.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)) ;
        }
      }
    }
    enumerator_8405.gotoNextObject () ;
  }
  GGS_compileTimeDeclarationBarrierAST var_compileTimeDeclarationBarrierAST_9606 = GGS_compileTimeDeclarationBarrierAST::init (inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_compileTimeDeclarationBarrierAST *) var_compileTimeDeclarationBarrierAST_9606.ptr (), var_precedenceGraph_7917, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 183)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    GGS_bool test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 185)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_7.boolEnum ()) {
      test_7 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()) ;
    }
    test_6 = test_7.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      routine_print_3F_ (GGS_string ("    Added ").add_operation (var_addintegerTypeCount_8374.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)).add_operation (GGS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    GGS_bool test_9 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 189)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_9.boolEnum ()) {
      test_9 = GGS_bool (gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile.readProperty_value ()) ;
    }
    test_8 = test_9.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_string var_s_10151 = var_precedenceGraph_7917.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 190)) ;
      GGS_string var_filePath_10190 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 191)) ;
      GGS_bool joker_10295 ; // Joker input parameter
      var_s_10151.method_writeToFileWhenDifferentContents (var_filePath_10190, joker_10295, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 192)) ;
    }
  }
  GGS_declarationListAST temp_10 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 195)) ;
  outArgument_outSortedDeclarationListAST = temp_10 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::greaterThan, var_precedenceGraph_7917.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 196)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      UpEnumerator_lstringlist enumerator_10475 (var_precedenceGraph_7917.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 197))) ;
      while (enumerator_10475.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_10475.current_mValue (HERE).readProperty_location (), enumerator_10475.current_mValue (HERE).readProperty_string ().add_operation (GGS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 198)), fixItArray12  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 198)) ;
        enumerator_10475.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    GGS_declarationListAST var_unsortedSemanticDeclarationListAST_10749 ;
    GGS_lstringlist joker_10715 ; // Joker input parameter
    GGS_lstringlist joker_10790 ; // Joker input parameter
    var_precedenceGraph_7917.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_10715, var_unsortedSemanticDeclarationListAST_10749, joker_10790, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 201)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_10749.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 207)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GGS_string var_s_10868 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_10749.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 209)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 208)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 209)) ;
        UpEnumerator_declarationListAST enumerator_11043 (var_unsortedSemanticDeclarationListAST_10749) ;
        while (enumerator_11043.hasCurrentObject ()) {
          var_s_10868.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11043.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)) ;
          enumerator_11043.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_10868, fixItArray14  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)) ;
        UpEnumerator_declarationListAST enumerator_11226 (var_unsortedSemanticDeclarationListAST_10749) ;
        while (enumerator_11226.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11226.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), GGS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11226.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)).add_operation (GGS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)) ;
          enumerator_11226.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildSemanticContext?sourceFile?ast&staticEntityMap&staticlistValues!context!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildSemanticContext_3F_sourceFile_3F_ast_26_staticEntityMap_26_staticlistValues_21_context_21__21__21__21_ (const GGS_lstring constinArgument_inSourceFile,
                                                                                                                          const GGS_ast constinArgument_inAST,
                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                          GGS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                                                                                          GGS_semanticContext & outArgument_outSemanticContext,
                                                                                                                          GGS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                                                                                                          GGS_decoratedRegularRoutineList & outArgument_outDecoratedRoutineList,
                                                                                                                          GGS_routineListIR & outArgument_outRoutineListIR,
                                                                                                                          GGS_userLLVMTypeDefinitionListIR & outArgument_outUserLLVMTypeDefinitionListIR,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outUserLLVMTypeDefinitionListIR.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  outArgument_outDecoratedDeclarationList = GGS_declarationDecorationList::init (inCompiler COMMA_HERE) ;
  outArgument_outDecoratedRoutineList = GGS_decoratedRegularRoutineList::init (inCompiler COMMA_HERE) ;
  outArgument_outRoutineListIR = GGS_routineListIR::init (inCompiler COMMA_HERE) ;
  outArgument_outUserLLVMTypeDefinitionListIR = GGS_userLLVMTypeDefinitionListIR::init (inCompiler COMMA_HERE) ;
  UpEnumerator_requiredFunctionDeclarationListAST enumerator_16559 (constinArgument_inAST.readProperty_mRequiredFunctionListAST ()) ;
  while (enumerator_16559.hasCurrentObject ()) {
    GGS_lstring var_procedureMangledName_16595 = function_routineMangledNameFromAST (GGS_string::makeEmptyString (), enumerator_16559.current (HERE).readProperty_mName (), enumerator_16559.current (HERE).readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 415)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.plusPlusAssignOperation (var_procedureMangledName_16595.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 420)) ;
    enumerator_16559.gotoNextObject () ;
  }
  extensionMethod_enterExternProcInContext (constinArgument_inAST.readProperty_mExternFunctionListAST (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 422)) ;
  GGS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_16916 = constinArgument_inAST.readProperty_mControlRegisterUserAccesMapAST () ;
  UpEnumerator_declarationListAST enumerator_16994 (constinArgument_inAST.readProperty_mDeclarationListAST ()) ;
  while (enumerator_16994.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((cPtr_abstractDeclarationAST *) enumerator_16994.current_mDeclaration (HERE).ptr (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, var_controlRegisterUserAccesMapAST_16916, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 428)) ;
    enumerator_16994.gotoNextObject () ;
  }
  UpEnumerator_controlRegisterUserAccesMapAST enumerator_17486 (var_controlRegisterUserAccesMapAST_16916) ;
  while (enumerator_17486.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_17486.current_lkey (HERE).readProperty_location (), GGS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas", 441)) ;
    enumerator_17486.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile_3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mGlobalConstantMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 444)) ;
  }
  {
  routine_buildTypeMapHTMLFile_3F__3F__3F__3F__3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mTypeMap (), outArgument_outSemanticContext.readProperty_mRoutineMap (), outArgument_outSemanticContext.readProperty_mInfixOperatorMap (), outArgument_outSemanticContext.readProperty_mPrefixOperatorMap (), outArgument_outSemanticContext.readProperty_mAssignmentOperatorMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 449)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile_3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mControlRegisterGroupMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 458)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.readProperty_mTaskListAST (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 463)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeIntegerType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_compileTimeIntegerType (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas", 130)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 131)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 132)), GGS_typeKind::class_func_compileTimeInteger (SOURCE_FILE ("types.galgas", 133)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeIntegerType = false ;
static GGS_omnibusType gOnceFunctionResult_compileTimeIntegerType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_compileTimeIntegerType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeIntegerType) {
    gOnceFunctionResult_compileTimeIntegerType = onceFunction_compileTimeIntegerType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeIntegerType = true ;
  }
  return gOnceFunctionResult_compileTimeIntegerType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeIntegerType (void) {
  gOnceFunctionResult_compileTimeIntegerType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeIntegerType (nullptr,
                                                                  releaseOnceFunctionResult_compileTimeIntegerType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compileTimeIntegerType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compileTimeIntegerType (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_compileTimeIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeIntegerType ("compileTimeIntegerType",
                                                                        functionWithGenericHeader_compileTimeIntegerType,
                                                                        & kTypeDescriptor_GALGAS_omnibusType,
                                                                        0,
                                                                        functionArgs_compileTimeIntegerType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeBoolType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_compileTimeBoolType (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas", 142)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 143)), function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 144)), GGS_typeKind::class_func_compileTimeBool (SOURCE_FILE ("types.galgas", 145)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeBoolType = false ;
static GGS_omnibusType gOnceFunctionResult_compileTimeBoolType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_compileTimeBoolType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeBoolType) {
    gOnceFunctionResult_compileTimeBoolType = onceFunction_compileTimeBoolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeBoolType = true ;
  }
  return gOnceFunctionResult_compileTimeBoolType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeBoolType (void) {
  gOnceFunctionResult_compileTimeBoolType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeBoolType (nullptr,
                                                               releaseOnceFunctionResult_compileTimeBoolType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compileTimeBoolType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compileTimeBoolType (Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_compileTimeBoolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeBoolType ("compileTimeBoolType",
                                                                     functionWithGenericHeader_compileTimeBoolType,
                                                                     & kTypeDescriptor_GALGAS_omnibusType,
                                                                     0,
                                                                     functionArgs_compileTimeBoolType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'boolType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_boolType (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas", 154)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 155)).operator_or (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas", 155)) COMMA_SOURCE_FILE ("types.galgas", 155)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 156)), GGS_typeKind::class_func_boolean (SOURCE_FILE ("types.galgas", 157)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 158)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_boolType = false ;
static GGS_omnibusType gOnceFunctionResult_boolType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_boolType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolType) {
    gOnceFunctionResult_boolType = onceFunction_boolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolType = true ;
  }
  return gOnceFunctionResult_boolType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_boolType (void) {
  gOnceFunctionResult_boolType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_boolType (nullptr,
                                                    releaseOnceFunctionResult_boolType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_boolType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_boolType (Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GGS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_boolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_boolType ("boolType",
                                                          functionWithGenericHeader_boolType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_boolType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'literalStringType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_literalStringType (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_literalString (SOURCE_FILE ("types.galgas", 166)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas", 167)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 167)) COMMA_SOURCE_FILE ("types.galgas", 167)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 168)), GGS_typeKind::class_func_literalString (SOURCE_FILE ("types.galgas", 169)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 170)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_literalStringType = false ;
static GGS_omnibusType gOnceFunctionResult_literalStringType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_literalStringType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_literalStringType) {
    gOnceFunctionResult_literalStringType = onceFunction_literalStringType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_literalStringType = true ;
  }
  return gOnceFunctionResult_literalStringType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_literalStringType (void) {
  gOnceFunctionResult_literalStringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_literalStringType (nullptr,
                                                             releaseOnceFunctionResult_literalStringType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_literalStringType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_literalStringType (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_omnibusType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'voidType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_voidType (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas", 178)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString (), GGS_typeKind::class_func_void (SOURCE_FILE ("types.galgas", 181)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_voidType = false ;
static GGS_omnibusType gOnceFunctionResult_voidType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_voidType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_voidType) {
    gOnceFunctionResult_voidType = onceFunction_voidType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_voidType = true ;
  }
  return gOnceFunctionResult_voidType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_voidType (void) {
  gOnceFunctionResult_voidType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_voidType (nullptr,
                                                    releaseOnceFunctionResult_voidType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_voidType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_voidType (Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GGS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_voidType) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildTypeMapHTMLFile??????sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildTypeMapHTMLFile_3F__3F__3F__3F__3F__3F_sourceFile (const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                                                     const GGS_routineMapForContext constinArgument_inRoutineMap,
                                                                     const GGS_infixOperatorMap constinArgument_inTerminusInfixOperatorMap,
                                                                     const GGS_prefixOperatorMap constinArgument_inTerminusPrefixOperatorMap,
                                                                     const GGS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                                                     const GGS_lstring constinArgument_inSourceFile,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_typeDumpFilePath_15613 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 387)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitTypeMap.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 389)) ;
      GGS_stringset var_firstLetterSet_15740 = temp_1 ;
      UpEnumerator_unifiedTypeMap enumerator_15775 (constinArgument_inTypeMap) ;
      while (enumerator_15775.hasCurrentObject ()) {
        var_firstLetterSet_15740.plusPlusAssignOperation (enumerator_15775.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 391)).getter_string (SOURCE_FILE ("types.galgas", 391))  COMMA_SOURCE_FILE ("types.galgas", 391)) ;
        enumerator_15775.gotoNextObject () ;
      }
      GGS_string var_tableOfTypeString_15885 = GGS_string::makeEmptyString () ;
      GGS_char var_currentFirstLetter_15922 = GGS_char (TO_UNICODE (32)) ;
      UpEnumerator_unifiedTypeMap enumerator_15966 (constinArgument_inTypeMap) ;
      while (enumerator_15966.hasCurrentObject ()) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, var_currentFirstLetter_15922.objectCompare (enumerator_15966.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 396)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_currentFirstLetter_15922 = enumerator_15966.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 397)) ;
            var_tableOfTypeString_15885.plusAssignOperation(GGS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_15922.getter_uint (SOURCE_FILE ("types.galgas", 398)).getter_string (SOURCE_FILE ("types.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)).add_operation (GGS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)).add_operation (var_currentFirstLetter_15922.getter_string (SOURCE_FILE ("types.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)).add_operation (GGS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 398)) ;
          }
        }
        var_tableOfTypeString_15885.plusAssignOperation(function_linkForHTMLTypeMap (enumerator_15966.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 400)).add_operation (GGS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 400)) ;
        enumerator_15966.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_16360 = GGS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("types.galgas", 403)), constinArgument_inTypeMap, var_firstLetterSet_15740, var_tableOfTypeString_15885, constinArgument_inRoutineMap, constinArgument_inTerminusInfixOperatorMap, constinArgument_inTerminusPrefixOperatorMap, constinArgument_inAssignmentOperatorMap COMMA_SOURCE_FILE ("types.galgas", 402))) ;
      GGS_bool joker_16723 ; // Joker input parameter
      var_typeDumpString_16360.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_15613, joker_16723, inCompiler COMMA_SOURCE_FILE ("types.galgas", 412)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_15613, inCompiler COMMA_SOURCE_FILE ("types.galgas", 414)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate dump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (Compiler * inCompiler,
                                                                const GGS_string & in_PROJECT_5F_NAME,
                                                                const GGS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                const GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                const GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING,
                                                                const GGS_routineMapForContext & in_ALL_5F_ROUTINE_5F_MAP,
                                                                const GGS_infixOperatorMap & in_INFIX_5F_OPERATOR_5F_MAP,
                                                                const GGS_prefixOperatorMap & in_PREFIX_5F_OPERATOR_5F_MAP,
                                                                const GGS_assignmentOperatorMap & in_ASSIGNMENT_5F_OPERATOR_5F_MAP
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Global constants of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</title>\n<style type=\"text/css\">body {\n  font-family: Georgia, sans-serif ;\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Types defined by ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</h1>\n<p>This document lists all ") ;
  result.appendString (in_GLOBAL_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" defined types, sorted by name.</p>\n<p>") ;
  GGS_uint index_989_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_989 (in_FIRST_5F_LETTER_5F_SET) ;
    while (enumerator_989.hasCurrentObject ()) {
      result.appendString ("<a class=\"header_link\" href=\"#") ;
      result.appendString (enumerator_989.current_key (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_989.current_key (HERE).stringValue ()) ;
      result.appendString ("</a>") ;
      enumerator_989.gotoNextObject () ;
      if (enumerator_989.hasCurrentObject ()) {
        result.appendString (" - ") ;
      }
      index_989_.increment () ;
    }
  }
  result.appendString ("</p>\n<p>") ;
  result.appendString (in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue ()) ;
  result.appendString ("\n</p>\n") ;
  GGS_uint index_1174_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    UpEnumerator_unifiedTypeMap enumerator_1174 (in_GLOBAL_5F_TYPE_5F_MAP) ;
    while (enumerator_1174.hasCurrentObject ()) {
      result.appendString ("\n<h2>\n  <a name=\"") ;
      result.appendString (enumerator_1174.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1174.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</a>\n</h2>\n<p>\nKind: ") ;
      result.appendString (callExtensionGetter_descriptionForHTMLFile ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).stringValue ()) ;
      result.appendString ("<br>\nDescription: ") ;
      result.appendString (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 69)).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("<br>\nLLVM Base Name: ") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).readProperty_llvmBaseTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("<i>none, compile time type</i>").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).readProperty_llvmBaseTypeName ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("<br>\nLLVM Name: ") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("<i>none, compile time type</i>").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("\n</p>\n") ;
      enumerator_1174.gotoNextObject () ;
      index_1174_.increment () ;
    }
  }
  result.appendString ("\n<p>\n<h2>\n  Routines\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Standalone routine Name</td>\n      <td class=\"result_title\">Visibility</td>\n      <td class=\"result_title\">Typed signature</td>\n      <td class=\"result_title\">Routine LLVM Name, by mode</td>\n    </tr>\n  ") ;
  GGS_uint index_2119_ (0) ;
  if (in_ALL_5F_ROUTINE_5F_MAP.isValid ()) {
    UpEnumerator_routineMapForContext enumerator_2119 (in_ALL_5F_ROUTINE_5F_MAP) ;
    while (enumerator_2119.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_2119.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      const GalgasBool test_2 = enumerator_2119.current_mIsPublic (HERE).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("public").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (GGS_string ("private").stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("</td>\n      <td>") ;
      result.appendString (extensionGetter_typedString (enumerator_2119.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue ()) ;
      const GalgasBool test_3 = enumerator_2119.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (" -> ") ;
        result.appendString (extensionGetter_key (enumerator_2119.current_mReturnTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("</td>\n      <td>") ;
      GGS_uint index_2478_ (0) ;
      if (enumerator_2119.current_mModeDictionary (HERE).isValid ()) {
        UpEnumerator_routineLLVMNameDict enumerator_2478 (enumerator_2119.current_mModeDictionary (HERE)) ;
        while (enumerator_2478.hasCurrentObject ()) {
          result.appendString (extensionGetter_string (enumerator_2478.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 90)).stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (enumerator_2478.current_llvmName (HERE).stringValue ()) ;
          enumerator_2478.gotoNextObject () ;
          if (enumerator_2478.hasCurrentObject ()) {
            result.appendString ("<br>") ;
          }
          index_2478_.increment () ;
        }
      }
      result.appendString ("</td>\n    </tr>\n  ") ;
      enumerator_2119.gotoNextObject () ;
      index_2119_.increment () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<p>\n<h2>\n  Infix Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Infix operator</td>\n      <td class=\"result_title\">Result Type</td>\n    </tr>\n  ") ;
  GGS_uint index_2836_ (0) ;
  if (in_INFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    UpEnumerator_infixOperatorMap enumerator_2836 (in_INFIX_5F_OPERATOR_5F_MAP) ;
    while (enumerator_2836.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_2836.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      result.appendString (enumerator_2836.current_mResultType (HERE).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      enumerator_2836.gotoNextObject () ;
      index_2836_.increment () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<p>\n<h2>\n  Prefix Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Prefix operator</td>\n      <td class=\"result_title\">Result Type</td>\n    </tr>\n  ") ;
  GGS_uint index_3259_ (0) ;
  if (in_PREFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    UpEnumerator_prefixOperatorMap enumerator_3259 (in_PREFIX_5F_OPERATOR_5F_MAP) ;
    while (enumerator_3259.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_3259.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      result.appendString (enumerator_3259.current_mResultType (HERE).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      enumerator_3259.gotoNextObject () ;
      index_3259_.increment () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<h2>\n  Assignment Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Operator</td>\n    </tr>\n  ") ;
  GGS_uint index_3604_ (0) ;
  if (in_ASSIGNMENT_5F_OPERATOR_5F_MAP.isValid ()) {
    UpEnumerator_assignmentOperatorMap enumerator_3604 (in_ASSIGNMENT_5F_OPERATOR_5F_MAP) ;
    while (enumerator_3604.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_3604.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      enumerator_3604.gotoNextObject () ;
      index_3604_.increment () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n</div>\n</body>\n</html>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForHTMLTypeMap'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_linkForHTMLTypeMap (const GGS_string & constinArgument_inTypeName,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 437)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 437)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 437)).add_operation (GGS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 437)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_linkForHTMLTypeMap (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_linkForHTMLTypeMap (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'declareLLVMTypes?&'
//
//--------------------------------------------------------------------------------------------------

void routine_declareLLVMTypes_3F__26_ (const GGS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                                       GGS_string & ioArgument_ioLLVMcode,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("User Defined Types"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 449)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("%ptrtype = type i8* ; Generic pointer type for dynamic objects\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 450)) ;
  UpEnumerator_userLLVMTypeDefinitionListIR enumerator_18298 (constinArgument_inUserLLVMTypeDefinitionListIR) ;
  while (enumerator_18298.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMType ((cPtr_userLLVMTypeDefinitionIR *) enumerator_18298.current_mType (HERE).ptr (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("types.galgas", 452)) ;
    enumerator_18298.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 454)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'checkAssignmentCompatibility'
//
//--------------------------------------------------------------------------------------------------

GGS_objectIR function_checkAssignmentCompatibility (const GGS_assignmentOperatorMap & constinArgument_inAssignmentOperatorMap,
                                                    const GGS_objectIR & constinArgument_inSourceValue,
                                                    const GGS_omnibusType & constinArgument_inOptionalTargetAnnotationType,
                                                    const GGS_location & constinArgument_inErrorLocation,
                                                    const GGS_bool & constinArgument_inStaticTypeAllowed,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOptionalTargetAnnotationType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 15)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inSourceValue ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inStaticTypeAllowed.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_lstring var_key_1075 = function_assignmentOperatorKey (constinArgument_inOptionalTargetAnnotationType, GGS_location::class_func_nowhere (SOURCE_FILE ("semantic-analysis.galgas", 20)), extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
      GGS_abstractAssignmentOperatorUsage joker_1213 ; // Joker input parameter
      constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_1075, joker_1213, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
      result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 22)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 25)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the ").add_operation (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)).add_operation (GGS_string (" compile time type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), fixItArray4  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::equal, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)).objectCompare (function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            result_result = extensionGetter_withType (constinArgument_inSourceValue, function_boolType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)) ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_checkAssignmentCompatibility [6] = {
  & kTypeDescriptor_GALGAS_assignmentOperatorMap,
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_checkAssignmentCompatibility (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GGS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_assignmentOperatorMap operand0 = GGS_assignmentOperatorMap::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                       inCompiler
                                                                                       COMMA_THERE) ;
  const GGS_objectIR operand1 = GGS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_location operand3 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_bool operand4 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                operand4,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              5,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempValue?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempValue_3F__26__21_ (const GGS_omnibusType constinArgument_inType,
                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GGS_objectIR & outArgument_outTempVariable,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 65)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outTempVariable = GGS_objectIR::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 66)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_llvmName_3023 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3023, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 68)) ;
    }
    outArgument_outTempVariable = GGS_objectIR::class_func_llvmNamedValue (constinArgument_inType, var_llvmName_3023  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 69)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempReference?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempReference_3F__26__21_ (const GGS_omnibusType constinArgument_inType,
                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GGS_objectIR & outArgument_outTempVariable,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 80)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outTempVariable = GGS_objectIR::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 81)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_llvmName_3450 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3450, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 83)) ;
    }
    outArgument_outTempVariable = GGS_objectIR::class_func_reference (constinArgument_inType, var_llvmName_3450  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 84)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysis?sourceFile?ast?allSourceFilePaths?decoratedDeclarationList?decoratedRoutineList?routineListIR?context?endOfSourceFile?staticEntityMap!intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysis_3F_sourceFile_3F_ast_3F_allSourceFilePaths_3F_decoratedDeclarationList_3F_decoratedRoutineList_3F_routineListIR_3F_context_3F_endOfSourceFile_3F_staticEntityMap_21_intermediateCode (const GGS_string /* constinArgument_inSourceFile */,
                                                                                                                                                                                                                    const GGS_ast constinArgument_inAST,
                                                                                                                                                                                                                    const GGS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                                                                                                                                                                                                    const GGS_declarationDecorationList constinArgument_inDecoratedDeclarationList,
                                                                                                                                                                                                                    const GGS_decoratedRegularRoutineList constinArgument_inDecoratedRoutineList,
                                                                                                                                                                                                                    const GGS_routineListIR constinArgument_inRoutineListIR,
                                                                                                                                                                                                                    const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                                                                                                                                    const GGS_location constinArgument_inEndOfSourceFile,
                                                                                                                                                                                                                    const GGS_staticEntityMap constinArgument_inStaticEntityMap,
                                                                                                                                                                                                                    GGS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                                                                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GGS_intermediateCodeStruct::init (inCompiler COMMA_HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mRoutineListIR = constinArgument_inRoutineListIR ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.readProperty_mTargetParameters () ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticEntityMap = constinArgument_inStaticEntityMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.readProperty_mGlobalTaskVariableList () ;
  GGS_semanticTemporariesStruct var_temporaries_4620 = GGS_semanticTemporariesStruct::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationDecorationList enumerator_4645 (constinArgument_inDecoratedDeclarationList) ;
  while (enumerator_4645.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((cPtr_abstractDecoratedDeclaration *) enumerator_4645.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4620, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 110)) ;
    enumerator_4645.gotoNextObject () ;
  }
  extensionMethod_routineSemanticAnalysis (constinArgument_inDecoratedRoutineList, constinArgument_inSemanticContext, var_temporaries_4620, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.readProperty_mExternFunctionListAST (), constinArgument_inSemanticContext, var_temporaries_4620, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 122)) ;
  {
  routine_appendPanicRoutines_3F_allSourceFilePaths_26_intermediateCode (constinArgument_inSourceFileAbsolutePathSet, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 128)) ;
  }
  {
  routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 133)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimeBoolAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compiletimeBoolAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compiletimeBoolAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1031 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 21)) ;
  {
  const GGS_compiletimeBoolAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1031, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 22)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimeBoolAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compiletimeBoolAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 28)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'ctBoolTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_ctBoolTypeName (Compiler *
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ctBool") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_ctBoolTypeName = false ;
static GGS_string gOnceFunctionResult_ctBoolTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_ctBoolTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctBoolTypeName) {
    gOnceFunctionResult_ctBoolTypeName = onceFunction_ctBoolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctBoolTypeName = true ;
  }
  return gOnceFunctionResult_ctBoolTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_ctBoolTypeName (void) {
  gOnceFunctionResult_ctBoolTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_ctBoolTypeName (nullptr,
                                                          releaseOnceFunctionResult_ctBoolTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_ctBoolTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_ctBoolTypeName (Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_ctBoolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_ctBoolTypeName ("ctBoolTypeName",
                                                                functionWithGenericHeader_ctBoolTypeName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                0,
                                                                functionArgs_ctBoolTypeName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compiletimeBoolAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                     GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                     GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                     GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                     GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_ctBoolTypeName_2451 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 51)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 51)) ;
  GGS_omnibusType var_ctBoolType_2502 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 52)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctBoolTypeName_2451, var_ctBoolType_2502, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 54)) ;
  }
  GGS_lstring var_key_2664 = function_prefixOperatorMapKey (var_ctBoolType_2502, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 56)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2664, var_ctBoolType_2502, var_ctBoolType_2502, GGS_compileTimeBoolNotOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 57)) ;
  }
  var_key_2664 = function_infixOperatorMapKey (var_ctBoolType_2502, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), var_ctBoolType_2502, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 59)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2664, var_ctBoolType_2502, GGS_compileTimeBoolOrOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 60)) ;
  }
  var_key_2664 = function_infixOperatorMapKey (var_ctBoolType_2502, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), var_ctBoolType_2502, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 62)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2664, var_ctBoolType_2502, GGS_compileTimeBoolXorOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 63)) ;
  }
  var_key_2664 = function_infixOperatorMapKey (var_ctBoolType_2502, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), var_ctBoolType_2502, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2664, var_ctBoolType_2502, GGS_compileTimeBoolEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 66)) ;
  }
  var_key_2664 = GGS_lstring::init_21__21_ (var_ctBoolType_2502.readProperty_omnibusTypeDescriptionName (), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 68)), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2664, GGS_compileTimeBoolImplicitConverterToBoolean::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 69)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolImplicitConverterToBoolean generateConvertToBooleanCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                                          const GGS_location /* constinArgument_inErrorLocation */,
                                                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_4524 ;
  GGS_omnibusType joker_4508_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_4508_1, var_receiverValue_4524, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 89)) ;
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_compileTime (GGS_bool (ComparisonKind::notEqual, var_receiverValue_4524.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90))))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolNotOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolNotOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                           const GGS_location /* constinArgument_inOperatorLocation */,
                                                           const GGS_omnibusType constinArgument_inResultType,
                                                           const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                           const GGS_bool /* constinArgument_inSafeMode */,
                                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                           GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                           GGS_objectIR & outArgument_outResultValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_5479 ;
  GGS_omnibusType joker_5463_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_5463_1, var_receiverValue_5479, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 112)) ;
  GGS_bigint temp_0 ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, var_receiverValue_5479.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
  }
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, temp_0  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolEqualOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location /* constinArgument_inOperatorLocation */,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_6454 ;
  GGS_omnibusType joker_6438_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_6438_1, var_leftValue_6454, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 135)) ;
  GGS_bigint var_rightValue_6521 ;
  GGS_omnibusType joker_6505_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_6505_1, var_rightValue_6521, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 136)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::equal, var_leftValue_6454.objectCompare (var_rightValue_6521)).getter_bigint (SOURCE_FILE ("compile-time-type-bool.galgas", 137))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 137)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolXorOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolXorOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                           const GGS_location /* constinArgument_inOperatorLocation */,
                                                           const GGS_objectIR constinArgument_inRightOperand,
                                                           const GGS_omnibusType constinArgument_inResultType,
                                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                           GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                           GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                           GGS_objectIR & outArgument_outResultValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_7342 ;
  GGS_omnibusType joker_7326_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_7326_1, var_leftValue_7342, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 157)) ;
  GGS_bigint var_rightValue_7409 ;
  GGS_omnibusType joker_7393_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_7393_1, var_rightValue_7409, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 158)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_7342.operator_xor (var_rightValue_7409 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 159))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 159)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolOrOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolOrOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_8227 ;
  GGS_omnibusType joker_8211_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_8211_1, var_leftValue_8227, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 179)) ;
  GGS_bigint var_rightValue_8294 ;
  GGS_omnibusType joker_8278_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_8278_1, var_rightValue_8294, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 180)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_8227.operator_or (var_rightValue_8294 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 181))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 181)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeIntAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeIntAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1028 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 21)) ;
  {
  const GGS_compileTimeIntAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1028, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1028, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 23)) COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeIntAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeIntAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'ctIntegerTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_ctIntegerTypeName (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ctInt") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_ctIntegerTypeName = false ;
static GGS_string gOnceFunctionResult_ctIntegerTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_ctIntegerTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctIntegerTypeName) {
    gOnceFunctionResult_ctIntegerTypeName = onceFunction_ctIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctIntegerTypeName = true ;
  }
  return gOnceFunctionResult_ctIntegerTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_ctIntegerTypeName (void) {
  gOnceFunctionResult_ctIntegerTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_ctIntegerTypeName (nullptr,
                                                             releaseOnceFunctionResult_ctIntegerTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_ctIntegerTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_ctIntegerTypeName (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_ctIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_ctIntegerTypeName ("ctIntegerTypeName",
                                                                   functionWithGenericHeader_ctIntegerTypeName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_ctIntegerTypeName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                    GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                    GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                    GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                    GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                    GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                    GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_ctIntegerTypeName_2525 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 52)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 52)) ;
  GGS_omnibusType var_ctInt_2582 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 53)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctIntegerTypeName_2525, var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 55)) ;
  }
  GGS_lstring var_key_2738 = function_prefixOperatorMapKey (var_ctInt_2582, GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("compile-time-type-int.galgas", 57)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 57)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, var_ctInt_2582, GGS_compileTimeIntComplementOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 58)) ;
  }
  var_key_2738 = function_prefixOperatorMapKey (var_ctInt_2582, GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("compile-time-type-int.galgas", 60)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 60)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, var_ctInt_2582, GGS_compileTimeIntMinusOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 61)) ;
  }
  var_key_2738 = function_prefixOperatorMapKey (var_ctInt_2582, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 63)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, var_ctInt_2582, GGS_compileTimeIntMinusOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 64)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("compile-time-type-int.galgas", 66)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 66)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 66)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntBitWiseAndOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 67)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-type-int.galgas", 69)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 69)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 69)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntBitWiseOrOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 70)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-type-int.galgas", 72)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 72)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntXorOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 73)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("compile-time-type-int.galgas", 75)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 75)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntAddOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 76)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 78)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 78)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 78)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntAddOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 79)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("compile-time-type-int.galgas", 81)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 81)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 81)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntSubtractOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 82)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 84)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 84)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 84)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntSubtractOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 85)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("compile-time-type-int.galgas", 87)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 87)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntMultiplyOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 88)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("compile-time-type-int.galgas", 90)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 90)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 90)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntDivideOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 91)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 93)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 93)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 93)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntDivideZeroOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 94)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("compile-time-type-int.galgas", 96)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 96)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 96)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntModuloOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 97)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 99)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 99)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 99)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntModuloZeroOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 100)) ;
  }
  GGS_omnibusType var_ctBoolType_5544 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 102)) ;
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("compile-time-type-int.galgas", 103)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 103)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 103)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctBoolType_5544, GGS_compileTimeIntEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 104)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("compile-time-type-int.galgas", 106)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 106)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 106)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctBoolType_5544, GGS_compileTimeIntLessThanOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 107)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("compile-time-type-int.galgas", 109)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 109)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 109)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctBoolType_5544, GGS_compileTimeIntLowerOrEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 110)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 112)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 112)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 112)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntShiftLeftOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 113)) ;
  }
  var_key_2738 = function_infixOperatorMapKey (var_ctInt_2582, GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 115)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 115)), var_ctInt_2582, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 115)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2738, var_ctInt_2582, GGS_compileTimeIntShiftRightOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 116)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntModuloOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location constinArgument_inOperatorLocation,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_7355 ;
  GGS_omnibusType joker_7339_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_7339_1, var_rightValue_7355, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 138)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_7355.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 139)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 140)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_7535 ;
    GGS_omnibusType joker_7519_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_7519_1, var_leftValue_7535, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 142)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_7535.modulo_operation (var_rightValue_7355, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 143))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 143)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntModuloZeroOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloZeroOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_8377 ;
  GGS_omnibusType joker_8361_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_8361_1, var_rightValue_8377, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 164)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_8377.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 165)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 166))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 166)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_8548 ;
    GGS_omnibusType joker_8532_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_8532_1, var_leftValue_8548, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 168)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_8548.modulo_operation (var_rightValue_8377, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 169))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 169)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntDivideOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location constinArgument_inOperatorLocation,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_9375 ;
  GGS_omnibusType joker_9359_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_9359_1, var_rightValue_9375, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 190)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_9375.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 191)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 192)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_9555 ;
    GGS_omnibusType joker_9539_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_9539_1, var_leftValue_9555, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 194)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_9555.divide_operation (var_rightValue_9375, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 195))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 195)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntDivideZeroOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideZeroOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_10395 ;
  GGS_omnibusType joker_10379_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_10379_1, var_rightValue_10395, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 216)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_10395.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 217)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 218))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 218)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_10566 ;
    GGS_omnibusType joker_10550_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_10550_1, var_leftValue_10566, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 220)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_10566.divide_operation (var_rightValue_10395, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 221))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 221)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntMultiplyOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMultiplyOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_11401 ;
  GGS_omnibusType joker_11385_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_11385_1, var_leftValue_11401, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 242)) ;
  GGS_bigint var_rightValue_11468 ;
  GGS_omnibusType joker_11452_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_11452_1, var_rightValue_11468, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 243)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_11401.multiply_operation (var_rightValue_11468, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 244))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 244)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntSubtractOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntSubtractOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_12296 ;
  GGS_omnibusType joker_12280_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_12280_1, var_leftValue_12296, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 264)) ;
  GGS_bigint var_rightValue_12363 ;
  GGS_omnibusType joker_12347_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_12347_1, var_rightValue_12363, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 265)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_12296.substract_operation (var_rightValue_12363, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 266))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 266)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntEqualOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                            const GGS_location /* constinArgument_inOperatorLocation */,
                                                            const GGS_objectIR constinArgument_inRightOperand,
                                                            const GGS_omnibusType constinArgument_inResultType,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                            GGS_objectIR & outArgument_outResultValue,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_13185 ;
  GGS_omnibusType joker_13169_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_13169_1, var_leftValue_13185, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 286)) ;
  GGS_bigint var_rightValue_13252 ;
  GGS_omnibusType joker_13236_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_13236_1, var_rightValue_13252, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 287)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::equal, var_leftValue_13185.objectCompare (var_rightValue_13252)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 288))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 288)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntAddOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAddOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_14071 ;
  GGS_omnibusType joker_14055_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_14055_1, var_leftValue_14071, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 308)) ;
  GGS_bigint var_rightValue_14138 ;
  GGS_omnibusType joker_14122_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_14122_1, var_rightValue_14138, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 309)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_14071.add_operation (var_rightValue_14138, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 310))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 310)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntBitWiseAndOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseAndOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_14970 ;
  GGS_omnibusType joker_14954_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_14954_1, var_leftValue_14970, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 330)) ;
  GGS_bigint var_rightValue_15037 ;
  GGS_omnibusType joker_15021_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_15021_1, var_rightValue_15037, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 331)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_14970.operator_and (var_rightValue_15037 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 332))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 332)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntShiftLeftOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftLeftOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                const GGS_location constinArgument_inOperatorLocation,
                                                                const GGS_objectIR constinArgument_inRightOperand,
                                                                const GGS_omnibusType constinArgument_inResultType,
                                                                GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GGS_objectIR & outArgument_outResultValue,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_15861 ;
  GGS_omnibusType joker_15845_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_15845_1, var_rightValue_15861, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 352)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_rightValue_15861.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 353)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time left shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 354)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_16064 ;
    GGS_omnibusType joker_16048_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_16048_1, var_leftValue_16064, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 356)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_16064.left_shift_operation (var_rightValue_15861, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 357))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 357)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntShiftRightOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftRightOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location constinArgument_inOperatorLocation,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_16898 ;
  GGS_omnibusType joker_16882_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_16882_1, var_rightValue_16898, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 378)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_rightValue_16898.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 379)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time right shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 380)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_17102 ;
    GGS_omnibusType joker_17086_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_17086_1, var_leftValue_17102, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 382)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_17102.right_shift_operation (var_rightValue_16898, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 383))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 383)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntLessThanOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLessThanOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_17938 ;
  GGS_omnibusType joker_17922_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_17922_1, var_leftValue_17938, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 404)) ;
  GGS_bigint var_rightValue_18005 ;
  GGS_omnibusType joker_17989_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_17989_1, var_rightValue_18005, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 405)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::lowerThan, var_leftValue_17938.objectCompare (var_rightValue_18005)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 406))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 406)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntLowerOrEqualOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLowerOrEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                   const GGS_location /* constinArgument_inOperatorLocation */,
                                                                   const GGS_objectIR constinArgument_inRightOperand,
                                                                   const GGS_omnibusType constinArgument_inResultType,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResultValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_18841 ;
  GGS_omnibusType joker_18825_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_18825_1, var_leftValue_18841, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 426)) ;
  GGS_bigint var_rightValue_18908 ;
  GGS_omnibusType joker_18892_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_18892_1, var_rightValue_18908, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 427)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::lowerOrEqual, var_leftValue_18841.objectCompare (var_rightValue_18908)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 428))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 428)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntXorOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntXorOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_19727 ;
  GGS_omnibusType joker_19711_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_19711_1, var_leftValue_19727, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 448)) ;
  GGS_bigint var_rightValue_19794 ;
  GGS_omnibusType joker_19778_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_19778_1, var_rightValue_19794, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 449)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_19727.operator_xor (var_rightValue_19794 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 450))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 450)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntBitWiseOrOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseOrOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                const GGS_location /* constinArgument_inOperatorLocation */,
                                                                const GGS_objectIR constinArgument_inRightOperand,
                                                                const GGS_omnibusType constinArgument_inResultType,
                                                                GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GGS_objectIR & outArgument_outResultValue,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_20624 ;
  GGS_omnibusType joker_20608_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_20608_1, var_leftValue_20624, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 470)) ;
  GGS_bigint var_rightValue_20691 ;
  GGS_omnibusType joker_20675_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_20675_1, var_rightValue_20691, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 471)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_20624.operator_or (var_rightValue_20691 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 472))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 472)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntMinusOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMinusOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                            const GGS_location /* constinArgument_inOperatorLocation */,
                                                            const GGS_omnibusType constinArgument_inResultType,
                                                            const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                            const GGS_bool /* constinArgument_inSafeMode */,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                            GGS_objectIR & outArgument_outResultValue,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_21677 ;
  GGS_omnibusType joker_21661_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_21661_1, var_receiverValue_21677, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 494)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_receiverValue_21677.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 495))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 495)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntComplementOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntComplementOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                                 const GGS_bool /* constinArgument_inSafeMode */,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_22538 ;
  GGS_omnibusType joker_22522_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_22522_1, var_receiverValue_22538, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 515)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_receiverValue_22538.operator_tilde (SOURCE_FILE ("compile-time-type-int.galgas", 516))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 516)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'boolTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_boolTypeName (Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("bool") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GGS_string gOnceFunctionResult_boolTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_boolTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (nullptr,
                                                        releaseOnceFunctionResult_boolTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_boolTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_boolTypeName (Compiler * inCompiler,
                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                          const GGS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolTypeAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_boolTypeAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 17)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolTypeAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1168 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 27)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 27)) ;
  {
  const GGS_boolTypeAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1168, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 28)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1168, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 29)) COMMA_SOURCE_FILE ("type-bool.galgas", 29)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolTypeAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolTypeAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 35)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolTypeAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                              GGS_routineListIR & ioArgument_ioRoutineListIR,
                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_boolTypeName_2473 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 52)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 52)) ;
  GGS_omnibusType var_boolType_2520 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 53)) ;
  GGS_omnibusType var_ctBoolType_2549 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_boolTypeName_2473, var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)) ;
  }
  GGS_lstring var_key_2707 = function_prefixOperatorMapKey (var_boolType_2520, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("type-bool.galgas", 58)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 58)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, var_boolType_2520, GGS_boolNotOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 59)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_boolType_2520, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 61)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 61)), var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 61)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 62)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_ctBoolType_2549, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 63)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 63)), var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 64)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_boolType_2520, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 65)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 65)), var_ctBoolType_2549, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 66)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_boolType_2520, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 68)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 68)), var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 68)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 69)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_ctBoolType_2549, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 70)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 70)), var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 70)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_boolType_2520, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 72)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 72)), var_ctBoolType_2549, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_boolType_2520, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas", 75)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 75)), var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 76)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_ctBoolType_2549, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas", 77)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 77)), var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 77)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)) ;
  }
  var_key_2707 = function_infixOperatorMapKey (var_boolType_2520, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas", 79)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 79)), var_ctBoolType_2549, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2707, var_boolType_2520, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 80)) ;
  }
  var_key_2707 = GGS_lstring::init_21__21_ (var_boolType_2520.readProperty_omnibusTypeDescriptionName (), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 82)), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2707, GGS_boolImplicitConverterToBoolean::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  }
  var_key_2707 = function_assignmentOperatorKey (var_boolType_2520, GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 85)), var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2707, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)) ;
  }
  var_key_2707 = function_assignmentOperatorKey (var_boolType_2520, GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 87)), var_ctBoolType_2549, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2707, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 88)) ;
  }
  GGS_string var_functionName_5090 = function_assignmentOperatorFuncName (var_boolType_2520, var_boolType_2520, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 90)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_simpleAssignmentCopyRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_functionName_5090.getter_nowhere (SOURCE_FILE ("type-bool.galgas", 92)), GGS_bool (false), GGS_bool (false), var_boolType_2520, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-bool.galgas", 91)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolImplicitConverterToBoolean generateConvertToBooleanCode'
//--------------------------------------------------------------------------------------------------

void cPtr_boolImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                               const GGS_location /* constinArgument_inErrorLocation */,
                                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                               GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 116))  COMMA_SOURCE_FILE ("type-bool.galgas", 116)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolNotOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_boolNotOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                const GGS_location /* constinArgument_inOperatorLocation */,
                                                const GGS_omnibusType constinArgument_inResultType,
                                                const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                const GGS_bool /* constinArgument_inSafeMode */,
                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GGS_objectIR & outArgument_outResultValue,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_receiverOperand_6952 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_6952, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 139)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 140)) ;
  }
  GGS_string var_s_7152 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)).add_operation (GGS_string (" = xor i1 1, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)).add_operation (extensionGetter_llvmName (var_receiverOperand_6952, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)) ;
  {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 142)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_7152, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 142)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_typeAliasDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mAliasTypeName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeAliasDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  const GGS_typeAliasDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mAliasTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 49)) ;
  }
  {
  const GGS_typeAliasDeclarationAST temp_2 = this ;
  const GGS_typeAliasDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mAliasTypeName (), temp_3.readProperty_mOriginalTypeName () COMMA_SOURCE_FILE ("type-alias.galgas", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typeAliasDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  result_result = GGS_string ("typealias ").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeAliasDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                          GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_type_3617 ;
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mOriginalTypeName (), var_type_3617, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 74)) ;
  {
  const GGS_typeAliasDeclarationAST temp_1 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mAliasTypeName (), var_type_3617, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 76)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mFixedSizeArrayType (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 46)) ;
  }
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mFixedSizeArrayType (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 47)) ;
  }
  const GGS_fixedSizeArrayTypeDeclarationAST temp_4 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_4.readProperty_mSizeExpression ().ptr (), temp_5.readProperty_mFixedSizeArrayType (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 48)) ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_6 = this ;
  GGS_lstring var_rootNode_2348 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)), temp_6.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_7.readProperty_mFixedSizeArrayType (), var_rootNode_2348 COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_fixedSizeArrayTypeDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("anonymous $").add_operation (temp_0.readProperty_mFixedSizeArrayType ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_fixedSizeArrayTypeDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mFixedSizeArrayType ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                   GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                   GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_elementType_4095 ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mElementTypeName (), var_elementType_4095, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 80)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4095.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 81)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 81)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 82)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4095.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 84)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 84)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be instanciable"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 85)) ;
    }
  }
  GGS_objectIR var_sizeExpressionIR_4619 ;
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_8 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_7.readProperty_mSizeExpression (), temp_8.readProperty_mSizeExpressionLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 93)), var_sizeExpressionIR_4619, inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 88)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_sizeExpressionIR_4619.getter_isLiteralInteger (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mSizeExpressionLocation (), GGS_string ("array size expression is a literal interger expression"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 97)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_bigint var_arraySize_4854 ;
    GGS_omnibusType joker_4839_1 ; // Joker input parameter
    var_sizeExpressionIR_4619.method_extractLiteralInteger (joker_4839_1, var_arraySize_4854, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 99)) ;
    const GGS_fixedSizeArrayTypeDeclarationAST temp_12 = this ;
    GGS_lstring var_omnibusTypeDescriptionName_4940 = GGS_lstring::init_21__21_ (GGS_string ("[").add_operation (var_arraySize_4854.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GGS_string (" • "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (var_elementType_4095.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)), temp_12.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
    const GGS_fixedSizeArrayTypeDeclarationAST temp_13 = this ;
    GGS_lstring var_llvmBaseTypeName_5086 = GGS_lstring::init_21__21_ (var_elementType_4095.readProperty_llvmBaseTypeName ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)).add_operation (var_arraySize_4854.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)), temp_13.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_4940.readProperty_string () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 103)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GGS_omnibusType var_type_5339 ;
        extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_4940, var_type_5339, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 104)) ;
        {
        const GGS_fixedSizeArrayTypeDeclarationAST temp_15 = this ;
        extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mFixedSizeArrayType (), var_type_5339, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 105)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      GGS_constantMap var_constantMap_5570 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_16 = this ;
      var_constantMap_5570.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("count"), temp_16.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE), var_arraySize_4854, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)).getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_omnibusTypeDescriptionName_4940, var_constantMap_5570, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 113)) ;
      }
      {
      extensionSetter_insertGetter (ioArgument_ioContext, var_omnibusTypeDescriptionName_4940, GGS_lstring::init_21__21_ (GGS_string ("count"), var_omnibusTypeDescriptionName_4940.readProperty_location (), inCompiler COMMA_HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-fixed-size-array.galgas", 121)), GGS_propertyGetterKind::class_func_constantProperty (GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), var_arraySize_4854  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 118)) ;
      }
      GGS_constructorMap var_constructorMap_6241 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
      {
      var_constructorMap_6241.setter_insertKey (GGS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 127)), GGS_constructorSignature::init (inCompiler COMMA_HERE), GGS_constructorValue::class_func_arrayValue (var_elementType_4095, var_arraySize_4854.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)) ;
      }
      GGS_string var_constructorName_6454 = GGS_string ("(") ;
      UpEnumerator_range enumerator_6512 (GGS_range (GGS_uint (uint32_t (0U)), var_arraySize_4854.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)))) ;
      while (enumerator_6512.hasCurrentObject ()) {
        var_constructorName_6454.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 131)) ;
        enumerator_6512.gotoNextObject () ;
      }
      var_constructorName_6454.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 133)) ;
      {
      var_constructorMap_6241.setter_insertKey (var_constructorName_6454.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 134)), GGS_constructorSignature::init (inCompiler COMMA_HERE), GGS_constructorValue::class_func_arrayValue (var_elementType_4095, var_arraySize_4854.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4940, var_constructorMap_6241, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 135)) ;
      }
      GGS_omnibusTypeAttributes var_typeAttributes_6903 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 137)) ;
      GGS_omnibusType var_arrayType_7024 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_staticSubscript (var_elementType_4095, var_arraySize_4854  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 140)), var_typeAttributes_6903, var_omnibusTypeDescriptionName_4940.readProperty_string (), GGS_typeKind::class_func_staticArrayType (var_elementType_4095, var_arraySize_4854  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 143)), var_llvmBaseTypeName_5086.readProperty_string (), inCompiler COMMA_HERE) ;
      {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_17 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_17.readProperty_mFixedSizeArrayType (), var_arrayType_7024, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 146)) ;
      }
      {
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusTypeDescriptionName_4940, var_arrayType_7024, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 150)) ;
      }
      ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMStaticArrayTypeDefinitionIR::init_21__21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_7024.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 156)), var_elementType_4095, var_arraySize_4854, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 155)) ;
      GGS_string var_assignValueToElements_5F_functionName_7889 = function_assignValueToFixedSizeArrayElements_5F_functionName (var_arrayType_7024, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 161)) ;
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (var_assignValueToElements_5F_functionName_7889.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 163)), GGS_bool (false), GGS_bool (false), var_arrayType_7024, var_elementType_4095, var_arraySize_4854.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 168)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 162)) ;
      GGS_string var_assignmentFunctionLLVMName_8259 = function_assignmentOperatorFuncName (var_arrayType_7024, var_arrayType_7024, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 170)) ;
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_staticArrayTypeAssignFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_assignmentFunctionLLVMName_8259.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 172)), GGS_bool (false), GGS_bool (false), var_arrayType_7024, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 171)) ;
      const GGS_fixedSizeArrayTypeDeclarationAST temp_18 = this ;
      GGS_lstring var_key_8575 = function_assignmentOperatorKey (var_arrayType_7024, temp_18.readProperty_mFixedSizeArrayType ().readProperty_location (), var_arrayType_7024, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 178)) ;
      {
      ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8575, GGS_fixedSizeArrayAssignmentOperatorUsage::init_21__21__21_ (var_elementType_4095, var_arraySize_4854.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)), var_assignValueToElements_5F_functionName_7889, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'assignValueToFixedSizeArrayElements_functionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const GGS_omnibusType & constinArgument_inFixedSizeArrayType,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("assign.value.to.fixed.size.array.").add_operation (constinArgument_inFixedSizeArrayType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 187)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_assignValueToFixedSizeArrayElements_5F_functionName [2] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName (Compiler * inCompiler,
                                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                                 const GGS_location & /* inErrorLocation */
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_assignValueToFixedSizeArrayElements_5F_functionName (operand0,
                                                                       inCompiler
                                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignValueToFixedSizeArrayElements_5F_functionName ("assignValueToFixedSizeArrayElements_functionName",
                                                                                                     functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName,
                                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                                     1,
                                                                                                     functionArgs_assignValueToFixedSizeArrayElements_5F_functionName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@userLLVMStaticArrayTypeDefinitionIR generateLLVMType'
//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMStaticArrayTypeDefinitionIR::method_generateLLVMType (GGS_string & ioArgument_ioLLVMcode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_0 = this ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_1 = this ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GGS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (temp_1.readProperty_mSize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@fixedSizeArrayAssignmentOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      const GGS_omnibusType constinArgument_inTargetType,
                                                                      const GGS_string constinArgument_inTargetLLVMName,
                                                                      const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                      const GGS_location constinArgument_inErrorLocation,
                                                                      const GGS_bool /* constinArgument_inTargetIsInitialized */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arrayTypeName_10815 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 227)) ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage temp_0 = this ;
  GGS_string var_elementTypeName_10865 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 228)) ;
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_10990__0 ;
      GGS_uint extractedValue_10990__1 ;
      GGS_objectIR extractedValue_11002_sourceValuePossibleReference_2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_10990__0, extractedValue_10990__1, extractedValue_11002_sourceValuePossibleReference_2) ;
      GGS_objectIR var_sourceValue_11052 = extractedValue_11002_sourceValuePossibleReference_2 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11052, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 232)) ;
      }
      const GGS_fixedSizeArrayAssignmentOperatorUsage temp_1 = this ;
      GGS_string var_s_11185 = GGS_string ("call void @").add_operation (temp_1.readProperty_mAssignValueToElements_5F_functionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)) ;
      var_s_11185.plusAssignOperation(GGS_string (" (").add_operation (var_arrayTypeName_10815, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)) ;
      var_s_11185.plusAssignOperation(GGS_string (", ").add_operation (var_elementTypeName_10865, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (extensionGetter_llvmName (var_sourceValue_11052, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)) ;
      {
      GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      const GGS_fixedSizeArrayAssignmentOperatorUsage temp_3 = this ;
      temp_2.plusPlusAssignOperation (temp_3.readProperty_mAssignValueToElements_5F_functionName ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11185, temp_2, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_11535__0 ;
      GGS_operandIRList extractedValue_11552_values_1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_11535__0, extractedValue_11552_values_1) ;
      GGS_uint var_uniqueValue_11570 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 239)) ;
      UpEnumerator_operandIRList enumerator_11662 (extractedValue_11552_values_1) ;
      GGS_uint index_11657 (uint32_t (0)) ;
      while (enumerator_11662.hasCurrentObject ()) {
        GGS_objectIR var_sourceValue_11708 = enumerator_11662.current_mOperand (HERE) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11708, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 242)) ;
        }
        GGS_string var_ptr_11822 = GGS_string ("%ptr.").add_operation (var_uniqueValue_11570.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (index_11657.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)) ;
        GGS_string var_s_11872 = var_ptr_11822.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (var_arrayTypeName_10815, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (var_arrayTypeName_10815, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (index_11657.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11872, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)) ;
        }
        var_s_11872 = GGS_string ("store ").add_operation (var_elementTypeName_10865, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (extensionGetter_llvmName (var_sourceValue_11708, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (var_elementTypeName_10865, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (var_ptr_11822, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11872, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)) ;
        }
        enumerator_11662.gotoNextObject () ;
        index_11657.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 240)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_12276__0 ;
      GGS_operandIRList extractedValue_12293_values_1 ;
      GGS_uint extractedValue_12301__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_12276__0, extractedValue_12293_values_1, extractedValue_12301__2) ;
      GGS_uint var_uniqueValue_12314 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 251)) ;
      UpEnumerator_operandIRList enumerator_12406 (extractedValue_12293_values_1) ;
      GGS_uint index_12401 (uint32_t (0)) ;
      while (enumerator_12406.hasCurrentObject ()) {
        GGS_string var_ptr_12442 = GGS_string ("%ptr.").add_operation (var_uniqueValue_12314.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (index_12401.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)) ;
        GGS_string var_s_12492 = var_ptr_12442.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (var_arrayTypeName_10815, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (var_arrayTypeName_10815, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (index_12401.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12492, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)) ;
        }
        var_s_12492 = GGS_string ("store ").add_operation (var_elementTypeName_10865, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (extensionGetter_llvmName (enumerator_12406.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (var_elementTypeName_10865, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (var_ptr_12442, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12492, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)) ;
        }
        enumerator_12406.gotoNextObject () ;
        index_12401.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 252)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_12897__0 ;
      GGS_uint extractedValue_12897__1 ;
      GGS_objectIR extractedValue_12897__2 ;
      GGS_uint extractedValue_12905_idx_3 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_12897__0, extractedValue_12897__1, extractedValue_12897__2, extractedValue_12905_idx_3) ;
      GGS_string var_assignmentFunctionLLVMName_12920 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 260)) ;
      GGS_string var_s_13015 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_12920.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GGS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (extractedValue_12905_idx_3.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)) ;
      {
      GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      temp_4.plusPlusAssignOperation (var_assignmentFunctionLLVMName_12920  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13015, temp_4, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_13348__0 ;
      GGS_string extractedValue_13348__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_reference (extractedValue_13348__0, extractedValue_13348__1) ;
      GGS_string var_assignmentFunctionLLVMName_13361 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 266)) ;
      GGS_string var_s_13456 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13361.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)) ;
      {
      GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      temp_5.plusPlusAssignOperation (var_assignmentFunctionLLVMName_13361  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13456, temp_5, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_13819__0 ;
      GGS_bigint extractedValue_13819__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalInteger (extractedValue_13819__0, extractedValue_13819__1) ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (literalInteger)"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 272)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_13932__0 ;
      GGS_uint extractedValue_13932__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalString (extractedValue_13932__0, extractedValue_13932__1) ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (literalString)"), fixItArray7  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 274)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_14049__0 ;
      GGS_sortedOperandIRList extractedValue_14049__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmStructureValue (extractedValue_14049__0, extractedValue_14049__1) ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (llvmStructureValue)"), fixItArray8  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 276)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_14167__0 ;
      GGS_string extractedValue_14167__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmNamedValue (extractedValue_14167__0, extractedValue_14167__1) ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (llvmValue)"), fixItArray9  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 278)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_14265__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_null (extractedValue_14265__0) ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (null)"), fixItArray10  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 280)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (void)"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 282)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_14446__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_zero (extractedValue_14446__0) ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (zero)"), fixItArray12  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 284)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignRepeatedValueToFixedSizeArrayElementsFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                                            GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_0 = this ;
  GGS_string var_arrayTypeName_15178 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 303)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_1 = this ;
  GGS_string var_elementTypeName_15240 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 304)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_arrayTypeName_15178, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (var_elementTypeName_15240, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (GGS_string (" %inRepeatedValue) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %idx = alloca i32\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i32 0, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %idxValue = load i32, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %ptr = getelementptr ").add_operation (var_arrayTypeName_15178, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (var_arrayTypeName_15178, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GGS_string ("* %inTarget, i32 0, i32 %idxValue\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_elementTypeName_15240, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GGS_string (" %inRepeatedValue, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (var_elementTypeName_15240, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GGS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %nextIdxValue = add i32 %idxValue, 1\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i32 %nextIdxValue, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 315)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %continue = icmp ult i32 %nextIdxValue, ").add_operation (temp_3.readProperty_mArraySize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %continue, label %loop, label %exit\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("exit:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 320)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@staticArrayTypeAssignFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_staticArrayTypeAssignFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                      const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_staticArrayTypeAssignFunctionIR temp_0 = this ;
  GGS_string var_llvmTypeName_16799 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 336)) ;
  const GGS_staticArrayTypeAssignFunctionIR temp_1 = this ;
  GGS_arcAssignmentList var_arcAssignmentList_16860 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_1.readProperty_mFixedSizeArrayType ().ptr (), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 337)) ;
  const GGS_staticArrayTypeAssignFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (GGS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)) ;
  UpEnumerator_arcAssignmentList enumerator_17202 (var_arcAssignmentList_16860) ;
  while (enumerator_17202.hasCurrentObject ()) {
    GGS_string var_propertyTypeLLVMName_17245 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_17202.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 342)) ;
    GGS_string var_llvmVarName_17304 = GGS_string ("%arc.retain.").add_operation (enumerator_17202.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_17304, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)) ;
    UpEnumerator_uintlist enumerator_17582 (enumerator_17202.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_17582.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_17582.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 347)) ;
      enumerator_17582.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_17202.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)) ;
    GGS_string var_llvmLoadedVarName_17700 = var_llvmVarName_17304.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_17700, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_propertyTypeLLVMName_17245, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_propertyTypeLLVMName_17245, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_llvmVarName_17304, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_17245, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (var_llvmLoadedVarName_17700, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)) ;
    enumerator_17202.gotoNextObject () ;
  }
  UpEnumerator_arcAssignmentList enumerator_18025 (var_arcAssignmentList_16860) ;
  while (enumerator_18025.hasCurrentObject ()) {
    GGS_string var_llvmVarName_18068 = GGS_string ("%arc.release.").add_operation (enumerator_18025.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_18068, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)) ;
    UpEnumerator_uintlist enumerator_18347 (enumerator_18025.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_18347.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_18347.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 359)) ;
      enumerator_18347.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_18025.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)) ;
    GGS_string var_propertyTypeLLVMName_18465 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18025.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 362)) ;
    GGS_string var_llvmLoadedVarName_18524 = var_llvmVarName_18068.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_18524, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_propertyTypeLLVMName_18465, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_propertyTypeLLVMName_18465, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_llvmVarName_18068, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_18465, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (var_llvmLoadedVarName_18524, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)) ;
    enumerator_18025.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %v = load ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GGS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GGS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GGS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)).add_operation (GGS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)).add_operation (GGS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)).add_operation (GGS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)).add_operation (GGS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 399)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)).add_operation (GGS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_16799, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)).add_operation (GGS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 402)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 404)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 405)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 406)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  const GGS_typeDynamicArrayDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDynamicArrayTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 36)) ;
  }
  {
  const GGS_typeDynamicArrayDeclarationAST temp_2 = this ;
  const GGS_typeDynamicArrayDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDynamicArrayTypeName (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 37)) ;
  }
  const GGS_typeDynamicArrayDeclarationAST temp_4 = this ;
  GGS_lstring var_rootNode_1988 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)), temp_4.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_typeDynamicArrayDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDynamicArrayTypeName (), var_rootNode_1988 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 39)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typeDynamicArrayDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("anonymous ").add_operation (temp_0.readProperty_mDynamicArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 45)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_typeDynamicArrayDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDynamicArrayTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                 GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                 GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                 GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mHandleDynamicArray ().operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 68)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_typeDynamicArrayDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("this target does not handle dynamic array"), fixItArray2  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 69)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_arrayTypeProxy_3870 ;
  {
  const GGS_typeDynamicArrayDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_3.readProperty_mDynamicArrayTypeName (), var_arrayTypeProxy_3870, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 71)) ;
  }
  GGS_omnibusType var_elementType_4020 ;
  const GGS_typeDynamicArrayDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mElementTypeName (), var_elementType_4020, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 73)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4020.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 74)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_typeDynamicArrayDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be copyable"), fixItArray7  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 75)) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4020.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 77)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_typeDynamicArrayDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be instanciable"), fixItArray10  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 78)) ;
    }
  }
  const GGS_typeDynamicArrayDeclarationAST temp_11 = this ;
  GGS_lstring var_omnibusTypeDescriptionName_4342 = GGS_lstring::init_21__21_ (GGS_string ("[").add_operation (var_elementType_4020.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)), temp_11.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_typeDynamicArrayDeclarationAST temp_12 = this ;
  GGS_lstring var_llvmBaseTypeName_4468 = GGS_lstring::init_21__21_ (GGS_string ("dyn-").add_operation (var_elementType_4020.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)), temp_12.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_4342.readProperty_string () COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      GGS_omnibusType var_type_4775 ;
      extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_4342, var_type_4775, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)) ;
      {
      const GGS_typeDynamicArrayDeclarationAST temp_14 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_14.readProperty_mDynamicArrayTypeName (), var_type_4775, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_13) {
    GGS_unifiedTypeMapEntry var_uint_33__32_TypeProxy_4940 ;
    {
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, GGS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 91)), var_uint_33__32_TypeProxy_4940, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 91)) ;
    }
    GGS_unifiedTypeMapEntry var_elementTypeProxy_5021 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_15 = this ;
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mElementTypeName (), var_elementTypeProxy_5021, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)) ;
    }
    GGS_lstring var_routineLLVMName_5432 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_16 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4342.readProperty_string (), var_llvmBaseTypeName_4468.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("removeAll"), temp_16.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 99)), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 100)), var_routineLLVMName_5432, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 95)) ;
    }
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_dynArrayRemoveAllFunctionIR::init_21__21_isRequired_21_warnsIfUnused (var_routineLLVMName_5432, GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 103)) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_17 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4342.readProperty_string (), var_llvmBaseTypeName_4468.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("length"), temp_17.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 113)), var_uint_33__32_TypeProxy_4940, var_routineLLVMName_5432, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 109)) ;
    }
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_dynArrayLengthFunctionIR::init_21__21_isRequired_21_warnsIfUnused (var_routineLLVMName_5432, GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 117)) ;
    GGS_lstring var_insertFunctionMangledName_6684 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_18 = this ;
    extensionSetter_addFunctionWithTwoInputArguments (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4342.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4468.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("insert"), temp_18.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 128)), GGS_string::makeEmptyString (), var_elementTypeProxy_5021, GGS_string ("inValue"), GGS_string ("atIndex"), var_uint_33__32_TypeProxy_4940, GGS_string ("inIndex"), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 135)), var_insertFunctionMangledName_6684, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 123)) ;
    }
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_dynArrayInsertFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_insertFunctionMangledName_6684, GGS_bool (false), GGS_bool (false), var_elementTypeProxy_5021, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 138)) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_19 = this ;
    extensionSetter_addFunctionWithInputArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4342.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4468.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("append"), temp_19.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 150)), GGS_string::makeEmptyString (), var_elementTypeProxy_5021, GGS_string ("inValue"), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 154)), var_routineLLVMName_5432, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 145)) ;
    }
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_dynArrayAppendFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (var_routineLLVMName_5432, GGS_bool (false), GGS_bool (false), var_arrayTypeProxy_3870, var_elementTypeProxy_5021, var_insertFunctionMangledName_6684.readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 157)) ;
    GGS_constructorMap var_constructorMap_7678 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
    {
    GGS_constructorSignature temp_20 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    var_constructorMap_7678.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 167)), temp_20, GGS_constructorValue::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4342, var_constructorMap_7678, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 168)) ;
    }
    GGS_omnibusTypeAttributes var_typeAttributes_7947 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 170)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 170)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 170)) ;
    GGS_omnibusType var_dynamicArrayType_8064 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-dynamic-array.galgas", 173)), var_typeAttributes_7947, var_omnibusTypeDescriptionName_4342.readProperty_string (), GGS_typeKind::class_func_dynamicArrayType (var_elementType_4020  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 176)), var_llvmBaseTypeName_4468.readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_21 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_21.readProperty_mDynamicArrayTypeName (), var_dynamicArrayType_8064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 179)) ;
    }
    GGS_string var_assignmentFunctionName_8480 = function_assignmentOperatorFuncName (var_dynamicArrayType_8064, var_dynamicArrayType_8064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 181)) ;
    const GGS_typeDynamicArrayDeclarationAST temp_22 = this ;
    GGS_dynamicArrayTypeAssignGenericFunctionIR var_routine_8577 = GGS_dynamicArrayTypeAssignGenericFunctionIR::init_21__21_isRequired_21_warnsIfUnused (GGS_lstring::init_21__21_ (var_assignmentFunctionName_8480, temp_22.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE) ;
    ioArgument_ioRoutineListIR.addAssignOperation (var_routine_8577  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 187)) ;
    GGS_dynamicArrayTypeAssignUsage var_operatorUsage_8802 = GGS_dynamicArrayTypeAssignUsage::init_21__21_ (var_dynamicArrayType_8064, var_assignmentFunctionName_8480, inCompiler COMMA_HERE) ;
    const GGS_typeDynamicArrayDeclarationAST temp_23 = this ;
    GGS_lstring var_key_8917 = function_assignmentOperatorKey (var_dynamicArrayType_8064, temp_23.readProperty_mDynamicArrayTypeName ().readProperty_location (), var_dynamicArrayType_8064, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 192)) ;
    {
    ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8917, var_operatorUsage_8802, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 193)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dynArrayRemoveAllFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayRemoveAllFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 297)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dynArrayLengthFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayLengthFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal i32 @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dynArrayAppendFunctionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dynArrayAppendFunctionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mInsertFunctionMangledName ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 339)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dynArrayAppendFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayAppendFunctionIR temp_0 = this ;
  GGS_omnibusType var_elementType_16009 = extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 350)) ;
  GGS_routineFormalArgumentListAST temp_1 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 363)) ;
  temp_1.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-dynamic-array.galgas", 353)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 354)), var_elementType_16009.readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 355)), GGS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 356)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 357)) ;
  temp_1.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-dynamic-array.galgas", 359)), GGS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 360)), GGS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 361)), GGS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 362)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 363)) ;
  GGS_routineFormalArgumentListAST var_argumentList_16089 = temp_1 ;
  const GGS_dynArrayAppendFunctionIR temp_2 = this ;
  GGS_lstring var_insertRoutineMangledName_16340 = function_routineMangledNameFromAST (extensionGetter_type (temp_2.readProperty_mArrayTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 366)).readProperty_llvmBaseTypeName (), GGS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 367)), var_argumentList_16089, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 365)) ;
  GGS_string var_insertRoutineLLVMName_16497 = function_llvmNameForFunction (var_insertRoutineMangledName_16340.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 370)) ;
  const GGS_dynArrayAppendFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)).add_operation (GGS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16009.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (GGS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_insertRoutineLLVMName_16497, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)).add_operation (GGS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16009.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)).add_operation (GGS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 381)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dynArrayInsertFunctionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dynArrayInsertFunctionIR temp_0 = this ;
  const GGS_dynArrayInsertFunctionIR temp_1 = this ;
  GGS_string var_assignRoutineLLVMName_17926 = function_assignmentOperatorFuncName (extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)), extensionGetter_type (temp_1.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)) ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (var_assignRoutineLLVMName_17926  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 399)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dynArrayInsertFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayInsertFunctionIR temp_0 = this ;
  GGS_string var_elementLLVMTypeName_18453 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 410)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 410)) ;
  const GGS_dynArrayInsertFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)).add_operation (GGS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", ").add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (GGS_string (" %inValue, i32 %inIndex)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (GGS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (GGS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)) ;
  const GGS_dynArrayInsertFunctionIR temp_2 = this ;
  const GGS_dynArrayInsertFunctionIR temp_3 = this ;
  GGS_string var_assignRoutineLLVMName_19833 = function_assignmentOperatorFuncName (extensionGetter_type (temp_2.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)), extensionGetter_type (temp_3.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_assignRoutineLLVMName_19833.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (GGS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (var_elementLLVMTypeName_18453, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (GGS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 432)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 434)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dynamicArrayTypeAssignUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                            GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                            const GGS_omnibusType constinArgument_inTargetType,
                                                            const GGS_string constinArgument_inTargetLLVMName,
                                                            const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                            const GGS_location /* constinArgument_inErrorLocation */,
                                                            const GGS_bool constinArgument_inTargetIsInitialized,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_targetTypeName_21300 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 458)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_dynamicArrayTypeAssignUsage temp_1 = this ;
      GGS_string var_s_21385 = GGS_string (" call void  @").add_operation (temp_1.readProperty_mAssignFunctionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 460)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 460)).add_operation (var_targetTypeName_21300, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (var_targetTypeName_21300, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)) ;
      {
      GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      const GGS_dynamicArrayTypeAssignUsage temp_3 = this ;
      temp_2.plusPlusAssignOperation (temp_3.readProperty_mAssignFunctionName ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_21385, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_objectIR var_sourceValue_21756 = constinArgument_inSourcePossibleReference ;
    {
    extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_21756, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 466)) ;
    }
    GGS_string var_s_21886 = GGS_string ("store ").add_operation (var_targetTypeName_21300, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (extensionGetter_llvmName (var_sourceValue_21756, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (var_targetTypeName_21300, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)) ;
    {
    GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)) ;
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_21886, temp_4, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dynamicArrayTypeAssignGenericFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 486)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 487)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 488)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 491)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 492)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 493)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 494)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_enumerationDeclarationAST temp_0 = this ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mEnumerationName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  GGS_bigint var_maxValue_2264 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 55)) ;
  const GGS_enumerationDeclarationAST temp_2 = this ;
  UpEnumerator_enumerationConstantList enumerator_2286 (temp_2.readProperty_mCaseNameList ()) ;
  while (enumerator_2286.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_maxValue_2264.objectCompare (enumerator_2286.current_mConstantValue (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_maxValue_2264 = enumerator_2286.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2286.gotoNextObject () ;
  }
  GGS_uint var_representationBitCount_2396 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).isValid ()) {
    uint32_t variant_2425 = GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).uintValue () ;
    bool loop_2425 = true ;
    while (loop_2425) {
      loop_2425 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_2264.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).isValid () ;
      if (loop_2425) {
        loop_2425 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_2264.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).boolValue () ;
      }
      if (loop_2425 && (0 == variant_2425)) {
        loop_2425 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)) ;
      }
      if (loop_2425) {
        variant_2425 -= 1 ;
        var_representationBitCount_2396.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
        var_maxValue_2264 = var_maxValue_2264.divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
      }
    }
  }
  {
  const GGS_enumerationDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mEnumerationName (), GGS_string ("u").add_operation (var_representationBitCount_2396.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_enumerationDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mEnumerationName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumerationDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("enum ").add_operation (temp_0.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                            GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                            GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                            GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                            GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                            GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                            GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                            GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap var_enumConstantMap_4150 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_bigint var_maxValue_4186 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 97)) ;
  const GGS_enumerationDeclarationAST temp_0 = this ;
  UpEnumerator_enumerationConstantList enumerator_4211 (temp_0.readProperty_mCaseNameList ()) ;
  while (enumerator_4211.hasCurrentObject ()) {
    {
    const GGS_enumerationDeclarationAST temp_1 = this ;
    var_enumConstantMap_4150.setter_insertKey (enumerator_4211.current_mConstantName (HERE), enumerator_4211.current_mConstantValue (HERE), temp_1.readProperty_mEnumerationName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 99)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::lowerThan, var_maxValue_4186.objectCompare (enumerator_4211.current_mConstantValue (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_maxValue_4186 = enumerator_4211.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4211.gotoNextObject () ;
  }
  {
  const GGS_enumerationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (temp_3.readProperty_mEnumerationName (), var_enumConstantMap_4150, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 104)) ;
  }
  GGS_uint var_representationBitCount_4536 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).isValid ()) {
    uint32_t variant_4565 = GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).uintValue () ;
    bool loop_4565 = true ;
    while (loop_4565) {
      loop_4565 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_4186.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).isValid () ;
      if (loop_4565) {
        loop_4565 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_4186.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).boolValue () ;
      }
      if (loop_4565 && (0 == variant_4565)) {
        loop_4565 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
      }
      if (loop_4565) {
        variant_4565 -= 1 ;
        var_representationBitCount_4536.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 111)) ;
        var_maxValue_4186 = var_maxValue_4186.divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)) ;
      }
    }
  }
  const GGS_enumerationDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_integerTypeProxy_4731 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_representationBitCount_4536.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), temp_4.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  GGS_lstring var_conversionToUIntN_5164 ;
  {
  const GGS_enumerationDeclarationAST temp_5 = this ;
  const GGS_enumerationDeclarationAST temp_6 = this ;
  const GGS_enumerationDeclarationAST temp_7 = this ;
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, temp_5.readProperty_mEnumerationName (), temp_6.readProperty_mEnumerationName ().readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_representationBitCount_4536.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), temp_7.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), var_integerTypeProxy_4731, var_conversionToUIntN_5164, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_enumToUintRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_conversionToUIntN_5164, GGS_bool (false), GGS_bool (false), GGS_string ("i").add_operation (var_representationBitCount_4536.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)) ;
  const GGS_enumerationDeclarationAST temp_8 = this ;
  const GGS_enumerationDeclarationAST temp_9 = this ;
  GGS_omnibusType var_enumerationType_5426 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)), temp_8.readProperty_mEnumerationName ().readProperty_string (), GGS_typeKind::class_func_enumeration (var_representationBitCount_4536  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 138)), temp_9.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumerationDeclarationAST temp_10 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_10.readProperty_mEnumerationName (), var_enumerationType_5426, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 141)) ;
  }
  const GGS_enumerationDeclarationAST temp_11 = this ;
  GGS_lstring var_key_5809 = function_assignmentOperatorKey (var_enumerationType_5426, temp_11.readProperty_mEnumerationName ().readProperty_location (), var_enumerationType_5426, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_5809, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 144)) ;
  }
  GGS_omnibusType var_boolType_6126 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 147)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), var_enumerationType_5426, GGS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6126, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-enumeration-declaration.galgas", 152)), var_enumerationType_5426, GGS_string ("icmp ule"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6126, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), var_enumerationType_5426, GGS_string ("icmp ult"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6126, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumToUintRoutineIR temp_0 = this ;
  GGS_string var_routineLLVMName_8135 = function_llvmNameForFunction (temp_0.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 208)) ;
  const GGS_enumToUintRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (temp_1.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (var_routineLLVMName_8135, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)) ;
  const GGS_enumToUintRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_2.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)).add_operation (GGS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)) ;
  const GGS_enumToUintRoutineIR temp_3 = this ;
  const GGS_enumToUintRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %r = load ").add_operation (temp_3.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (temp_4.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GGS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)) ;
  const GGS_enumToUintRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (temp_5.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)).add_operation (GGS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_structureDeclarationAST temp_0 = this ;
  const GGS_structureDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mReceiverTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
  }
  const GGS_structureDeclarationAST temp_2 = this ;
  UpEnumerator_structurePropertyListAST enumerator_9368 (temp_2.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_9368.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_9368.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        const GGS_structureDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mReceiverTypeName (), enumerator_9368.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
      }
    }
    switch (enumerator_9368.current_mPropertyKind (HERE).enumValue ()) {
    case GGS_propertyKindAST::Enumeration::invalid:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
      {
        GGS_expressionAST extractedValue_9671_initExpression_0 ;
        enumerator_9368.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedStoredProperty (extractedValue_9671_initExpression_0) ;
        const GGS_structureDeclarationAST temp_5 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9671_initExpression_0.ptr (), temp_5.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
      {
        GGS_expressionAST extractedValue_9821_initExpression_0 ;
        enumerator_9368.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedConstantProperty (extractedValue_9821_initExpression_0) ;
        const GGS_structureDeclarationAST temp_6 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9821_initExpression_0.ptr (), temp_6.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
      {
        GGS_instructionListAST extractedValue_9968_instructionList_0 ;
        GGS_location extractedValue_9984__1 ;
        enumerator_9368.current_mPropertyKind (HERE).getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_9968_instructionList_0, extractedValue_9984__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_9968_instructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
      {
        GGS_instructionListAST extractedValue_10097_writeInstructionList_0 ;
        GGS_location extractedValue_10118__1 ;
        enumerator_9368.current_mPropertyKind (HERE).getAssociatedValuesFor_writeComputedProperty (extractedValue_10097_writeInstructionList_0, extractedValue_10118__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_10097_writeInstructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9368.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_structureDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_structureDeclarationAST temp_0 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_structureDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_structureDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structureDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                          GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                          GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                          GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList temp_0 = GGS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 558)) ;
  GGS_propertyList var_propertyList_21086 = temp_0 ;
  GGS_sortedOperandIRList temp_1 = GGS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 560)) ;
  GGS_sortedOperandIRList var_sortedOperandIRList_21178 = temp_1 ;
  GGS_constructorSignature temp_2 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 561)) ;
  GGS_constructorSignature var_constructorSignature_21232 = temp_2 ;
  GGS_string var_constructorKey_21273 = GGS_string ("(") ;
  GGS_bool var_canBeCopied_21300 = GGS_bool (true) ;
  const GGS_structureDeclarationAST temp_3 = this ;
  UpEnumerator_structurePropertyListAST enumerator_21342 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_21342.hasCurrentObject ()) {
    const GGS_structureDeclarationAST temp_4 = this ;
    const GGS_structureDeclarationAST temp_5 = this ;
    const GGS_structureDeclarationAST temp_6 = this ;
    extensionMethod_enterPropertyInContext (enumerator_21342.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_4.readProperty_mReceiverTypeName (), temp_5.readProperty_mOmnibusTypeSpecificName (), temp_6.readProperty_mLLVMBaseTypeName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_21086, var_sortedOperandIRList_21178, var_constructorSignature_21232, var_constructorKey_21273, var_canBeCopied_21300, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 565)) ;
    enumerator_21342.gotoNextObject () ;
  }
  var_constructorKey_21273.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)) ;
  GGS_constructorMap var_constructorMap_21928 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structureDeclarationAST temp_7 = this ;
  var_constructorMap_21928.setter_insertKey (GGS_lstring::init_21__21_ (var_constructorKey_21273, temp_7.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorSignature_21232, GGS_constructorValue::class_func_structure (var_sortedOperandIRList_21178  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 583)) ;
  }
  {
  const GGS_structureDeclarationAST temp_8 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_8.readProperty_mOmnibusTypeSpecificName (), var_constructorMap_21928, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 588)) ;
  }
  GGS_omnibusTypeAttributes var_typeAttributes_22298 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 590)) ;
  const GGS_structureDeclarationAST temp_9 = this ;
  UpEnumerator_lstringlist enumerator_22428 (temp_9.readProperty_mAttributeListAST ()) ;
  while (enumerator_22428.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::equal, enumerator_22428.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 593)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = var_typeAttributes_22298.getter_contains (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 594)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 594)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_22428.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 595)) ;
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = var_canBeCopied_21300.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 596)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_structureDeclarationAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mReceiverTypeName ().readProperty_location (), GGS_string ("this structure cannot be copied, one field is not copyable"), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 597)) ;
            }
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (enumerator_22428.current_mValue (HERE).readProperty_location (), GGS_string ("only @copyable attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 600)) ;
    }
    enumerator_22428.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_structureDeclarationAST temp_18 = this ;
    test_17 = temp_18.readProperty_mGenerateAssignmentRoutine ().operator_and (var_canBeCopied_21300 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 603)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      var_typeAttributes_22298 = var_typeAttributes_22298.operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 604)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 604)) ;
    }
  }
  const GGS_structureDeclarationAST temp_19 = this ;
  const GGS_structureDeclarationAST temp_20 = this ;
  GGS_omnibusType var_structureType_22998 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 608)), var_typeAttributes_22298, temp_19.readProperty_mOmnibusTypeSpecificName ().readProperty_string (), GGS_typeKind::class_func_structure (var_propertyList_21086  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)), temp_20.readProperty_mLLVMBaseTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_structureDeclarationAST temp_21 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_21.readProperty_mReceiverTypeName (), var_structureType_22998, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 614)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_22998.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 620)), var_propertyList_21086, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 619)) ;
  GGS_string var_assignmentFunctionLLVMName_23627 = function_assignmentOperatorFuncName (var_structureType_22998, var_structureType_22998, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 625)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_structureTypeAssignFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_assignmentFunctionLLVMName_23627.getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 627)), GGS_bool (false), GGS_bool (false), var_structureType_22998, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 626)) ;
  GGS_lstring var_key_23921 = function_assignmentOperatorKey (var_structureType_22998, GGS_location::class_func_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 633)), var_structureType_22998, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 633)) ;
  GGS_structureAssignmentOperatorUsage var_operatorUsage_23997 = GGS_structureAssignmentOperatorUsage::init_21_ (var_structureType_22998, inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_23921, var_operatorUsage_23997, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 635)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'
//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMSructureTypeDefinitionIR::method_generateLLVMType (GGS_string & ioArgument_ioLLVMcode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_userLLVMSructureTypeDefinitionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GGS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)) ;
  const GGS_userLLVMSructureTypeDefinitionIR temp_1 = this ;
  UpEnumerator_propertyList enumerator_24755 (temp_1.readProperty_mPropertyList ()) ;
  while (enumerator_24755.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24755.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)) ;
    enumerator_24755.gotoNextObject () ;
    if (enumerator_24755.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 652)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 654)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structureAssignmentOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_structureAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 const GGS_omnibusType constinArgument_inTargetType,
                                                                 const GGS_string constinArgument_inTargetLLVMName,
                                                                 const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                 const GGS_location constinArgument_inErrorLocation,
                                                                 const GGS_bool constinArgument_inTargetIsInitialized,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_structTypeName_25668 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)) ;
  GGS_uintlist temp_0 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  GGS_arcAssignmentList var_arcAssignmentList_25719 = callExtensionGetter_arcList ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inTargetIsInitialized.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 678)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator_arcAssignmentList enumerator_25837 (var_arcAssignmentList_25719) ;
      while (enumerator_25837.hasCurrentObject ()) {
        GGS_string var_llvmPropertyPtrName_25883 = GGS_string ("%arc.init.").add_operation (constinArgument_inErrorLocation.getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)) ;
        GGS_string var_s_25965 = GGS_string ("  ").add_operation (var_llvmPropertyPtrName_25883, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (var_structTypeName_25668, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (var_structTypeName_25668, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)) ;
        UpEnumerator_uintlist enumerator_26117 (enumerator_25837.current_mPropertyIndexPath (HERE)) ;
        while (enumerator_26117.hasCurrentObject ()) {
          var_s_25965.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_26117.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)) ;
          enumerator_26117.gotoNextObject () ;
        }
        var_s_25965.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_25837.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)) ;
        {
        GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_25965, temp_2, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        }
        GGS_string var_propertyTypeLLVMName_26293 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25837.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)) ;
        var_s_25965 = GGS_string ("store ").add_operation (var_propertyTypeLLVMName_26293, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (GGS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (var_propertyTypeLLVMName_26293, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (var_llvmPropertyPtrName_25883, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)) ;
        {
        GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_25965, temp_3, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
        }
        enumerator_25837.gotoNextObject () ;
      }
    }
  }
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_26607__0 ;
      GGS_uint extractedValue_26607__1 ;
      GGS_objectIR extractedValue_26607__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_26607__0, extractedValue_26607__1, extractedValue_26607__2) ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayRepeatedDynamicValue»"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 694)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_26735__0 ;
      GGS_operandIRList extractedValue_26735__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_26735__0, extractedValue_26735__1) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayDynamicValues»"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 696)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_26855__0 ;
      GGS_operandIRList extractedValue_26855__1 ;
      GGS_uint extractedValue_26855__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_26855__0, extractedValue_26855__1, extractedValue_26855__2) ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_26981__0 ;
      GGS_uint extractedValue_26981__1 ;
      GGS_objectIR extractedValue_26981__2 ;
      GGS_uint extractedValue_26989_idx_3 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_26981__0, extractedValue_26981__1, extractedValue_26981__2, extractedValue_26989_idx_3) ;
      GGS_string var_assignmentFunctionLLVMName_27004 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)) ;
      GGS_string var_s_27099 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27004.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GGS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (extractedValue_26989_idx_3.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)) ;
      {
      GGS_stringset temp_7 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      temp_7.plusPlusAssignOperation (var_assignmentFunctionLLVMName_27004  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27099, temp_7, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_27432__0 ;
      GGS_string extractedValue_27432__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_reference (extractedValue_27432__0, extractedValue_27432__1) ;
      GGS_string var_assignmentFunctionLLVMName_27445 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)) ;
      GGS_string var_s_27539 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27445.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
      {
      GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      temp_8.plusPlusAssignOperation (var_assignmentFunctionLLVMName_27445  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27539, temp_8, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_27905__0 ;
      GGS_sortedOperandIRList extractedValue_27907_sortedOperandValues_1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmStructureValue (extractedValue_27905__0, extractedValue_27907_sortedOperandValues_1) ;
      GGS_uint var_uniqueValue_27938 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)) ;
      UpEnumerator_sortedOperandIRList enumerator_28038 (extractedValue_27907_sortedOperandValues_1) ;
      while (enumerator_28038.hasCurrentObject ()) {
        GGS_string var_ptr_28079 = GGS_string ("%ptr.").add_operation (var_uniqueValue_27938.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (enumerator_28038.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)) ;
        GGS_string var_s_28129 = var_ptr_28079.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_structTypeName_25668, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_structTypeName_25668, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (enumerator_28038.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)) ;
        {
        GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28129, temp_9, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        }
        var_s_28129 = GGS_string ("store ").add_operation (extensionGetter_llvmTypeName (enumerator_28038.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (extensionGetter_llvmName (enumerator_28038.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (extensionGetter_llvmTypeName (enumerator_28038.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (var_ptr_28079, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)) ;
        {
        GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28129, temp_10, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
        }
        enumerator_28038.gotoNextObject () ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_28538__0 ;
      GGS_bigint extractedValue_28538__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalInteger (extractedValue_28538__0, extractedValue_28538__1) ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «literalInteger»"), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 722)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_28642__0 ;
      GGS_uint extractedValue_28642__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalString (extractedValue_28642__0, extractedValue_28642__1) ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «literalString»"), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 724)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_28746__0 ;
      GGS_string extractedValue_28746__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmNamedValue (extractedValue_28746__0, extractedValue_28746__1) ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_28847__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_null (extractedValue_28847__0) ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmValue»"), fixItArray14  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 728)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «void»"), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_29015__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_zero (extractedValue_29015__0) ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «zero»"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structureTypeAssignFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_structureTypeAssignFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structureTypeAssignFunctionIR temp_0 = this ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  GGS_arcAssignmentList var_arcAssignmentList_29609 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_0.readProperty_mStructureType ().ptr (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  const GGS_structureTypeAssignFunctionIR temp_2 = this ;
  GGS_string var_structureTypeLLVMTypeName_29670 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mStructureType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
  const GGS_structureTypeAssignFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_structureTypeLLVMTypeName_29670.add_operation (GGS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
  UpEnumerator_arcAssignmentList enumerator_30055 (var_arcAssignmentList_29609) ;
  while (enumerator_30055.hasCurrentObject ()) {
    GGS_string var_propertyTypeLLVMName_30098 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30055.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)) ;
    GGS_string var_llvmVarName_30157 = GGS_string ("%arc.retain.").add_operation (enumerator_30055.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_30157, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
    UpEnumerator_uintlist enumerator_30461 (enumerator_30055.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_30461.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_30461.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)) ;
      enumerator_30461.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_30055.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)) ;
    GGS_string var_llvmLoadedVarName_30579 = var_llvmVarName_30157.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_30579, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_propertyTypeLLVMName_30098, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_propertyTypeLLVMName_30098, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_llvmVarName_30157, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_30098, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_llvmLoadedVarName_30579, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)) ;
    enumerator_30055.gotoNextObject () ;
  }
  UpEnumerator_arcAssignmentList enumerator_30904 (var_arcAssignmentList_29609) ;
  while (enumerator_30904.hasCurrentObject ()) {
    GGS_string var_llvmVarName_30947 = GGS_string ("%arc.release.").add_operation (enumerator_30904.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_30947, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
    UpEnumerator_uintlist enumerator_31252 (enumerator_30904.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_31252.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_31252.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)) ;
      enumerator_31252.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_30904.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)) ;
    GGS_string var_propertyTypeLLVMName_31370 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30904.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    GGS_string var_llvmLoadedVarName_31429 = var_llvmVarName_30947.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_31429, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_propertyTypeLLVMName_31370, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_propertyTypeLLVMName_31370, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_llvmVarName_30947, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_31370, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_llvmLoadedVarName_31429, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
    enumerator_30904.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCount = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %v = load ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GGS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GGS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GGS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)).add_operation (GGS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)).add_operation (GGS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)).add_operation (GGS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)).add_operation (GGS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %temp = add i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)).add_operation (GGS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29670, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)).add_operation (GGS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 819)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 820)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 821)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_syncDeclarationAST temp_0 = this ;
  const GGS_syncDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncToolName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 50)) ;
  }
  const GGS_syncDeclarationAST temp_2 = this ;
  UpEnumerator_structurePropertyListAST enumerator_2291 (temp_2.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_2291.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_2291.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        const GGS_syncDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncToolName (), enumerator_2291.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 54)) ;
        }
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, enumerator_2291.current_mVisibility (HERE).objectCompare (GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-sync-declaration.galgas", 56)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_2291.current_mPropertyName (HERE).readProperty_location (), GGS_string ("a sync tool property should be private"), fixItArray6  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 57)) ;
      }
    }
    switch (enumerator_2291.current_mPropertyKind (HERE).enumValue ()) {
    case GGS_propertyKindAST::Enumeration::invalid:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
      {
        GGS_expressionAST extractedValue_2703_initExpression_0 ;
        enumerator_2291.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedStoredProperty (extractedValue_2703_initExpression_0) ;
        const GGS_syncDeclarationAST temp_7 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2703_initExpression_0.ptr (), temp_7.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 62)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
      {
        GGS_expressionAST extractedValue_2849_initExpression_0 ;
        enumerator_2291.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedConstantProperty (extractedValue_2849_initExpression_0) ;
        const GGS_syncDeclarationAST temp_8 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2849_initExpression_0.ptr (), temp_8.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 64)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
      {
        GGS_instructionListAST extractedValue_2992_instructionList_0 ;
        GGS_location extractedValue_3008__1 ;
        enumerator_2291.current_mPropertyKind (HERE).getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_2992_instructionList_0, extractedValue_3008__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_2992_instructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
      {
        GGS_instructionListAST extractedValue_3121_writeInstructionList_0 ;
        GGS_location extractedValue_3142__1 ;
        enumerator_2291.current_mPropertyKind (HERE).getAssociatedValuesFor_writeComputedProperty (extractedValue_3121_writeInstructionList_0, extractedValue_3142__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_3121_writeInstructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 68)) ;
      }
      break ;
    }
    enumerator_2291.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syncDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_syncDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("sync ").add_operation (temp_0.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 76)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_syncDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_syncDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mSyncToolName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                     GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                     GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                     GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                     GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList var_propertyList_4741 = GGS_propertyList::init (inCompiler COMMA_HERE) ;
  GGS_sortedOperandIRList var_sortedOperandIRList_4787 = GGS_sortedOperandIRList::init (inCompiler COMMA_HERE) ;
  GGS_constructorSignature var_constructorSignature_4841 = GGS_constructorSignature::init (inCompiler COMMA_HERE) ;
  GGS_string var_constructorKey_4882 = GGS_string ("(") ;
  const GGS_syncDeclarationAST temp_0 = this ;
  UpEnumerator_structurePropertyListAST enumerator_4926 (temp_0.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_4926.hasCurrentObject ()) {
    GGS_bool joker_5337 = GGS_bool (true) ;
    const GGS_syncDeclarationAST temp_1 = this ;
    const GGS_syncDeclarationAST temp_2 = this ;
    const GGS_syncDeclarationAST temp_3 = this ;
    extensionMethod_enterPropertyInContext (enumerator_4926.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_1.readProperty_mSyncToolName (), temp_2.readProperty_mSyncToolName (), temp_3.readProperty_mSyncToolName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_4741, var_sortedOperandIRList_4787, var_constructorSignature_4841, var_constructorKey_4882, joker_5337, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 105)) ;
    enumerator_4926.gotoNextObject () ;
  }
  var_constructorKey_4882.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 119)) ;
  GGS_constructorMap var_constructorMap_5467 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_syncDeclarationAST temp_4 = this ;
  var_constructorMap_5467.setter_insertKey (GGS_lstring::init_21__21_ (var_constructorKey_4882, temp_4.readProperty_mSyncToolName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorSignature_4841, GGS_constructorValue::class_func_structure (var_sortedOperandIRList_4787  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 122)) ;
  }
  {
  const GGS_syncDeclarationAST temp_5 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_5.readProperty_mSyncToolName (), var_constructorMap_5467, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 127)) ;
  }
  const GGS_syncDeclarationAST temp_6 = this ;
  const GGS_syncDeclarationAST temp_7 = this ;
  GGS_omnibusType var_structureType_5807 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 130)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 131)), temp_6.readProperty_mSyncToolName ().readProperty_string (), GGS_typeKind::class_func_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 133)), temp_7.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_syncDeclarationAST temp_8 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_8.readProperty_mSyncToolName (), var_structureType_5807, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 136)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_5807.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 139)), var_propertyList_4741, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 138)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_integerDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_lstring var_nodeName_1313 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GGS_integerDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1313, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1313, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1313, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 32)) COMMA_SOURCE_FILE ("type-integer.galgas", 32)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1313, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 33)) COMMA_SOURCE_FILE ("type-integer.galgas", 33)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_integerDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_integerDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'minValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GGS_bigint function_minValueForInteger (const GGS_bool & constinArgument_inIsUnsigned,
                                        const GGS_uint & constinArgument_inBitCount,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 50)).left_shift_operation (constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_minValueForInteger (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_bool operand0 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GGS_bigint function_maxValueForInteger (const GGS_bool & constinArgument_inIsUnsigned,
                                        const GGS_uint & constinArgument_inBitCount,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_maxValueForInteger (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_bool operand0 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_maxValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                        GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_lstring var_integerTypeName_3601 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 78)) ;
  GGS_unifiedTypeMapEntry var_selfTypeProxy_3701 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3601, var_selfTypeProxy_3701, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 79)) ;
  }
  const GGS_integerDeclarationAST temp_1 = this ;
  const GGS_integerDeclarationAST temp_2 = this ;
  GGS_bigint var_min_3779 = function_minValueForInteger (temp_1.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 81)), temp_2.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
  const GGS_integerDeclarationAST temp_3 = this ;
  const GGS_integerDeclarationAST temp_4 = this ;
  GGS_bigint var_max_3844 = function_maxValueForInteger (temp_3.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 82)), temp_4.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 82)) ;
  const GGS_integerDeclarationAST temp_5 = this ;
  GGS_string var_llvmTypeName_3963 = GGS_string ("i").add_operation (temp_5.readProperty_mSize ().getter_string (SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_integerDeclarationAST temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mSize ().modulo_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 86)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_lstring var_routineLLVMName_4369 ;
      {
      extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3601, var_integerTypeName_3601.readProperty_string (), GGS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 90)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 91)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 92)), var_selfTypeProxy_3701, var_routineLLVMName_4369, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 87)) ;
      }
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4369, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3963, GGS_string ("bswap"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 96)) ;
    }
  }
  GGS_lstring var_routineLLVMName_5447 ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3601, var_integerTypeName_3601.readProperty_string (), GGS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 125)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 126)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 127)), var_selfTypeProxy_3701, var_routineLLVMName_5447, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 122)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5447, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3963, GGS_string ("bitreverse"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3601, var_integerTypeName_3601.readProperty_string (), GGS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 142)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 143)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 144)), var_selfTypeProxy_3701, var_routineLLVMName_5447, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5447, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3963, GGS_string ("ctlz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 148)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3601, var_integerTypeName_3601.readProperty_string (), GGS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 159)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 160)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 161)), var_selfTypeProxy_3701, var_routineLLVMName_5447, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5447, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3963, GGS_string ("cttz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 165)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3601, var_integerTypeName_3601.readProperty_string (), GGS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 176)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 177)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 178)), var_selfTypeProxy_3701, var_routineLLVMName_5447, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5447, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3963, GGS_string ("ctpop"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  GGS_constantMap var_constantMap_7211 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  {
  var_constantMap_7211.setter_insertKey (GGS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 191)), var_min_3779, var_integerTypeName_3601, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
  }
  {
  var_constantMap_7211.setter_insertKey (GGS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 192)), var_max_3844, var_integerTypeName_3601, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_integerTypeName_3601, var_constantMap_7211, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 193)) ;
  }
  GGS_constructorMap var_constructorMap_7526 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
  {
  GGS_constructorSignature temp_8 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 199)) ;
  var_constructorMap_7526.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 199)), temp_8, GGS_constructorValue::class_func_simple (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 199))  COMMA_SOURCE_FILE ("type-integer.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 199)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_integerTypeName_3601, var_constructorMap_7526, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 200)) ;
  }
  const GGS_integerDeclarationAST temp_9 = this ;
  const GGS_integerDeclarationAST temp_10 = this ;
  GGS_omnibusType var_integerType_7764 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-integer.galgas", 203)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-integer.galgas", 204)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-integer.galgas", 204)) COMMA_SOURCE_FILE ("type-integer.galgas", 204)), var_integerTypeName_3601.readProperty_string (), GGS_typeKind::class_func_integer (var_min_3779, var_max_3844, temp_9.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 206)), temp_10.readProperty_mSize ()  COMMA_SOURCE_FILE ("type-integer.galgas", 206)), var_integerTypeName_3601.readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3601, var_integerType_7764, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 209)) ;
  }
  GGS_lstring var_key_8787 = function_assignmentOperatorKey (var_integerType_7764, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 229)), var_integerType_7764, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 229)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8787, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  var_key_8787 = function_assignmentOperatorKey (var_integerType_7764, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 231)), function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8787, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)) ;
  }
  GGS_string var_functionName_9181 = function_assignmentOperatorFuncName (var_integerType_7764, var_integerType_7764, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 234)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_simpleAssignmentCopyRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_functionName_9181.getter_nowhere (SOURCE_FILE ("type-integer.galgas", 236)), GGS_bool (false), GGS_bool (false), var_integerType_7764, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 235)) ;
  GGS_omnibusType var_boolType_9483 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-integer.galgas", 244)), var_integerType_7764, GGS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9483, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 244)) ;
  }
  {
  const GGS_integerDeclarationAST temp_11 = this ;
  GGS_string temp_12 ;
  const GalgasBool test_13 = temp_11.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_13) {
    temp_12 = GGS_string ("icmp sle") ;
  }else if (GalgasBool::boolFalse == test_13) {
    temp_12 = GGS_string ("icmp ule") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-integer.galgas", 247)), var_integerType_7764, temp_12, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9483, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 246)) ;
  }
  {
  const GGS_integerDeclarationAST temp_14 = this ;
  GGS_string temp_15 ;
  const GalgasBool test_16 = temp_14.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_16) {
    temp_15 = GGS_string ("icmp slt") ;
  }else if (GalgasBool::boolFalse == test_16) {
    temp_15 = GGS_string ("icmp ult") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-integer.galgas", 255)), var_integerType_7764, temp_15, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9483, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 254)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("type-integer.galgas", 262)), var_integerType_7764, GGS_string ("shl"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7764, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 262)) ;
  }
  {
  const GGS_integerDeclarationAST temp_17 = this ;
  GGS_string temp_18 ;
  const GalgasBool test_19 = temp_17.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_19) {
    temp_18 = GGS_string ("ashr") ;
  }else if (GalgasBool::boolFalse == test_19) {
    temp_18 = GGS_string ("lshr") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("type-integer.galgas", 265)), var_integerType_7764, temp_18, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7764, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 264)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-integer.galgas", 272)), var_integerType_7764, GGS_string ("or"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7764, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("type-integer.galgas", 274)), var_integerType_7764, GGS_string ("and"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7764, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-integer.galgas", 276)), var_integerType_7764, GGS_string ("xor"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7764, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("type-integer.galgas", 278)), var_integerType_7764, GGS_string ("add"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7764, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("type-integer.galgas", 280)), var_integerType_7764, GGS_string ("sub"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7764, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 280)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("type-integer.galgas", 282)), var_integerType_7764, GGS_string ("mul"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7764, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 282)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator???&?'
//
//--------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                          const GGS_omnibusType constinArgument_inIntegerType,
                                                          const GGS_string constinArgument_inLLVMOp,
                                                          GGS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_ctIntType_11482 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 294)) ;
  GGS_lstring var_key_11526 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 295)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 295)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11526, constinArgument_inResultType, GGS_inlineInfixOperatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 296)) ;
  }
  var_key_11526 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 297)), var_ctIntType_11482, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 297)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11526, constinArgument_inResultType, GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 298)) ;
  }
  var_key_11526 = function_infixOperatorMapKey (var_ctIntType_11482, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 299)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 299)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11526, constinArgument_inResultType, GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 300)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inlineInfix_integer_compileTimeInt_operatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                                          const GGS_location constinArgument_inOperatorLocation,
                                                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                                                          const GGS_omnibusType constinArgument_inResultType,
                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GGS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_minValue_13087 ;
  GGS_bigint var_maxValue_13106 ;
  GGS_bool joker_13115_2 ; // Joker input parameter
  GGS_uint joker_13115_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)).readProperty_kind ().method_extractInteger (var_minValue_13087, var_maxValue_13106, joker_13115_2, joker_13115_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)) ;
  GGS_bigint var_value_13175 ;
  GGS_omnibusType joker_13160_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_13160_1, var_value_13175, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 325)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_value_13175.objectCompare (var_minValue_13087)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("right operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)).add_operation (GGS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 327)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_value_13175.objectCompare (var_maxValue_13106)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("right operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 332)).add_operation (GGS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 331)) ;
      }
    }
  }
  GGS_objectIR var_leftOperand_13634 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13634, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage temp_4 = this ;
  GGS_string var_s_13822 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13634, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (extensionGetter_llvmName (var_leftOperand_13634, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)).add_operation (extensionGetter_llvmName (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)) ;
  {
  GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_13822, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inlineInfix_compileTimeInt_integer_operatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                                          const GGS_location constinArgument_inOperatorLocation,
                                                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                                                          const GGS_omnibusType constinArgument_inResultType,
                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GGS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_minValue_15054 ;
  GGS_bigint var_maxValue_15073 ;
  GGS_bool joker_15082_2 ; // Joker input parameter
  GGS_uint joker_15082_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)).readProperty_kind ().method_extractInteger (var_minValue_15054, var_maxValue_15073, joker_15082_2, joker_15082_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)) ;
  GGS_bigint var_value_15141 ;
  GGS_omnibusType joker_15126_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_15126_1, var_value_15141, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 366)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_value_15141.objectCompare (var_minValue_15054)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("left operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)).add_operation (GGS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_value_15141.objectCompare (var_maxValue_15073)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("left operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)).add_operation (GGS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 372)) ;
      }
    }
  }
  GGS_objectIR var_rightOperand_15600 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_15600, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage temp_4 = this ;
  GGS_string var_s_15791 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_15600, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (extensionGetter_llvmName (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (extensionGetter_llvmName (var_rightOperand_15600, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)) ;
  {
  GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_15791, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
}

