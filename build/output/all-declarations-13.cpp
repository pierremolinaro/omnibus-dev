#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

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

GGS_enumerationConstantList_2E_element::GGS_enumerationConstantList_2E_element (void) :
mProperty_mConstantName (),
mProperty_mConstantValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element::GGS_enumerationConstantList_2E_element (const GGS_enumerationConstantList_2E_element & inSource) :
mProperty_mConstantName (inSource.mProperty_mConstantName),
mProperty_mConstantValue (inSource.mProperty_mConstantValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element & GGS_enumerationConstantList_2E_element::operator = (const GGS_enumerationConstantList_2E_element & inSource) {
  mProperty_mConstantName = inSource.mProperty_mConstantName ;
  mProperty_mConstantValue = inSource.mProperty_mConstantValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumerationConstantList_2E_element GGS_enumerationConstantList_2E_element::init_21__21_ (const GGS_lstring & in_mConstantName,
                                                                                             const GGS_bigint & in_mConstantValue,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mConstantValue = in_mConstantValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element::GGS_enumerationConstantList_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_bigint & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mConstantValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumerationConstantList_2E_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mConstantValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList_2E_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mConstantValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationConstantList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumerationConstantList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationConstantList_2E_element ("enumerationConstantList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationConstantList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationConstantList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationConstantList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element GGS_enumerationConstantList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumerationConstantList_2E_element result ;
  const GGS_enumerationConstantList_2E_element * p = (const GGS_enumerationConstantList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationConstantList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_interruptionConfigurationList_2E_element::GGS_interruptionConfigurationList_2E_element (void) :
mProperty_mInterruptName (),
mProperty_mInterruptionPanicCode () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element::GGS_interruptionConfigurationList_2E_element (const GGS_interruptionConfigurationList_2E_element & inSource) :
mProperty_mInterruptName (inSource.mProperty_mInterruptName),
mProperty_mInterruptionPanicCode (inSource.mProperty_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element & GGS_interruptionConfigurationList_2E_element::operator = (const GGS_interruptionConfigurationList_2E_element & inSource) {
  mProperty_mInterruptName = inSource.mProperty_mInterruptName ;
  mProperty_mInterruptionPanicCode = inSource.mProperty_mInterruptionPanicCode ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element GGS_interruptionConfigurationList_2E_element::init_21__21_ (const GGS_lstring & in_mInterruptName,
                                                                                                         const GGS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_interruptionConfigurationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element::GGS_interruptionConfigurationList_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_interruptionPanicCode & inOperand1) :
mProperty_mInterruptName (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_interruptionConfigurationList_2E_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList_2E_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @interruptionConfigurationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInterruptName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @interruptionConfigurationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2E_element ("interruptionConfigurationList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_interruptionConfigurationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptionConfigurationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptionConfigurationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element GGS_interruptionConfigurationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_interruptionConfigurationList_2E_element result ;
  const GGS_interruptionConfigurationList_2E_element * p = (const GGS_interruptionConfigurationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptionConfigurationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element::GGS_typeConstantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mConstantMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element::GGS_typeConstantMap_2E_element (const GGS_typeConstantMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mConstantMap (inSource.mProperty_mConstantMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element & GGS_typeConstantMap_2E_element::operator = (const GGS_typeConstantMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mConstantMap = inSource.mProperty_mConstantMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeConstantMap_2E_element GGS_typeConstantMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_constantMap & in_mConstantMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantMap = in_mConstantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element::GGS_typeConstantMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_constantMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConstantMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeConstantMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeConstantMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element ("typeConstantMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeConstantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element GGS_typeConstantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap_2E_element result ;
  const GGS_typeConstantMap_2E_element * p = (const GGS_typeConstantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeConstantMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_::GGS_typeConstantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_::GGS_typeConstantMap_2E_element_3F_ (const GGS_typeConstantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_ GGS_typeConstantMap_2E_element_3F_::init_nil (void) {
  GGS_typeConstantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstantMap_2E_element_3F_::isValid (void) const {
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

bool GGS_typeConstantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeConstantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element_3F_::description (String & ioString,
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
//     @typeConstantMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element_3F_ ("typeConstantMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeConstantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_ GGS_typeConstantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap_2E_element_3F_ result ;
  const GGS_typeConstantMap_2E_element_3F_ * p = (const GGS_typeConstantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mClassTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (const GGS_constantMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mClassTypeName (inSource.mProperty_mClassTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element & GGS_constantMap_2E_element::operator = (const GGS_constantMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mClassTypeName = inSource.mProperty_mClassTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                         const GGS_bigint & in_mIndex,
                                                                         const GGS_lstring & in_mClassTypeName,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mClassTypeName = in_mClassTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_bigint & inOperand1,
                                                        const GGS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mClassTypeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mClassTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constantMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element ("constantMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  const GGS_constantMap_2E_element * p = (const GGS_constantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constantMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_::GGS_constantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_::GGS_constantMap_2E_element_3F_ (const GGS_constantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap_2E_element_3F_::init_nil (void) {
  GGS_constantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element_3F_::isValid (void) const {
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

bool GGS_constantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element_3F_::description (String & ioString,
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
//     @constantMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ("constantMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_constantMap_2E_element_3F_ result ;
  const GGS_constantMap_2E_element_3F_ * p = (const GGS_constantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element::GGS_typeConstructorMap_2E_element (void) :
mProperty_lkey (),
mProperty_mConstructorMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element::GGS_typeConstructorMap_2E_element (const GGS_typeConstructorMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mConstructorMap (inSource.mProperty_mConstructorMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element & GGS_typeConstructorMap_2E_element::operator = (const GGS_typeConstructorMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mConstructorMap = inSource.mProperty_mConstructorMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeConstructorMap_2E_element GGS_typeConstructorMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_constructorMap & in_mConstructorMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeConstructorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstructorMap = in_mConstructorMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element::GGS_typeConstructorMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_constructorMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConstructorMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstructorMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstructorMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstructorMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeConstructorMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstructorMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeConstructorMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element ("typeConstructorMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeConstructorMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstructorMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstructorMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element GGS_typeConstructorMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap_2E_element result ;
  const GGS_typeConstructorMap_2E_element * p = (const GGS_typeConstructorMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstructorMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeConstructorMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_::GGS_typeConstructorMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_::GGS_typeConstructorMap_2E_element_3F_ (const GGS_typeConstructorMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_ GGS_typeConstructorMap_2E_element_3F_::init_nil (void) {
  GGS_typeConstructorMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstructorMap_2E_element_3F_::isValid (void) const {
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

bool GGS_typeConstructorMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeConstructorMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element_3F_::description (String & ioString,
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
//     @typeConstructorMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element_3F_ ("typeConstructorMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeConstructorMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstructorMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstructorMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_ GGS_typeConstructorMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap_2E_element_3F_ result ;
  const GGS_typeConstructorMap_2E_element_3F_ * p = (const GGS_typeConstructorMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstructorMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue::GGS_constructorValue_2E_arrayValue (void) :
mProperty_elementType (),
mProperty_size () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue::GGS_constructorValue_2E_arrayValue (const GGS_constructorValue_2E_arrayValue & inSource) :
mProperty_elementType (inSource.mProperty_elementType),
mProperty_size (inSource.mProperty_size) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue & GGS_constructorValue_2E_arrayValue::operator = (const GGS_constructorValue_2E_arrayValue & inSource) {
  mProperty_elementType = inSource.mProperty_elementType ;
  mProperty_size = inSource.mProperty_size ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue GGS_constructorValue_2E_arrayValue::init_21__21_ (const GGS_omnibusType & in_elementType,
                                                                                     const GGS_uint & in_size,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_arrayValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue::GGS_constructorValue_2E_arrayValue (const GGS_omnibusType & inOperand0,
                                                                        const GGS_uint & inOperand1) :
mProperty_elementType (inOperand0),
mProperty_size (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_arrayValue::isValid (void) const {
  return mProperty_elementType.isValid () && mProperty_size.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue::drop (void) {
  mProperty_elementType.drop () ;
  mProperty_size.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorValue.arrayValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_elementType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_size.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constructorValue.arrayValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue ("constructorValue.arrayValue",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorValue_2E_arrayValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_arrayValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_arrayValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue GGS_constructorValue_2E_arrayValue::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_arrayValue result ;
  const GGS_constructorValue_2E_arrayValue * p = (const GGS_constructorValue_2E_arrayValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_arrayValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.arrayValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constructorValue_2E_arrayValue_3F_
//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_::GGS_constructorValue_2E_arrayValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_::GGS_constructorValue_2E_arrayValue_3F_ (const GGS_constructorValue_2E_arrayValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_ GGS_constructorValue_2E_arrayValue_3F_::init_nil (void) {
  GGS_constructorValue_2E_arrayValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_arrayValue_3F_::isValid (void) const {
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

bool GGS_constructorValue_2E_arrayValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constructorValue_2E_arrayValue () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue_3F_::description (String & ioString,
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
//     @constructorValue.arrayValue? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue_3F_ ("constructorValue.arrayValue?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorValue_2E_arrayValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_arrayValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_arrayValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_ GGS_constructorValue_2E_arrayValue_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_arrayValue_3F_ result ;
  const GGS_constructorValue_2E_arrayValue_3F_ * p = (const GGS_constructorValue_2E_arrayValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_arrayValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.arrayValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element::GGS_constructorSignature_2E_element (void) :
mProperty_mSelector (),
mProperty_mType (),
mProperty_mFieldIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element::GGS_constructorSignature_2E_element (const GGS_constructorSignature_2E_element & inSource) :
mProperty_mSelector (inSource.mProperty_mSelector),
mProperty_mType (inSource.mProperty_mType),
mProperty_mFieldIndex (inSource.mProperty_mFieldIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element & GGS_constructorSignature_2E_element::operator = (const GGS_constructorSignature_2E_element & inSource) {
  mProperty_mSelector = inSource.mProperty_mSelector ;
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mFieldIndex = inSource.mProperty_mFieldIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorSignature_2E_element GGS_constructorSignature_2E_element::init_21__21__21_ (const GGS_string & in_mSelector,
                                                                                           const GGS_omnibusType & in_mType,
                                                                                           const GGS_uint & in_mFieldIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mFieldIndex = in_mFieldIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element::GGS_constructorSignature_2E_element (const GGS_string & inOperand0,
                                                                          const GGS_omnibusType & inOperand1,
                                                                          const GGS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorSignature_2E_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mType.isValid () && mProperty_mFieldIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature_2E_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
  mProperty_mFieldIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorSignature.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFieldIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constructorSignature.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorSignature_2E_element ("constructorSignature.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element GGS_constructorSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_constructorSignature_2E_element result ;
  const GGS_constructorSignature_2E_element * p = (const GGS_constructorSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element::GGS_constructorMap_2E_element (void) :
mProperty_lkey (),
mProperty_mSignature (),
mProperty_mInitValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element::GGS_constructorMap_2E_element (const GGS_constructorMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSignature (inSource.mProperty_mSignature),
mProperty_mInitValue (inSource.mProperty_mInitValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element & GGS_constructorMap_2E_element::operator = (const GGS_constructorMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSignature = inSource.mProperty_mSignature ;
  mProperty_mInitValue = inSource.mProperty_mInitValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorMap_2E_element GGS_constructorMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_constructorSignature & in_mSignature,
                                                                               const GGS_constructorValue & in_mInitValue,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mInitValue = in_mInitValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element::GGS_constructorMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_constructorSignature & inOperand1,
                                                              const GGS_constructorValue & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSignature (inOperand1),
mProperty_mInitValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mInitValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constructorMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorMap_2E_element ("constructorMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element GGS_constructorMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_constructorMap_2E_element result ;
  const GGS_constructorMap_2E_element * p = (const GGS_constructorMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constructorMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_::GGS_constructorMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_::GGS_constructorMap_2E_element_3F_ (const GGS_constructorMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_ GGS_constructorMap_2E_element_3F_::init_nil (void) {
  GGS_constructorMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorMap_2E_element_3F_::isValid (void) const {
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

bool GGS_constructorMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constructorMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element_3F_::description (String & ioString,
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
//     @constructorMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorMap_2E_element_3F_ ("constructorMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_ GGS_constructorMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_constructorMap_2E_element_3F_ result ;
  const GGS_constructorMap_2E_element_3F_ * p = (const GGS_constructorMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element::GGS_typePropertyGetterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mGetterMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element::GGS_typePropertyGetterMap_2E_element (const GGS_typePropertyGetterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mGetterMap (inSource.mProperty_mGetterMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element & GGS_typePropertyGetterMap_2E_element::operator = (const GGS_typePropertyGetterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mGetterMap = inSource.mProperty_mGetterMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element GGS_typePropertyGetterMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_propertyGetterMap & in_mGetterMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typePropertyGetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGetterMap = in_mGetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element::GGS_typePropertyGetterMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_propertyGetterMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mGetterMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertyGetterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGetterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGetterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typePropertyGetterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGetterMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typePropertyGetterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element ("typePropertyGetterMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePropertyGetterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertyGetterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertyGetterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element GGS_typePropertyGetterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap_2E_element result ;
  const GGS_typePropertyGetterMap_2E_element * p = (const GGS_typePropertyGetterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertyGetterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typePropertyGetterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_::GGS_typePropertyGetterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_::GGS_typePropertyGetterMap_2E_element_3F_ (const GGS_typePropertyGetterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_ GGS_typePropertyGetterMap_2E_element_3F_::init_nil (void) {
  GGS_typePropertyGetterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertyGetterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_typePropertyGetterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typePropertyGetterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element_3F_::description (String & ioString,
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
//     @typePropertyGetterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element_3F_ ("typePropertyGetterMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePropertyGetterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertyGetterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertyGetterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_ GGS_typePropertyGetterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap_2E_element_3F_ result ;
  const GGS_typePropertyGetterMap_2E_element_3F_ * p = (const GGS_typePropertyGetterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertyGetterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty::GGS_propertyGetterKind_2E_storedProperty (void) :
mProperty_type (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty::GGS_propertyGetterKind_2E_storedProperty (const GGS_propertyGetterKind_2E_storedProperty & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_index (inSource.mProperty_index) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty & GGS_propertyGetterKind_2E_storedProperty::operator = (const GGS_propertyGetterKind_2E_storedProperty & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_index = inSource.mProperty_index ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty GGS_propertyGetterKind_2E_storedProperty::init_21__21_ (const GGS_omnibusType & in_type,
                                                                                                 const GGS_uint & in_index,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_storedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty::GGS_propertyGetterKind_2E_storedProperty (const GGS_omnibusType & inOperand0,
                                                                                    const GGS_uint & inOperand1) :
mProperty_type (inOperand0),
mProperty_index (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_storedProperty::isValid (void) const {
  return mProperty_type.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty::drop (void) {
  mProperty_type.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterKind.storedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_index.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyGetterKind.storedProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty ("propertyGetterKind.storedProperty",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterKind_2E_storedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_storedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_storedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty GGS_propertyGetterKind_2E_storedProperty::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_storedProperty result ;
  const GGS_propertyGetterKind_2E_storedProperty * p = (const GGS_propertyGetterKind_2E_storedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_storedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.storedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyGetterKind_2E_storedProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_::GGS_propertyGetterKind_2E_storedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_::GGS_propertyGetterKind_2E_storedProperty_3F_ (const GGS_propertyGetterKind_2E_storedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_ GGS_propertyGetterKind_2E_storedProperty_3F_::init_nil (void) {
  GGS_propertyGetterKind_2E_storedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_storedProperty_3F_::isValid (void) const {
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

bool GGS_propertyGetterKind_2E_storedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyGetterKind_2E_storedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty_3F_::description (String & ioString,
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
//     @propertyGetterKind.storedProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty_3F_ ("propertyGetterKind.storedProperty?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterKind_2E_storedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_storedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_storedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_ GGS_propertyGetterKind_2E_storedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_storedProperty_3F_ result ;
  const GGS_propertyGetterKind_2E_storedProperty_3F_ * p = (const GGS_propertyGetterKind_2E_storedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_storedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.storedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element::GGS_propertyGetterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mVisibility (),
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element::GGS_propertyGetterMap_2E_element (const GGS_propertyGetterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mVisibility (inSource.mProperty_mVisibility),
mProperty_mAccess (inSource.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element & GGS_propertyGetterMap_2E_element::operator = (const GGS_propertyGetterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mVisibility = inSource.mProperty_mVisibility ;
  mProperty_mAccess = inSource.mProperty_mAccess ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGetterMap_2E_element GGS_propertyGetterMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_propertyVisibility & in_mVisibility,
                                                                                     const GGS_propertyGetterKind & in_mAccess,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element::GGS_propertyGetterMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_propertyVisibility & inOperand1,
                                                                    const GGS_propertyGetterKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mVisibility (inOperand1),
mProperty_mAccess (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mVisibility.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyGetterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterMap_2E_element ("propertyGetterMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element GGS_propertyGetterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap_2E_element result ;
  const GGS_propertyGetterMap_2E_element * p = (const GGS_propertyGetterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyGetterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_::GGS_propertyGetterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_::GGS_propertyGetterMap_2E_element_3F_ (const GGS_propertyGetterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_ GGS_propertyGetterMap_2E_element_3F_::init_nil (void) {
  GGS_propertyGetterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_propertyGetterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyGetterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element_3F_::description (String & ioString,
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
//     @propertyGetterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterMap_2E_element_3F_ ("propertyGetterMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_ GGS_propertyGetterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap_2E_element_3F_ result ;
  const GGS_propertyGetterMap_2E_element_3F_ * p = (const GGS_propertyGetterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element::GGS_typePropertySetterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mSetterMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element::GGS_typePropertySetterMap_2E_element (const GGS_typePropertySetterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSetterMap (inSource.mProperty_mSetterMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element & GGS_typePropertySetterMap_2E_element::operator = (const GGS_typePropertySetterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSetterMap = inSource.mProperty_mSetterMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element GGS_typePropertySetterMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_propertySetterMap & in_mSetterMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typePropertySetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSetterMap = in_mSetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element::GGS_typePropertySetterMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_propertySetterMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mSetterMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertySetterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSetterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSetterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typePropertySetterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSetterMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typePropertySetterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element ("typePropertySetterMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePropertySetterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertySetterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertySetterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element GGS_typePropertySetterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap_2E_element result ;
  const GGS_typePropertySetterMap_2E_element * p = (const GGS_typePropertySetterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertySetterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typePropertySetterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_::GGS_typePropertySetterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_::GGS_typePropertySetterMap_2E_element_3F_ (const GGS_typePropertySetterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_ GGS_typePropertySetterMap_2E_element_3F_::init_nil (void) {
  GGS_typePropertySetterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertySetterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_typePropertySetterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typePropertySetterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element_3F_::description (String & ioString,
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
//     @typePropertySetterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element_3F_ ("typePropertySetterMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePropertySetterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertySetterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertySetterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_ GGS_typePropertySetterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap_2E_element_3F_ result ;
  const GGS_typePropertySetterMap_2E_element_3F_ * p = (const GGS_typePropertySetterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertySetterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element::GGS_propertySetterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mVisibility (),
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element::GGS_propertySetterMap_2E_element (const GGS_propertySetterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mVisibility (inSource.mProperty_mVisibility),
mProperty_mAccess (inSource.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element & GGS_propertySetterMap_2E_element::operator = (const GGS_propertySetterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mVisibility = inSource.mProperty_mVisibility ;
  mProperty_mAccess = inSource.mProperty_mAccess ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertySetterMap_2E_element GGS_propertySetterMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_propertyVisibility & in_mVisibility,
                                                                                     const GGS_propertySetterKind & in_mAccess,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element::GGS_propertySetterMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_propertyVisibility & inOperand1,
                                                                    const GGS_propertySetterKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mVisibility (inOperand1),
mProperty_mAccess (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertySetterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mVisibility.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertySetterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterMap_2E_element ("propertySetterMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element GGS_propertySetterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap_2E_element result ;
  const GGS_propertySetterMap_2E_element * p = (const GGS_propertySetterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertySetterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_::GGS_propertySetterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_::GGS_propertySetterMap_2E_element_3F_ (const GGS_propertySetterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_ GGS_propertySetterMap_2E_element_3F_::init_nil (void) {
  GGS_propertySetterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_propertySetterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertySetterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element_3F_::description (String & ioString,
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
//     @propertySetterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterMap_2E_element_3F_ ("propertySetterMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_ GGS_propertySetterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap_2E_element_3F_ result ;
  const GGS_propertySetterMap_2E_element_3F_ * p = (const GGS_propertySetterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty::GGS_propertySetterKind_2E_storedProperty (void) :
mProperty_type (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty::GGS_propertySetterKind_2E_storedProperty (const GGS_propertySetterKind_2E_storedProperty & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_index (inSource.mProperty_index) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty & GGS_propertySetterKind_2E_storedProperty::operator = (const GGS_propertySetterKind_2E_storedProperty & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_index = inSource.mProperty_index ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty GGS_propertySetterKind_2E_storedProperty::init_21__21_ (const GGS_omnibusType & in_type,
                                                                                                 const GGS_uint & in_index,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_storedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty::GGS_propertySetterKind_2E_storedProperty (const GGS_omnibusType & inOperand0,
                                                                                    const GGS_uint & inOperand1) :
mProperty_type (inOperand0),
mProperty_index (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_storedProperty::isValid (void) const {
  return mProperty_type.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty::drop (void) {
  mProperty_type.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertySetterKind.storedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_index.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertySetterKind.storedProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty ("propertySetterKind.storedProperty",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterKind_2E_storedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind_2E_storedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind_2E_storedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty GGS_propertySetterKind_2E_storedProperty::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_storedProperty result ;
  const GGS_propertySetterKind_2E_storedProperty * p = (const GGS_propertySetterKind_2E_storedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind_2E_storedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind.storedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertySetterKind_2E_storedProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_::GGS_propertySetterKind_2E_storedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_::GGS_propertySetterKind_2E_storedProperty_3F_ (const GGS_propertySetterKind_2E_storedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_ GGS_propertySetterKind_2E_storedProperty_3F_::init_nil (void) {
  GGS_propertySetterKind_2E_storedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_storedProperty_3F_::isValid (void) const {
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

bool GGS_propertySetterKind_2E_storedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertySetterKind_2E_storedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty_3F_::description (String & ioString,
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
//     @propertySetterKind.storedProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty_3F_ ("propertySetterKind.storedProperty?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterKind_2E_storedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind_2E_storedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind_2E_storedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_ GGS_propertySetterKind_2E_storedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_storedProperty_3F_ result ;
  const GGS_propertySetterKind_2E_storedProperty_3F_ * p = (const GGS_propertySetterKind_2E_storedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind_2E_storedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind.storedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element::GGS_globalStructuredConstantList_2E_element (void) :
mProperty_mType (),
mProperty_mOperandIRList () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element::GGS_globalStructuredConstantList_2E_element (const GGS_globalStructuredConstantList_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mOperandIRList (inSource.mProperty_mOperandIRList) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element & GGS_globalStructuredConstantList_2E_element::operator = (const GGS_globalStructuredConstantList_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mOperandIRList = inSource.mProperty_mOperandIRList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element GGS_globalStructuredConstantList_2E_element::init_21__21_ (const GGS_omnibusType & in_mType,
                                                                                                       const GGS_operandIRList & in_mOperandIRList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalStructuredConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mOperandIRList = in_mOperandIRList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element::GGS_globalStructuredConstantList_2E_element (const GGS_omnibusType & inOperand0,
                                                                                          const GGS_operandIRList & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mOperandIRList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalStructuredConstantList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mOperandIRList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mOperandIRList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalStructuredConstantList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOperandIRList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @globalStructuredConstantList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalStructuredConstantList_2E_element ("globalStructuredConstantList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalStructuredConstantList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalStructuredConstantList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalStructuredConstantList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element GGS_globalStructuredConstantList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_globalStructuredConstantList_2E_element result ;
  const GGS_globalStructuredConstantList_2E_element * p = (const GGS_globalStructuredConstantList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalStructuredConstantList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element::GGS_staticStringMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element::GGS_staticStringMap_2E_element (const GGS_staticStringMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element & GGS_staticStringMap_2E_element::operator = (const GGS_staticStringMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticStringMap_2E_element GGS_staticStringMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_uint & in_mIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticStringMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element::GGS_staticStringMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticStringMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticStringMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @staticStringMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticStringMap_2E_element ("staticStringMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticStringMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticStringMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticStringMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element GGS_staticStringMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_staticStringMap_2E_element result ;
  const GGS_staticStringMap_2E_element * p = (const GGS_staticStringMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticStringMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @staticStringMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_::GGS_staticStringMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_::GGS_staticStringMap_2E_element_3F_ (const GGS_staticStringMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_ GGS_staticStringMap_2E_element_3F_::init_nil (void) {
  GGS_staticStringMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticStringMap_2E_element_3F_::isValid (void) const {
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

bool GGS_staticStringMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_staticStringMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element_3F_::description (String & ioString,
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
//     @staticStringMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticStringMap_2E_element_3F_ ("staticStringMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticStringMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticStringMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticStringMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_ GGS_staticStringMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticStringMap_2E_element_3F_ result ;
  const GGS_staticStringMap_2E_element_3F_ * p = (const GGS_staticStringMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticStringMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element::GGS_globalConstantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element::GGS_globalConstantMap_2E_element (const GGS_globalConstantMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element & GGS_globalConstantMap_2E_element::operator = (const GGS_globalConstantMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalConstantMap_2E_element GGS_globalConstantMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_objectIR & in_mValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element::GGS_globalConstantMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalConstantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalConstantMap.element:") ;
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
//     @globalConstantMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element ("globalConstantMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalConstantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element GGS_globalConstantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap_2E_element result ;
  const GGS_globalConstantMap_2E_element * p = (const GGS_globalConstantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @globalConstantMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_::GGS_globalConstantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_::GGS_globalConstantMap_2E_element_3F_ (const GGS_globalConstantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_ GGS_globalConstantMap_2E_element_3F_::init_nil (void) {
  GGS_globalConstantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalConstantMap_2E_element_3F_::isValid (void) const {
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

bool GGS_globalConstantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_globalConstantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element_3F_::description (String & ioString,
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
//     @globalConstantMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element_3F_ ("globalConstantMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalConstantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_ GGS_globalConstantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap_2E_element_3F_ result ;
  const GGS_globalConstantMap_2E_element_3F_ * p = (const GGS_globalConstantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element::GGS_availableInterruptMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInterruptionPanicCode () {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element::GGS_availableInterruptMap_2E_element (const GGS_availableInterruptMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInterruptionPanicCode (inSource.mProperty_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element & GGS_availableInterruptMap_2E_element::operator = (const GGS_availableInterruptMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInterruptionPanicCode = inSource.mProperty_mInterruptionPanicCode ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_availableInterruptMap_2E_element GGS_availableInterruptMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_availableInterruptMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element::GGS_availableInterruptMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_interruptionPanicCode & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_availableInterruptMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @availableInterruptMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @availableInterruptMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_availableInterruptMap_2E_element ("availableInterruptMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_availableInterruptMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_availableInterruptMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_availableInterruptMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element GGS_availableInterruptMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap_2E_element result ;
  const GGS_availableInterruptMap_2E_element * p = (const GGS_availableInterruptMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_availableInterruptMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @availableInterruptMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_::GGS_availableInterruptMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_::GGS_availableInterruptMap_2E_element_3F_ (const GGS_availableInterruptMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_ GGS_availableInterruptMap_2E_element_3F_::init_nil (void) {
  GGS_availableInterruptMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_availableInterruptMap_2E_element_3F_::isValid (void) const {
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

bool GGS_availableInterruptMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_availableInterruptMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element_3F_::description (String & ioString,
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
//     @availableInterruptMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_availableInterruptMap_2E_element_3F_ ("availableInterruptMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_availableInterruptMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_availableInterruptMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_availableInterruptMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_ GGS_availableInterruptMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap_2E_element_3F_ result ;
  const GGS_availableInterruptMap_2E_element_3F_ * p = (const GGS_availableInterruptMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_availableInterruptMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//
//Extension proc '@decoratedRegularRoutineList.element semanticAnalysis'
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
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 48)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    const GGS_decoratedRegularRoutineList_2E_element temp_3 = inObject ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_receiverTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 49)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 49)) ;
  }
  GGS_omnibusType var_receiverType_1958 = temp_1 ;
  GGS_universalValuedObjectMap var_universalMap_2133 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_2133, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 53)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_2133, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 54)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_decoratedRegularRoutineList_2E_element temp_5 = inObject ;
    test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_returnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_decoratedRegularRoutineList_2E_element temp_6 = inObject ;
      GGS_lstring var_resultVarName_2325 = GGS_lstring::init_21__21_ (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 57)), temp_6.readProperty_returnTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
      const GGS_decoratedRegularRoutineList_2E_element temp_7 = inObject ;
      GGS_omnibusType var_resultType_2421 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_7.readProperty_returnTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 58)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 58)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_2133, var_resultVarName_2325, var_resultType_2421, var_resultVarName_2325, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("regular-routine-analysis.galgas3", 59)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 59)) ;
      }
    }
  }
  GGS_routineFormalArgumentListIR temp_8 = GGS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 62)) ;
  GGS_routineFormalArgumentListIR var_formalArguments_2666 = temp_8 ;
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_9 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_10 = inObject ;
  routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_9.readProperty_formalArgumentList (), var_universalMap_2133, var_formalArguments_2666, temp_10.readProperty_warningOnUnusedArgs (), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 63)) ;
  }
  GGS_allocaList temp_11 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 71)) ;
  GGS_allocaList var_allocaList_2914 = temp_11 ;
  GGS_instructionListIR temp_12 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 72)) ;
  GGS_instructionListIR var_instructionGenerationList_2956 = temp_12 ;
  const GGS_decoratedRegularRoutineList_2E_element temp_13 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_14 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_15 = inObject ;
  extensionMethod_analyzeRoutineInstructionList (temp_13.readProperty_mInstructionList (), var_receiverType_1958, temp_14.readProperty_routineAttributes (), constinArgument_inContext, temp_15.readProperty_mode (), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_2133, var_allocaList_2914, var_instructionGenerationList_2956, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 73)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_2133, var_instructionGenerationList_2956, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 85)) ;
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_16 = inObject ;
  extensionSetter_closeBranch (var_universalMap_2133, temp_16.readProperty_mEndOfRoutineDeclaration (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 86)) ;
  }
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_17 = inObject ;
  extensionSetter_closeOverride (var_universalMap_2133, temp_17.readProperty_mEndOfRoutineDeclaration (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 87)) ;
  }
  const GGS_decoratedRegularRoutineList_2E_element temp_18 = inObject ;
  GGS_omnibusType temp_19 ;
  const GalgasBool test_20 = GGS_bool (ComparisonKind::equal, temp_18.readProperty_returnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_20) {
    temp_19 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 90)) ;
  }else if (GalgasBool::boolFalse == test_20) {
    const GGS_decoratedRegularRoutineList_2E_element temp_21 = inObject ;
    temp_19 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_21.readProperty_returnTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 92)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 92)) ;
  }
  GGS_omnibusType var_returnType_3616 = temp_19 ;
  const GGS_decoratedRegularRoutineList_2E_element temp_22 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_23 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_24 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_25 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_26 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_regularRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (temp_22.readProperty_routineMangledLLVMName (), temp_23.readProperty_isRequired (), temp_24.readProperty_warnIfUnused (), var_receiverType_1958, var_formalArguments_2666, var_allocaList_2914, var_instructionGenerationList_2956, temp_25.readProperty_exportedRoutine (), temp_26.readProperty_routineKind (), var_returnType_3616, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 94)) ;
}


//--------------------------------------------------------------------------------------------------
// @regularRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_regularRoutineIR::objectCompare (const GGS_regularRoutineIR & inOperand) const {
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

GGS_regularRoutineIR::GGS_regularRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                         const GGS_bool & in_isRequired,
                                                                         const GGS_bool & in_warnsIfUnused,
                                                                         const GGS_omnibusType & in_mReceiverType,
                                                                         const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                         const GGS_allocaList & in_mAllocaList,
                                                                         const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                         const GGS_bool & in_mExportedFunction,
                                                                         const GGS_routineKind & in_mKind,
                                                                         const GGS_omnibusType & in_mReturnType,
                                                                         const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_regularRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_regularRoutineIR (inCompiler COMMA_THERE)) ;
  object->regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mFormalArgumentListForGeneration, in_mAllocaList, in_mInstructionGenerationList, in_mExportedFunction, in_mKind, in_mReturnType, in_mAppendFileAndLineArgumentForPanicLocation, inCompiler) ;
  const GGS_regularRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::
regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                          const GGS_bool & in_isRequired,
                                                                                          const GGS_bool & in_warnsIfUnused,
                                                                                          const GGS_omnibusType & in_mReceiverType,
                                                                                          const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                          const GGS_allocaList & in_mAllocaList,
                                                                                          const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                                          const GGS_bool & in_mExportedFunction,
                                                                                          const GGS_routineKind & in_mKind,
                                                                                          const GGS_omnibusType & in_mReturnType,
                                                                                          const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                                                          Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  mProperty_mExportedFunction = in_mExportedFunction ;
  mProperty_mKind = in_mKind ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation = in_mAppendFileAndLineArgumentForPanicLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR::GGS_regularRoutineIR (const cPtr_regularRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_regularRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_regularRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_regularRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_regularRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_regularRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_regularRoutineIR::readProperty_mExportedFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mExportedFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mExportedFunction (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mExportedFunction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_regularRoutineIR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineKind () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mKind (const GGS_routineKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_regularRoutineIR::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mReturnType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_regularRoutineIR::readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mAppendFileAndLineArgumentForPanicLocation (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAppendFileAndLineArgumentForPanicLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @regularRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_regularRoutineIR::cPtr_regularRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mExportedFunction (),
mProperty_mKind (),
mProperty_mReturnType (),
mProperty_mAppendFileAndLineArgumentForPanicLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_regularRoutineIR::cPtr_regularRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                              const GGS_bool & in_isRequired,
                                              const GGS_bool & in_warnsIfUnused,
                                              const GGS_omnibusType & in_mReceiverType,
                                              const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                              const GGS_allocaList & in_mAllocaList,
                                              const GGS_instructionListIR & in_mInstructionGenerationList,
                                              const GGS_bool & in_mExportedFunction,
                                              const GGS_routineKind & in_mKind,
                                              const GGS_omnibusType & in_mReturnType,
                                              const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mExportedFunction (),
mProperty_mKind (),
mProperty_mReturnType (),
mProperty_mAppendFileAndLineArgumentForPanicLocation () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  mProperty_mExportedFunction = in_mExportedFunction ;
  mProperty_mKind = in_mKind ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation = in_mAppendFileAndLineArgumentForPanicLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_regularRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

void cPtr_regularRoutineIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@regularRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExportedFunction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_regularRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_regularRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mFormalArgumentListForGeneration, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mExportedFunction, mProperty_mKind, mProperty_mReturnType, mProperty_mAppendFileAndLineArgumentForPanicLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_regularRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
    mProperty_mInstructionGenerationList.printNonNullClassInstanceProperties ("mInstructionGenerationList") ;
    mProperty_mExportedFunction.printNonNullClassInstanceProperties ("mExportedFunction") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
    mProperty_mAppendFileAndLineArgumentForPanicLocation.printNonNullClassInstanceProperties ("mAppendFileAndLineArgumentForPanicLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @regularRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularRoutineIR ("regularRoutineIR",
                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_regularRoutineIR result ;
  const GGS_regularRoutineIR * p = (const GGS_regularRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @controlRegisterAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_controlRegisterAssignmentInstructionAST::objectCompare (const GGS_controlRegisterAssignmentInstructionAST & inOperand) const {
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

GGS_controlRegisterAssignmentInstructionAST::GGS_controlRegisterAssignmentInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                      const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_controlRegisterAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_controlRegisterAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mAssignmentKind, in_mSourceExpression, inCompiler) ;
  const GGS_controlRegisterAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::
controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                              const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                              const GGS_expressionAST & in_mSourceExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST::GGS_controlRegisterAssignmentInstructionAST (const cPtr_controlRegisterAssignmentInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_controlRegisterAssignmentInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind GGS_controlRegisterAssignmentInstructionAST::readProperty_mAssignmentKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterAssignmentOperatorKind () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mAssignmentKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mAssignmentKind (const GGS_controlRegisterAssignmentOperatorKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mAssignmentKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_controlRegisterAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                            const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                            const GGS_expressionAST & in_mSourceExpression,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_controlRegisterAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

void cPtr_controlRegisterAssignmentInstructionAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@controlRegisterAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignmentKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_controlRegisterAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_controlRegisterAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mAssignmentKind, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_controlRegisterAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mAssignmentKind.printNonNullClassInstanceProperties ("mAssignmentKind") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @controlRegisterAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ("controlRegisterAssignmentInstructionAST",
                                                                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentInstructionAST result ;
  const GGS_controlRegisterAssignmentInstructionAST * p = (const GGS_controlRegisterAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@externFunctionDeclarationListAST.element enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const GGS_externFunctionDeclarationListAST_2E_element inObject,
                                               GGS_semanticContext & ioArgument_ioContext,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature var_signature_3034 ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_0 = inObject ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mProcFormalArgumentList (), var_signature_3034, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 87)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_3133 ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_1 = inObject ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mReturnTypeName (), var_returnTypeProxy_3133, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 89)) ;
  }
  const GGS_externFunctionDeclarationListAST_2E_element temp_2 = inObject ;
  const GGS_externFunctionDeclarationListAST_2E_element temp_3 = inObject ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_3200 = extensionGetter_routineLLVMDictionaryForFunction (temp_2.readProperty_mMode (), temp_3.readProperty_mRoutineNameForGeneration ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 91)) ;
  const GGS_externFunctionDeclarationListAST_2E_element temp_4 = inObject ;
  GGS_lstring var_routineMangledName_3306 = extensionGetter_mangledName (var_signature_3034, GGS_string::makeEmptyString (), temp_4.readProperty_mExternProcedureName (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 92)) ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_5 = inObject ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_3306, GGS_bool (true), var_signature_3034, var_returnTypeProxy_3133, var_routineLLVMNameDict_3200, GGS_bool (false), temp_5.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 93)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@externProcedureMapIR.element llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const GGS_externProcedureMapIR_2E_element inObject,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externProcedureMapIR_2E_element temp_0 = inObject ;
  GGS_string var_procName_7740 = function_llvmNameForFunction (temp_0.readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 214)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 215)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externProcedureMapIR_2E_element temp_2 = inObject ;
    test_1 = temp_2.readProperty_mReturnType ().getter_isNull (SOURCE_FILE ("declaration-extern-proc.galgas3", 216)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 217)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_externProcedureMapIR_2E_element temp_3 = inObject ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_3.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 219)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 219)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (var_procName_7740, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 221)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 221)) ;
  const GGS_externProcedureMapIR_2E_element temp_4 = inObject ;
  UpEnumerator_routineFormalArgumentListIR enumerator_8037 (temp_4.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_8037.hasCurrentObject ()) {
    switch (enumerator_8037.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8037.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 226)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 226)).add_operation (enumerator_8037.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 226)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8037.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 228)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 228)).add_operation (function_llvmNameForLocalVariable (enumerator_8037.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 228)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8037.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 230)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 230)).add_operation (function_llvmNameForLocalVariable (enumerator_8037.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 230)) ;
      }
      break ;
    }
    enumerator_8037.gotoNextObject () ;
    if (enumerator_8037.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 233)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 235)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 235)).add_operation (GGS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 235)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 235)) ;
}


//--------------------------------------------------------------------------------------------------
// @copyFromReferencesIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_copyFromReferencesIR::objectCompare (const GGS_copyFromReferencesIR & inOperand) const {
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

GGS_copyFromReferencesIR::GGS_copyFromReferencesIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_copyFromReferencesIR GGS_copyFromReferencesIR::
init_21__21_ (const GGS_LValueRepresentation & in_mTarget,
              const GGS_string & in_mSourceLLVMName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_copyFromReferencesIR * object = nullptr ;
  macroMyNew (object, cPtr_copyFromReferencesIR (inCompiler COMMA_THERE)) ;
  object->copyFromReferencesIR_init_21__21_ (in_mTarget, in_mSourceLLVMName, inCompiler) ;
  const GGS_copyFromReferencesIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_copyFromReferencesIR::
copyFromReferencesIR_init_21__21_ (const GGS_LValueRepresentation & in_mTarget,
                                   const GGS_string & in_mSourceLLVMName,
                                   Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceLLVMName = in_mSourceLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR::GGS_copyFromReferencesIR (const cPtr_copyFromReferencesIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_copyFromReferencesIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation GGS_copyFromReferencesIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueRepresentation () ;
  }else{
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_copyFromReferencesIR::setProperty_mTarget (const GGS_LValueRepresentation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_copyFromReferencesIR::readProperty_mSourceLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    return p->mProperty_mSourceLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_copyFromReferencesIR::setProperty_mSourceLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    p->mProperty_mSourceLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @copyFromReferencesIR class
//--------------------------------------------------------------------------------------------------

cPtr_copyFromReferencesIR::cPtr_copyFromReferencesIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mSourceLLVMName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_copyFromReferencesIR::cPtr_copyFromReferencesIR (const GGS_LValueRepresentation & in_mTarget,
                                                      const GGS_string & in_mSourceLLVMName,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mSourceLLVMName () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceLLVMName = in_mSourceLLVMName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_copyFromReferencesIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

void cPtr_copyFromReferencesIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@copyFromReferencesIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_copyFromReferencesIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_copyFromReferencesIR (mProperty_mTarget, mProperty_mSourceLLVMName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_copyFromReferencesIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mSourceLLVMName.printNonNullClassInstanceProperties ("mSourceLLVMName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @copyFromReferencesIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ("copyFromReferencesIR",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_copyFromReferencesIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_copyFromReferencesIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_copyFromReferencesIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR GGS_copyFromReferencesIR::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_copyFromReferencesIR result ;
  const GGS_copyFromReferencesIR * p = (const GGS_copyFromReferencesIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_copyFromReferencesIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("copyFromReferencesIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_addressofExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//
//Extension proc '@controlRegisterDeclarationList.element buildControlRegisterMapForGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildControlRegisterMapForGroup (const GGS_controlRegisterDeclarationList_2E_element inObject,
                                                      GGS_semanticContext & ioArgument_ioContext,
                                                      GGS_controlRegisterMap & ioArgument_ioControlRegisterMap,
                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_registerType_19966 ;
  GGS_uint var_registerBitCount_19994 ;
  {
  const GGS_controlRegisterDeclarationList_2E_element temp_0 = inObject ;
  routine_controlRegisterType_3F__26_context_21_type_21_bitCount (temp_0.readProperty_mRegisterTypeName (), ioArgument_ioContext, var_registerType_19966, var_registerBitCount_19994, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 492)) ;
  }
  GGS_controlRegisterFieldMap var_registerFieldMap_20236 ;
  GGS_sliceMap var_registerBitSliceMap_20263 ;
  GGS_controlRegisterFieldList var_controlRegisterFieldList_20293 ;
  {
  const GGS_controlRegisterDeclarationList_2E_element temp_1 = inObject ;
  const GGS_controlRegisterDeclarationList_2E_element temp_2 = inObject ;
  routine_buildControlRegisterSliceMap_3F__3F__26_context_26_type_3F_bitCount_21__21__21_ (temp_1.readProperty_mRegisterBitSliceList (), temp_2.readProperty_mRegisterBitSliceListLocation (), ioArgument_ioContext, var_registerType_19966, var_registerBitCount_19994, var_registerFieldMap_20236, var_registerBitSliceMap_20263, var_controlRegisterFieldList_20293, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 494)) ;
  }
  const GGS_controlRegisterDeclarationList_2E_element temp_3 = inObject ;
  UpEnumerator_controlRegisterNameListAST enumerator_20374 (temp_3.readProperty_mRegisterArrayList ()) ;
  while (enumerator_20374.hasCurrentObject ()) {
    GGS_objectIR var_addressOffsetExpressionResult_20715 ;
    {
    routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, enumerator_20374.current (HERE).readProperty_mRegisterOffset (), enumerator_20374.current (HERE).readProperty_mRegisterOffsetLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas3", 512)), var_addressOffsetExpressionResult_20715, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 507)) ;
    }
    GGS_bigint var_registerAddressOffset_20767 ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_addressOffsetExpressionResult_20715.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas3", 516)).operator_not (SOURCE_FILE ("declaration-control-register.galgas3", 516)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_20374.current (HERE).readProperty_mRegisterOffsetLocation (), GGS_string ("control register address offset is not a static integer expression"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 517)) ;
        var_registerAddressOffset_20767.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_omnibusType joker_21082_1 ; // Joker input parameter
      var_addressOffsetExpressionResult_20715.method_extractLiteralInteger (joker_21082_1, var_registerAddressOffset_20767, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 521)) ;
    }
    GGS_bigint var_arraySize_21141 ;
    GGS_uint var_elementArraySize_21165 ;
    switch (enumerator_20374.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
    case GGS_controlRegisterKind::Enumeration::invalid:
      break ;
    case GGS_controlRegisterKind::Enumeration::enum_scalar:
      {
        var_arraySize_21141 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 527)) ;
        var_elementArraySize_21165 = GGS_uint (uint32_t (0U)) ;
      }
      break ;
    case GGS_controlRegisterKind::Enumeration::enum_registerArray:
      {
        GGS_expressionAST extractedValue_21327_arraySizeExpression_0 ;
        GGS_location extractedValue_21358_arraySizeLocation_1 ;
        GGS_expressionAST extractedValue_21416_arrayElementSizeExpression_2 ;
        GGS_location extractedValue_21454_arrayElementSizeLocation_3 ;
        enumerator_20374.current (HERE).readProperty_mControlRegisterKind ().getAssociatedValuesFor_registerArray (extractedValue_21327_arraySizeExpression_0, extractedValue_21358_arraySizeLocation_1, extractedValue_21416_arrayElementSizeExpression_2, extractedValue_21454_arrayElementSizeLocation_3) ;
        GGS_objectIR var_sizeExpressionResult_21800 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_21327_arraySizeExpression_0, extractedValue_21358_arraySizeLocation_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas3", 537)), var_sizeExpressionResult_21800, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 532)) ;
        }
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_sizeExpressionResult_21800.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas3", 540)).operator_not (SOURCE_FILE ("declaration-control-register.galgas3", 540)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_21358_arraySizeLocation_1, GGS_string ("control register address is not a static integer expression"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 541)) ;
            var_arraySize_21141.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GGS_omnibusType joker_22062_1 ; // Joker input parameter
          var_sizeExpressionResult_21800.method_extractLiteralInteger (joker_22062_1, var_arraySize_21141, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 543)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::lowerThan, var_arraySize_21141.objectCompare (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 544)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_21358_arraySizeLocation_1, GGS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 545)) ;
              var_arraySize_21141.drop () ; // Release error dropped variable
            }
          }
        }
        GGS_objectIR var_elementArraySizeExpressionResult_22640 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_21416_arrayElementSizeExpression_2, extractedValue_21454_arrayElementSizeLocation_3, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas3", 556)), var_elementArraySizeExpressionResult_22640, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 551)) ;
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_elementArraySizeExpressionResult_22640.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas3", 559)).operator_not (SOURCE_FILE ("declaration-control-register.galgas3", 559)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_21454_arrayElementSizeLocation_3, GGS_string ("element size is not a static integer expression"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 560)) ;
            var_elementArraySize_21165.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_bigint var_elementArraySizeAsBigInt_22976 ;
          GGS_omnibusType joker_22960_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_22640.method_extractLiteralInteger (joker_22960_1, var_elementArraySizeAsBigInt_22976, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 564)) ;
          var_elementArraySize_21165 = var_elementArraySizeAsBigInt_22976.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 565)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioControlRegisterMap.setter_insertKey (enumerator_20374.current (HERE).readProperty_mRegisterName (), var_registerType_19966, enumerator_20374.current (HERE).readProperty_mIsReadOnly (), GGS_bool (false), var_registerBitSliceMap_20263, var_registerFieldMap_20236, var_registerAddressOffset_20767, var_controlRegisterFieldList_20293, var_registerBitCount_19994, var_arraySize_21141.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 578)), var_elementArraySize_21165, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 568)) ;
    }
    enumerator_20374.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@decoratedTaskList.element taskSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_taskSemanticAnalysis (const GGS_decoratedTaskList_2E_element inObject,
                                           const GGS_semanticContext constinArgument_inContext,
                                           const GGS_uint constinArgument_inPriority,
                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                           GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_taskType_14316 ;
  const GGS_decoratedTaskList_2E_element temp_0 = inObject ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTaskName (), var_taskType_14316, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 392)) ;
  const GGS_decoratedTaskList_2E_element temp_1 = inObject ;
  GGS_bigint var_stackSize_14425 = temp_1.readProperty_mStackSize ().readProperty_bigint () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerThan, var_stackSize_14425.objectCompare (GGS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 395)))) ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::notEqual, var_stackSize_14425.modulo_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 395)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 395)).objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 395)))) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_decoratedTaskList_2E_element temp_4 = inObject ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mStackSize ().readProperty_location (), GGS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray5  COMMA_SOURCE_FILE ("task-declaration.galgas3", 396)) ;
    }
  }
  GGS_stringlist var_setupOrderedList_14744 ;
  {
  const GGS_decoratedTaskList_2E_element temp_6 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_6.readProperty_mTaskSetupListAST (), var_setupOrderedList_14744, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 399)) ;
  }
  GGS_stringlist var_activateOrderedList_14914 ;
  {
  const GGS_decoratedTaskList_2E_element temp_7 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_7.readProperty_mTaskActivateListAST (), var_activateOrderedList_14914, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 404)) ;
  }
  GGS_stringlist var_deactivateOrderedList_15091 ;
  {
  const GGS_decoratedTaskList_2E_element temp_8 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_8.readProperty_mTaskDeactivateListAST (), var_deactivateOrderedList_15091, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 409)) ;
  }
  GGS_uint var_taskNameStringIndex_15293 ;
  {
  const GGS_decoratedTaskList_2E_element temp_9 = inObject ;
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, temp_9.readProperty_mTaskName ().readProperty_string (), var_taskNameStringIndex_15293, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 414)) ;
  }
  {
  const GGS_decoratedTaskList_2E_element temp_10 = inObject ;
  const GGS_decoratedTaskList_2E_element temp_11 = inObject ;
  const GGS_decoratedTaskList_2E_element temp_12 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (temp_10.readProperty_mTaskName (), var_taskType_14316, constinArgument_inPriority, temp_11.readProperty_mStackSize ().readProperty_bigint (), var_setupOrderedList_14744, var_activateOrderedList_14914, var_deactivateOrderedList_15091, var_taskNameStringIndex_15293, temp_12.readProperty_mAutoStart (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 416)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@structurePropertyListAST.element enterPropertyInContext'
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
  GGS_lbigint var_explicitAlignment_11858 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 339)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-structure-declaration.galgas3", 339)), inCompiler COMMA_HERE) ;
  GGS_bool var_alignmentDefined_11900 = GGS_bool (false) ;
  const GGS_structurePropertyListAST_2E_element temp_0 = inObject ;
  UpEnumerator_propertyAttributeList enumerator_11942 (temp_0.readProperty_mPropertyAttributeList ()) ;
  while (enumerator_11942.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_11942.current_mAttributeName (HERE).readProperty_string ().objectCompare (GGS_string ("align"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_11942.current_mAttributeName (HERE).readProperty_location (), GGS_string ("only the @align attribute is allowed here"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 343)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_alignmentDefined_11900.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_11942.current_mAttributeName (HERE).readProperty_location (), GGS_string ("@align attribute already defined"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 345)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, enumerator_11942.current_mAttributeValue (HERE).readProperty_bigint ().objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 348)).left_shift_operation (enumerator_11942.current_mAttributeValue (HERE).readProperty_bigint ().substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 348)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("type-structure-declaration.galgas3", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 348)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_11942.current_mAttributeValue (HERE).readProperty_location (), GGS_string ("alignment should be a power of 2"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 349)) ;
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          var_explicitAlignment_11858 = enumerator_11942.current_mAttributeValue (HERE) ;
          var_alignmentDefined_11900 = GGS_bool (true) ;
        }
      }
    }
    enumerator_11942.gotoNextObject () ;
  }
  const GGS_structurePropertyListAST_2E_element temp_7 = inObject ;
  GGS_omnibusType temp_8 ;
  const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mPropertyTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_9) {
    temp_8 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 358)) ;
  }else if (GalgasBool::boolFalse == test_9) {
    const GGS_structurePropertyListAST_2E_element temp_10 = inObject ;
    temp_8 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_10.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 359)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 359)) ;
  }
  GGS_omnibusType var_optionalPropertyType_12533 = temp_8 ;
  const GGS_structurePropertyListAST_2E_element temp_11 = inObject ;
  switch (temp_11.readProperty_mPropertyKind ().enumValue ()) {
  case GGS_propertyKindAST::Enumeration::invalid:
    break ;
  case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
    {
      GGS_expressionAST extractedValue_12784_initExpression_0 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_initializedConstantProperty (extractedValue_12784_initExpression_0) ;
      GGS_objectIR var_expressionIR_13076 ;
      {
      const GGS_structurePropertyListAST_2E_element temp_12 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_13 = inObject ;
      routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_12784_initExpression_0, temp_12.readProperty_mPropertyName ().readProperty_location (), temp_13.readProperty_mPropertyTypeName (), var_expressionIR_13076, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 364)) ;
      }
      GGS_omnibusType var_actualPropertyType_13116 ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_optionalPropertyType_12533.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("type-structure-declaration.galgas3", 373)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_actualPropertyType_13116 = var_optionalPropertyType_12533 ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        var_actualPropertyType_13116 = extensionGetter_type (var_expressionIR_13076, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 376)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_13116.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 378)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 378)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_structurePropertyListAST_2E_element temp_16 = inObject ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_13116.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 379)), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 379)) ;
        }
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_13116.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 381)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 381)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          ioArgument_canBeCopied = GGS_bool (false) ;
        }
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_19 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_20 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_19.readProperty_mPropertyName (), temp_20.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_constantProperty (extensionGetter_withType (var_expressionIR_13076, var_actualPropertyType_13116, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 388))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 388)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 384)) ;
      }
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
    {
      GGS_expressionAST extractedValue_13788_initExpression_0 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_initializedStoredProperty (extractedValue_13788_initExpression_0) ;
      GGS_objectIR var_expressionIR_14080 ;
      {
      const GGS_structurePropertyListAST_2E_element temp_21 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_22 = inObject ;
      routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_13788_initExpression_0, temp_21.readProperty_mPropertyName ().readProperty_location (), temp_22.readProperty_mPropertyTypeName (), var_expressionIR_14080, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 391)) ;
      }
      GGS_omnibusType var_actualPropertyType_14120 ;
      GalgasBool test_23 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_23) {
        test_23 = GGS_bool (ComparisonKind::notEqual, var_optionalPropertyType_12533.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("type-structure-declaration.galgas3", 400)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_23) {
          var_actualPropertyType_14120 = var_optionalPropertyType_12533 ;
        }
      }
      if (GalgasBool::boolFalse == test_23) {
        var_actualPropertyType_14120 = extensionGetter_type (var_expressionIR_14080, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 403)) ;
      }
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = var_actualPropertyType_14120.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("type-structure-declaration.galgas3", 405)).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          var_actualPropertyType_14120 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 406)) ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = var_actualPropertyType_14120.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("type-structure-declaration.galgas3", 407)).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            const GGS_structurePropertyListAST_2E_element temp_26 = inObject ;
            GenericArray <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (temp_26.readProperty_mPropertyName ().readProperty_location (), GGS_string ("$").add_operation (var_actualPropertyType_14120.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 409)).add_operation (GGS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 409)), fixItArray27  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 408)) ;
          }
        }
        if (GalgasBool::boolFalse == test_25) {
          GalgasBool test_28 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_28) {
            test_28 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_14120.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 410)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 410)).boolEnum () ;
            if (GalgasBool::boolTrue == test_28) {
              const GGS_structurePropertyListAST_2E_element temp_29 = inObject ;
              GenericArray <FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (temp_29.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_14120.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 411)), fixItArray30  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 411)) ;
            }
          }
        }
      }
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_14120.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 413)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 413)).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          ioArgument_canBeCopied = GGS_bool (false) ;
        }
      }
      GGS_uint var_propertyIndex_14856 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas3", 416)) ;
      const GGS_structurePropertyListAST_2E_element temp_32 = inObject ;
      ioArgument_ioPropertyList.addAssignOperation (temp_32.readProperty_mPropertyName ().readProperty_string (), var_actualPropertyType_14120  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 417)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_33 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_34 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_33.readProperty_mPropertyName (), temp_34.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_actualPropertyType_14120, var_propertyIndex_14856  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 422)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 418)) ;
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_35 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_36 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_35.readProperty_mPropertyName (), temp_36.readProperty_mVisibility (), GGS_propertySetterKind::class_func_storedProperty (var_actualPropertyType_14120, var_propertyIndex_14856  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 428)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 424)) ;
      }
      ioArgument_sortedOperandIRList.addAssignOperation (extensionGetter_withType (var_expressionIR_14080, var_actualPropertyType_14120, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 430)), var_propertyIndex_14856  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 430)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    {
      GalgasBool test_37 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_37) {
        test_37 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12533.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 432)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 432)).boolEnum () ;
        if (GalgasBool::boolTrue == test_37) {
          const GGS_structurePropertyListAST_2E_element temp_38 = inObject ;
          GenericArray <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12533.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 433)), fixItArray39  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 433)) ;
        }
      }
      GGS_uint var_propertyIndex_15669 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas3", 435)) ;
      const GGS_structurePropertyListAST_2E_element temp_40 = inObject ;
      ioArgument_ioPropertyList.addAssignOperation (temp_40.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12533  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 436)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_41 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_42 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_41.readProperty_mPropertyName (), temp_42.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_optionalPropertyType_12533, var_propertyIndex_15669  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 441)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 437)) ;
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_43 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_44 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_43.readProperty_mPropertyName (), temp_44.readProperty_mVisibility (), GGS_propertySetterKind::class_func_storedProperty (var_optionalPropertyType_12533, var_propertyIndex_15669  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 447)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 443)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_45 = inObject ;
      ioArgument_constructorSignature.addAssignOperation (temp_45.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12533, var_propertyIndex_15669  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 449)) ;
      const GGS_structurePropertyListAST_2E_element temp_46 = inObject ;
      ioArgument_ioConstructorKey.plusAssignOperation(GGS_string ("!").add_operation (temp_46.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 450)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 450)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
    {
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12533.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 452)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 452)).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          const GGS_structurePropertyListAST_2E_element temp_48 = inObject ;
          GenericArray <FixItDescription> fixItArray49 ;
          inCompiler->emitSemanticError (temp_48.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12533.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 453)), fixItArray49  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 453)) ;
        }
      }
      GGS_uint var_propertyIndex_16545 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas3", 455)) ;
      const GGS_structurePropertyListAST_2E_element temp_50 = inObject ;
      ioArgument_ioPropertyList.addAssignOperation (temp_50.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12533  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 456)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_51 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_52 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_51.readProperty_mPropertyName (), temp_52.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_optionalPropertyType_12533, var_propertyIndex_16545  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 461)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 457)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_53 = inObject ;
      ioArgument_constructorSignature.addAssignOperation (temp_53.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12533, var_propertyIndex_16545  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 463)) ;
      const GGS_structurePropertyListAST_2E_element temp_54 = inObject ;
      ioArgument_ioConstructorKey.plusAssignOperation(GGS_string ("!").add_operation (temp_54.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 464)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 464)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
    {
      GGS_instructionListAST extractedValue_17040_instructionList_0 ;
      GGS_location extractedValue_17057_endOfInstructionList_1 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_17040_instructionList_0, extractedValue_17057_endOfInstructionList_1) ;
      GalgasBool test_55 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_55) {
        test_55 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12533.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 466)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 466)).boolEnum () ;
        if (GalgasBool::boolTrue == test_55) {
          const GGS_structurePropertyListAST_2E_element temp_56 = inObject ;
          GenericArray <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (temp_56.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12533.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 467)), fixItArray57  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 467)) ;
        }
      }
      const GGS_structurePropertyListAST_2E_element temp_58 = inObject ;
      GGS_string var_llvmRoutineName_17260 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_58.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 469)) ;
      GGS_routineLLVMNameDict var_modeDictionary_17351 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas3", 470)), var_llvmRoutineName_17260, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 470)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_59 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_60 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_61 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_59.readProperty_mPropertyName (), temp_60.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_61.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 476)), var_modeDictionary_17351  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 475)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 471)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_62 = inObject ;
      GGS_lstring var_functionLLVMName_17730 = GGS_lstring::init_21__21_ (var_llvmRoutineName_17260, temp_62.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_routineFormalArgumentListAST temp_63 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 493)) ;
      const GGS_structurePropertyListAST_2E_element temp_64 = inObject ;
      ioArgument_ioDecoratedRoutineList.addAssignOperation (constinArgument_inReceiverTypeName, GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas3", 486)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("type-structure-declaration.galgas3", 488)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_functionLLVMName_17730, temp_63, GGS_bool (false), extractedValue_17040_instructionList_0, extractedValue_17057_endOfInstructionList_1, temp_64.readProperty_mPropertyTypeName ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 484)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
    {
      GGS_instructionListAST extractedValue_18301_writeInstructionList_0 ;
      GGS_location extractedValue_18323_endOfWriteInstructionList_1 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_writeComputedProperty (extractedValue_18301_writeInstructionList_0, extractedValue_18323_endOfWriteInstructionList_1) ;
      GalgasBool test_65 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_65) {
        test_65 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12533.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 499)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 499)).boolEnum () ;
        if (GalgasBool::boolTrue == test_65) {
          const GGS_structurePropertyListAST_2E_element temp_66 = inObject ;
          GenericArray <FixItDescription> fixItArray67 ;
          inCompiler->emitSemanticError (temp_66.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12533.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 500)), fixItArray67  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 500)) ;
        }
      }
      const GGS_structurePropertyListAST_2E_element temp_68 = inObject ;
      GGS_string var_llvmGetterRoutineName_18531 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_68.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 502)) ;
      GGS_routineLLVMNameDict var_getterModeDictionary_18628 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas3", 503)), var_llvmGetterRoutineName_18531, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 503)) ;
      const GGS_structurePropertyListAST_2E_element temp_69 = inObject ;
      GGS_string var_llvmSetterRoutineName_18731 = function_setterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_69.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 504)) ;
      GGS_routineLLVMNameDict var_setterModeDictionary_18828 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas3", 505)), var_llvmSetterRoutineName_18731, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 505)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_70 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_71 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_72 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_70.readProperty_mPropertyName (), temp_71.readProperty_mVisibility (), GGS_propertySetterKind::class_func_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_72.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 511)), var_getterModeDictionary_18628, var_setterModeDictionary_18828  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 510)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 506)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_73 = inObject ;
      GGS_lstring var_functionLLVMName_19270 = GGS_lstring::init_21__21_ (var_llvmSetterRoutineName_18731, temp_73.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_routineFormalArgumentListAST temp_74 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 526)) ;
      const GGS_structurePropertyListAST_2E_element temp_75 = inObject ;
      temp_74.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-structure-declaration.galgas3", 522)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas3", 523)), temp_75.readProperty_mPropertyTypeName (), GGS_lstring::init_21__21_ (GGS_string ("newValue"), extractedValue_18323_endOfWriteInstructionList_1, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 526)) ;
      GGS_routineFormalArgumentListAST var_formalArgumentList_19408 = temp_74 ;
      ioArgument_ioDecoratedRoutineList.addAssignOperation (constinArgument_inReceiverTypeName, GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas3", 530)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("type-structure-declaration.galgas3", 532)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("type-structure-declaration.galgas3", 535)), var_functionLLVMName_19270, var_formalArgumentList_19408, GGS_bool (false), extractedValue_18301_writeInstructionList_0, extractedValue_18323_endOfWriteInstructionList_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas3", 541))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 528)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@driverListIR.element generateLLVMDriverVariableDefinition'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const GGS_driverListIR_2E_element inObject,
                                                           GGS_string & ioArgument_ioLLVMcode,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element temp_0 = inObject ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 426)).add_operation (GGS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 426)) ;
  const GGS_driverListIR_2E_element temp_1 = inObject ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 427)).add_operation (GGS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 427)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 427)) ;
  const GGS_driverListIR_2E_element temp_2 = inObject ;
  UpEnumerator_operandIRList enumerator_17400 (temp_2.readProperty_mInitialValueList ()) ;
  while (enumerator_17400.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_17400.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 429)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 429)).add_operation (extensionGetter_llvmValue (enumerator_17400.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 429)) ;
    enumerator_17400.gotoNextObject () ;
    if (enumerator_17400.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 430)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 432)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@globalSyncInstanceMapIR.element generateLLVM'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVM (const GGS_globalSyncInstanceMapIR_2E_element inObject,
                                   GGS_string & ioArgument_ioLLVMcode,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_globalSyncInstanceMapIR_2E_element temp_0 = inObject ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalSyncInstance (temp_0.readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 163)).add_operation (GGS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 163)) ;
  const GGS_globalSyncInstanceMapIR_2E_element temp_1 = inObject ;
  const GGS_globalSyncInstanceMapIR_2E_element temp_2 = inObject ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_1.readProperty_mInitialValue (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 164)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 164)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 164)).add_operation (extensionGetter_llvmValue (temp_2.readProperty_mInitialValue (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 164)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 164)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 164)) ;
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
GGS_panicSortedListIR temp_0 = GGS_panicSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 11)) ;
  mProperty_mPanicSetupListIR = temp_0 ;
GGS_panicSortedListIR temp_1 = GGS_panicSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 12)) ;
  mProperty_mPanicLoopListIR = temp_1 ;
  mProperty_mTaskMapIR = GGS_taskMapIR::init (inCompiler COMMA_HERE) ;
GGS_globalTaskVariableList temp_2 = GGS_globalTaskVariableList::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 14)) ;
  mProperty_mGlobalTaskVariableList = temp_2 ;
  mProperty_mMaxBranchOfOnInstructions = GGS_uint (uint32_t (0U)) ;
GGS__32_lstringlist temp_3 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 18)) ;
GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 37)) ;
GGS_lstringlist temp_5 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 38)) ;
GGS_lstringlist temp_6 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 39)) ;
  mProperty_mTargetParameters = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 17)), temp_3, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 19)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 20)), GGS_uint (uint32_t (0U)), GGS_bool (false), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 23)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 23)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 24)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 24)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 25)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 26)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 26)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 27)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 27)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 28)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 28)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 29)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 29)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 30)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 30)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 31)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 32)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 32)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 33)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 34)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 35)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 36)), temp_4, temp_5, temp_6, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 40)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 41)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 42)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 43)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 43)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 44)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 45)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 46)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas3", 47)), inCompiler COMMA_HERE) ;
GGS_driverListIR temp_7 = GGS_driverListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 49)) ;
  mProperty_mDriverList = temp_7 ;
  mProperty_mStaticArrayMapForIntermediate = GGS_staticListInvokedFunctionSetMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalSyncInstanceMap = GGS_globalSyncInstanceMapIR::init (inCompiler COMMA_HERE) ;
GGS_controlRegisterGroupArrayList temp_8 = GGS_controlRegisterGroupArrayList::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 52)) ;
  mProperty_mControlRegisterGroupArrayList = temp_8 ;
GGS_routineListIR temp_9 = GGS_routineListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas3", 53)) ;
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
//Overriding extension proc '@extendExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                            GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 50)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_extendExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_extendExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas3", 52)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 61)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_extendExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_extendExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas3", 63)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extendExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                         const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                         const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                         const GGS_semanticContext constinArgument_inContext,
                                                         const GGS_mode constinArgument_inMode,
                                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                         GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                         GGS_allocaList & ioArgument_ioAllocaList,
                                                         GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         GGS_objectIR & outArgument_outResult,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_expressionResult_3572 ;
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3572, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 85)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3572, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 98)) ;
  }
  const GGS_extendExpressionAST temp_1 = this ;
  GGS_omnibusType temp_2 ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (GalgasBool::boolFalse == test_3) {
    const GGS_extendExpressionAST temp_4 = this ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 105)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 105)) ;
  }
  GGS_omnibusType var_resultType_3736 = temp_2 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_resultType_3736.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas3", 108)).operator_not (SOURCE_FILE ("expression-extend.galgas3", 108)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_extendExpressionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas3", 109)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_3572, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 110)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas3", 110)).operator_not (SOURCE_FILE ("expression-extend.galgas3", 110)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_extendExpressionAST temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-extend.galgas3", 111)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_bool var_sourceIsUnsigned_4235 ;
      GGS_uint var_sourceSize_4267 ;
      GGS_bigint joker_4216_2 ; // Joker input parameter
      GGS_bigint joker_4216_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_3572, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 113)).readProperty_kind ().method_extractInteger (joker_4216_2, joker_4216_1, var_sourceIsUnsigned_4235, var_sourceSize_4267, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 113)) ;
      GGS_bool var_targetIsUnsigned_4334 ;
      GGS_uint var_targetSize_4366 ;
      GGS_bigint joker_4315_2 ; // Joker input parameter
      GGS_bigint joker_4315_1 ; // Joker input parameter
      var_resultType_3736.readProperty_kind ().method_extractInteger (joker_4315_2, joker_4315_1, var_targetIsUnsigned_4334, var_targetSize_4366, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 114)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_bool test_12 = var_sourceIsUnsigned_4235 ;
        if (GalgasBool::boolTrue == test_12.boolEnum ()) {
          test_12 = var_targetIsUnsigned_4334 ;
        }
        test_11 = test_12.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = GGS_bool (ComparisonKind::greaterThan, var_sourceSize_4267.objectCompare (var_targetSize_4366)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_extendExpressionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas3", 117)) ;
            }
          }
          if (GalgasBool::boolFalse == test_13) {
            GalgasBool test_16 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_16) {
              test_16 = GGS_bool (ComparisonKind::equal, var_sourceSize_4267.objectCompare (var_targetSize_4366)).boolEnum () ;
              if (GalgasBool::boolTrue == test_16) {
                const GGS_extendExpressionAST temp_17 = this ;
                GenericArray <FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GGS_string ("same size: useless extend operation"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas3", 119)) ;
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_bool test_20 = var_sourceIsUnsigned_4235 ;
          if (GalgasBool::boolTrue == test_20.boolEnum ()) {
            test_20 = var_targetIsUnsigned_4334.operator_not (SOURCE_FILE ("expression-extend.galgas3", 121)) ;
          }
          test_19 = test_20.boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GalgasBool test_21 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_21) {
              test_21 = GGS_bool (ComparisonKind::greaterOrEqual, var_sourceSize_4267.objectCompare (var_targetSize_4366)).boolEnum () ;
              if (GalgasBool::boolTrue == test_21) {
                const GGS_extendExpressionAST temp_22 = this ;
                GenericArray <FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (temp_22.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray23  COMMA_SOURCE_FILE ("expression-extend.galgas3", 123)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          GalgasBool test_24 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_24) {
            GGS_bool test_25 = var_sourceIsUnsigned_4235.operator_not (SOURCE_FILE ("expression-extend.galgas3", 125)) ;
            if (GalgasBool::boolTrue == test_25.boolEnum ()) {
              test_25 = var_targetIsUnsigned_4334 ;
            }
            test_24 = test_25.boolEnum () ;
            if (GalgasBool::boolTrue == test_24) {
              const GGS_extendExpressionAST temp_26 = this ;
              GenericArray <FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (temp_26.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray27  COMMA_SOURCE_FILE ("expression-extend.galgas3", 126)) ;
            }
          }
          if (GalgasBool::boolFalse == test_24) {
            GalgasBool test_28 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_28) {
              test_28 = GGS_bool (ComparisonKind::greaterThan, var_sourceSize_4267.objectCompare (var_targetSize_4366)).boolEnum () ;
              if (GalgasBool::boolTrue == test_28) {
                const GGS_extendExpressionAST temp_29 = this ;
                GenericArray <FixItDescription> fixItArray30 ;
                inCompiler->emitSemanticError (temp_29.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray30  COMMA_SOURCE_FILE ("expression-extend.galgas3", 129)) ;
              }
            }
            if (GalgasBool::boolFalse == test_28) {
              GalgasBool test_31 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_31) {
                test_31 = GGS_bool (ComparisonKind::equal, var_sourceSize_4267.objectCompare (var_targetSize_4366)).boolEnum () ;
                if (GalgasBool::boolTrue == test_31) {
                  const GGS_extendExpressionAST temp_32 = this ;
                  GenericArray <FixItDescription> fixItArray33 ;
                  inCompiler->emitSemanticError (temp_32.readProperty_mTypeName ().readProperty_location (), GGS_string ("same size: useless extend operation"), fixItArray33  COMMA_SOURCE_FILE ("expression-extend.galgas3", 131)) ;
                }
              }
            }
          }
        }
      }
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_3736, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas3", 134)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_3572, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 135)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@regularRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                            GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_regularRoutineIR temp_0 = this ;
  UpEnumerator_instructionListIR enumerator_6008 (temp_0.readProperty_mInstructionGenerationList ()) ;
  while (enumerator_6008.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_6008.current (HERE).readProperty_mInstructionGeneration ().ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 154)) ;
    enumerator_6008.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@regularRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 168)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_regularRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mExportedFunction ().operator_not (SOURCE_FILE ("regular-routine-analysis.galgas3", 169)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 170)) ;
    }
  }
  const GGS_regularRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 172)) ;
  const GGS_regularRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas3", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 173)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 173)) ;
  const GGS_regularRoutineIR temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas3", 174)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_regularRoutineIR temp_7 = this ;
    temp_5 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_7.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 176)) ;
  }
  GGS_string var_receiverLLVMTypeName_6711 = temp_5 ;
  GGS_bool var_first_6835 = GGS_bool (true) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_6711.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssignOperation(var_receiverLLVMTypeName_6711.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 180)) ;
      var_first_6835 = GGS_bool (false) ;
    }
  }
  const GGS_regularRoutineIR temp_9 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_7023 (temp_9.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_7023.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_first_6835.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        var_first_6835 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 187)) ;
    }
    switch (enumerator_7023.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7023.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 191)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 191)).add_operation (enumerator_7023.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 191)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7023.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 193)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_7023.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 193)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7023.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 195)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_7023.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 195)) ;
      }
      break ;
    }
    enumerator_7023.gotoNextObject () ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    GGS_bool test_12 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas3", 198)) ;
    if (GalgasBool::boolTrue == test_12.boolEnum ()) {
      const GGS_regularRoutineIR temp_13 = this ;
      test_12 = temp_13.readProperty_mAppendFileAndLineArgumentForPanicLocation () ;
    }
    test_11 = test_12.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = var_first_6835.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas3", 199)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 202)).add_operation (GGS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 204)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 204)) ;
  const GGS_regularRoutineIR temp_15 = this ;
  GGS_allocaList var_allocaList_7933 = temp_15.readProperty_mAllocaList () ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_regularRoutineIR temp_17 = this ;
    test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mReturnType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas3", 207)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_regularRoutineIR temp_18 = this ;
      var_allocaList_7933.addAssignOperation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 208)), temp_18.readProperty_mReturnType (), GGS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 208)) ;
    }
  }
  const GGS_regularRoutineIR temp_19 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_8197 (temp_19.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_8197.hasCurrentObject ()) {
    switch (enumerator_8197.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_allocaList_7933.addAssignOperation (function_llvmNameForLocalVariable (enumerator_8197.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 214)), enumerator_8197.current_mFormalArgumentType (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 214)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_8197.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_7933, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 218)) ;
  const GGS_regularRoutineIR temp_20 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_8673 (temp_20.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_8673.hasCurrentObject ()) {
    switch (enumerator_8673.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Input argument '").add_operation (enumerator_8673.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 224)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 224)) ;
        GGS_string var_llvmType_8876 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8673.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 225)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_8876, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 226)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 226)).add_operation (enumerator_8673.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 226)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 226)).add_operation (var_llvmType_8876, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 226)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8673.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 226)) ;
        callExtensionMethod_generateRetain ((cPtr_omnibusType *) enumerator_8673.current_mFormalArgumentType (HERE).ptr (), enumerator_8673.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 228)) ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          const GGS_regularRoutineIR temp_22 = this ;
          test_21 = GGS_bool (ComparisonKind::equal, temp_22.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas3", 229)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8673.current_mFormalArgumentType (HERE).ptr (), enumerator_8673.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 230)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          const GGS_regularRoutineIR temp_24 = this ;
          test_23 = GGS_bool (ComparisonKind::equal, temp_24.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas3", 233)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8673.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 234)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 234)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8673.current_mFormalArgumentType (HERE).ptr (), enumerator_8673.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 235)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      break ;
    }
    enumerator_8673.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 241)) ;
  const GGS_regularRoutineIR temp_25 = this ;
  extensionMethod_instructionListLLVMCode (temp_25.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 242)) ;
  const GGS_regularRoutineIR temp_26 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_9988 (temp_26.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_9988.hasCurrentObject ()) {
    switch (enumerator_9988.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Release input argument '").add_operation (enumerator_9988.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 248)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 248)) ;
        callExtensionMethod_generateRelease ((cPtr_omnibusType *) enumerator_9988.current_mFormalArgumentType (HERE).ptr (), enumerator_9988.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 249)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        GalgasBool test_27 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_27) {
          const GGS_regularRoutineIR temp_28 = this ;
          test_27 = GGS_bool (ComparisonKind::equal, temp_28.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas3", 251)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_27) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate input/output argument '").add_operation (enumerator_9988.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 252)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 252)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_9988.current_mFormalArgumentType (HERE).ptr (), enumerator_9988.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 253)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        GalgasBool test_29 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_29) {
          const GGS_regularRoutineIR temp_30 = this ;
          test_29 = GGS_bool (ComparisonKind::equal, temp_30.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas3", 256)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_29) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate output argument '").add_operation (enumerator_9988.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 257)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 257)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_9988.current_mFormalArgumentType (HERE).ptr (), enumerator_9988.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_9988.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 263)) ;
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    const GGS_regularRoutineIR temp_32 = this ;
    test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mReturnType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas3", 264)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 265)) ;
    }
  }
  if (GalgasBool::boolFalse == test_31) {
    GGS_string var_resultVarLLVMName_10966 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 267)) ;
    const GGS_regularRoutineIR temp_33 = this ;
    const GGS_regularRoutineIR temp_34 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_33.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_34.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)).add_operation (var_resultVarLLVMName_10966, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 268)) ;
    const GGS_regularRoutineIR temp_35 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_35.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 269)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 271)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@storeToUniversalReferenceIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_storeToUniversalReferenceIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeToUniversalReferenceIR temp_0 = this ;
  switch (temp_0.readProperty_mSourceValue ().enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_1141__0 ;
      GGS_uint extractedValue_1144__1 ;
      GGS_objectIR extractedValue_1147_value_2 ;
      temp_0.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_1141__0, extractedValue_1144__1, extractedValue_1147_value_2) ;
      GGS_string var_llvmAssignRoutineName_1164 = function_assignmentOperatorFuncName (extensionGetter_type (extractedValue_1147_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 33)), extensionGetter_type (extractedValue_1147_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 33)) ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (var_llvmAssignRoutineName_1164  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 34)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_1401__0 ;
      GGS_operandIRList extractedValue_1419_operands_1 ;
      temp_0.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_1401__0, extractedValue_1419_operands_1) ;
      UpEnumerator_operandIRList enumerator_1440 (extractedValue_1419_operands_1) ;
      while (enumerator_1440.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = extensionGetter_isStatic (enumerator_1440.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 39)).operator_not (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 39)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_llvmAssignRoutineName_1507 = function_assignmentOperatorFuncName (extensionGetter_type (enumerator_1440.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 40)), extensionGetter_type (enumerator_1440.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 40)) ;
            ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (var_llvmAssignRoutineName_1507  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 41)) ;
          }
        }
        enumerator_1440.gotoNextObject () ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@storeToUniversalReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_storeToUniversalReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                   const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                   GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeToUniversalReferenceIR temp_0 = this ;
  GGS_string var_llvmType_2026 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetVarType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 56)) ;
  const GGS_storeToUniversalReferenceIR temp_1 = this ;
  switch (temp_1.readProperty_mSourceValue ().enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode void >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 59)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_2212__0 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_null (extractedValue_2212__0) ;
      const GGS_storeToUniversalReferenceIR temp_2 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 61)).add_operation (GGS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 61)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 61)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 61)).add_operation (temp_2.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 61)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 61)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_2339__0 ;
      GGS_string extractedValue_2342__1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_reference (extractedValue_2339__0, extractedValue_2342__1) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode reference >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 63)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_2463__0 ;
      GGS_string extractedValue_2474_llvmName_1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmNamedValue (extractedValue_2463__0, extractedValue_2474_llvmName_1) ;
      const GGS_storeToUniversalReferenceIR temp_3 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)).add_operation (extractedValue_2474_llvmName_1, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)).add_operation (temp_3.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 65)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_2626__0 ;
      GGS_bigint extractedValue_2637_value_1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_literalInteger (extractedValue_2626__0, extractedValue_2637_value_1) ;
      const GGS_storeToUniversalReferenceIR temp_4 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)).add_operation (extractedValue_2637_value_1.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)).add_operation (temp_4.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 67)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_2786__0 ;
      GGS_sortedOperandIRList extractedValue_2810_operands_1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmStructureValue (extractedValue_2786__0, extractedValue_2810_operands_1) ;
      UpEnumerator_sortedOperandIRList enumerator_2837 (extractedValue_2810_operands_1) ;
      while (enumerator_2837.hasCurrentObject ()) {
        GGS_string var_tempVar_2869 = GGS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 70)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 70)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 71)) ;
        const GGS_storeToUniversalReferenceIR temp_5 = this ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempVar_2869, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 72)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 72)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 72)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 72)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 72)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 73)).add_operation (temp_5.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 73)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 73)).add_operation (enumerator_2837.current_mIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 73)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 73)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 73)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 72)) ;
        GGS_string var_valueType_3155 = extensionGetter_llvmTypeName (enumerator_2837.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 74)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_valueType_3155, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)).add_operation (extensionGetter_llvmName (enumerator_2837.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)).add_operation (var_valueType_3155, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)).add_operation (var_tempVar_2869, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 75)) ;
        enumerator_2837.gotoNextObject () ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_3342_type_0 ;
      GGS_uint extractedValue_3348_size_1 ;
      GGS_objectIR extractedValue_3354_value_2 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_3342_type_0, extractedValue_3348_size_1, extractedValue_3354_value_2) ;
      GGS_string var_indexVarName_3371 = GGS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 78)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 78)) ;
      GGS_string var_nextIndexVarName_3436 = GGS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 79)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 79)) ;
      GGS_string var_ptrVarName_3510 = GGS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 80)) ;
      GGS_string var_loopTestName_3579 = GGS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 81)) ;
      GGS_string var_startLabel_3652 = GGS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 82)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 82)) ;
      GGS_string var_loopLabel_3721 = GGS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 83)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 83)) ;
      GGS_string var_exitLabel_3788 = GGS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 84)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 85)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_3652, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 86)).add_operation (GGS_string (" ;--- Assign static array from repeated dynamic value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 86)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_3652.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 87)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_loopLabel_3721, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 88)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 88)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_3721.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 89)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_indexVarName_3371, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)).add_operation (GGS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)).add_operation (var_startLabel_3652, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)).add_operation (GGS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)).add_operation (var_nextIndexVarName_3436, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)).add_operation (var_loopLabel_3721, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 90)) ;
      const GGS_storeToUniversalReferenceIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_ptrVarName_3510, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 91)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 91)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_3342_type_0.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 91)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 91)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_3342_type_0.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 91)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 92)).add_operation (temp_6.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 92)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 92)).add_operation (var_indexVarName_3371, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 92)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 91)) ;
      GGS_string var_llvmAssignRoutineName_4456 = function_assignmentOperatorFuncName (extensionGetter_type (extractedValue_3354_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 93)), extensionGetter_type (extractedValue_3354_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 93)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_llvmAssignRoutineName_4456.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 94)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (extensionGetter_llvmTypeName (extractedValue_3354_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)).add_operation (var_ptrVarName_3510, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)).add_operation (extensionGetter_llvmTypeName (extractedValue_3354_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)).add_operation (extensionGetter_llvmName (extractedValue_3354_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 95)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_nextIndexVarName_3436, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 96)).add_operation (GGS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 96)).add_operation (var_indexVarName_3371, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 96)).add_operation (GGS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 96)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 96)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loopTestName_3579, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 97)).add_operation (GGS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 97)).add_operation (var_nextIndexVarName_3436, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 97)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 97)).add_operation (extractedValue_3348_size_1.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 97)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 97)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 97)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_loopTestName_3579, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 98)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 98)).add_operation (var_loopLabel_3721, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 98)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 98)).add_operation (var_exitLabel_3788, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 98)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 98)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_exitLabel_3788.add_operation (GGS_string (":\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 99)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 99)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_5099_type_0 ;
      GGS_uint extractedValue_5105_size_1 ;
      GGS_objectIR extractedValue_5111_value_2 ;
      GGS_uint extractedValue_5118__3 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_5099_type_0, extractedValue_5105_size_1, extractedValue_5111_value_2, extractedValue_5118__3) ;
      GGS_string var_indexVarName_5131 = GGS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 101)) ;
      GGS_string var_nextIndexVarName_5196 = GGS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 102)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 102)) ;
      GGS_string var_ptrVarName_5270 = GGS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 103)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 103)) ;
      GGS_string var_loopTestName_5339 = GGS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 104)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 104)) ;
      GGS_string var_startLabel_5412 = GGS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 105)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 105)) ;
      GGS_string var_loopLabel_5481 = GGS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 106)) ;
      GGS_string var_exitLabel_5548 = GGS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 107)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 107)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 108)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_5412, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 109)).add_operation (GGS_string (" ;--- Assign static array from repeated static value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 109)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 109)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_5412.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 110)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 110)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_loopLabel_5481, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 111)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 111)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 111)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_5481.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 112)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 112)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_indexVarName_5131, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)).add_operation (GGS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)).add_operation (var_startLabel_5412, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)).add_operation (GGS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)).add_operation (var_nextIndexVarName_5196, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)).add_operation (var_loopLabel_5481, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 113)) ;
      const GGS_storeToUniversalReferenceIR temp_7 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_ptrVarName_5270, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 114)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 114)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_5099_type_0.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 114)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 114)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_5099_type_0.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 115)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 114)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 115)).add_operation (temp_7.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 115)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 115)).add_operation (var_indexVarName_5131, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 115)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 115)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 114)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (extensionGetter_llvmTypeName (extractedValue_5111_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)).add_operation (extensionGetter_llvmName (extractedValue_5111_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)).add_operation (extensionGetter_llvmTypeName (extractedValue_5111_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)).add_operation (var_ptrVarName_5270, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 116)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_nextIndexVarName_5196, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 117)).add_operation (GGS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 117)).add_operation (var_indexVarName_5131, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 117)).add_operation (GGS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 117)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loopTestName_5339, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 118)).add_operation (GGS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 118)).add_operation (var_nextIndexVarName_5196, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 118)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 118)).add_operation (extractedValue_5105_size_1.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 118)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 118)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_loopTestName_5339, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 119)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 119)).add_operation (var_loopLabel_5481, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 119)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 119)).add_operation (var_exitLabel_5548, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 119)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 119)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_exitLabel_5548.add_operation (GGS_string (":\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 120)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_6688__0 ;
      GGS_operandIRList extractedValue_6706_operands_1 ;
      GGS_uint extractedValue_6716__2 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_6688__0, extractedValue_6706_operands_1, extractedValue_6716__2) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Assign static array from static value\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 122)) ;
      UpEnumerator_operandIRList enumerator_6795 (extractedValue_6706_operands_1) ;
      GGS_uint index_6790 (uint32_t (0)) ;
      while (enumerator_6795.hasCurrentObject ()) {
        GGS_string var_tempVar_6835 = GGS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 124)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 124)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 125)) ;
        const GGS_storeToUniversalReferenceIR temp_8 = this ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempVar_6835, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 126)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 126)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 126)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 126)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 126)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 127)).add_operation (temp_8.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 127)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 127)).add_operation (index_6790.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 127)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 127)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 126)) ;
        GGS_string var_valueType_7121 = extensionGetter_llvmTypeName (enumerator_6795.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 128)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_valueType_7121, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)).add_operation (extensionGetter_llvmName (enumerator_6795.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)).add_operation (var_valueType_7121, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)).add_operation (var_tempVar_6835, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 129)) ;
        enumerator_6795.gotoNextObject () ;
        index_6790.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 123)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_7301__0 ;
      GGS_operandIRList extractedValue_7319_operands_1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_7301__0, extractedValue_7319_operands_1) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Assign static array from dynamic values\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 132)) ;
      UpEnumerator_operandIRList enumerator_7407 (extractedValue_7319_operands_1) ;
      GGS_uint index_7402 (uint32_t (0)) ;
      while (enumerator_7407.hasCurrentObject ()) {
        GGS_string var_tempVar_7447 = GGS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 134)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 134)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 135)) ;
        const GGS_storeToUniversalReferenceIR temp_9 = this ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempVar_7447, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 136)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 136)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 136)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 136)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 136)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 137)).add_operation (temp_9.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 137)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 137)).add_operation (index_7402.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 137)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 137)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 137)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 136)) ;
        GGS_string var_valueType_7733 = extensionGetter_llvmTypeName (enumerator_7407.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 138)) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = extensionGetter_isStatic (enumerator_7407.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 139)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_valueType_7733, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)).add_operation (extensionGetter_llvmName (enumerator_7407.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)).add_operation (var_valueType_7733, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)).add_operation (var_tempVar_7447, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 140)) ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_string var_llvmAssignRoutineName_7928 = function_assignmentOperatorFuncName (extensionGetter_type (enumerator_7407.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 142)), extensionGetter_type (enumerator_7407.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 142)) ;
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_llvmAssignRoutineName_7928.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 143)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 143)) ;
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_valueType_7733, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)).add_operation (var_tempVar_7447, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)).add_operation (var_valueType_7733, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)).add_operation (extensionGetter_llvmName (enumerator_7407.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 144)) ;
        }
        enumerator_7407.gotoNextObject () ;
        index_7402.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 133)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_8260__0 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_zero (extractedValue_8260__0) ;
      const GGS_storeToUniversalReferenceIR temp_11 = this ;
      const GGS_storeToUniversalReferenceIR temp_12 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)).add_operation (extensionGetter_llvmName (temp_11.readProperty_mSourceValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)).add_operation (var_llvmType_2026, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)).add_operation (temp_12.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 149)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeDeclarationBarrierAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_compileTimeDeclarationBarrierAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 38)), temp_0, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 38)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@compileTimeDeclarationBarrierAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeDeclarationBarrierAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 44)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@compileTimeDeclarationBarrierAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeDeclarationBarrierAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("ordered-declaration-list.galgas3", 50)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeDeclarationBarrierAST enterInContext'
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
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 77)), GGS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 77)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 80)), GGS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 80)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 83)), GGS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 83)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 86)), GGS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 86)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas3", 87)), GGS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 87)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 89)), GGS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 89)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas3", 90)), GGS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 90)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement_3F__26_ (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 100)) ;
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
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 113)), GGS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 113)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 116)), GGS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 116)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 119)), GGS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 119)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 122)), GGS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 122)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas3", 123)), GGS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 123)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("ordered-declaration-list.galgas3", 125)), GGS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 125)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas3", 126)), GGS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 126)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_minus_3F__26_ (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 136)) ;
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
  GGS_semanticTypePrecedenceGraph var_precedenceGraph_7786 = GGS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_7815 (constinArgument_inAST.readProperty_mDeclarationListAST ()) ;
  while (enumerator_7815.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_7815.current_mDeclaration (HERE).ptr (), var_precedenceGraph_7786, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 150)) ;
    enumerator_7815.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mExternFunctionListAST (), var_precedenceGraph_7786, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 153)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mTaskListAST (), var_precedenceGraph_7786, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 154)) ;
  GGS_bigint var_addintegerTypeCount_8245 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 156)) ;
  UpEnumerator_stringlist enumerator_8276 (var_precedenceGraph_7786.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas3", 157))) ;
  while (enumerator_8276.hasCurrentObject ()) {
    GGS_stringlist var_Uxx_8360 = enumerator_8276.current_mValue (HERE).getter_componentsSeparatedByString (GGS_string ("u") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 159)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_Uxx_8360.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas3", 160)).objectCompare (GGS_uint (uint32_t (2U)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = GGS_bool (ComparisonKind::equal, var_Uxx_8360.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 160)).objectCompare (GGS_string::makeEmptyString ())) ;
      }
      GGS_bool test_2 = test_1 ;
      if (GalgasBool::boolTrue == test_2.boolEnum ()) {
        test_2 = var_Uxx_8360.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 160)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas3", 160)) ;
      }
      test_0 = test_2.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_n_8532 = var_Uxx_8360.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 161)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 161)) ;
        GGS_integerDeclarationAST var_declaration_8591 = GGS_integerDeclarationAST::init_21__21_ (GGS_bool (false), var_n_8532, inCompiler COMMA_HERE) ;
        callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_8591.ptr (), var_precedenceGraph_7786, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 163)) ;
        {
        routine_appendUnsignedOperatorsTo_3F__26_ (enumerator_8276.current_mValue (HERE), var_precedenceGraph_7786, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 165)) ;
        }
        var_addintegerTypeCount_8245.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 167)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 167)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_stringlist var_Ixx_8868 = enumerator_8276.current_mValue (HERE).getter_componentsSeparatedByString (GGS_string ("i") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 169)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_bool test_4 = GGS_bool (ComparisonKind::equal, var_Ixx_8868.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas3", 170)).objectCompare (GGS_uint (uint32_t (2U)))) ;
        if (GalgasBool::boolTrue == test_4.boolEnum ()) {
          test_4 = GGS_bool (ComparisonKind::equal, var_Ixx_8868.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 170)).objectCompare (GGS_string::makeEmptyString ())) ;
        }
        GGS_bool test_5 = test_4 ;
        if (GalgasBool::boolTrue == test_5.boolEnum ()) {
          test_5 = var_Ixx_8868.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 170)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas3", 170)) ;
        }
        test_3 = test_5.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_uint var_n_9044 = var_Ixx_8868.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 171)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 171)) ;
          GGS_integerDeclarationAST var_declaration_9105 = GGS_integerDeclarationAST::init_21__21_ (GGS_bool (true), var_n_9044, inCompiler COMMA_HERE) ;
          callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_9105.ptr (), var_precedenceGraph_7786, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 173)) ;
          {
          routine_appendSignedOperatorsTo_3F__26_ (enumerator_8276.current_mValue (HERE), var_precedenceGraph_7786, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 175)) ;
          }
          var_addintegerTypeCount_8245.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 177)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 177)) ;
        }
      }
    }
    enumerator_8276.gotoNextObject () ;
  }
  GGS_compileTimeDeclarationBarrierAST var_compileTimeDeclarationBarrierAST_9471 = GGS_compileTimeDeclarationBarrierAST::init (inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_compileTimeDeclarationBarrierAST *) var_compileTimeDeclarationBarrierAST_9471.ptr (), var_precedenceGraph_7786, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 183)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    GGS_bool test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas3", 185)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_7.boolEnum ()) {
      test_7 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()) ;
    }
    test_6 = test_7.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      routine_print_3F_ (GGS_string ("    Added ").add_operation (var_addintegerTypeCount_8245.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas3", 186)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 186)).add_operation (GGS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 186)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 186)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    GGS_bool test_9 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas3", 189)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_9.boolEnum ()) {
      test_9 = GGS_bool (gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile.readProperty_value ()) ;
    }
    test_8 = test_9.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_string var_s_10018 = var_precedenceGraph_7786.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas3", 190)) ;
      GGS_string var_filePath_10055 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 191)) ;
      GGS_bool joker_10161 ; // Joker input parameter
      var_s_10018.method_writeToFileWhenDifferentContents (var_filePath_10055, joker_10161, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 192)) ;
    }
  }
  GGS_declarationListAST temp_10 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 195)) ;
  outArgument_outSortedDeclarationListAST = temp_10 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::greaterThan, var_precedenceGraph_7786.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas3", 196)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      UpEnumerator_lstringlist enumerator_10340 (var_precedenceGraph_7786.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas3", 197))) ;
      while (enumerator_10340.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_10340.current_mValue (HERE).readProperty_location (), enumerator_10340.current_mValue (HERE).readProperty_string ().add_operation (GGS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 198)), fixItArray12  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 198)) ;
        enumerator_10340.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    GGS_declarationListAST var_unsortedSemanticDeclarationListAST_10616 ;
    GGS_lstringlist joker_10581 ; // Joker input parameter
    GGS_lstringlist joker_10658 ; // Joker input parameter
    var_precedenceGraph_7786.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_10581, var_unsortedSemanticDeclarationListAST_10616, joker_10658, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 201)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_10616.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas3", 207)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GGS_string var_s_10734 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_10616.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas3", 209)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas3", 208)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 208)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 209)) ;
        UpEnumerator_declarationListAST enumerator_10907 (var_unsortedSemanticDeclarationListAST_10616) ;
        while (enumerator_10907.hasCurrentObject ()) {
          var_s_10734.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_10907.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 212)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 212)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 212)) ;
          enumerator_10907.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_10734, fixItArray14  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 214)) ;
        UpEnumerator_declarationListAST enumerator_11090 (var_unsortedSemanticDeclarationListAST_10616) ;
        while (enumerator_11090.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11090.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 216)), GGS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11090.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 216)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 216)).add_operation (GGS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 216)), fixItArray15  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 216)) ;
          enumerator_11090.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@llvmAssignmentOperatorDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmAssignmentOperatorDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@llvmAssignmentOperatorDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_2 = this ;
  GGS_lstring var_nodeName_3157 = GGS_lstring::init_21__21_ (temp_0.readProperty_mTargetTypeName ().readProperty_string ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 84)).add_operation (temp_1.readProperty_mSourceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 84)), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3157, temp_3, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 85)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3157, temp_4.readProperty_mTargetTypeName () COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 86)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3157, temp_5.readProperty_mSourceTypeName () COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 87)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@llvmAssignmentOperatorDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmAssignmentOperatorDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  result_outRepresentation = GGS_string ("Assignment ").add_operation (temp_0.readProperty_mTargetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 93)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 93)).add_operation (temp_1.readProperty_mSourceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 93)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorFuncName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_assignmentOperatorFuncName (const GGS_omnibusType & constinArgument_inTargetType,
                                                const GGS_omnibusType & constinArgument_inSourceType,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("assign.").add_operation (constinArgument_inTargetType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 101)).add_operation (GGS_string (".ref.from."), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 101)).add_operation (constinArgument_inSourceType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 101)).add_operation (GGS_string (".ref"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 101)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_assignmentOperatorFuncName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_assignmentOperatorFuncName (Compiler * inCompiler,
                                                                        const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_omnibusType operand1 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_assignmentOperatorFuncName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignmentOperatorFuncName ("assignmentOperatorFuncName",
                                                                            functionWithGenericHeader_assignmentOperatorFuncName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_assignmentOperatorFuncName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_assignmentOperatorKey (const GGS_omnibusType & constinArgument_inTargetType,
                                            const GGS_location & constinArgument_inErrorLocation,
                                            const GGS_omnibusType & constinArgument_inSourceType,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (constinArgument_inTargetType.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 110)).add_operation (constinArgument_inSourceType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 110)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_assignmentOperatorKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_assignmentOperatorKey (Compiler * inCompiler,
                                                                   const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_location operand1 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_assignmentOperatorKey (operand0,
                                         operand1,
                                         operand2,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignmentOperatorKey ("assignmentOperatorKey",
                                                                       functionWithGenericHeader_assignmentOperatorKey,
                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                       3,
                                                                       functionArgs_assignmentOperatorKey) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@llvmAssignmentOperatorDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                       GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                       GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                       GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                       GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                       GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                       GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                       GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctCheckMap var_formalGenericConstantParameterMap_6637 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_0.readProperty_mTargetGenericFormalParameterList (), var_formalGenericConstantParameterMap_6637, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 156)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_1.readProperty_mSourceGenericFormalParameterList (), var_formalGenericConstantParameterMap_6637, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 157)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_2 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mWhereClause ().ptr (), var_formalGenericConstantParameterMap_6637, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 159)) ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_3 = this ;
  var_formalGenericConstantParameterMap_6637.setter_insertKey (temp_3.readProperty_mTargetVariableName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 161)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_4 = this ;
  var_formalGenericConstantParameterMap_6637.setter_insertKey (temp_4.readProperty_mSourceVariableName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 162)) ;
  }
  const GGS_llvmAssignmentOperatorDeclarationAST temp_5 = this ;
  extensionMethod_checkInstructionList (temp_5.readProperty_mLLVMInstructionList (), var_formalGenericConstantParameterMap_6637, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 163)) ;
  GGS_unifiedTypeMapEntry var_targetTypeProxy_7345 ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_6 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_6.readProperty_mTargetTypeName (), var_targetTypeProxy_7345, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 165)) ;
  }
  GGS_omnibusType var_targetType_7368 = extensionGetter_type (var_targetTypeProxy_7345, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 166)) ;
  GGS_unifiedTypeMapEntry var_sourceTypeProxy_7464 ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_7 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_7.readProperty_mSourceTypeName (), var_sourceTypeProxy_7464, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 167)) ;
  }
  GGS_omnibusType var_sourceType_7500 = extensionGetter_type (var_sourceTypeProxy_7464, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 168)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_8 = this ;
  GGS_lstring var_key_7546 = function_assignmentOperatorKey (var_targetType_7368, temp_8.readProperty_mOperatorLocation (), var_sourceType_7500, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 170)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_9 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_10 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_11 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_12 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_13 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_14 = this ;
  GGS_llvmAssignmentOperatorUsage var_operatorUsage_7630 = GGS_llvmAssignmentOperatorUsage::init_21__21__21__21__21__21__21__21_ (var_targetType_7368, temp_9.readProperty_mTargetVariableName (), temp_10.readProperty_mTargetGenericFormalParameterList (), var_sourceType_7500, temp_11.readProperty_mSourceVariableName (), temp_12.readProperty_mSourceGenericFormalParameterList (), temp_13.readProperty_mWhereClause (), temp_14.readProperty_mLLVMInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_7546, var_operatorUsage_7630, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 181)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_llvmAssignmentOperatorDeclarationAST temp_16 = this ;
    GGS_bool test_17 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mTargetGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas3", 188)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_17.boolEnum ()) {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_18 = this ;
      test_17 = GGS_bool (ComparisonKind::equal, temp_18.readProperty_mSourceGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas3", 189)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
    GGS_bool test_19 = test_17 ;
    if (GalgasBool::boolTrue == test_19.boolEnum ()) {
      test_19 = var_sourceType_7500.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas3", 190)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas3", 190)) ;
    }
    GGS_bool test_20 = test_19 ;
    if (GalgasBool::boolTrue == test_20.boolEnum ()) {
      test_20 = var_sourceType_7500.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas3", 191)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas3", 191)) ;
    }
    test_15 = test_20.boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_assignmentGenerationVarMap var_varMap_8352 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_21 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_22 = this ;
      var_varMap_8352.setter_insertKey (temp_21.readProperty_mTargetVariableName (), GGS_string ("%").add_operation (temp_22.readProperty_mTargetVariableName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 193)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 193)) ;
      }
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_23 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_24 = this ;
      var_varMap_8352.setter_insertKey (temp_23.readProperty_mSourceVariableName (), GGS_string ("%").add_operation (temp_24.readProperty_mSourceVariableName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 194)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 194)) ;
      }
      GGS_assignmentGenerationVarMap var_typeMap_8569 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_25 = this ;
      var_typeMap_8569.setter_insertKey (temp_25.readProperty_mTargetVariableName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_targetType_7368.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 196)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 196)) ;
      }
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_26 = this ;
      var_typeMap_8569.setter_insertKey (temp_26.readProperty_mSourceVariableName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_7500.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 197)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 197)) ;
      }
      GGS_stringlist var_generatedInstructions_8759 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_allocaList var_allocaList_8807 = GGS_allocaList::init (inCompiler COMMA_HERE) ;
      GGS_uint var_temporaryIndex_8838 = GGS_uint (uint32_t (0U)) ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_27 = this ;
      extensionMethod_generateIRCode (temp_27.readProperty_mLLVMInstructionList (), var_varMap_8352, var_typeMap_8569, var_generatedInstructions_8759, var_temporaryIndex_8838, var_allocaList_8807, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 201)) ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_28 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_29 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_30 = this ;
      GGS_assignmentRoutineIR var_routine_8987 = GGS_assignmentRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (GGS_lstring::init_21__21_ (function_assignmentOperatorFuncName (var_targetType_7368, var_sourceType_7500, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 203)), temp_28.readProperty_mOperatorLocation (), inCompiler COMMA_HERE), GGS_bool (false), GGS_bool (false), var_targetType_7368, temp_29.readProperty_mTargetVariableName ().readProperty_string (), var_sourceType_7500, temp_30.readProperty_mSourceVariableName ().readProperty_string (), var_generatedInstructions_8759, var_allocaList_8807, inCompiler COMMA_HERE) ;
      ioArgument_ioRoutineListIR.addAssignOperation (var_routine_8987  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 213)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@llvmAssignmentOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                            const GGS_omnibusType constinArgument_inTargetType,
                                                            const GGS_string constinArgument_inTargetLLVMName,
                                                            const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                            const GGS_location /* constinArgument_inErrorLocation */,
                                                            const GGS_bool /* constinArgument_inTargetIsInitialized */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_llvmAssignmentOperatorUsage temp_1 = this ;
    GGS_bool test_2 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas3", 244)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      const GGS_llvmAssignmentOperatorUsage temp_3 = this ;
      test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mSourceGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas3", 245)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
    GGS_bool test_4 = test_2 ;
    if (GalgasBool::boolTrue == test_4.boolEnum ()) {
      test_4 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 246)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas3", 246)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas3", 246)) ;
    }
    GGS_bool test_5 = test_4 ;
    if (GalgasBool::boolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 247)).readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas3", 247)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas3", 247)) ;
    }
    test_0 = test_5.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_llvmRoutineName_10869 = function_assignmentOperatorFuncName (constinArgument_inTargetType, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 248)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 248)) ;
      GGS_string var_s_10972 = GGS_string ("call void @").add_operation (var_llvmRoutineName_10869.getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas3", 249)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 249)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 249)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 250)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 250)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 250)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 250)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 250)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 251)).ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 251)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 251)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 251)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 251)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 251)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 251)) ;
      {
      GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 252)) ;
      temp_6.plusPlusAssignOperation (var_llvmRoutineName_10869  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 252)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_10972, temp_6, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 252)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_omnibusType var_sourceType_11371 ;
    GGS_string var_srcLLVMName_11398 ;
    constinArgument_inSourcePossibleReference.method_extractReference (var_sourceType_11371, var_srcLLVMName_11398, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 254)) ;
    GGS_assignmentGenerationVarMap var_varMap_11447 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmAssignmentOperatorUsage temp_7 = this ;
    var_varMap_11447.setter_insertKey (temp_7.readProperty_mTargetVarName (), constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 256)) ;
    }
    {
    const GGS_llvmAssignmentOperatorUsage temp_8 = this ;
    var_varMap_11447.setter_insertKey (temp_8.readProperty_mSourceVarName (), var_srcLLVMName_11398, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 257)) ;
    }
    GGS_assignmentGenerationVarMap var_typeMap_11621 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmAssignmentOperatorUsage temp_9 = this ;
    var_typeMap_11621.setter_insertKey (temp_9.readProperty_mTargetVarName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 259)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 259)) ;
    }
    {
    const GGS_llvmAssignmentOperatorUsage temp_10 = this ;
    var_typeMap_11621.setter_insertKey (temp_10.readProperty_mSourceVarName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_11371.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 260)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 260)) ;
    }
    GGS_stringlist var_generatedInstructions_11805 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    const GGS_llvmAssignmentOperatorUsage temp_11 = this ;
    extensionMethod_generateIRCode (temp_11.readProperty_mInstructionList (), var_varMap_11447, var_typeMap_11621, var_generatedInstructions_11805, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 262)) ;
    UpEnumerator_stringlist enumerator_11977 (var_generatedInstructions_11805) ;
    while (enumerator_11977.hasCurrentObject ()) {
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, enumerator_11977.current_mValue (HERE), GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 264)) ;
      }
      enumerator_11977.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assignmentRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentRoutineIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas3", 315)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 315)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 315)) ;
  const GGS_assignmentRoutineIR temp_1 = this ;
  const GGS_assignmentRoutineIR temp_2 = this ;
  const GGS_assignmentRoutineIR temp_3 = this ;
  const GGS_assignmentRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 316)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 316)).add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 316)).add_operation (temp_2.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 316)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 316)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_3.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 317)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 317)).add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 317)).add_operation (temp_4.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 317)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 317)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 316)) ;
  const GGS_assignmentRoutineIR temp_5 = this ;
  extensionMethod_generateAllocaList (temp_5.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 318)) ;
  const GGS_assignmentRoutineIR temp_6 = this ;
  UpEnumerator_stringlist enumerator_14126 (temp_6.readProperty_mGeneratedInstructions ()) ;
  while (enumerator_14126.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_14126.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 320)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 320)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 320)) ;
    enumerator_14126.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 322)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 323)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@simpleAssignmentCopyRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_simpleAssignmentCopyRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_simpleAssignmentCopyRoutineIR temp_0 = this ;
  GGS_string var_typeName_14803 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 339)) ;
  GGS_string var_targetVarName_14850 = GGS_string ("%targetPtr") ;
  GGS_string var_sourceVarName_14885 = GGS_string ("%sourcePtr") ;
  const GGS_simpleAssignmentCopyRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas3", 342)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 342)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 342)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_typeName_14803, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 343)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 343)).add_operation (var_targetVarName_14850, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 343)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 343)).add_operation (var_typeName_14803, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 344)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 344)).add_operation (var_sourceVarName_14885, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 344)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 344)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 343)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value = load ").add_operation (var_typeName_14803, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 345)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 345)).add_operation (var_typeName_14803, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 345)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 345)).add_operation (var_sourceVarName_14885, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 345)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 345)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 345)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_typeName_14803, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 346)).add_operation (GGS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 346)).add_operation (var_typeName_14803, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 346)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 346)).add_operation (var_targetVarName_14850, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 346)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 346)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 346)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 347)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 348)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@simpleCopyAssignmentOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_simpleCopyAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                  GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  const GGS_omnibusType constinArgument_inTargetType,
                                                                  const GGS_string constinArgument_inTargetLLVMName,
                                                                  const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                  const GGS_location /* constinArgument_inErrorLocation */,
                                                                  const GGS_bool /* constinArgument_inTargetIsInitialized */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_sourceValue_16173 = constinArgument_inSourcePossibleReference ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("assignment-operator-definition.galgas3", 370)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_getNewTempValue_3F__26__21_ (constinArgument_inTargetType, ioArgument_ioTemporaries, var_sourceValue_16173, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 371)) ;
      }
      GGS_string var_s_16336 = extensionGetter_llvmName (var_sourceValue_16173, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 372)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 372)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 372)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 373)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 372)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 373)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 373)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 373)) ;
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_16336, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 374)) ;
      }
    }
  }
  GGS_string var_s_16589 = GGS_string ("store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 377)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 377)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 377)).add_operation (extensionGetter_llvmName (var_sourceValue_16173, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 377)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 377)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 377)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 378)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 378)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 378)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 378)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_16589, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 379)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@freeStringIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                    GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_freeStringIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_0.readProperty_mString (), inCompiler COMMA_SOURCE_FILE ("instruction-free-string.galgas3", 21)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-free-string.galgas3", 21)), inCompiler  COMMA_SOURCE_FILE ("instruction-free-string.galgas3", 21)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@freeStringIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                        GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_freeStringIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusAssignOperation(temp_0.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-free-string.galgas3", 30)) ;
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
  GGS_string var_s_555 = GGS_string ("func.") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_555.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas3", 18)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 18)) ;
    }
  }
  var_s_555.plusAssignOperation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 20)) ;
  var_s_555.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 21)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_725 (constinArgument_inFormalArgumentList) ;
  while (enumerator_725.hasCurrentObject ()) {
    var_s_555.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_725.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas3", 23)).add_operation (enumerator_725.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas3", 23)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas3", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 23)) ;
    enumerator_725.gotoNextObject () ;
  }
  var_s_555.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 25)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_555, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
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
                                                                       const GALGAS_ObjectArray & inEffectiveParameterArray,
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
  GGS_string var_s_1251 = GGS_string ("func.") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_1251.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas3", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 37)) ;
    }
  }
  var_s_1251.plusAssignOperation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 39)) ;
  var_s_1251.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 40)) ;
  UpEnumerator_effectiveArgumentListAST enumerator_1396 (constinArgument_inEffectiveParameterList) ;
  while (enumerator_1396.hasCurrentObject ()) {
    var_s_1251.plusAssignOperation(extensionGetter_matchingFormalArgument (enumerator_1396.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas3", 42)).add_operation (enumerator_1396.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas3", 42)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas3", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 42)) ;
    enumerator_1396.gotoNextObject () ;
  }
  var_s_1251.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas3", 44)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1251, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
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
                                                                        const GALGAS_ObjectArray & inEffectiveParameterArray,
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
//Overriding extension proc '@controlRegisterAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterAssignmentInstructionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 59)) ;
  const GGS_controlRegisterAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@controlRegisterAssignmentInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                                       const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                       const GGS_semanticContext constinArgument_inContext,
                                                                                       const GGS_mode constinArgument_inMode,
                                                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                       GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                       GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                       GGS_allocaList & ioArgument_ioAllocaList,
                                                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_registerType_3792 ;
  GGS_string var_llvmRegAddressName_3881 ;
  const GGS_controlRegisterAssignmentInstructionAST temp_0 = this ;
  GGS_uint joker_3810 ; // Joker input parameter
  GGS_sliceMap joker_3835 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (true), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_3792, joker_3810, joker_3835, var_llvmRegAddressName_3881, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 79)) ;
  GGS_objectIR var_sourceIR_4351 ;
  const GGS_controlRegisterAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_registerType_3792, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceIR_4351, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 96)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceIR_4351, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 110)) ;
  }
  GGS_omnibusType var_t_4555 = extensionGetter_type (var_sourceIR_4351, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 115)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_t_4555.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 116)).operator_not (SOURCE_FILE ("instruction-assignment-control-register.galgas3", 116)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_controlRegisterAssignmentInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName ().readProperty_location (), GGS_string ("source expression is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 117)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_controlRegisterAssignmentInstructionAST temp_5 = this ;
    switch (temp_5.readProperty_mAssignmentKind ().enumValue ()) {
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::invalid:
      break ;
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::enum_assignment:
      {
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_3792, var_llvmRegAddressName_3881, var_sourceIR_4351, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 121)) ;
        }
      }
      break ;
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::enum_assignmentWithOperator:
      {
        GGS_omnibusInfixOperator extractedValue_4909_infixOperator_0 ;
        GGS_location extractedValue_4924_operatorLocation_1 ;
        temp_5.readProperty_mAssignmentKind ().getAssociatedValuesFor_assignmentWithOperator (extractedValue_4909_infixOperator_0, extractedValue_4924_operatorLocation_1) ;
        GGS_objectIR var_registerValueIR_5028 ;
        {
        routine_getNewTempValue_3F__26__21_ (var_registerType_3792, ioArgument_ioTemporaries, var_registerValueIR_5028, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 124)) ;
        }
        {
        extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerValueIR_5028, var_llvmRegAddressName_3881, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 125)) ;
        }
        GGS_lstring var_key_5194 = function_infixOperatorMapKey (var_registerType_3792, extractedValue_4909_infixOperator_0, extractedValue_4924_operatorLocation_1, extensionGetter_type (var_sourceIR_4351, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 127)) ;
        GGS_omnibusType var_resultType_5340 ;
        GGS_omnibusInfixOperatorUsage var_operatorUsage_5357 ;
        constinArgument_inContext.readProperty_mInfixOperatorMap ().method_searchKey (var_key_5194, var_resultType_5340, var_operatorUsage_5357, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 128)) ;
        GGS_objectIR var_operationResult_5608 ;
        callExtensionMethod_generateCode ((cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_5357.ptr (), var_registerValueIR_5028, extractedValue_4924_operatorLocation_1, var_sourceIR_4351, var_resultType_5340, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_operationResult_5608, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 129)) ;
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_3792, var_llvmRegAddressName_3881, var_operationResult_5608, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 140)) ;
        }
      }
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@llvmInfixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmInfixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendInfixOperatorDeclaration????&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                                 const GGS_string constinArgument_inLLVMOperation,
                                                                 const GGS_string constinArgument_inTypeName,
                                                                 const GGS_string constinArgument_inResultOmnibusTypeName,
                                                                 GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 35)) ;
  GGS_llvmGenerationInstructionList var_llvmInstructionList_1532 = temp_0 ;
  GGS_llvmGenerationInstructionElementList temp_1 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 36)) ;
  GGS_llvmGenerationInstructionElementList var_instructionElements_1602 = temp_1 ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 37))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 37))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 37)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 38)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 38)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 39)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 40)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 41)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 42)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 43)) ;
  var_llvmInstructionList_1532.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1602, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 44)) ;
  GGS_genericFormalParameterList temp_2 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 50)) ;
  GGS_genericFormalParameterList temp_3 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 53)) ;
  GGS_genericFormalParameterList temp_4 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 55)) ;
  GGS_abstractDeclarationAST var_declaration_2140 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 47)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 48)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 49)), temp_2, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 51)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 52)), temp_3, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 54)), temp_4, var_llvmInstructionList_1532, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2140.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 58)) ;
  GGS_llvmGenerationInstructionList temp_5 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 60)) ;
  var_llvmInstructionList_1532 = temp_5 ;
  GGS_llvmGenerationInstructionElementList temp_6 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 61)) ;
  var_instructionElements_1602 = temp_6 ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 62))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 62))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 62)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 63)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 64)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 65)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 66)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 67)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 68)) ;
  var_llvmInstructionList_1532.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1602, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 69)) ;
  GGS_genericFormalParameterList temp_7 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 75)) ;
  GGS_genericFormalParameterList temp_8 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 78)) ;
  GGS_genericFormalParameterList temp_9 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 80)) ;
  var_declaration_2140 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 72)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 73)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 74)), temp_7, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 76)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 77)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 77)), temp_8, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 79)), temp_9, var_llvmInstructionList_1532, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2140.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 83)) ;
  GGS_llvmGenerationInstructionList temp_10 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 85)) ;
  var_llvmInstructionList_1532 = temp_10 ;
  GGS_llvmGenerationInstructionElementList temp_11 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 86)) ;
  var_instructionElements_1602 = temp_11 ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 87))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 87))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 87)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 88)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 88)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 89)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 90)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 91)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 92)) ;
  var_instructionElements_1602.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 93)) ;
  var_llvmInstructionList_1532.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1602, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 94)) ;
  GGS_genericFormalParameterList temp_12 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 100)) ;
  GGS_genericFormalParameterList temp_13 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 103)) ;
  GGS_genericFormalParameterList temp_14 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 105)) ;
  var_declaration_2140 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 97)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 98)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 99)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 99)), temp_12, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 101)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 102)), temp_13, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 104)), temp_14, var_llvmInstructionList_1532, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2140.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 108)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@llvmInfixOperatorAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  const GGS_llvmInfixOperatorAST temp_3 = this ;
  GGS_lstring var_nodeName_6011 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 160)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 160)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 160)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 160)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 160)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6011, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 161)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6011, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 162)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6011, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 163)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6011, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 164)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@llvmInfixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmInfixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 170)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 170)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 170)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 170)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@llvmInfixOperatorAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                       GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                       GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                       GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                       GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                       GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                       GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                       GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftTypeProxy_7604 ;
  {
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_7604, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 188)) ;
  }
  GGS_omnibusType var_leftType_7625 = extensionGetter_type (var_leftTypeProxy_7604, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 189)) ;
  GGS_unifiedTypeMapEntry var_rightTypeProxy_7716 ;
  {
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mRightTypeName (), var_rightTypeProxy_7716, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 190)) ;
  }
  GGS_omnibusType var_rightType_7738 = extensionGetter_type (var_rightTypeProxy_7716, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 191)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_7832 ;
  {
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_7832, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 192)) ;
  }
  GGS_omnibusType var_resultType_7855 = extensionGetter_type (var_resultTypeProxy_7832, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 193)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_7625.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 194)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_7738.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 194)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 194)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_llvmInfixOperatorAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mInfixOperatorLocation (), GGS_string ("one of the two argument types should not be a compile time type"), fixItArray5  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 195)) ;
    }
  }
  const GGS_llvmInfixOperatorAST temp_6 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_resultType_7855.ptr (), temp_6.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 197)) ;
  const GGS_llvmInfixOperatorAST temp_7 = this ;
  const GGS_llvmInfixOperatorAST temp_8 = this ;
  GGS_lstring var_key_8182 = function_infixOperatorMapKey (var_leftType_7625, temp_7.readProperty_mInfixOperator (), temp_8.readProperty_mInfixOperatorLocation (), var_rightType_7738, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 199)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_7625.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 201)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas3", 201)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_7738.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 201)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas3", 201)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 201)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_llvmInfixOperatorAST temp_10 = this ;
      const GGS_llvmInfixOperatorAST temp_11 = this ;
      const GGS_llvmInfixOperatorAST temp_12 = this ;
      const GGS_llvmInfixOperatorAST temp_13 = this ;
      GGS_llvmInfixOperatorUsage var_definition_8388 = GGS_llvmInfixOperatorUsage::init_21__21__21__21_ (function_infixOperatorFunctionName (var_leftType_7625, temp_10.readProperty_mInfixOperator (), var_rightType_7738, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 203)), temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8182, var_resultType_7855, var_definition_8388, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 208)) ;
      }
      GGS_assignmentGenerationVarMap var_varMap_8711 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_llvmInfixOperatorAST temp_14 = this ;
      const GGS_llvmInfixOperatorAST temp_15 = this ;
      var_varMap_8711.setter_insertKey (temp_14.readProperty_mLeftOperandName (), GGS_string ("%").add_operation (temp_15.readProperty_mLeftOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 210)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 210)) ;
      }
      {
      const GGS_llvmInfixOperatorAST temp_16 = this ;
      const GGS_llvmInfixOperatorAST temp_17 = this ;
      var_varMap_8711.setter_insertKey (temp_16.readProperty_mRightOperandName (), GGS_string ("%").add_operation (temp_17.readProperty_mRightOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 211)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 211)) ;
      }
      GGS_assignmentGenerationVarMap var_typeMap_8918 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_7625.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 213)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas3", 213)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          {
          const GGS_llvmInfixOperatorAST temp_19 = this ;
          var_typeMap_8918.setter_insertKey (temp_19.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_leftType_7625.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 214)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 214)) ;
          }
        }
      }
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_7738.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 216)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas3", 216)).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          {
          const GGS_llvmInfixOperatorAST temp_21 = this ;
          var_typeMap_8918.setter_insertKey (temp_21.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_rightType_7738.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 217)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 217)) ;
          }
        }
      }
      {
      var_typeMap_8918.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 219)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_7855.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 219)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 219)) ;
      }
      GGS_llvmGenerationInstructionList temp_22 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 220)) ;
      GGS_llvmGenerationInstructionList var_instructionList_9296 = temp_22 ;
      var_instructionList_9296.addAssignOperation (GGS_llvmVarInstruction::init_21_ (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 221)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 221)) ;
      const GGS_llvmInfixOperatorAST temp_23 = this ;
      var_instructionList_9296.plusAssignOperation(temp_23.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 222)) ;
      {
      extensionSetter_appendReturn (var_instructionList_9296, GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 223)), GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 223)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 223)) ;
      }
      GGS_stringlist temp_24 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 224)) ;
      GGS_stringlist var_generatedInstructions_9521 = temp_24 ;
      GGS_allocaList temp_25 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 225)) ;
      GGS_allocaList var_allocaList_9569 = temp_25 ;
      GGS_uint var_temporaryIndex_9600 = GGS_uint (uint32_t (0U)) ;
      extensionMethod_generateIRCode (var_instructionList_9296, var_varMap_8711, var_typeMap_8918, var_generatedInstructions_9521, var_temporaryIndex_9600, var_allocaList_9569, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 227)) ;
      const GGS_llvmInfixOperatorAST temp_26 = this ;
      const GGS_llvmInfixOperatorAST temp_27 = this ;
      const GGS_llvmInfixOperatorAST temp_28 = this ;
      const GGS_llvmInfixOperatorAST temp_29 = this ;
      GGS_infixOperatorRoutineIR var_routine_9739 = GGS_infixOperatorRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (GGS_lstring::init_21__21_ (function_infixOperatorFunctionName (var_leftType_7625, temp_26.readProperty_mInfixOperator (), var_rightType_7738, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 229)), temp_27.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE), GGS_bool (true), GGS_bool (false), var_leftType_7625, temp_28.readProperty_mLeftOperandName ().readProperty_string (), var_rightType_7738, temp_29.readProperty_mRightOperandName ().readProperty_string (), var_resultType_7855, var_generatedInstructions_9521, var_allocaList_9569, inCompiler COMMA_HERE) ;
      ioArgument_ioRoutineListIR.addAssignOperation (var_routine_9739  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 240)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_llvmInfixOperatorAST temp_30 = this ;
    const GGS_llvmInfixOperatorAST temp_31 = this ;
    const GGS_llvmInfixOperatorAST temp_32 = this ;
    GGS_llvmInlineInfixOperatorUsage var_definition_10203 = GGS_llvmInlineInfixOperatorUsage::init_21__21__21_ (temp_30.readProperty_mLeftOperandName (), temp_31.readProperty_mRightOperandName (), temp_32.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8182, var_resultType_7855, var_definition_10203, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 247)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@llvmInfixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                       const GGS_location constinArgument_inOperatorLocation,
                                                       const GGS_objectIR constinArgument_inRightOperand,
                                                       const GGS_omnibusType constinArgument_inResultType,
                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GGS_objectIR & outArgument_outResultValue,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_11418 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_11418, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 276)) ;
  }
  GGS_objectIR var_rightOperand_11552 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_11552, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 281)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 286)) ;
  }
  GGS_procCallEffectiveParameterListIR temp_0 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 287)) ;
  GGS_procCallEffectiveParameterListIR var_argumentList_11826 = temp_0 ;
  var_argumentList_11826.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("infix-operator-llvm.galgas3", 288)), var_leftOperand_11418  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 288)) ;
  var_argumentList_11826.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("infix-operator-llvm.galgas3", 289)), var_rightOperand_11552  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 289)) ;
  const GGS_llvmInfixOperatorUsage temp_1 = this ;
  const GGS_llvmInfixOperatorUsage temp_2 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outResultValue, GGS_lstring::init_21__21_ (temp_1.readProperty_mInfixMangledFunctionName (), constinArgument_inOperatorLocation, inCompiler COMMA_HERE), temp_2.readProperty_mInfixMangledFunctionName (), var_argumentList_11826, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 290)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@llvmInlineInfixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInlineInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location /* constinArgument_inOperatorLocation */,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GGS_allocaList & ioArgument_ioAllocaList,
                                                             GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_12958 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_12958, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 320)) ;
  }
  GGS_objectIR var_rightOperand_13092 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_13092, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 325)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 330)) ;
  }
  GGS_assignmentGenerationVarMap var_varMap_13360 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_llvmInlineInfixOperatorUsage temp_0 = this ;
  var_varMap_13360.setter_insertKey (temp_0.readProperty_mLeftOperandName (), extensionGetter_llvmName (var_leftOperand_12958, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 332)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 332)) ;
  }
  {
  const GGS_llvmInlineInfixOperatorUsage temp_1 = this ;
  var_varMap_13360.setter_insertKey (temp_1.readProperty_mRightOperandName (), extensionGetter_llvmName (var_rightOperand_13092, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 333)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 333)) ;
  }
  {
  var_varMap_13360.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas3", 334)), extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 334)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 334)) ;
  }
  GGS_assignmentGenerationVarMap var_typeMap_13614 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_12958, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 336)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 336)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas3", 336)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_llvmInlineInfixOperatorUsage temp_3 = this ;
      var_typeMap_13614.setter_insertKey (temp_3.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_12958, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 337)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 337)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 337)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13092, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 339)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 339)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas3", 339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      const GGS_llvmInlineInfixOperatorUsage temp_5 = this ;
      var_typeMap_13614.setter_insertKey (temp_5.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13092, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 340)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 340)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 340)) ;
      }
    }
  }
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 342)) ;
  GGS_stringlist var_generatedInstructions_13921 = temp_6 ;
  const GGS_llvmInlineInfixOperatorUsage temp_7 = this ;
  extensionMethod_generateIRCode (temp_7.readProperty_mInstructionList (), var_varMap_13360, var_typeMap_13614, var_generatedInstructions_13921, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 343)) ;
  UpEnumerator_stringlist enumerator_14089 (var_generatedInstructions_13921) ;
  while (enumerator_14089.hasCurrentObject ()) {
    {
    GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 345)) ;
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_14089.current_mValue (HERE), temp_8, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 345)) ;
    }
    enumerator_14089.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@infixOperatorRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_infixOperatorRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                             const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_infixOperatorRoutineIR temp_0 = this ;
  const GGS_infixOperatorRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 370)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 370)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 370)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("infix-operator-llvm.galgas3", 370)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 370)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 370)) ;
  const GGS_infixOperatorRoutineIR temp_2 = this ;
  const GGS_infixOperatorRoutineIR temp_3 = this ;
  const GGS_infixOperatorRoutineIR temp_4 = this ;
  const GGS_infixOperatorRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 371)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 371)).add_operation (temp_3.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 371)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 371)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 372)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 372)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 372)).add_operation (temp_5.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 372)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 372)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 371)) ;
  const GGS_infixOperatorRoutineIR temp_6 = this ;
  extensionMethod_generateAllocaList (temp_6.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 373)) ;
  const GGS_infixOperatorRoutineIR temp_7 = this ;
  UpEnumerator_stringlist enumerator_15438 (temp_7.readProperty_mGeneratedInstructions ()) ;
  while (enumerator_15438.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_15438.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 375)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 375)) ;
    enumerator_15438.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 377)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extendIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_extendIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extendIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 23)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 23)) ;
  const GGS_extendIR temp_1 = this ;
  GGS_typeKind var_kind_691 = extensionGetter_type (temp_1.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 24)).readProperty_kind () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_kind_691.getter_isLlvmType (SOURCE_FILE ("intermediate-extend.galgas3", 25)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("zext"), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 26)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GGS_bool var_sourceIsUnsigned_823 ;
    GGS_bigint joker_804_2 ; // Joker input parameter
    GGS_bigint joker_804_1 ; // Joker input parameter
    GGS_uint joker_841_1 ; // Joker input parameter
    var_kind_691.method_extractInteger (joker_804_2, joker_804_1, var_sourceIsUnsigned_823, joker_841_1, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 28)) ;
    GGS_string temp_3 ;
    const GalgasBool test_4 = var_sourceIsUnsigned_823.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      temp_3 = GGS_string ("zext") ;
    }else if (GalgasBool::boolFalse == test_4) {
      temp_3 = GGS_string ("sext") ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(temp_3, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 29)) ;
  }
  const GGS_extendIR temp_5 = this ;
  const GGS_extendIR temp_6 = this ;
  const GGS_extendIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_llvmTypeName (temp_5.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)).add_operation (extensionGetter_llvmTypeName (temp_7.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@logicalRightShiftIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_logicalRightShiftIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                           GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_logicalRightShiftIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 33)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 33)) ;
  const GGS_logicalRightShiftIR temp_1 = this ;
  const GGS_logicalRightShiftIR temp_2 = this ;
  const GGS_logicalRightShiftIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("lshr ").add_operation (extensionGetter_llvmTypeName (temp_1.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)).add_operation (temp_3.readProperty_mShiftAmount ().getter_string (SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 34)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 48)) ;
  const GGS_whileInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 49)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@whileInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 68)) ;
  GGS_instructionListIR var_testInstructionGenerationList_2794 = temp_0 ;
  GGS_objectIR var_testValue_3230 ;
  const GGS_whileInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 72)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_2794, var_testValue_3230, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 69)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_2794, ioArgument_ioTemporaries, var_testValue_3230, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 82)) ;
  }
  GGS_implicitBooleanConversionResult var_booleanResult_3607 ;
  const GGS_whileInstructionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testValue_3230, temp_2.readProperty_mEndOf_5F_test_5F_expression (), ioArgument_ioTemporaries, var_testInstructionGenerationList_2794, ioArgument_ioAllocaList, var_booleanResult_3607, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 87)) ;
  switch (var_booleanResult_3607.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_3668__0 ;
      var_booleanResult_3607.getAssociatedValuesFor_compileTime (extractedValue_3668__0) ;
      const GGS_whileInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("test expression type should not be a compile time expression"), fixItArray4  COMMA_SOURCE_FILE ("instruction-while.galgas3", 97)) ;
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    break ;
  }
  GGS_instructionListIR temp_5 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 101)) ;
  GGS_instructionListIR var_instructionGenerationList_3866 = temp_5 ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 102)) ;
  }
  const GGS_whileInstructionAST temp_6 = this ;
  const GGS_whileInstructionAST temp_7 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_6.readProperty_mWhileInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_7.readProperty_mEndOf_5F_while_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3866, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 103)) ;
  {
  const GGS_whileInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_8.readProperty_mEndOf_5F_while_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 115)) ;
  }
  const GGS_whileInstructionAST temp_9 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_whileInstructionIR::init_21__21__21__21_ (temp_9.readProperty_mEndOf_5F_test_5F_expression ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 118)), var_testInstructionGenerationList_2794, extensionGetter_llvmName (var_booleanResult_3607, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 120)), var_instructionGenerationList_3866, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-while.galgas3", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@whileInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext constinArgument_inGenerationContext,
                                                          GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionIR temp_0 = this ;
  GGS_string var_labelTest_5394 = GGS_string ("while.").add_operation (temp_0.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 143)).add_operation (GGS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 143)) ;
  const GGS_whileInstructionIR temp_1 = this ;
  GGS_string var_labelLoop_5450 = GGS_string ("while.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas3", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 144)).add_operation (GGS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 144)) ;
  const GGS_whileInstructionIR temp_2 = this ;
  GGS_string var_labelEnd_5506 = GGS_string ("while.").add_operation (temp_2.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas3", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 145)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 145)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelTest_5394, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 146)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 146)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelTest_5394.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 147)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 147)) ;
  const GGS_whileInstructionIR temp_3 = this ;
  extensionMethod_instructionListLLVMCode (temp_3.readProperty_mTestInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 148)) ;
  const GGS_whileInstructionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (temp_4.readProperty_m_5F_while_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 149)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 149)).add_operation (var_labelLoop_5450, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 149)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 149)).add_operation (var_labelEnd_5506, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 149)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 149)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 149)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelLoop_5450.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 150)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 150)) ;
  const GGS_whileInstructionIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 151)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelTest_5394, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 152)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 152)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 152)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelEnd_5506.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 153)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@whileInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mTestInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 162)) ;
  const GGS_whileInstructionIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas3", 163)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@syncDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_syncDeclarationAST temp_0 = this ;
  const GGS_syncDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncToolName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 50)) ;
  }
  const GGS_syncDeclarationAST temp_2 = this ;
  UpEnumerator_structurePropertyListAST enumerator_1998 (temp_2.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_1998.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_1998.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        const GGS_syncDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncToolName (), enumerator_1998.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 54)) ;
        }
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, enumerator_1998.current_mVisibility (HERE).objectCompare (GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-sync-declaration.galgas3", 56)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_1998.current_mPropertyName (HERE).readProperty_location (), GGS_string ("a sync tool property should be private"), fixItArray6  COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 57)) ;
      }
    }
    switch (enumerator_1998.current_mPropertyKind (HERE).enumValue ()) {
    case GGS_propertyKindAST::Enumeration::invalid:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
      {
        GGS_expressionAST extractedValue_2413_initExpression_0 ;
        enumerator_1998.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedStoredProperty (extractedValue_2413_initExpression_0) ;
        const GGS_syncDeclarationAST temp_7 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2413_initExpression_0.ptr (), temp_7.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 62)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
      {
        GGS_expressionAST extractedValue_2560_initExpression_0 ;
        enumerator_1998.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedConstantProperty (extractedValue_2560_initExpression_0) ;
        const GGS_syncDeclarationAST temp_8 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2560_initExpression_0.ptr (), temp_8.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 64)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
      {
        GGS_instructionListAST extractedValue_2704_instructionList_0 ;
        GGS_location extractedValue_2721__1 ;
        enumerator_1998.current_mPropertyKind (HERE).getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_2704_instructionList_0, extractedValue_2721__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_2704_instructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 66)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
      {
        GGS_instructionListAST extractedValue_2834_writeInstructionList_0 ;
        GGS_location extractedValue_2856__1 ;
        enumerator_1998.current_mPropertyKind (HERE).getAssociatedValuesFor_writeComputedProperty (extractedValue_2834_writeInstructionList_0, extractedValue_2856__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_2834_writeInstructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 68)) ;
      }
      break ;
    }
    enumerator_1998.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syncDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syncDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_syncDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("sync ").add_operation (temp_0.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 76)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syncDeclarationAST locationForErrorSignaling'
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
//Overriding extension proc '@syncDeclarationAST enterInContext'
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
  GGS_propertyList var_propertyList_4369 = GGS_propertyList::init (inCompiler COMMA_HERE) ;
  GGS_sortedOperandIRList var_sortedOperandIRList_4415 = GGS_sortedOperandIRList::init (inCompiler COMMA_HERE) ;
  GGS_constructorSignature var_constructorSignature_4469 = GGS_constructorSignature::init (inCompiler COMMA_HERE) ;
  GGS_string var_constructorKey_4510 = GGS_string ("(") ;
  const GGS_syncDeclarationAST temp_0 = this ;
  UpEnumerator_structurePropertyListAST enumerator_4554 (temp_0.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_4554.hasCurrentObject ()) {
    GGS_bool joker_4975 = GGS_bool (true) ;
    const GGS_syncDeclarationAST temp_1 = this ;
    const GGS_syncDeclarationAST temp_2 = this ;
    const GGS_syncDeclarationAST temp_3 = this ;
    extensionMethod_enterPropertyInContext (enumerator_4554.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_1.readProperty_mSyncToolName (), temp_2.readProperty_mSyncToolName (), temp_3.readProperty_mSyncToolName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_4369, var_sortedOperandIRList_4415, var_constructorSignature_4469, var_constructorKey_4510, joker_4975, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 105)) ;
    enumerator_4554.gotoNextObject () ;
  }
  var_constructorKey_4510.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 119)) ;
  GGS_constructorMap var_constructorMap_5106 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_syncDeclarationAST temp_4 = this ;
  var_constructorMap_5106.setter_insertKey (GGS_lstring::init_21__21_ (var_constructorKey_4510, temp_4.readProperty_mSyncToolName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorSignature_4469, GGS_constructorValue::class_func_structure (var_sortedOperandIRList_4415  COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 125)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 122)) ;
  }
  {
  const GGS_syncDeclarationAST temp_5 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_5.readProperty_mSyncToolName (), var_constructorMap_5106, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 127)) ;
  }
  const GGS_syncDeclarationAST temp_6 = this ;
  const GGS_syncDeclarationAST temp_7 = this ;
  GGS_omnibusType var_structureType_5450 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas3", 130)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-sync-declaration.galgas3", 131)), temp_6.readProperty_mSyncToolName ().readProperty_string (), GGS_typeKind::class_func_syncTool (SOURCE_FILE ("type-sync-declaration.galgas3", 133)), temp_7.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_syncDeclarationAST temp_8 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_8.readProperty_mSyncToolName (), var_structureType_5450, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 136)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_5450.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 139)), var_propertyList_4369, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 138)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmAttributeFunction'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmAttributeFunction (Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (" nounwind minsize optsize ") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GGS_string gOnceFunctionResult_llvmAttributeFunction ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmAttributeFunction (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (nullptr,
                                                                 releaseOnceFunctionResult_llvmAttributeFunction) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmAttributeFunction [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmAttributeFunction (Compiler * inCompiler,
                                                                   const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'staticAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_staticAttribute (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("static") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GGS_string gOnceFunctionResult_staticAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_staticAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticAttribute) {
    gOnceFunctionResult_staticAttribute = onceFunction_staticAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticAttribute = true ;
  }
  return gOnceFunctionResult_staticAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticAttribute (void) {
  gOnceFunctionResult_staticAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_staticAttribute (nullptr,
                                                           releaseOnceFunctionResult_staticAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_staticAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_staticAttribute (Compiler * inCompiler,
                                                             const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_staticAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticAttribute ("staticAttribute",
                                                                 functionWithGenericHeader_staticAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_staticAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeDeclarationBarrier'
//
//--------------------------------------------------------------------------------------------------

static GGS_lstring onceFunction_compileTimeDeclarationBarrier (Compiler *
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_string ("«compile time»").getter_nowhere (SOURCE_FILE ("generated-code-prefixes.galgas3", 16)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = false ;
static GGS_lstring gOnceFunctionResult_compileTimeDeclarationBarrier ;

//--------------------------------------------------------------------------------------------------

GGS_lstring function_compileTimeDeclarationBarrier (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeDeclarationBarrier) {
    gOnceFunctionResult_compileTimeDeclarationBarrier = onceFunction_compileTimeDeclarationBarrier (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = true ;
  }
  return gOnceFunctionResult_compileTimeDeclarationBarrier ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeDeclarationBarrier (void) {
  gOnceFunctionResult_compileTimeDeclarationBarrier.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeDeclarationBarrier (nullptr,
                                                                         releaseOnceFunctionResult_compileTimeDeclarationBarrier) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compileTimeDeclarationBarrier [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compileTimeDeclarationBarrier (Compiler * inCompiler,
                                                                           const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                           const GGS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_compileTimeDeclarationBarrier (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeDeclarationBarrier ("compileTimeDeclarationBarrier",
                                                                               functionWithGenericHeader_compileTimeDeclarationBarrier,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               0,
                                                                               functionArgs_compileTimeDeclarationBarrier) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupNameFromOmnibusName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_registerGroupNameFromOmnibusName (const GGS_lstring & constinArgument_inName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("registers ").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 24)), constinArgument_inName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_registerGroupNameFromOmnibusName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_registerGroupNameFromOmnibusName (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_registerGroupNameFromOmnibusName (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupNameFromOmnibusName ("registerGroupNameFromOmnibusName",
                                                                                  functionWithGenericHeader_registerGroupNameFromOmnibusName,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_registerGroupNameFromOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_literalStringName (const GGS_uint & constinArgument_inIndex,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas3", 32)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_literalStringName (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_literalStringName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalCharacterArrayName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_literalCharacterArrayName (const GGS_uint & constinArgument_inIndex,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas3", 38)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_literalCharacterArrayName (Compiler * inCompiler,
                                                                       const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_literalCharacterArrayName (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_infixOperatorMapKey (const GGS_omnibusType & constinArgument_inLeftType,
                                          const GGS_omnibusInfixOperator & constinArgument_inInfixOperator,
                                          const GGS_location & constinArgument_inOperatorLocation,
                                          const GGS_omnibusType & constinArgument_inRightType,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1909 = constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 50)).add_operation (extensionGetter_string (constinArgument_inInfixOperator, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 50)) ;
  var_s_1909.plusAssignOperation(GGS_string (" ").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 51)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 51)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1909, constinArgument_inOperatorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_infixOperatorMapKey [5] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_infixOperatorMapKey (Compiler * inCompiler,
                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_omnibusInfixOperator operand1 = GGS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_omnibusType operand3 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_infixOperatorMapKey (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorMapKey ("infixOperatorMapKey",
                                                                     functionWithGenericHeader_infixOperatorMapKey,
                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                     4,
                                                                     functionArgs_infixOperatorMapKey) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_infixOperatorFunctionName (const GGS_omnibusType & constinArgument_inLeftType,
                                               const GGS_omnibusInfixOperator & constinArgument_inOperator,
                                               const GGS_omnibusType & constinArgument_inRightType,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("operator.").add_operation (constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 62)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 62)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_omnibusInfixOperator::Enumeration::invalid:
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_equal:
    {
      result_result.plusAssignOperation(GGS_string ("equal"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 64)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_lessThan:
    {
      result_result.plusAssignOperation(GGS_string ("lessThan"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 65)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_infEqual:
    {
      result_result.plusAssignOperation(GGS_string ("infEqual"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 66)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseAndOp:
    {
      result_result.plusAssignOperation(GGS_string ("bitWiseAnd"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 67)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseOrOp:
    {
      result_result.plusAssignOperation(GGS_string ("bitWiseOr"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 68)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseXorOp:
    {
      result_result.plusAssignOperation(GGS_string ("xor"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 69)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_addOp:
    {
      result_result.plusAssignOperation(GGS_string ("add"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 70)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_addOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("addOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 71)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_subOp:
    {
      result_result.plusAssignOperation(GGS_string ("sub"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 72)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_subOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("subOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 73)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_mulOp:
    {
      result_result.plusAssignOperation(GGS_string ("mul"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 74)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_mulOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("mulOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 75)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_divOp:
    {
      result_result.plusAssignOperation(GGS_string ("div"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 76)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_divOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("divNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 77)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_modOp:
    {
      result_result.plusAssignOperation(GGS_string ("modulo"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 78)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_modOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("moduloNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 79)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_leftShiftOp:
    {
      result_result.plusAssignOperation(GGS_string ("leftShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 80)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_rightShiftOp:
    {
      result_result.plusAssignOperation(GGS_string ("rightShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 81)) ;
    }
    break ;
  }
  result_result.plusAssignOperation(GGS_string (".").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 83)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_infixOperatorFunctionName [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_infixOperatorFunctionName (Compiler * inCompiler,
                                                                       const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_omnibusInfixOperator operand1 = GGS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_infixOperatorFunctionName (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorFunctionName ("infixOperatorFunctionName",
                                                                           functionWithGenericHeader_infixOperatorFunctionName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           3,
                                                                           functionArgs_infixOperatorFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_prefixOperatorMapKey (const GGS_omnibusType & constinArgument_inReceiverType,
                                           const GGS_prefixOperator & constinArgument_inOperator,
                                           const GGS_location & constinArgument_inOperatorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_3696 ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_prefixOperator::Enumeration::invalid:
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusNoOvf:
    {
      var_s_3696 = GGS_string ("-%") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusOp:
    {
      var_s_3696 = GGS_string ("-") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_notOp:
    {
      var_s_3696 = GGS_string ("not") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_bitWiseComplement:
    {
      var_s_3696 = GGS_string ("~") ;
    }
    break ;
  }
  var_s_3696.plusAssignOperation(GGS_string (" ").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 101)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 101)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_3696, constinArgument_inOperatorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_prefixOperatorMapKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_prefixOperatorMapKey (Compiler * inCompiler,
                                                                  const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_prefixOperator operand1 = GGS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_prefixOperatorMapKey (operand0,
                                        operand1,
                                        operand2,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorMapKey ("prefixOperatorMapKey",
                                                                      functionWithGenericHeader_prefixOperatorMapKey,
                                                                      & kTypeDescriptor_GALGAS_lstring,
                                                                      3,
                                                                      functionArgs_prefixOperatorMapKey) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_prefixOperatorFunctionName (const GGS_omnibusType & constinArgument_inReceiverType,
                                                const GGS_prefixOperator & constinArgument_inOperator,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("operator.") ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_prefixOperator::Enumeration::invalid:
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("minusNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 113)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusOp:
    {
      result_result.plusAssignOperation(GGS_string ("minus"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 114)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_notOp:
    {
      result_result.plusAssignOperation(GGS_string ("not"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 115)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_bitWiseComplement:
    {
      result_result.plusAssignOperation(GGS_string ("complement"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 116)) ;
    }
    break ;
  }
  result_result.plusAssignOperation(GGS_string (".").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 118)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 118)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_prefixOperatorFunctionName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_prefixOperatorFunctionName (Compiler * inCompiler,
                                                                        const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_prefixOperator operand1 = GGS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_prefixOperatorFunctionName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorFunctionName ("prefixOperatorFunctionName",
                                                                            functionWithGenericHeader_prefixOperatorFunctionName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_prefixOperatorFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'staticStringTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_staticStringTypeName (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("literalString") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GGS_string gOnceFunctionResult_staticStringTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_staticStringTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (nullptr,
                                                                releaseOnceFunctionResult_staticStringTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_staticStringTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_staticStringTypeName (Compiler * inCompiler,
                                                                  const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'functionResultVariableName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_functionResultVariableName (Compiler *
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("result") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GGS_string gOnceFunctionResult_functionResultVariableName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_functionResultVariableName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (nullptr,
                                                                      releaseOnceFunctionResult_functionResultVariableName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_functionResultVariableName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_functionResultVariableName (Compiler * inCompiler,
                                                                        const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForFunction'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForFunction (const GGS_string & constinArgument_inName,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 140)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForFunction (Compiler * inCompiler,
                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForFunction (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_getterLLVMName (const GGS_string & constinArgument_inReceiverLLVMTypeName,
                                    const GGS_string & constinArgument_inPropertyName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("get.").add_operation (constinArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 148)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 148)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 148)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_getterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_getterLLVMName (Compiler * inCompiler,
                                                            const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_getterLLVMName (operand0,
                                  operand1,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterLLVMName ("getterLLVMName",
                                                                functionWithGenericHeader_getterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_getterLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterLLVMName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_setterLLVMName (const GGS_string & constinArgument_inReceiverLLVMTypeName,
                                    const GGS_string & constinArgument_inPropertyName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("set.").add_operation (constinArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 156)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 156)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 156)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_setterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_setterLLVMName (Compiler * inCompiler,
                                                            const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_setterLLVMName (operand0,
                                  operand1,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterLLVMName ("setterLLVMName",
                                                                functionWithGenericHeader_setterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_setterLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceInterrupt'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmNameForServiceInterrupt (const GGS_lstring & constinArgument_inName,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("interrupt.service.").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 164)), constinArgument_inName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForServiceInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForServiceInterrupt (Compiler * inCompiler,
                                                                         const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmNameForServiceInterrupt (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceInterrupt ("llvmNameForServiceInterrupt",
                                                                             functionWithGenericHeader_llvmNameForServiceInterrupt,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_llvmNameForServiceInterrupt) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionInterrupt'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSectionInterrupt (const GGS_string & constinArgument_inName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("interrupt.section.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 170)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForSectionInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForSectionInterrupt (Compiler * inCompiler,
                                                                         const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForSectionInterrupt (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionInterrupt ("llvmNameForSectionInterrupt",
                                                                             functionWithGenericHeader_llvmNameForSectionInterrupt,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_llvmNameForSectionInterrupt) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceCall'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForServiceCall (const GGS_string & constinArgument_inName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("service.user.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 178)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 178)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForServiceCall (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForServiceCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForServiceImplementation (const GGS_string & constinArgument_inName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("service.implementation.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 184)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 184)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForServiceImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForServiceImplementation (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForServiceImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceImplementation ("llvmNameForServiceImplementation",
                                                                                  functionWithGenericHeader_llvmNameForServiceImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForServiceImplementation) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionCall'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSectionCall (const GGS_string & constinArgument_inName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("section.user.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 192)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 192)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForSectionCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForSectionCall (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForSectionCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionCall ("llvmNameForSectionCall",
                                                                        functionWithGenericHeader_llvmNameForSectionCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForSectionCall) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSectionImplementation (const GGS_string & constinArgument_inName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("section.implementation.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 198)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 198)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForSectionImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForSectionImplementation (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForSectionImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionImplementation ("llvmNameForSectionImplementation",
                                                                                  functionWithGenericHeader_llvmNameForSectionImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForSectionImplementation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'acceptVariableOmnibusName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_acceptVariableOmnibusName (Compiler *
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("accept") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_acceptVariableOmnibusName = false ;
static GGS_string gOnceFunctionResult_acceptVariableOmnibusName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_acceptVariableOmnibusName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariableOmnibusName) {
    gOnceFunctionResult_acceptVariableOmnibusName = onceFunction_acceptVariableOmnibusName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariableOmnibusName = true ;
  }
  return gOnceFunctionResult_acceptVariableOmnibusName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_acceptVariableOmnibusName (void) {
  gOnceFunctionResult_acceptVariableOmnibusName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_acceptVariableOmnibusName (nullptr,
                                                                     releaseOnceFunctionResult_acceptVariableOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_acceptVariableOmnibusName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_acceptVariableOmnibusName (Compiler * inCompiler,
                                                                       const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_acceptVariableOmnibusName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_acceptVariableOmnibusName ("acceptVariableOmnibusName",
                                                                           functionWithGenericHeader_acceptVariableOmnibusName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           0,
                                                                           functionArgs_acceptVariableOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'waitForGuardChangeFunctionName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_waitForGuardChangeFunctionName (Compiler *
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("guard.wait.for.change") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GGS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_waitForGuardChangeFunctionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_waitForGuardChangeFunctionName) {
    gOnceFunctionResult_waitForGuardChangeFunctionName = onceFunction_waitForGuardChangeFunctionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = true ;
  }
  return gOnceFunctionResult_waitForGuardChangeFunctionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_waitForGuardChangeFunctionName (void) {
  gOnceFunctionResult_waitForGuardChangeFunctionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_waitForGuardChangeFunctionName (nullptr,
                                                                          releaseOnceFunctionResult_waitForGuardChangeFunctionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_waitForGuardChangeFunctionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_waitForGuardChangeFunctionName (Compiler * inCompiler,
                                                                            const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_waitForGuardChangeFunctionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_waitForGuardChangeFunctionName ("waitForGuardChangeFunctionName",
                                                                                functionWithGenericHeader_waitForGuardChangeFunctionName,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_waitForGuardChangeFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForLocalVariable (const GGS_string & constinArgument_inName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("%").add_operation (GGS_string ("var."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 220)).add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 220)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 220)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForLocalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForLocalVariable (Compiler * inCompiler,
                                                                      const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                      const GGS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForLocalVariable (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForLocalVariable ("llvmNameForLocalVariable",
                                                                          functionWithGenericHeader_llvmNameForLocalVariable,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForLocalVariable) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForSelf'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmNameForSelf (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("%self") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForSelf = false ;
static GGS_string gOnceFunctionResult_llvmNameForSelf ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSelf (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForSelf) {
    gOnceFunctionResult_llvmNameForSelf = onceFunction_llvmNameForSelf (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForSelf = true ;
  }
  return gOnceFunctionResult_llvmNameForSelf ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForSelf (void) {
  gOnceFunctionResult_llvmNameForSelf.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForSelf (nullptr,
                                                           releaseOnceFunctionResult_llvmNameForSelf) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForSelf [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForSelf (Compiler * inCompiler,
                                                             const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_llvmNameForSelf (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSelf ("llvmNameForSelf",
                                                                 functionWithGenericHeader_llvmNameForSelf,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_llvmNameForSelf) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForGlobalVariable (const GGS_string & constinArgument_inName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@gvar.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 232)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 232)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForGlobalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForGlobalVariable (Compiler * inCompiler,
                                                                       const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForGlobalVariable (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalVariable ("llvmNameForGlobalVariable",
                                                                           functionWithGenericHeader_llvmNameForGlobalVariable,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForGlobalVariable) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForGlobalSyncInstance (const GGS_string & constinArgument_inName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@gsync.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 238)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 238)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForGlobalSyncInstance [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForGlobalSyncInstance (Compiler * inCompiler,
                                                                           const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                           const GGS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForGlobalSyncInstance (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalSyncInstance ("llvmNameForGlobalSyncInstance",
                                                                               functionWithGenericHeader_llvmNameForGlobalSyncInstance,
                                                                               & kTypeDescriptor_GALGAS_string,
                                                                               1,
                                                                               functionArgs_llvmNameForGlobalSyncInstance) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'instantiableAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_instantiableAttribute (Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("instantiable") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_instantiableAttribute = false ;
static GGS_string gOnceFunctionResult_instantiableAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_instantiableAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_instantiableAttribute) {
    gOnceFunctionResult_instantiableAttribute = onceFunction_instantiableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_instantiableAttribute = true ;
  }
  return gOnceFunctionResult_instantiableAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_instantiableAttribute (void) {
  gOnceFunctionResult_instantiableAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_instantiableAttribute (nullptr,
                                                                 releaseOnceFunctionResult_instantiableAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_instantiableAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_instantiableAttribute (Compiler * inCompiler,
                                                                   const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_instantiableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_instantiableAttribute ("instantiableAttribute",
                                                                       functionWithGenericHeader_instantiableAttribute,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_instantiableAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'copyableAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_copyableAttribute (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("copyable") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_copyableAttribute = false ;
static GGS_string gOnceFunctionResult_copyableAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_copyableAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_copyableAttribute) {
    gOnceFunctionResult_copyableAttribute = onceFunction_copyableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_copyableAttribute = true ;
  }
  return gOnceFunctionResult_copyableAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_copyableAttribute (void) {
  gOnceFunctionResult_copyableAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_copyableAttribute (nullptr,
                                                             releaseOnceFunctionResult_copyableAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_copyableAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_copyableAttribute (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_copyableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_copyableAttribute ("copyableAttribute",
                                                                   functionWithGenericHeader_copyableAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_copyableAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'mutatingAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_mutatingAttribute (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("mutating") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_mutatingAttribute = false ;
static GGS_string gOnceFunctionResult_mutatingAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_mutatingAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mutatingAttribute) {
    gOnceFunctionResult_mutatingAttribute = onceFunction_mutatingAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mutatingAttribute = true ;
  }
  return gOnceFunctionResult_mutatingAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_mutatingAttribute (void) {
  gOnceFunctionResult_mutatingAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_mutatingAttribute (nullptr,
                                                             releaseOnceFunctionResult_mutatingAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_mutatingAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_mutatingAttribute (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_mutatingAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_mutatingAttribute ("mutatingAttribute",
                                                                   functionWithGenericHeader_mutatingAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_mutatingAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'userAttributeForRegister'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_userAttributeForRegister (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("user") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_userAttributeForRegister = false ;
static GGS_string gOnceFunctionResult_userAttributeForRegister ;

//--------------------------------------------------------------------------------------------------

GGS_string function_userAttributeForRegister (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userAttributeForRegister) {
    gOnceFunctionResult_userAttributeForRegister = onceFunction_userAttributeForRegister (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userAttributeForRegister = true ;
  }
  return gOnceFunctionResult_userAttributeForRegister ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_userAttributeForRegister (void) {
  gOnceFunctionResult_userAttributeForRegister.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_userAttributeForRegister (nullptr,
                                                                    releaseOnceFunctionResult_userAttributeForRegister) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_userAttributeForRegister [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_userAttributeForRegister (Compiler * inCompiler,
                                                                      const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                      const GGS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_userAttributeForRegister (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_userAttributeForRegister ("userAttributeForRegister",
                                                                          functionWithGenericHeader_userAttributeForRegister,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_userAttributeForRegister) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'noUnusedWarningAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_noUnusedWarningAttribute (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("noUnusedWarning") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_noUnusedWarningAttribute = false ;
static GGS_string gOnceFunctionResult_noUnusedWarningAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_noUnusedWarningAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noUnusedWarningAttribute) {
    gOnceFunctionResult_noUnusedWarningAttribute = onceFunction_noUnusedWarningAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noUnusedWarningAttribute = true ;
  }
  return gOnceFunctionResult_noUnusedWarningAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_noUnusedWarningAttribute (void) {
  gOnceFunctionResult_noUnusedWarningAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_noUnusedWarningAttribute (nullptr,
                                                                    releaseOnceFunctionResult_noUnusedWarningAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_noUnusedWarningAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_noUnusedWarningAttribute (Compiler * inCompiler,
                                                                      const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                      const GGS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_noUnusedWarningAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_noUnusedWarningAttribute ("noUnusedWarningAttribute",
                                                                          functionWithGenericHeader_noUnusedWarningAttribute,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_noUnusedWarningAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'exportedAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_exportedAttribute (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("exported") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_exportedAttribute = false ;
static GGS_string gOnceFunctionResult_exportedAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_exportedAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_exportedAttribute) {
    gOnceFunctionResult_exportedAttribute = onceFunction_exportedAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_exportedAttribute = true ;
  }
  return gOnceFunctionResult_exportedAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_exportedAttribute (void) {
  gOnceFunctionResult_exportedAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_exportedAttribute (nullptr,
                                                             releaseOnceFunctionResult_exportedAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_exportedAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_exportedAttribute (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_exportedAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_exportedAttribute ("exportedAttribute",
                                                                   functionWithGenericHeader_exportedAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_exportedAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackNameForTask'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_stackNameForTask (const GGS_string & constinArgument_inTaskName,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@").add_operation (GGS_string ("task.stack."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 284)).add_operation (constinArgument_inTaskName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 284)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 284)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_stackNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_stackNameForTask (Compiler * inCompiler,
                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_stackNameForTask (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_stackNameForTask ("stackNameForTask",
                                                                  functionWithGenericHeader_stackNameForTask,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_stackNameForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setupNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_setupNameForTaskType (const GGS_string & constinArgument_inTaskTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@").add_operation (GGS_string ("task.setup."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 290)).add_operation (constinArgument_inTaskTypeName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 290)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 290)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_setupNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_setupNameForTaskType (Compiler * inCompiler,
                                                                  const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_setupNameForTaskType (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setupNameForTaskType ("setupNameForTaskType",
                                                                      functionWithGenericHeader_setupNameForTaskType,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_setupNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'activateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_activateNameForTaskType (const GGS_string & constinArgument_inTaskTypeName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("task.activate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 296)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_activateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_activateNameForTaskType (Compiler * inCompiler,
                                                                     const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                     const GGS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_activateNameForTaskType (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_activateNameForTaskType ("activateNameForTaskType",
                                                                         functionWithGenericHeader_activateNameForTaskType,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_activateNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'deactivateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_deactivateNameForTaskType (const GGS_string & constinArgument_inTaskTypeName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@").add_operation (GGS_string ("task.deactivate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 302)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 302)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 302)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_deactivateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_deactivateNameForTaskType (Compiler * inCompiler,
                                                                       const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_deactivateNameForTaskType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_deactivateNameForTaskType ("deactivateNameForTaskType",
                                                                           functionWithGenericHeader_deactivateNameForTaskType,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_deactivateNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackAddressForTask'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_stackAddressForTask (const GGS_string & constinArgument_inTaskName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("%").add_operation (GGS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 308)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 308)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 308)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_stackAddressForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_stackAddressForTask (Compiler * inCompiler,
                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_stackAddressForTask (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_stackAddressForTask ("stackAddressForTask",
                                                                     functionWithGenericHeader_stackAddressForTask,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_stackAddressForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mainRoutineNameForTask'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_mainRoutineNameForTask (const GGS_string & constinArgument_inTaskName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@").add_operation (GGS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 314)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 314)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 314)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_mainRoutineNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_mainRoutineNameForTask (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_mainRoutineNameForTask (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_mainRoutineNameForTask ("mainRoutineNameForTask",
                                                                        functionWithGenericHeader_mainRoutineNameForTask,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mainRoutineNameForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForTaskLoopFunction'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmNameForTaskLoopFunction (Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("task.loop") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = false ;
static GGS_string gOnceFunctionResult_llvmNameForTaskLoopFunction ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForTaskLoopFunction (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction) {
    gOnceFunctionResult_llvmNameForTaskLoopFunction = onceFunction_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskLoopFunction ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForTaskLoopFunction (void) {
  gOnceFunctionResult_llvmNameForTaskLoopFunction.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskLoopFunction (nullptr,
                                                                       releaseOnceFunctionResult_llvmNameForTaskLoopFunction) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForTaskLoopFunction [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForTaskLoopFunction (Compiler * inCompiler,
                                                                         const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskLoopFunction ("llvmNameForTaskLoopFunction",
                                                                             functionWithGenericHeader_llvmNameForTaskLoopFunction,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_llvmNameForTaskLoopFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForTaskWaitsForActivation'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmNameForTaskWaitsForActivation (Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("xtr.wait.for.activation") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = false ;
static GGS_string gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForTaskWaitsForActivation (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation) {
    gOnceFunctionResult_llvmNameForTaskWaitsForActivation = onceFunction_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation (void) {
  gOnceFunctionResult_llvmNameForTaskWaitsForActivation.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskWaitsForActivation (nullptr,
                                                                             releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForTaskWaitsForActivation [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForTaskWaitsForActivation (Compiler * inCompiler,
                                                                               const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskWaitsForActivation ("llvmNameForTaskWaitsForActivation",
                                                                                   functionWithGenericHeader_llvmNameForTaskWaitsForActivation,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   0,
                                                                                   functionArgs_llvmNameForTaskWaitsForActivation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForActivateTask'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmNameForActivateTask (Compiler *
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("xtr.activate.task") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForActivateTask = false ;
static GGS_string gOnceFunctionResult_llvmNameForActivateTask ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForActivateTask (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForActivateTask) {
    gOnceFunctionResult_llvmNameForActivateTask = onceFunction_llvmNameForActivateTask (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForActivateTask = true ;
  }
  return gOnceFunctionResult_llvmNameForActivateTask ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForActivateTask (void) {
  gOnceFunctionResult_llvmNameForActivateTask.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForActivateTask (nullptr,
                                                                   releaseOnceFunctionResult_llvmNameForActivateTask) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForActivateTask [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForActivateTask (Compiler * inCompiler,
                                                                     const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                     const GGS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_llvmNameForActivateTask (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForActivateTask ("llvmNameForActivateTask",
                                                                         functionWithGenericHeader_llvmNameForActivateTask,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         0,
                                                                         functionArgs_llvmNameForActivateTask) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'memoryAllocSectionName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_memoryAllocSectionName (Compiler *
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("heap.memory.alloc") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_memoryAllocSectionName = false ;
static GGS_string gOnceFunctionResult_memoryAllocSectionName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_memoryAllocSectionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryAllocSectionName) {
    gOnceFunctionResult_memoryAllocSectionName = onceFunction_memoryAllocSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryAllocSectionName = true ;
  }
  return gOnceFunctionResult_memoryAllocSectionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_memoryAllocSectionName (void) {
  gOnceFunctionResult_memoryAllocSectionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_memoryAllocSectionName (nullptr,
                                                                  releaseOnceFunctionResult_memoryAllocSectionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_memoryAllocSectionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_memoryAllocSectionName (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_memoryAllocSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_memoryAllocSectionName ("memoryAllocSectionName",
                                                                        functionWithGenericHeader_memoryAllocSectionName,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        0,
                                                                        functionArgs_memoryAllocSectionName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'memoryFreeSectionName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_memoryFreeSectionName (Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("heap.memory.free") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_memoryFreeSectionName = false ;
static GGS_string gOnceFunctionResult_memoryFreeSectionName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_memoryFreeSectionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryFreeSectionName) {
    gOnceFunctionResult_memoryFreeSectionName = onceFunction_memoryFreeSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryFreeSectionName = true ;
  }
  return gOnceFunctionResult_memoryFreeSectionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_memoryFreeSectionName (void) {
  gOnceFunctionResult_memoryFreeSectionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_memoryFreeSectionName (nullptr,
                                                                 releaseOnceFunctionResult_memoryFreeSectionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_memoryFreeSectionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_memoryFreeSectionName (Compiler * inCompiler,
                                                                   const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_memoryFreeSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_memoryFreeSectionName ("memoryFreeSectionName",
                                                                       functionWithGenericHeader_memoryFreeSectionName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_memoryFreeSectionName) ;

