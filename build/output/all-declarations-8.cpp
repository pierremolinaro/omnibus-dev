#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output::GGS_effectiveArgumentPassingModeAST_2E_output (void) :
mProperty_exp (),
mProperty_endOfExp () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output::GGS_effectiveArgumentPassingModeAST_2E_output (const GGS_effectiveArgumentPassingModeAST_2E_output & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_endOfExp (inSource.mProperty_endOfExp) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output & GGS_effectiveArgumentPassingModeAST_2E_output::operator = (const GGS_effectiveArgumentPassingModeAST_2E_output & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_endOfExp = inSource.mProperty_endOfExp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output GGS_effectiveArgumentPassingModeAST_2E_output::init_21__21_ (const GGS_expressionAST & in_exp,
                                                                                                           const GGS_location & in_endOfExp,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_output result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_output::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output::GGS_effectiveArgumentPassingModeAST_2E_output (const GGS_expressionAST & inOperand0,
                                                                                              const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_endOfExp (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output GGS_effectiveArgumentPassingModeAST_2E_output::class_func_new (const GGS_expressionAST & in_exp,
                                                                                                             const GGS_location & in_endOfExp,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_output result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_output::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_endOfExp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_output::drop (void) {
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_output::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @effectiveArgumentPassingModeAST.output:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @effectiveArgumentPassingModeAST.output generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output ("effectiveArgumentPassingModeAST.output",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_output::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_output::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_output (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output GGS_effectiveArgumentPassingModeAST_2E_output::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_output result ;
  const GGS_effectiveArgumentPassingModeAST_2E_output * p = (const GGS_effectiveArgumentPassingModeAST_2E_output *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_output *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.output", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @effectiveArgumentPassingModeAST_2E_output_3F_
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output_3F_::GGS_effectiveArgumentPassingModeAST_2E_output_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output_3F_::GGS_effectiveArgumentPassingModeAST_2E_output_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_output & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output_3F_ GGS_effectiveArgumentPassingModeAST_2E_output_3F_::init_nil (void) {
  GGS_effectiveArgumentPassingModeAST_2E_output_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_effectiveArgumentPassingModeAST_2E_output_3F_::isValid (void) const {
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

bool GGS_effectiveArgumentPassingModeAST_2E_output_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_output_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_effectiveArgumentPassingModeAST_2E_output () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST_2E_output_3F_::description (String & ioString,
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
//     @effectiveArgumentPassingModeAST.output? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output_3F_ ("effectiveArgumentPassingModeAST.output?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST_2E_output_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST_2E_output_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST_2E_output_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output_3F_ GGS_effectiveArgumentPassingModeAST_2E_output_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST_2E_output_3F_ result ;
  const GGS_effectiveArgumentPassingModeAST_2E_output_3F_ * p = (const GGS_effectiveArgumentPassingModeAST_2E_output_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST_2E_output_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST.output?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element::GGS_instructionListIR_2E_element (void) :
mProperty_mInstructionGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element::GGS_instructionListIR_2E_element (const GGS_instructionListIR_2E_element & inSource) :
mProperty_mInstructionGeneration (inSource.mProperty_mInstructionGeneration) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element & GGS_instructionListIR_2E_element::operator = (const GGS_instructionListIR_2E_element & inSource) {
  mProperty_mInstructionGeneration = inSource.mProperty_mInstructionGeneration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_instructionListIR_2E_element GGS_instructionListIR_2E_element::init_21_ (const GGS_abstractInstructionIR & in_mInstructionGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionGeneration = in_mInstructionGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element::GGS_instructionListIR_2E_element (const GGS_abstractInstructionIR & inOperand0) :
mProperty_mInstructionGeneration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element GGS_instructionListIR_2E_element::class_func_new (const GGS_abstractInstructionIR & in_mInstructionGeneration,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionGeneration = in_mInstructionGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instructionListIR_2E_element::isValid (void) const {
  return mProperty_mInstructionGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR_2E_element::drop (void) {
  mProperty_mInstructionGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @instructionListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstructionGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @instructionListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListIR_2E_element ("instructionListIR.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element GGS_instructionListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_instructionListIR_2E_element result ;
  const GGS_instructionListIR_2E_element * p = (const GGS_instructionListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element::GGS_instructionListListIR_2E_element (void) :
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element::GGS_instructionListListIR_2E_element (const GGS_instructionListListIR_2E_element & inSource) :
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element & GGS_instructionListListIR_2E_element::operator = (const GGS_instructionListListIR_2E_element & inSource) {
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_instructionListListIR_2E_element GGS_instructionListListIR_2E_element::init_21_ (const GGS_instructionListIR & in_mInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element::GGS_instructionListListIR_2E_element (const GGS_instructionListIR & inOperand0) :
mProperty_mInstructionList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element GGS_instructionListListIR_2E_element::class_func_new (const GGS_instructionListIR & in_mInstructionList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instructionListListIR_2E_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR_2E_element::drop (void) {
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @instructionListListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @instructionListListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListListIR_2E_element ("instructionListListIR.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionListListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionListListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionListListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element GGS_instructionListListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_instructionListListIR_2E_element result ;
  const GGS_instructionListListIR_2E_element * p = (const GGS_instructionListListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionListListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess::GGS_accessInAssignmentAST_2E_arrayAccess (void) :
mProperty_index (),
mProperty_endOfIndex (),
mProperty_checkIndexExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess::GGS_accessInAssignmentAST_2E_arrayAccess (const GGS_accessInAssignmentAST_2E_arrayAccess & inSource) :
mProperty_index (inSource.mProperty_index),
mProperty_endOfIndex (inSource.mProperty_endOfIndex),
mProperty_checkIndexExpression (inSource.mProperty_checkIndexExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess & GGS_accessInAssignmentAST_2E_arrayAccess::operator = (const GGS_accessInAssignmentAST_2E_arrayAccess & inSource) {
  mProperty_index = inSource.mProperty_index ;
  mProperty_endOfIndex = inSource.mProperty_endOfIndex ;
  mProperty_checkIndexExpression = inSource.mProperty_checkIndexExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess GGS_accessInAssignmentAST_2E_arrayAccess::init_21__21__21_ (const GGS_expressionAST & in_index,
                                                                                                     const GGS_location & in_endOfIndex,
                                                                                                     const GGS_bool & in_checkIndexExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentAST_2E_arrayAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_index = in_index ;
  result.mProperty_endOfIndex = in_endOfIndex ;
  result.mProperty_checkIndexExpression = in_checkIndexExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_arrayAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess::GGS_accessInAssignmentAST_2E_arrayAccess (const GGS_expressionAST & inOperand0,
                                                                                    const GGS_location & inOperand1,
                                                                                    const GGS_bool & inOperand2) :
mProperty_index (inOperand0),
mProperty_endOfIndex (inOperand1),
mProperty_checkIndexExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess GGS_accessInAssignmentAST_2E_arrayAccess::class_func_new (const GGS_expressionAST & in_index,
                                                                                                   const GGS_location & in_endOfIndex,
                                                                                                   const GGS_bool & in_checkIndexExpression,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentAST_2E_arrayAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_index = in_index ;
  result.mProperty_endOfIndex = in_endOfIndex ;
  result.mProperty_checkIndexExpression = in_checkIndexExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_accessInAssignmentAST_2E_arrayAccess::isValid (void) const {
  return mProperty_index.isValid () && mProperty_endOfIndex.isValid () && mProperty_checkIndexExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_arrayAccess::drop (void) {
  mProperty_index.drop () ;
  mProperty_endOfIndex.drop () ;
  mProperty_checkIndexExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_arrayAccess::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @accessInAssignmentAST.arrayAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_index.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_checkIndexExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @accessInAssignmentAST.arrayAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_arrayAccess ("accessInAssignmentAST.arrayAccess",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_accessInAssignmentAST_2E_arrayAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_arrayAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_accessInAssignmentAST_2E_arrayAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_accessInAssignmentAST_2E_arrayAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess GGS_accessInAssignmentAST_2E_arrayAccess::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_accessInAssignmentAST_2E_arrayAccess result ;
  const GGS_accessInAssignmentAST_2E_arrayAccess * p = (const GGS_accessInAssignmentAST_2E_arrayAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_accessInAssignmentAST_2E_arrayAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST.arrayAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @accessInAssignmentAST_2E_arrayAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess_3F_::GGS_accessInAssignmentAST_2E_arrayAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess_3F_::GGS_accessInAssignmentAST_2E_arrayAccess_3F_ (const GGS_accessInAssignmentAST_2E_arrayAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess_3F_ GGS_accessInAssignmentAST_2E_arrayAccess_3F_::init_nil (void) {
  GGS_accessInAssignmentAST_2E_arrayAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_accessInAssignmentAST_2E_arrayAccess_3F_::isValid (void) const {
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

bool GGS_accessInAssignmentAST_2E_arrayAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_arrayAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_accessInAssignmentAST_2E_arrayAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST_2E_arrayAccess_3F_::description (String & ioString,
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
//     @accessInAssignmentAST.arrayAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_arrayAccess_3F_ ("accessInAssignmentAST.arrayAccess?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_accessInAssignmentAST_2E_arrayAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_arrayAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_accessInAssignmentAST_2E_arrayAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_accessInAssignmentAST_2E_arrayAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess_3F_ GGS_accessInAssignmentAST_2E_arrayAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_accessInAssignmentAST_2E_arrayAccess_3F_ result ;
  const GGS_accessInAssignmentAST_2E_arrayAccess_3F_ * p = (const GGS_accessInAssignmentAST_2E_arrayAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_accessInAssignmentAST_2E_arrayAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST.arrayAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element::GGS_accessInAssignmentListAST_2E_element (void) :
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element::GGS_accessInAssignmentListAST_2E_element (const GGS_accessInAssignmentListAST_2E_element & inSource) :
mProperty_mAccess (inSource.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element & GGS_accessInAssignmentListAST_2E_element::operator = (const GGS_accessInAssignmentListAST_2E_element & inSource) {
  mProperty_mAccess = inSource.mProperty_mAccess ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element GGS_accessInAssignmentListAST_2E_element::init_21_ (const GGS_accessInAssignmentAST & in_mAccess,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element::GGS_accessInAssignmentListAST_2E_element (const GGS_accessInAssignmentAST & inOperand0) :
mProperty_mAccess (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element GGS_accessInAssignmentListAST_2E_element::class_func_new (const GGS_accessInAssignmentAST & in_mAccess,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_accessInAssignmentListAST_2E_element::isValid (void) const {
  return mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST_2E_element::drop (void) {
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @accessInAssignmentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @accessInAssignmentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST_2E_element ("accessInAssignmentListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_accessInAssignmentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_accessInAssignmentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_accessInAssignmentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element GGS_accessInAssignmentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_accessInAssignmentListAST_2E_element result ;
  const GGS_accessInAssignmentListAST_2E_element * p = (const GGS_accessInAssignmentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_accessInAssignmentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess::GGS_LValueOperandAST_2E_arrayAccess (void) :
mProperty_index (),
mProperty_endOfIndex (),
mProperty_checkIndexExpression (),
mProperty_next () {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess::GGS_LValueOperandAST_2E_arrayAccess (const GGS_LValueOperandAST_2E_arrayAccess & inSource) :
mProperty_index (inSource.mProperty_index),
mProperty_endOfIndex (inSource.mProperty_endOfIndex),
mProperty_checkIndexExpression (inSource.mProperty_checkIndexExpression),
mProperty_next (inSource.mProperty_next) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess & GGS_LValueOperandAST_2E_arrayAccess::operator = (const GGS_LValueOperandAST_2E_arrayAccess & inSource) {
  mProperty_index = inSource.mProperty_index ;
  mProperty_endOfIndex = inSource.mProperty_endOfIndex ;
  mProperty_checkIndexExpression = inSource.mProperty_checkIndexExpression ;
  mProperty_next = inSource.mProperty_next ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess GGS_LValueOperandAST_2E_arrayAccess::init_21__21__21__21_ (const GGS_expressionAST & in_index,
                                                                                               const GGS_location & in_endOfIndex,
                                                                                               const GGS_bool & in_checkIndexExpression,
                                                                                               const GGS_LValueOperandAST & in_next,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST_2E_arrayAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_index = in_index ;
  result.mProperty_endOfIndex = in_endOfIndex ;
  result.mProperty_checkIndexExpression = in_checkIndexExpression ;
  result.mProperty_next = in_next ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_arrayAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess::GGS_LValueOperandAST_2E_arrayAccess (const GGS_expressionAST & inOperand0,
                                                                          const GGS_location & inOperand1,
                                                                          const GGS_bool & inOperand2,
                                                                          const GGS_LValueOperandAST & inOperand3) :
mProperty_index (inOperand0),
mProperty_endOfIndex (inOperand1),
mProperty_checkIndexExpression (inOperand2),
mProperty_next (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess GGS_LValueOperandAST_2E_arrayAccess::class_func_new (const GGS_expressionAST & in_index,
                                                                                         const GGS_location & in_endOfIndex,
                                                                                         const GGS_bool & in_checkIndexExpression,
                                                                                         const GGS_LValueOperandAST & in_next,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST_2E_arrayAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_index = in_index ;
  result.mProperty_endOfIndex = in_endOfIndex ;
  result.mProperty_checkIndexExpression = in_checkIndexExpression ;
  result.mProperty_next = in_next ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_LValueOperandAST_2E_arrayAccess::objectCompare (const GGS_LValueOperandAST_2E_arrayAccess & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_index.objectCompare (inOperand.mProperty_index) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_endOfIndex.objectCompare (inOperand.mProperty_endOfIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_checkIndexExpression.objectCompare (inOperand.mProperty_checkIndexExpression) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_next.objectCompare (inOperand.mProperty_next) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_LValueOperandAST_2E_arrayAccess::isValid (void) const {
  return mProperty_index.isValid () && mProperty_endOfIndex.isValid () && mProperty_checkIndexExpression.isValid () && mProperty_next.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_arrayAccess::drop (void) {
  mProperty_index.drop () ;
  mProperty_endOfIndex.drop () ;
  mProperty_checkIndexExpression.drop () ;
  mProperty_next.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_arrayAccess::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @LValueOperandAST.arrayAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_index.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_checkIndexExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_next.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @LValueOperandAST.arrayAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess ("LValueOperandAST.arrayAccess",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_LValueOperandAST_2E_arrayAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueOperandAST_2E_arrayAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueOperandAST_2E_arrayAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess GGS_LValueOperandAST_2E_arrayAccess::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_LValueOperandAST_2E_arrayAccess result ;
  const GGS_LValueOperandAST_2E_arrayAccess * p = (const GGS_LValueOperandAST_2E_arrayAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueOperandAST_2E_arrayAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST.arrayAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @LValueOperandAST_2E_arrayAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess_3F_::GGS_LValueOperandAST_2E_arrayAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess_3F_::GGS_LValueOperandAST_2E_arrayAccess_3F_ (const GGS_LValueOperandAST_2E_arrayAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess_3F_ GGS_LValueOperandAST_2E_arrayAccess_3F_::init_nil (void) {
  GGS_LValueOperandAST_2E_arrayAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_LValueOperandAST_2E_arrayAccess_3F_::isValid (void) const {
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

bool GGS_LValueOperandAST_2E_arrayAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST_2E_arrayAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_LValueOperandAST_2E_arrayAccess () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_LValueOperandAST_2E_arrayAccess_3F_::objectCompare (const GGS_LValueOperandAST_2E_arrayAccess_3F_ & inOperand) const {
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

void GGS_LValueOperandAST_2E_arrayAccess_3F_::description (String & ioString,
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
//     @LValueOperandAST.arrayAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess_3F_ ("LValueOperandAST.arrayAccess?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_LValueOperandAST_2E_arrayAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueOperandAST_2E_arrayAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueOperandAST_2E_arrayAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess_3F_ GGS_LValueOperandAST_2E_arrayAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_LValueOperandAST_2E_arrayAccess_3F_ result ;
  const GGS_LValueOperandAST_2E_arrayAccess_3F_ * p = (const GGS_LValueOperandAST_2E_arrayAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueOperandAST_2E_arrayAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST.arrayAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean::GGS_guardedCommandAST_2E_boolean (void) :
mProperty_isExitCommand (),
mProperty_expression (),
mProperty_endOfExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean::GGS_guardedCommandAST_2E_boolean (const GGS_guardedCommandAST_2E_boolean & inSource) :
mProperty_isExitCommand (inSource.mProperty_isExitCommand),
mProperty_expression (inSource.mProperty_expression),
mProperty_endOfExpression (inSource.mProperty_endOfExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean & GGS_guardedCommandAST_2E_boolean::operator = (const GGS_guardedCommandAST_2E_boolean & inSource) {
  mProperty_isExitCommand = inSource.mProperty_isExitCommand ;
  mProperty_expression = inSource.mProperty_expression ;
  mProperty_endOfExpression = inSource.mProperty_endOfExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean GGS_guardedCommandAST_2E_boolean::init_21__21__21_ (const GGS_bool & in_isExitCommand,
                                                                                     const GGS_expressionAST & in_expression,
                                                                                     const GGS_location & in_endOfExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandAST_2E_boolean result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_expression = in_expression ;
  result.mProperty_endOfExpression = in_endOfExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolean::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean::GGS_guardedCommandAST_2E_boolean (const GGS_bool & inOperand0,
                                                                    const GGS_expressionAST & inOperand1,
                                                                    const GGS_location & inOperand2) :
mProperty_isExitCommand (inOperand0),
mProperty_expression (inOperand1),
mProperty_endOfExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean GGS_guardedCommandAST_2E_boolean::class_func_new (const GGS_bool & in_isExitCommand,
                                                                                   const GGS_expressionAST & in_expression,
                                                                                   const GGS_location & in_endOfExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandAST_2E_boolean result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_expression = in_expression ;
  result.mProperty_endOfExpression = in_endOfExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandAST_2E_boolean::isValid (void) const {
  return mProperty_isExitCommand.isValid () && mProperty_expression.isValid () && mProperty_endOfExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolean::drop (void) {
  mProperty_isExitCommand.drop () ;
  mProperty_expression.drop () ;
  mProperty_endOfExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolean::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardedCommandAST.boolean:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isExitCommand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_expression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guardedCommandAST.boolean generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean ("guardedCommandAST.boolean",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandAST_2E_boolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandAST_2E_boolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandAST_2E_boolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean GGS_guardedCommandAST_2E_boolean::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardedCommandAST_2E_boolean result ;
  const GGS_guardedCommandAST_2E_boolean * p = (const GGS_guardedCommandAST_2E_boolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandAST_2E_boolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandAST.boolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @guardedCommandAST_2E_boolean_3F_
//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean_3F_::GGS_guardedCommandAST_2E_boolean_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean_3F_::GGS_guardedCommandAST_2E_boolean_3F_ (const GGS_guardedCommandAST_2E_boolean & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean_3F_ GGS_guardedCommandAST_2E_boolean_3F_::init_nil (void) {
  GGS_guardedCommandAST_2E_boolean_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandAST_2E_boolean_3F_::isValid (void) const {
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

bool GGS_guardedCommandAST_2E_boolean_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolean_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_guardedCommandAST_2E_boolean () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolean_3F_::description (String & ioString,
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
//     @guardedCommandAST.boolean? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean_3F_ ("guardedCommandAST.boolean?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandAST_2E_boolean_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandAST_2E_boolean_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandAST_2E_boolean_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolean_3F_ GGS_guardedCommandAST_2E_boolean_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_guardedCommandAST_2E_boolean_3F_ result ;
  const GGS_guardedCommandAST_2E_boolean_3F_ * p = (const GGS_guardedCommandAST_2E_boolean_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandAST_2E_boolean_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandAST.boolean?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync::GGS_guardedCommandAST_2E_boolAndSync (void) :
mProperty_isExitCommand (),
mProperty_expression (),
mProperty_warnsOnStaticExpression (),
mProperty_endOfExpression (),
mProperty_usesSelf (),
mProperty_nameList (),
mProperty_effectiveParameterListAST () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync::GGS_guardedCommandAST_2E_boolAndSync (const GGS_guardedCommandAST_2E_boolAndSync & inSource) :
mProperty_isExitCommand (inSource.mProperty_isExitCommand),
mProperty_expression (inSource.mProperty_expression),
mProperty_warnsOnStaticExpression (inSource.mProperty_warnsOnStaticExpression),
mProperty_endOfExpression (inSource.mProperty_endOfExpression),
mProperty_usesSelf (inSource.mProperty_usesSelf),
mProperty_nameList (inSource.mProperty_nameList),
mProperty_effectiveParameterListAST (inSource.mProperty_effectiveParameterListAST) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync & GGS_guardedCommandAST_2E_boolAndSync::operator = (const GGS_guardedCommandAST_2E_boolAndSync & inSource) {
  mProperty_isExitCommand = inSource.mProperty_isExitCommand ;
  mProperty_expression = inSource.mProperty_expression ;
  mProperty_warnsOnStaticExpression = inSource.mProperty_warnsOnStaticExpression ;
  mProperty_endOfExpression = inSource.mProperty_endOfExpression ;
  mProperty_usesSelf = inSource.mProperty_usesSelf ;
  mProperty_nameList = inSource.mProperty_nameList ;
  mProperty_effectiveParameterListAST = inSource.mProperty_effectiveParameterListAST ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync GGS_guardedCommandAST_2E_boolAndSync::init_21__21__21__21__21__21__21_ (const GGS_bool & in_isExitCommand,
                                                                                                             const GGS_expressionAST & in_expression,
                                                                                                             const GGS_bool & in_warnsOnStaticExpression,
                                                                                                             const GGS_location & in_endOfExpression,
                                                                                                             const GGS_lbool & in_usesSelf,
                                                                                                             const GGS_lstringlist & in_nameList,
                                                                                                             const GGS_effectiveArgumentListAST & in_effectiveParameterListAST,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandAST_2E_boolAndSync result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_expression = in_expression ;
  result.mProperty_warnsOnStaticExpression = in_warnsOnStaticExpression ;
  result.mProperty_endOfExpression = in_endOfExpression ;
  result.mProperty_usesSelf = in_usesSelf ;
  result.mProperty_nameList = in_nameList ;
  result.mProperty_effectiveParameterListAST = in_effectiveParameterListAST ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolAndSync::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync::GGS_guardedCommandAST_2E_boolAndSync (const GGS_bool & inOperand0,
                                                                            const GGS_expressionAST & inOperand1,
                                                                            const GGS_bool & inOperand2,
                                                                            const GGS_location & inOperand3,
                                                                            const GGS_lbool & inOperand4,
                                                                            const GGS_lstringlist & inOperand5,
                                                                            const GGS_effectiveArgumentListAST & inOperand6) :
mProperty_isExitCommand (inOperand0),
mProperty_expression (inOperand1),
mProperty_warnsOnStaticExpression (inOperand2),
mProperty_endOfExpression (inOperand3),
mProperty_usesSelf (inOperand4),
mProperty_nameList (inOperand5),
mProperty_effectiveParameterListAST (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync GGS_guardedCommandAST_2E_boolAndSync::class_func_new (const GGS_bool & in_isExitCommand,
                                                                                           const GGS_expressionAST & in_expression,
                                                                                           const GGS_bool & in_warnsOnStaticExpression,
                                                                                           const GGS_location & in_endOfExpression,
                                                                                           const GGS_lbool & in_usesSelf,
                                                                                           const GGS_lstringlist & in_nameList,
                                                                                           const GGS_effectiveArgumentListAST & in_effectiveParameterListAST,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandAST_2E_boolAndSync result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_expression = in_expression ;
  result.mProperty_warnsOnStaticExpression = in_warnsOnStaticExpression ;
  result.mProperty_endOfExpression = in_endOfExpression ;
  result.mProperty_usesSelf = in_usesSelf ;
  result.mProperty_nameList = in_nameList ;
  result.mProperty_effectiveParameterListAST = in_effectiveParameterListAST ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandAST_2E_boolAndSync::isValid (void) const {
  return mProperty_isExitCommand.isValid () && mProperty_expression.isValid () && mProperty_warnsOnStaticExpression.isValid () && mProperty_endOfExpression.isValid () && mProperty_usesSelf.isValid () && mProperty_nameList.isValid () && mProperty_effectiveParameterListAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolAndSync::drop (void) {
  mProperty_isExitCommand.drop () ;
  mProperty_expression.drop () ;
  mProperty_warnsOnStaticExpression.drop () ;
  mProperty_endOfExpression.drop () ;
  mProperty_usesSelf.drop () ;
  mProperty_nameList.drop () ;
  mProperty_effectiveParameterListAST.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolAndSync::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardedCommandAST.boolAndSync:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isExitCommand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_expression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_warnsOnStaticExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_usesSelf.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_nameList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_effectiveParameterListAST.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guardedCommandAST.boolAndSync generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync ("guardedCommandAST.boolAndSync",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandAST_2E_boolAndSync::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandAST_2E_boolAndSync::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandAST_2E_boolAndSync (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync GGS_guardedCommandAST_2E_boolAndSync::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_guardedCommandAST_2E_boolAndSync result ;
  const GGS_guardedCommandAST_2E_boolAndSync * p = (const GGS_guardedCommandAST_2E_boolAndSync *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandAST_2E_boolAndSync *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandAST.boolAndSync", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @guardedCommandAST_2E_boolAndSync_3F_
//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync_3F_::GGS_guardedCommandAST_2E_boolAndSync_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync_3F_::GGS_guardedCommandAST_2E_boolAndSync_3F_ (const GGS_guardedCommandAST_2E_boolAndSync & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync_3F_ GGS_guardedCommandAST_2E_boolAndSync_3F_::init_nil (void) {
  GGS_guardedCommandAST_2E_boolAndSync_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandAST_2E_boolAndSync_3F_::isValid (void) const {
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

bool GGS_guardedCommandAST_2E_boolAndSync_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolAndSync_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_guardedCommandAST_2E_boolAndSync () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST_2E_boolAndSync_3F_::description (String & ioString,
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
//     @guardedCommandAST.boolAndSync? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync_3F_ ("guardedCommandAST.boolAndSync?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandAST_2E_boolAndSync_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandAST_2E_boolAndSync_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandAST_2E_boolAndSync_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync_3F_ GGS_guardedCommandAST_2E_boolAndSync_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardedCommandAST_2E_boolAndSync_3F_ result ;
  const GGS_guardedCommandAST_2E_boolAndSync_3F_ * p = (const GGS_guardedCommandAST_2E_boolAndSync_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandAST_2E_boolAndSync_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandAST.boolAndSync?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element::GGS_syncInstructionBranchListAST_2E_element (void) :
mProperty_mGuardedCommand (),
mProperty_mInstructionList (),
mProperty_mEndOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element::GGS_syncInstructionBranchListAST_2E_element (const GGS_syncInstructionBranchListAST_2E_element & inSource) :
mProperty_mGuardedCommand (inSource.mProperty_mGuardedCommand),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfBranch (inSource.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element & GGS_syncInstructionBranchListAST_2E_element::operator = (const GGS_syncInstructionBranchListAST_2E_element & inSource) {
  mProperty_mGuardedCommand = inSource.mProperty_mGuardedCommand ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfBranch = inSource.mProperty_mEndOfBranch ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element GGS_syncInstructionBranchListAST_2E_element::init_21__21__21_ (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                                                                           const GGS_instructionListAST & in_mInstructionList,
                                                                                                           const GGS_location & in_mEndOfBranch,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syncInstructionBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGuardedCommand = in_mGuardedCommand ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element::GGS_syncInstructionBranchListAST_2E_element (const GGS_guardedCommandAST & inOperand0,
                                                                                          const GGS_instructionListAST & inOperand1,
                                                                                          const GGS_location & inOperand2) :
mProperty_mGuardedCommand (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfBranch (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element GGS_syncInstructionBranchListAST_2E_element::class_func_new (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                                                                         const GGS_instructionListAST & in_mInstructionList,
                                                                                                         const GGS_location & in_mEndOfBranch,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syncInstructionBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGuardedCommand = in_mGuardedCommand ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syncInstructionBranchListAST_2E_element::isValid (void) const {
  return mProperty_mGuardedCommand.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST_2E_element::drop (void) {
  mProperty_mGuardedCommand.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syncInstructionBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGuardedCommand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syncInstructionBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST_2E_element ("syncInstructionBranchListAST.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncInstructionBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element GGS_syncInstructionBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_syncInstructionBranchListAST_2E_element result ;
  const GGS_syncInstructionBranchListAST_2E_element * p = (const GGS_syncInstructionBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard::GGS_guardedCommandIR_2E_booleanGuard (void) :
mProperty_isExitCommand (),
mProperty_instructionGenerationList (),
mProperty_boolGuardBoolLLVMName () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard::GGS_guardedCommandIR_2E_booleanGuard (const GGS_guardedCommandIR_2E_booleanGuard & inSource) :
mProperty_isExitCommand (inSource.mProperty_isExitCommand),
mProperty_instructionGenerationList (inSource.mProperty_instructionGenerationList),
mProperty_boolGuardBoolLLVMName (inSource.mProperty_boolGuardBoolLLVMName) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard & GGS_guardedCommandIR_2E_booleanGuard::operator = (const GGS_guardedCommandIR_2E_booleanGuard & inSource) {
  mProperty_isExitCommand = inSource.mProperty_isExitCommand ;
  mProperty_instructionGenerationList = inSource.mProperty_instructionGenerationList ;
  mProperty_boolGuardBoolLLVMName = inSource.mProperty_boolGuardBoolLLVMName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard GGS_guardedCommandIR_2E_booleanGuard::init_21__21__21_ (const GGS_bool & in_isExitCommand,
                                                                                             const GGS_instructionListIR & in_instructionGenerationList,
                                                                                             const GGS_string & in_boolGuardBoolLLVMName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_booleanGuard result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_instructionGenerationList = in_instructionGenerationList ;
  result.mProperty_boolGuardBoolLLVMName = in_boolGuardBoolLLVMName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_booleanGuard::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard::GGS_guardedCommandIR_2E_booleanGuard (const GGS_bool & inOperand0,
                                                                            const GGS_instructionListIR & inOperand1,
                                                                            const GGS_string & inOperand2) :
mProperty_isExitCommand (inOperand0),
mProperty_instructionGenerationList (inOperand1),
mProperty_boolGuardBoolLLVMName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard GGS_guardedCommandIR_2E_booleanGuard::class_func_new (const GGS_bool & in_isExitCommand,
                                                                                           const GGS_instructionListIR & in_instructionGenerationList,
                                                                                           const GGS_string & in_boolGuardBoolLLVMName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_booleanGuard result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_instructionGenerationList = in_instructionGenerationList ;
  result.mProperty_boolGuardBoolLLVMName = in_boolGuardBoolLLVMName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandIR_2E_booleanGuard::isValid (void) const {
  return mProperty_isExitCommand.isValid () && mProperty_instructionGenerationList.isValid () && mProperty_boolGuardBoolLLVMName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_booleanGuard::drop (void) {
  mProperty_isExitCommand.drop () ;
  mProperty_instructionGenerationList.drop () ;
  mProperty_boolGuardBoolLLVMName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_booleanGuard::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardedCommandIR.booleanGuard:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isExitCommand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_instructionGenerationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_boolGuardBoolLLVMName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guardedCommandIR.booleanGuard generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard ("guardedCommandIR.booleanGuard",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIR_2E_booleanGuard::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIR_2E_booleanGuard::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIR_2E_booleanGuard (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard GGS_guardedCommandIR_2E_booleanGuard::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_booleanGuard result ;
  const GGS_guardedCommandIR_2E_booleanGuard * p = (const GGS_guardedCommandIR_2E_booleanGuard *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIR_2E_booleanGuard *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR.booleanGuard", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @guardedCommandIR_2E_booleanGuard_3F_
//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard_3F_::GGS_guardedCommandIR_2E_booleanGuard_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard_3F_::GGS_guardedCommandIR_2E_booleanGuard_3F_ (const GGS_guardedCommandIR_2E_booleanGuard & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard_3F_ GGS_guardedCommandIR_2E_booleanGuard_3F_::init_nil (void) {
  GGS_guardedCommandIR_2E_booleanGuard_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandIR_2E_booleanGuard_3F_::isValid (void) const {
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

bool GGS_guardedCommandIR_2E_booleanGuard_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_booleanGuard_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_guardedCommandIR_2E_booleanGuard () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_booleanGuard_3F_::description (String & ioString,
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
//     @guardedCommandIR.booleanGuard? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard_3F_ ("guardedCommandIR.booleanGuard?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIR_2E_booleanGuard_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIR_2E_booleanGuard_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIR_2E_booleanGuard_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard_3F_ GGS_guardedCommandIR_2E_booleanGuard_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_booleanGuard_3F_ result ;
  const GGS_guardedCommandIR_2E_booleanGuard_3F_ * p = (const GGS_guardedCommandIR_2E_booleanGuard_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIR_2E_booleanGuard_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR.booleanGuard?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync::GGS_guardedCommandIR_2E_sync (void) :
mProperty_isExitCommand (),
mProperty_guardMangledName (),
mProperty_guardInstructionGenerationList (),
mProperty_effectiveParameterListIR () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync::GGS_guardedCommandIR_2E_sync (const GGS_guardedCommandIR_2E_sync & inSource) :
mProperty_isExitCommand (inSource.mProperty_isExitCommand),
mProperty_guardMangledName (inSource.mProperty_guardMangledName),
mProperty_guardInstructionGenerationList (inSource.mProperty_guardInstructionGenerationList),
mProperty_effectiveParameterListIR (inSource.mProperty_effectiveParameterListIR) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync & GGS_guardedCommandIR_2E_sync::operator = (const GGS_guardedCommandIR_2E_sync & inSource) {
  mProperty_isExitCommand = inSource.mProperty_isExitCommand ;
  mProperty_guardMangledName = inSource.mProperty_guardMangledName ;
  mProperty_guardInstructionGenerationList = inSource.mProperty_guardInstructionGenerationList ;
  mProperty_effectiveParameterListIR = inSource.mProperty_effectiveParameterListIR ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync GGS_guardedCommandIR_2E_sync::init_21__21__21__21_ (const GGS_bool & in_isExitCommand,
                                                                                 const GGS_string & in_guardMangledName,
                                                                                 const GGS_instructionListIR & in_guardInstructionGenerationList,
                                                                                 const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_sync result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_guardMangledName = in_guardMangledName ;
  result.mProperty_guardInstructionGenerationList = in_guardInstructionGenerationList ;
  result.mProperty_effectiveParameterListIR = in_effectiveParameterListIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_sync::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync::GGS_guardedCommandIR_2E_sync (const GGS_bool & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_instructionListIR & inOperand2,
                                                            const GGS_procCallEffectiveParameterListIR & inOperand3) :
mProperty_isExitCommand (inOperand0),
mProperty_guardMangledName (inOperand1),
mProperty_guardInstructionGenerationList (inOperand2),
mProperty_effectiveParameterListIR (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync GGS_guardedCommandIR_2E_sync::class_func_new (const GGS_bool & in_isExitCommand,
                                                                           const GGS_string & in_guardMangledName,
                                                                           const GGS_instructionListIR & in_guardInstructionGenerationList,
                                                                           const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_sync result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_guardMangledName = in_guardMangledName ;
  result.mProperty_guardInstructionGenerationList = in_guardInstructionGenerationList ;
  result.mProperty_effectiveParameterListIR = in_effectiveParameterListIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandIR_2E_sync::isValid (void) const {
  return mProperty_isExitCommand.isValid () && mProperty_guardMangledName.isValid () && mProperty_guardInstructionGenerationList.isValid () && mProperty_effectiveParameterListIR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_sync::drop (void) {
  mProperty_isExitCommand.drop () ;
  mProperty_guardMangledName.drop () ;
  mProperty_guardInstructionGenerationList.drop () ;
  mProperty_effectiveParameterListIR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_sync::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardedCommandIR.sync:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isExitCommand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_guardMangledName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_guardInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_effectiveParameterListIR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guardedCommandIR.sync generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync ("guardedCommandIR.sync",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIR_2E_sync::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIR_2E_sync::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIR_2E_sync (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync GGS_guardedCommandIR_2E_sync::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_sync result ;
  const GGS_guardedCommandIR_2E_sync * p = (const GGS_guardedCommandIR_2E_sync *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIR_2E_sync *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR.sync", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @guardedCommandIR_2E_sync_3F_
//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync_3F_::GGS_guardedCommandIR_2E_sync_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync_3F_::GGS_guardedCommandIR_2E_sync_3F_ (const GGS_guardedCommandIR_2E_sync & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync_3F_ GGS_guardedCommandIR_2E_sync_3F_::init_nil (void) {
  GGS_guardedCommandIR_2E_sync_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandIR_2E_sync_3F_::isValid (void) const {
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

bool GGS_guardedCommandIR_2E_sync_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_sync_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_guardedCommandIR_2E_sync () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_sync_3F_::description (String & ioString,
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
//     @guardedCommandIR.sync? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync_3F_ ("guardedCommandIR.sync?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIR_2E_sync_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIR_2E_sync_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIR_2E_sync_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync_3F_ GGS_guardedCommandIR_2E_sync_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_sync_3F_ result ;
  const GGS_guardedCommandIR_2E_sync_3F_ * p = (const GGS_guardedCommandIR_2E_sync_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIR_2E_sync_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR.sync?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync::GGS_guardedCommandIR_2E_boolAndSync (void) :
mProperty_isExitCommand (),
mProperty_boolExpInstructionGenerationList (),
mProperty_boolGuardBoolLLVMName (),
mProperty_guardMangledName (),
mProperty_guardInstructionGenerationList (),
mProperty_effectiveParameterListIR () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync::GGS_guardedCommandIR_2E_boolAndSync (const GGS_guardedCommandIR_2E_boolAndSync & inSource) :
mProperty_isExitCommand (inSource.mProperty_isExitCommand),
mProperty_boolExpInstructionGenerationList (inSource.mProperty_boolExpInstructionGenerationList),
mProperty_boolGuardBoolLLVMName (inSource.mProperty_boolGuardBoolLLVMName),
mProperty_guardMangledName (inSource.mProperty_guardMangledName),
mProperty_guardInstructionGenerationList (inSource.mProperty_guardInstructionGenerationList),
mProperty_effectiveParameterListIR (inSource.mProperty_effectiveParameterListIR) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync & GGS_guardedCommandIR_2E_boolAndSync::operator = (const GGS_guardedCommandIR_2E_boolAndSync & inSource) {
  mProperty_isExitCommand = inSource.mProperty_isExitCommand ;
  mProperty_boolExpInstructionGenerationList = inSource.mProperty_boolExpInstructionGenerationList ;
  mProperty_boolGuardBoolLLVMName = inSource.mProperty_boolGuardBoolLLVMName ;
  mProperty_guardMangledName = inSource.mProperty_guardMangledName ;
  mProperty_guardInstructionGenerationList = inSource.mProperty_guardInstructionGenerationList ;
  mProperty_effectiveParameterListIR = inSource.mProperty_effectiveParameterListIR ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync GGS_guardedCommandIR_2E_boolAndSync::init_21__21__21__21__21__21_ (const GGS_bool & in_isExitCommand,
                                                                                                       const GGS_instructionListIR & in_boolExpInstructionGenerationList,
                                                                                                       const GGS_string & in_boolGuardBoolLLVMName,
                                                                                                       const GGS_string & in_guardMangledName,
                                                                                                       const GGS_instructionListIR & in_guardInstructionGenerationList,
                                                                                                       const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_boolAndSync result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_boolExpInstructionGenerationList = in_boolExpInstructionGenerationList ;
  result.mProperty_boolGuardBoolLLVMName = in_boolGuardBoolLLVMName ;
  result.mProperty_guardMangledName = in_guardMangledName ;
  result.mProperty_guardInstructionGenerationList = in_guardInstructionGenerationList ;
  result.mProperty_effectiveParameterListIR = in_effectiveParameterListIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_boolAndSync::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync::GGS_guardedCommandIR_2E_boolAndSync (const GGS_bool & inOperand0,
                                                                          const GGS_instructionListIR & inOperand1,
                                                                          const GGS_string & inOperand2,
                                                                          const GGS_string & inOperand3,
                                                                          const GGS_instructionListIR & inOperand4,
                                                                          const GGS_procCallEffectiveParameterListIR & inOperand5) :
mProperty_isExitCommand (inOperand0),
mProperty_boolExpInstructionGenerationList (inOperand1),
mProperty_boolGuardBoolLLVMName (inOperand2),
mProperty_guardMangledName (inOperand3),
mProperty_guardInstructionGenerationList (inOperand4),
mProperty_effectiveParameterListIR (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync GGS_guardedCommandIR_2E_boolAndSync::class_func_new (const GGS_bool & in_isExitCommand,
                                                                                         const GGS_instructionListIR & in_boolExpInstructionGenerationList,
                                                                                         const GGS_string & in_boolGuardBoolLLVMName,
                                                                                         const GGS_string & in_guardMangledName,
                                                                                         const GGS_instructionListIR & in_guardInstructionGenerationList,
                                                                                         const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_boolAndSync result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isExitCommand = in_isExitCommand ;
  result.mProperty_boolExpInstructionGenerationList = in_boolExpInstructionGenerationList ;
  result.mProperty_boolGuardBoolLLVMName = in_boolGuardBoolLLVMName ;
  result.mProperty_guardMangledName = in_guardMangledName ;
  result.mProperty_guardInstructionGenerationList = in_guardInstructionGenerationList ;
  result.mProperty_effectiveParameterListIR = in_effectiveParameterListIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandIR_2E_boolAndSync::isValid (void) const {
  return mProperty_isExitCommand.isValid () && mProperty_boolExpInstructionGenerationList.isValid () && mProperty_boolGuardBoolLLVMName.isValid () && mProperty_guardMangledName.isValid () && mProperty_guardInstructionGenerationList.isValid () && mProperty_effectiveParameterListIR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_boolAndSync::drop (void) {
  mProperty_isExitCommand.drop () ;
  mProperty_boolExpInstructionGenerationList.drop () ;
  mProperty_boolGuardBoolLLVMName.drop () ;
  mProperty_guardMangledName.drop () ;
  mProperty_guardInstructionGenerationList.drop () ;
  mProperty_effectiveParameterListIR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_boolAndSync::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardedCommandIR.boolAndSync:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isExitCommand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_boolExpInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_boolGuardBoolLLVMName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_guardMangledName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_guardInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_effectiveParameterListIR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guardedCommandIR.boolAndSync generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync ("guardedCommandIR.boolAndSync",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIR_2E_boolAndSync::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIR_2E_boolAndSync::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIR_2E_boolAndSync (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync GGS_guardedCommandIR_2E_boolAndSync::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_boolAndSync result ;
  const GGS_guardedCommandIR_2E_boolAndSync * p = (const GGS_guardedCommandIR_2E_boolAndSync *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIR_2E_boolAndSync *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR.boolAndSync", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @guardedCommandIR_2E_boolAndSync_3F_
//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync_3F_::GGS_guardedCommandIR_2E_boolAndSync_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync_3F_::GGS_guardedCommandIR_2E_boolAndSync_3F_ (const GGS_guardedCommandIR_2E_boolAndSync & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync_3F_ GGS_guardedCommandIR_2E_boolAndSync_3F_::init_nil (void) {
  GGS_guardedCommandIR_2E_boolAndSync_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandIR_2E_boolAndSync_3F_::isValid (void) const {
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

bool GGS_guardedCommandIR_2E_boolAndSync_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_boolAndSync_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_guardedCommandIR_2E_boolAndSync () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR_2E_boolAndSync_3F_::description (String & ioString,
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
//     @guardedCommandIR.boolAndSync? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync_3F_ ("guardedCommandIR.boolAndSync?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIR_2E_boolAndSync_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIR_2E_boolAndSync_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIR_2E_boolAndSync_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync_3F_ GGS_guardedCommandIR_2E_boolAndSync_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIR_2E_boolAndSync_3F_ result ;
  const GGS_guardedCommandIR_2E_boolAndSync_3F_ * p = (const GGS_guardedCommandIR_2E_boolAndSync_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIR_2E_boolAndSync_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR.boolAndSync?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element::GGS_syncInstructionBranchListIR_2E_element (void) :
mProperty_mGuardedCommand (),
mProperty_mInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element::GGS_syncInstructionBranchListIR_2E_element (const GGS_syncInstructionBranchListIR_2E_element & inSource) :
mProperty_mGuardedCommand (inSource.mProperty_mGuardedCommand),
mProperty_mInstructionGenerationList (inSource.mProperty_mInstructionGenerationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element & GGS_syncInstructionBranchListIR_2E_element::operator = (const GGS_syncInstructionBranchListIR_2E_element & inSource) {
  mProperty_mGuardedCommand = inSource.mProperty_mGuardedCommand ;
  mProperty_mInstructionGenerationList = inSource.mProperty_mInstructionGenerationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element GGS_syncInstructionBranchListIR_2E_element::init_21__21_ (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                                                                     const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syncInstructionBranchListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGuardedCommand = in_mGuardedCommand ;
  result.mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element::GGS_syncInstructionBranchListIR_2E_element (const GGS_guardedCommandIR & inOperand0,
                                                                                        const GGS_instructionListIR & inOperand1) :
mProperty_mGuardedCommand (inOperand0),
mProperty_mInstructionGenerationList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element GGS_syncInstructionBranchListIR_2E_element::class_func_new (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                                                                       const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syncInstructionBranchListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGuardedCommand = in_mGuardedCommand ;
  result.mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syncInstructionBranchListIR_2E_element::isValid (void) const {
  return mProperty_mGuardedCommand.isValid () && mProperty_mInstructionGenerationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR_2E_element::drop (void) {
  mProperty_mGuardedCommand.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syncInstructionBranchListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGuardedCommand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syncInstructionBranchListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2E_element ("syncInstructionBranchListIR.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncInstructionBranchListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionBranchListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionBranchListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element GGS_syncInstructionBranchListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syncInstructionBranchListIR_2E_element result ;
  const GGS_syncInstructionBranchListIR_2E_element * p = (const GGS_syncInstructionBranchListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionBranchListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element::GGS_guardedCommandIRList_2E_element (void) :
mProperty_mGuardedCommand () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element::GGS_guardedCommandIRList_2E_element (const GGS_guardedCommandIRList_2E_element & inSource) :
mProperty_mGuardedCommand (inSource.mProperty_mGuardedCommand) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element & GGS_guardedCommandIRList_2E_element::operator = (const GGS_guardedCommandIRList_2E_element & inSource) {
  mProperty_mGuardedCommand = inSource.mProperty_mGuardedCommand ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element GGS_guardedCommandIRList_2E_element::init_21_ (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGuardedCommand = in_mGuardedCommand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element::GGS_guardedCommandIRList_2E_element (const GGS_guardedCommandIR & inOperand0) :
mProperty_mGuardedCommand (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element GGS_guardedCommandIRList_2E_element::class_func_new (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGuardedCommand = in_mGuardedCommand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardedCommandIRList_2E_element::isValid (void) const {
  return mProperty_mGuardedCommand.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList_2E_element::drop (void) {
  mProperty_mGuardedCommand.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardedCommandIRList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGuardedCommand.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guardedCommandIRList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIRList_2E_element ("guardedCommandIRList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIRList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIRList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIRList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIRList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element GGS_guardedCommandIRList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIRList_2E_element result ;
  const GGS_guardedCommandIRList_2E_element * p = (const GGS_guardedCommandIRList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIRList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIRList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element::GGS_declarationDecorationList_2E_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element::GGS_declarationDecorationList_2E_element (const GGS_declarationDecorationList_2E_element & inSource) :
mProperty_mDeclaration (inSource.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element & GGS_declarationDecorationList_2E_element::operator = (const GGS_declarationDecorationList_2E_element & inSource) {
  mProperty_mDeclaration = inSource.mProperty_mDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declarationDecorationList_2E_element GGS_declarationDecorationList_2E_element::init_21_ (const GGS_abstractDecoratedDeclaration & in_mDeclaration,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationDecorationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element::GGS_declarationDecorationList_2E_element (const GGS_abstractDecoratedDeclaration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element GGS_declarationDecorationList_2E_element::class_func_new (const GGS_abstractDecoratedDeclaration & in_mDeclaration,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationDecorationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declarationDecorationList_2E_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList_2E_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationDecorationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declarationDecorationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationDecorationList_2E_element ("declarationDecorationList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationDecorationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationDecorationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationDecorationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element GGS_declarationDecorationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_declarationDecorationList_2E_element result ;
  const GGS_declarationDecorationList_2E_element * p = (const GGS_declarationDecorationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationDecorationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple::GGS_constructorValue_2E_simple (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple::GGS_constructorValue_2E_simple (const GGS_constructorValue_2E_simple & inSource) :
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple & GGS_constructorValue_2E_simple::operator = (const GGS_constructorValue_2E_simple & inSource) {
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorValue_2E_simple GGS_constructorValue_2E_simple::init_21_ (const GGS_bigint & in_value,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_simple result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple::GGS_constructorValue_2E_simple (const GGS_bigint & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple GGS_constructorValue_2E_simple::class_func_new (const GGS_bigint & in_value,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_simple result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_simple::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorValue.simple:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constructorValue.simple generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_simple ("constructorValue.simple",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorValue_2E_simple::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_simple ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_simple::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_simple (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple GGS_constructorValue_2E_simple::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_simple result ;
  const GGS_constructorValue_2E_simple * p = (const GGS_constructorValue_2E_simple *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_simple *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.simple", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constructorValue_2E_simple_3F_
//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_::GGS_constructorValue_2E_simple_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_::GGS_constructorValue_2E_simple_3F_ (const GGS_constructorValue_2E_simple & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_ GGS_constructorValue_2E_simple_3F_::init_nil (void) {
  GGS_constructorValue_2E_simple_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_simple_3F_::isValid (void) const {
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

bool GGS_constructorValue_2E_simple_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constructorValue_2E_simple () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_simple_3F_::description (String & ioString,
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
//     @constructorValue.simple? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_simple_3F_ ("constructorValue.simple?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorValue_2E_simple_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_simple_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_simple_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_simple_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_ GGS_constructorValue_2E_simple_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_simple_3F_ result ;
  const GGS_constructorValue_2E_simple_3F_ * p = (const GGS_constructorValue_2E_simple_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_simple_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.simple?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure::GGS_constructorValue_2E_structure (void) :
mProperty_sortedOperandList () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure::GGS_constructorValue_2E_structure (const GGS_constructorValue_2E_structure & inSource) :
mProperty_sortedOperandList (inSource.mProperty_sortedOperandList) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure & GGS_constructorValue_2E_structure::operator = (const GGS_constructorValue_2E_structure & inSource) {
  mProperty_sortedOperandList = inSource.mProperty_sortedOperandList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorValue_2E_structure GGS_constructorValue_2E_structure::init_21_ (const GGS_sortedOperandIRList & in_sortedOperandList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sortedOperandList = in_sortedOperandList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure::GGS_constructorValue_2E_structure (const GGS_sortedOperandIRList & inOperand0) :
mProperty_sortedOperandList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure GGS_constructorValue_2E_structure::class_func_new (const GGS_sortedOperandIRList & in_sortedOperandList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sortedOperandList = in_sortedOperandList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_structure::isValid (void) const {
  return mProperty_sortedOperandList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure::drop (void) {
  mProperty_sortedOperandList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorValue.structure:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_sortedOperandList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constructorValue.structure generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_structure ("constructorValue.structure",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorValue_2E_structure::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_structure ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_structure::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_structure (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure GGS_constructorValue_2E_structure::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_structure result ;
  const GGS_constructorValue_2E_structure * p = (const GGS_constructorValue_2E_structure *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_structure *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.structure", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constructorValue_2E_structure_3F_
//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_::GGS_constructorValue_2E_structure_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_::GGS_constructorValue_2E_structure_3F_ (const GGS_constructorValue_2E_structure & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_ GGS_constructorValue_2E_structure_3F_::init_nil (void) {
  GGS_constructorValue_2E_structure_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_structure_3F_::isValid (void) const {
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

bool GGS_constructorValue_2E_structure_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constructorValue_2E_structure () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_structure_3F_::description (String & ioString,
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
//     @constructorValue.structure? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_structure_3F_ ("constructorValue.structure?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorValue_2E_structure_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_structure_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_structure_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_structure_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_ GGS_constructorValue_2E_structure_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_structure_3F_ result ;
  const GGS_constructorValue_2E_structure_3F_ * p = (const GGS_constructorValue_2E_structure_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_structure_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.structure?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty::GGS_propertyGetterKind_2E_computedProperty (void) :
mProperty_typeProxy (),
mProperty_modeDictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty::GGS_propertyGetterKind_2E_computedProperty (const GGS_propertyGetterKind_2E_computedProperty & inSource) :
mProperty_typeProxy (inSource.mProperty_typeProxy),
mProperty_modeDictionary (inSource.mProperty_modeDictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty & GGS_propertyGetterKind_2E_computedProperty::operator = (const GGS_propertyGetterKind_2E_computedProperty & inSource) {
  mProperty_typeProxy = inSource.mProperty_typeProxy ;
  mProperty_modeDictionary = inSource.mProperty_modeDictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty GGS_propertyGetterKind_2E_computedProperty::init_21__21_ (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                     const GGS_routineLLVMNameDict & in_modeDictionary,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_modeDictionary = in_modeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty::GGS_propertyGetterKind_2E_computedProperty (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                        const GGS_routineLLVMNameDict & inOperand1) :
mProperty_typeProxy (inOperand0),
mProperty_modeDictionary (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty GGS_propertyGetterKind_2E_computedProperty::class_func_new (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                       const GGS_routineLLVMNameDict & in_modeDictionary,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_modeDictionary = in_modeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_computedProperty::isValid (void) const {
  return mProperty_typeProxy.isValid () && mProperty_modeDictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty::drop (void) {
  mProperty_typeProxy.drop () ;
  mProperty_modeDictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterKind.computedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeProxy.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_modeDictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyGetterKind.computedProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty ("propertyGetterKind.computedProperty",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterKind_2E_computedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_computedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_computedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty GGS_propertyGetterKind_2E_computedProperty::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_computedProperty result ;
  const GGS_propertyGetterKind_2E_computedProperty * p = (const GGS_propertyGetterKind_2E_computedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_computedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.computedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyGetterKind_2E_computedProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_::GGS_propertyGetterKind_2E_computedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_::GGS_propertyGetterKind_2E_computedProperty_3F_ (const GGS_propertyGetterKind_2E_computedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_ GGS_propertyGetterKind_2E_computedProperty_3F_::init_nil (void) {
  GGS_propertyGetterKind_2E_computedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_computedProperty_3F_::isValid (void) const {
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

bool GGS_propertyGetterKind_2E_computedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyGetterKind_2E_computedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_computedProperty_3F_::description (String & ioString,
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
//     @propertyGetterKind.computedProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty_3F_ ("propertyGetterKind.computedProperty?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterKind_2E_computedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_computedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_computedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_ GGS_propertyGetterKind_2E_computedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_computedProperty_3F_ result ;
  const GGS_propertyGetterKind_2E_computedProperty_3F_ * p = (const GGS_propertyGetterKind_2E_computedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_computedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.computedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty::GGS_propertyGetterKind_2E_constantProperty (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty::GGS_propertyGetterKind_2E_constantProperty (const GGS_propertyGetterKind_2E_constantProperty & inSource) :
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty & GGS_propertyGetterKind_2E_constantProperty::operator = (const GGS_propertyGetterKind_2E_constantProperty & inSource) {
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty GGS_propertyGetterKind_2E_constantProperty::init_21_ (const GGS_objectIR & in_value,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_constantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty::GGS_propertyGetterKind_2E_constantProperty (const GGS_objectIR & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty GGS_propertyGetterKind_2E_constantProperty::class_func_new (const GGS_objectIR & in_value,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_constantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_constantProperty::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterKind.constantProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyGetterKind.constantProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty ("propertyGetterKind.constantProperty",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterKind_2E_constantProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_constantProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_constantProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty GGS_propertyGetterKind_2E_constantProperty::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_constantProperty result ;
  const GGS_propertyGetterKind_2E_constantProperty * p = (const GGS_propertyGetterKind_2E_constantProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_constantProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.constantProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyGetterKind_2E_constantProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_::GGS_propertyGetterKind_2E_constantProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_::GGS_propertyGetterKind_2E_constantProperty_3F_ (const GGS_propertyGetterKind_2E_constantProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_ GGS_propertyGetterKind_2E_constantProperty_3F_::init_nil (void) {
  GGS_propertyGetterKind_2E_constantProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_constantProperty_3F_::isValid (void) const {
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

bool GGS_propertyGetterKind_2E_constantProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyGetterKind_2E_constantProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_constantProperty_3F_::description (String & ioString,
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
//     @propertyGetterKind.constantProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty_3F_ ("propertyGetterKind.constantProperty?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterKind_2E_constantProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_constantProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_constantProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_ GGS_propertyGetterKind_2E_constantProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_constantProperty_3F_ result ;
  const GGS_propertyGetterKind_2E_constantProperty_3F_ * p = (const GGS_propertyGetterKind_2E_constantProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_constantProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.constantProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty::GGS_propertySetterKind_2E_computedProperty (void) :
mProperty_typeProxy (),
mProperty_getterModeDictionary (),
mProperty_setterModeDictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty::GGS_propertySetterKind_2E_computedProperty (const GGS_propertySetterKind_2E_computedProperty & inSource) :
mProperty_typeProxy (inSource.mProperty_typeProxy),
mProperty_getterModeDictionary (inSource.mProperty_getterModeDictionary),
mProperty_setterModeDictionary (inSource.mProperty_setterModeDictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty & GGS_propertySetterKind_2E_computedProperty::operator = (const GGS_propertySetterKind_2E_computedProperty & inSource) {
  mProperty_typeProxy = inSource.mProperty_typeProxy ;
  mProperty_getterModeDictionary = inSource.mProperty_getterModeDictionary ;
  mProperty_setterModeDictionary = inSource.mProperty_setterModeDictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty GGS_propertySetterKind_2E_computedProperty::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                         const GGS_routineLLVMNameDict & in_getterModeDictionary,
                                                                                                         const GGS_routineLLVMNameDict & in_setterModeDictionary,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_getterModeDictionary = in_getterModeDictionary ;
  result.mProperty_setterModeDictionary = in_setterModeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty::GGS_propertySetterKind_2E_computedProperty (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                        const GGS_routineLLVMNameDict & inOperand1,
                                                                                        const GGS_routineLLVMNameDict & inOperand2) :
mProperty_typeProxy (inOperand0),
mProperty_getterModeDictionary (inOperand1),
mProperty_setterModeDictionary (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty GGS_propertySetterKind_2E_computedProperty::class_func_new (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                       const GGS_routineLLVMNameDict & in_getterModeDictionary,
                                                                                                       const GGS_routineLLVMNameDict & in_setterModeDictionary,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_getterModeDictionary = in_getterModeDictionary ;
  result.mProperty_setterModeDictionary = in_setterModeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_computedProperty::isValid (void) const {
  return mProperty_typeProxy.isValid () && mProperty_getterModeDictionary.isValid () && mProperty_setterModeDictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty::drop (void) {
  mProperty_typeProxy.drop () ;
  mProperty_getterModeDictionary.drop () ;
  mProperty_setterModeDictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertySetterKind.computedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeProxy.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_getterModeDictionary.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_setterModeDictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertySetterKind.computedProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty ("propertySetterKind.computedProperty",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterKind_2E_computedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind_2E_computedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind_2E_computedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty GGS_propertySetterKind_2E_computedProperty::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_computedProperty result ;
  const GGS_propertySetterKind_2E_computedProperty * p = (const GGS_propertySetterKind_2E_computedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind_2E_computedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind.computedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertySetterKind_2E_computedProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_::GGS_propertySetterKind_2E_computedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_::GGS_propertySetterKind_2E_computedProperty_3F_ (const GGS_propertySetterKind_2E_computedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_ GGS_propertySetterKind_2E_computedProperty_3F_::init_nil (void) {
  GGS_propertySetterKind_2E_computedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_computedProperty_3F_::isValid (void) const {
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

bool GGS_propertySetterKind_2E_computedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertySetterKind_2E_computedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_computedProperty_3F_::description (String & ioString,
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
//     @propertySetterKind.computedProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty_3F_ ("propertySetterKind.computedProperty?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterKind_2E_computedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind_2E_computedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind_2E_computedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_ GGS_propertySetterKind_2E_computedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_computedProperty_3F_ result ;
  const GGS_propertySetterKind_2E_computedProperty_3F_ * p = (const GGS_propertySetterKind_2E_computedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind_2E_computedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind.computedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element::GGS_operandIRList_2E_element (void) :
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element::GGS_operandIRList_2E_element (const GGS_operandIRList_2E_element & inSource) :
mProperty_mOperand (inSource.mProperty_mOperand) {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element & GGS_operandIRList_2E_element::operator = (const GGS_operandIRList_2E_element & inSource) {
  mProperty_mOperand = inSource.mProperty_mOperand ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_operandIRList_2E_element GGS_operandIRList_2E_element::init_21_ (const GGS_objectIR & in_mOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_operandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element::GGS_operandIRList_2E_element (const GGS_objectIR & inOperand0) :
mProperty_mOperand (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element GGS_operandIRList_2E_element::class_func_new (const GGS_objectIR & in_mOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_operandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_operandIRList_2E_element::objectCompare (const GGS_operandIRList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_operandIRList_2E_element::isValid (void) const {
  return mProperty_mOperand.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList_2E_element::drop (void) {
  mProperty_mOperand.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @operandIRList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @operandIRList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_operandIRList_2E_element ("operandIRList.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_operandIRList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_operandIRList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_operandIRList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element GGS_operandIRList_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_operandIRList_2E_element result ;
  const GGS_operandIRList_2E_element * p = (const GGS_operandIRList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_operandIRList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element::GGS_routineLLVMNameDict_2E_element (void) :
mProperty_key (),
mProperty_llvmName () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element::GGS_routineLLVMNameDict_2E_element (const GGS_routineLLVMNameDict_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_llvmName (inSource.mProperty_llvmName) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element & GGS_routineLLVMNameDict_2E_element::operator = (const GGS_routineLLVMNameDict_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_llvmName = inSource.mProperty_llvmName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element GGS_routineLLVMNameDict_2E_element::init_21__21_ (const GGS_mode & in_key,
                                                                                     const GGS_string & in_llvmName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element::GGS_routineLLVMNameDict_2E_element (const GGS_mode & inOperand0,
                                                                        const GGS_string & inOperand1) :
mProperty_key (inOperand0),
mProperty_llvmName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element GGS_routineLLVMNameDict_2E_element::class_func_new (const GGS_mode & in_key,
                                                                                       const GGS_string & in_llvmName,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineLLVMNameDict_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_llvmName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_llvmName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineLLVMNameDict.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_llvmName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineLLVMNameDict.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element ("routineLLVMNameDict.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineLLVMNameDict_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineLLVMNameDict_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineLLVMNameDict_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element GGS_routineLLVMNameDict_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element result ;
  const GGS_routineLLVMNameDict_2E_element * p = (const GGS_routineLLVMNameDict_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineLLVMNameDict_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineLLVMNameDict.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineLLVMNameDict_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element_3F_::GGS_routineLLVMNameDict_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element_3F_::GGS_routineLLVMNameDict_2E_element_3F_ (const GGS_routineLLVMNameDict_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element_3F_ GGS_routineLLVMNameDict_2E_element_3F_::init_nil (void) {
  GGS_routineLLVMNameDict_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineLLVMNameDict_2E_element_3F_::isValid (void) const {
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

bool GGS_routineLLVMNameDict_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineLLVMNameDict_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict_2E_element_3F_::description (String & ioString,
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
//     @routineLLVMNameDict.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element_3F_ ("routineLLVMNameDict.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineLLVMNameDict_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineLLVMNameDict_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineLLVMNameDict_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element_3F_ GGS_routineLLVMNameDict_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element_3F_ result ;
  const GGS_routineLLVMNameDict_2E_element_3F_ * p = (const GGS_routineLLVMNameDict_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineLLVMNameDict_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineLLVMNameDict.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty::GGS_propertyKindAST_2E_initializedStoredProperty (void) :
mProperty_initExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty::GGS_propertyKindAST_2E_initializedStoredProperty (const GGS_propertyKindAST_2E_initializedStoredProperty & inSource) :
mProperty_initExpression (inSource.mProperty_initExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty & GGS_propertyKindAST_2E_initializedStoredProperty::operator = (const GGS_propertyKindAST_2E_initializedStoredProperty & inSource) {
  mProperty_initExpression = inSource.mProperty_initExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty GGS_propertyKindAST_2E_initializedStoredProperty::init_21_ (const GGS_expressionAST & in_initExpression,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedStoredProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initExpression = in_initExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty::GGS_propertyKindAST_2E_initializedStoredProperty (const GGS_expressionAST & inOperand0) :
mProperty_initExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty GGS_propertyKindAST_2E_initializedStoredProperty::class_func_new (const GGS_expressionAST & in_initExpression,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedStoredProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initExpression = in_initExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedStoredProperty::isValid (void) const {
  return mProperty_initExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty::drop (void) {
  mProperty_initExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKindAST.initializedStoredProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_initExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKindAST.initializedStoredProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty ("propertyKindAST.initializedStoredProperty",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST_2E_initializedStoredProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_initializedStoredProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_initializedStoredProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty GGS_propertyKindAST_2E_initializedStoredProperty::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedStoredProperty result ;
  const GGS_propertyKindAST_2E_initializedStoredProperty * p = (const GGS_propertyKindAST_2E_initializedStoredProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_initializedStoredProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.initializedStoredProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyKindAST_2E_initializedStoredProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_::GGS_propertyKindAST_2E_initializedStoredProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_::GGS_propertyKindAST_2E_initializedStoredProperty_3F_ (const GGS_propertyKindAST_2E_initializedStoredProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_ GGS_propertyKindAST_2E_initializedStoredProperty_3F_::init_nil (void) {
  GGS_propertyKindAST_2E_initializedStoredProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedStoredProperty_3F_::isValid (void) const {
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

bool GGS_propertyKindAST_2E_initializedStoredProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKindAST_2E_initializedStoredProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedStoredProperty_3F_::description (String & ioString,
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
//     @propertyKindAST.initializedStoredProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty_3F_ ("propertyKindAST.initializedStoredProperty?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST_2E_initializedStoredProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_initializedStoredProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_initializedStoredProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_ GGS_propertyKindAST_2E_initializedStoredProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedStoredProperty_3F_ result ;
  const GGS_propertyKindAST_2E_initializedStoredProperty_3F_ * p = (const GGS_propertyKindAST_2E_initializedStoredProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_initializedStoredProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.initializedStoredProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty::GGS_propertyKindAST_2E_initializedConstantProperty (void) :
mProperty_initExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty::GGS_propertyKindAST_2E_initializedConstantProperty (const GGS_propertyKindAST_2E_initializedConstantProperty & inSource) :
mProperty_initExpression (inSource.mProperty_initExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty & GGS_propertyKindAST_2E_initializedConstantProperty::operator = (const GGS_propertyKindAST_2E_initializedConstantProperty & inSource) {
  mProperty_initExpression = inSource.mProperty_initExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty GGS_propertyKindAST_2E_initializedConstantProperty::init_21_ (const GGS_expressionAST & in_initExpression,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedConstantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initExpression = in_initExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty::GGS_propertyKindAST_2E_initializedConstantProperty (const GGS_expressionAST & inOperand0) :
mProperty_initExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty GGS_propertyKindAST_2E_initializedConstantProperty::class_func_new (const GGS_expressionAST & in_initExpression,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedConstantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initExpression = in_initExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedConstantProperty::isValid (void) const {
  return mProperty_initExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty::drop (void) {
  mProperty_initExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKindAST.initializedConstantProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_initExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKindAST.initializedConstantProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty ("propertyKindAST.initializedConstantProperty",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST_2E_initializedConstantProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_initializedConstantProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_initializedConstantProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty GGS_propertyKindAST_2E_initializedConstantProperty::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedConstantProperty result ;
  const GGS_propertyKindAST_2E_initializedConstantProperty * p = (const GGS_propertyKindAST_2E_initializedConstantProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_initializedConstantProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.initializedConstantProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyKindAST_2E_initializedConstantProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_::GGS_propertyKindAST_2E_initializedConstantProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_::GGS_propertyKindAST_2E_initializedConstantProperty_3F_ (const GGS_propertyKindAST_2E_initializedConstantProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_ GGS_propertyKindAST_2E_initializedConstantProperty_3F_::init_nil (void) {
  GGS_propertyKindAST_2E_initializedConstantProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_initializedConstantProperty_3F_::isValid (void) const {
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

bool GGS_propertyKindAST_2E_initializedConstantProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKindAST_2E_initializedConstantProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_initializedConstantProperty_3F_::description (String & ioString,
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
//     @propertyKindAST.initializedConstantProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty_3F_ ("propertyKindAST.initializedConstantProperty?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST_2E_initializedConstantProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_initializedConstantProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_initializedConstantProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_ GGS_propertyKindAST_2E_initializedConstantProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_initializedConstantProperty_3F_ result ;
  const GGS_propertyKindAST_2E_initializedConstantProperty_3F_ * p = (const GGS_propertyKindAST_2E_initializedConstantProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_initializedConstantProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.initializedConstantProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty::GGS_propertyKindAST_2E_readOnlyComputedProperty (void) :
mProperty_instructionList (),
mProperty_endOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty::GGS_propertyKindAST_2E_readOnlyComputedProperty (const GGS_propertyKindAST_2E_readOnlyComputedProperty & inSource) :
mProperty_instructionList (inSource.mProperty_instructionList),
mProperty_endOfInstructionList (inSource.mProperty_endOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty & GGS_propertyKindAST_2E_readOnlyComputedProperty::operator = (const GGS_propertyKindAST_2E_readOnlyComputedProperty & inSource) {
  mProperty_instructionList = inSource.mProperty_instructionList ;
  mProperty_endOfInstructionList = inSource.mProperty_endOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty GGS_propertyKindAST_2E_readOnlyComputedProperty::init_21__21_ (const GGS_instructionListAST & in_instructionList,
                                                                                                               const GGS_location & in_endOfInstructionList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfInstructionList = in_endOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty::GGS_propertyKindAST_2E_readOnlyComputedProperty (const GGS_instructionListAST & inOperand0,
                                                                                                  const GGS_location & inOperand1) :
mProperty_instructionList (inOperand0),
mProperty_endOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty GGS_propertyKindAST_2E_readOnlyComputedProperty::class_func_new (const GGS_instructionListAST & in_instructionList,
                                                                                                                 const GGS_location & in_endOfInstructionList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfInstructionList = in_endOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_readOnlyComputedProperty::isValid (void) const {
  return mProperty_instructionList.isValid () && mProperty_endOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty::drop (void) {
  mProperty_instructionList.drop () ;
  mProperty_endOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKindAST.readOnlyComputedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_instructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKindAST.readOnlyComputedProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty ("propertyKindAST.readOnlyComputedProperty",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST_2E_readOnlyComputedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_readOnlyComputedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_readOnlyComputedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty GGS_propertyKindAST_2E_readOnlyComputedProperty::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty result ;
  const GGS_propertyKindAST_2E_readOnlyComputedProperty * p = (const GGS_propertyKindAST_2E_readOnlyComputedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_readOnlyComputedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.readOnlyComputedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyKindAST_2E_readOnlyComputedProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ (const GGS_propertyKindAST_2E_readOnlyComputedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::init_nil (void) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::isValid (void) const {
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

bool GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKindAST_2E_readOnlyComputedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::description (String & ioString,
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
//     @propertyKindAST.readOnlyComputedProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty_3F_ ("propertyKindAST.readOnlyComputedProperty?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ result ;
  const GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ * p = (const GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.readOnlyComputedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty::GGS_propertyKindAST_2E_writeComputedProperty (void) :
mProperty_instructionList (),
mProperty_endOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty::GGS_propertyKindAST_2E_writeComputedProperty (const GGS_propertyKindAST_2E_writeComputedProperty & inSource) :
mProperty_instructionList (inSource.mProperty_instructionList),
mProperty_endOfInstructionList (inSource.mProperty_endOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty & GGS_propertyKindAST_2E_writeComputedProperty::operator = (const GGS_propertyKindAST_2E_writeComputedProperty & inSource) {
  mProperty_instructionList = inSource.mProperty_instructionList ;
  mProperty_endOfInstructionList = inSource.mProperty_endOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty GGS_propertyKindAST_2E_writeComputedProperty::init_21__21_ (const GGS_instructionListAST & in_instructionList,
                                                                                                         const GGS_location & in_endOfInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_writeComputedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfInstructionList = in_endOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty::GGS_propertyKindAST_2E_writeComputedProperty (const GGS_instructionListAST & inOperand0,
                                                                                            const GGS_location & inOperand1) :
mProperty_instructionList (inOperand0),
mProperty_endOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty GGS_propertyKindAST_2E_writeComputedProperty::class_func_new (const GGS_instructionListAST & in_instructionList,
                                                                                                           const GGS_location & in_endOfInstructionList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_writeComputedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfInstructionList = in_endOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_writeComputedProperty::isValid (void) const {
  return mProperty_instructionList.isValid () && mProperty_endOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty::drop (void) {
  mProperty_instructionList.drop () ;
  mProperty_endOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKindAST.writeComputedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_instructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKindAST.writeComputedProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty ("propertyKindAST.writeComputedProperty",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST_2E_writeComputedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_writeComputedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_writeComputedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty GGS_propertyKindAST_2E_writeComputedProperty::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_writeComputedProperty result ;
  const GGS_propertyKindAST_2E_writeComputedProperty * p = (const GGS_propertyKindAST_2E_writeComputedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_writeComputedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.writeComputedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyKindAST_2E_writeComputedProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_::GGS_propertyKindAST_2E_writeComputedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_::GGS_propertyKindAST_2E_writeComputedProperty_3F_ (const GGS_propertyKindAST_2E_writeComputedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_ GGS_propertyKindAST_2E_writeComputedProperty_3F_::init_nil (void) {
  GGS_propertyKindAST_2E_writeComputedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKindAST_2E_writeComputedProperty_3F_::isValid (void) const {
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

bool GGS_propertyKindAST_2E_writeComputedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKindAST_2E_writeComputedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST_2E_writeComputedProperty_3F_::description (String & ioString,
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
//     @propertyKindAST.writeComputedProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty_3F_ ("propertyKindAST.writeComputedProperty?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST_2E_writeComputedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST_2E_writeComputedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST_2E_writeComputedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_ GGS_propertyKindAST_2E_writeComputedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST_2E_writeComputedProperty_3F_ result ;
  const GGS_propertyKindAST_2E_writeComputedProperty_3F_ * p = (const GGS_propertyKindAST_2E_writeComputedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST_2E_writeComputedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST.writeComputedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element::GGS_sortedOperandIRList_2E_element (void) :
mProperty_mOperand (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element::GGS_sortedOperandIRList_2E_element (const GGS_sortedOperandIRList_2E_element & inSource) :
mProperty_mOperand (inSource.mProperty_mOperand),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element & GGS_sortedOperandIRList_2E_element::operator = (const GGS_sortedOperandIRList_2E_element & inSource) {
  mProperty_mOperand = inSource.mProperty_mOperand ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element GGS_sortedOperandIRList_2E_element::init_21__21_ (const GGS_objectIR & in_mOperand,
                                                                                     const GGS_uint & in_mIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedOperandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element::GGS_sortedOperandIRList_2E_element (const GGS_objectIR & inOperand0,
                                                                        const GGS_uint & inOperand1) :
mProperty_mOperand (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element GGS_sortedOperandIRList_2E_element::class_func_new (const GGS_objectIR & in_mOperand,
                                                                                       const GGS_uint & in_mIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedOperandIRList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedOperandIRList_2E_element::objectCompare (const GGS_sortedOperandIRList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sortedOperandIRList_2E_element::isValid (void) const {
  return mProperty_mOperand.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList_2E_element::drop (void) {
  mProperty_mOperand.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sortedOperandIRList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sortedOperandIRList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedOperandIRList_2E_element ("sortedOperandIRList.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedOperandIRList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedOperandIRList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedOperandIRList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element GGS_sortedOperandIRList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_sortedOperandIRList_2E_element result ;
  const GGS_sortedOperandIRList_2E_element * p = (const GGS_sortedOperandIRList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedOperandIRList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncDeclarationAST::objectCompare (const GGS_syncDeclarationAST & inOperand) const {
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

GGS_syncDeclarationAST::GGS_syncDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST::
init_21__21_ (const GGS_lstring & in_mSyncToolName,
              const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syncDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_syncDeclarationAST (inCompiler COMMA_THERE)) ;
  object->syncDeclarationAST_init_21__21_ (in_mSyncToolName, in_mStructurePropertyListAST, inCompiler) ;
  const GGS_syncDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::
syncDeclarationAST_init_21__21_ (const GGS_lstring & in_mSyncToolName,
                                 const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                 Compiler * /* inCompiler */) {
  mProperty_mSyncToolName = in_mSyncToolName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST::GGS_syncDeclarationAST (const cPtr_syncDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST::class_func_new (const GGS_lstring & in_mSyncToolName,
                                                               const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_syncDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncDeclarationAST (in_mSyncToolName, in_mStructurePropertyListAST,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syncDeclarationAST::readProperty_mSyncToolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mSyncToolName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncDeclarationAST::setProperty_mSyncToolName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mSyncToolName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_syncDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structurePropertyListAST () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncDeclarationAST::setProperty_mStructurePropertyListAST (const GGS_structurePropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mStructurePropertyListAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncToolName (),
mProperty_mStructurePropertyListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (const GGS_lstring & in_mSyncToolName,
                                                  const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncToolName (),
mProperty_mStructurePropertyListAST () {
  mProperty_mSyncToolName = in_mSyncToolName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syncDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

void cPtr_syncDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@syncDeclarationAST:") ;
  mProperty_mSyncToolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncDeclarationAST (mProperty_mSyncToolName, mProperty_mStructurePropertyListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyncToolName.printNonNullClassInstanceProperties ("mSyncToolName") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syncDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncDeclarationAST ("syncDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_syncDeclarationAST result ;
  const GGS_syncDeclarationAST * p = (const GGS_syncDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncDeclarationAST_2E_weak::objectCompare (const GGS_syncDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_syncDeclarationAST_2E_weak::GGS_syncDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST_2E_weak & GGS_syncDeclarationAST_2E_weak::operator = (const GGS_syncDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST_2E_weak::GGS_syncDeclarationAST_2E_weak (const GGS_syncDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST_2E_weak GGS_syncDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syncDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_syncDeclarationAST result ;
  if (isValid ()) {
    const cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_syncDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST_2E_weak::bang_syncDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syncDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncDeclarationAST) ;
      result = GGS_syncDeclarationAST ((cPtr_syncDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syncDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncDeclarationAST_2E_weak ("syncDeclarationAST.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST_2E_weak GGS_syncDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_syncDeclarationAST_2E_weak result ;
  const GGS_syncDeclarationAST_2E_weak * p = (const GGS_syncDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @omnibusType reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusType::objectCompare (const GGS_omnibusType & inOperand) const {
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

GGS_omnibusType::GGS_omnibusType (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType::
init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const GGS_subscript & in_subscript,
                                                                                           const GGS_omnibusTypeAttributes & in_attributes,
                                                                                           const GGS_string & in_omnibusTypeDescriptionName,
                                                                                           const GGS_typeKind & in_kind,
                                                                                           const GGS_string & in_llvmBaseTypeName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cPtr_omnibusType * object = nullptr ;
  macroMyNew (object, cPtr_omnibusType (inCompiler COMMA_THERE)) ;
  object->omnibusType_init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (in_subscript, in_attributes, in_omnibusTypeDescriptionName, in_kind, in_llvmBaseTypeName, inCompiler) ;
  const GGS_omnibusType result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::
omnibusType_init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const GGS_subscript & in_subscript,
                                                                                                       const GGS_omnibusTypeAttributes & in_attributes,
                                                                                                       const GGS_string & in_omnibusTypeDescriptionName,
                                                                                                       const GGS_typeKind & in_kind,
                                                                                                       const GGS_string & in_llvmBaseTypeName,
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_subscript = in_subscript ;
  mProperty_attributes = in_attributes ;
  mProperty_omnibusTypeDescriptionName = in_omnibusTypeDescriptionName ;
  mProperty_kind = in_kind ;
  mProperty_llvmBaseTypeName = in_llvmBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType::GGS_omnibusType (const cPtr_omnibusType * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusType) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType::class_func_new (const GGS_subscript & in_subscript,
                                                 const GGS_omnibusTypeAttributes & in_attributes,
                                                 const GGS_string & in_omnibusTypeDescriptionName,
                                                 const GGS_typeKind & in_kind,
                                                 const GGS_string & in_llvmBaseTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_omnibusType result ;
  macroMyNew (result.mObjectPtr, cPtr_omnibusType (in_subscript, in_attributes, in_omnibusTypeDescriptionName, in_kind, in_llvmBaseTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_omnibusType::readProperty_subscript (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_subscript () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_subscript ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusType::readProperty_attributes (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusTypeAttributes () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_attributes ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_omnibusType::readProperty_omnibusTypeDescriptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_omnibusTypeDescriptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_omnibusType::readProperty_kind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_kind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_omnibusType::readProperty_llvmBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_llvmBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @omnibusType class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusType::cPtr_omnibusType (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_subscript (),
mProperty_attributes (),
mProperty_omnibusTypeDescriptionName (),
mProperty_kind (),
mProperty_llvmBaseTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_omnibusType::cPtr_omnibusType (const GGS_subscript & in_subscript,
                                    const GGS_omnibusTypeAttributes & in_attributes,
                                    const GGS_string & in_omnibusTypeDescriptionName,
                                    const GGS_typeKind & in_kind,
                                    const GGS_string & in_llvmBaseTypeName,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_subscript (),
mProperty_attributes (),
mProperty_omnibusTypeDescriptionName (),
mProperty_kind (),
mProperty_llvmBaseTypeName () {
  mProperty_subscript = in_subscript ;
  mProperty_attributes = in_attributes ;
  mProperty_omnibusTypeDescriptionName = in_omnibusTypeDescriptionName ;
  mProperty_kind = in_kind ;
  mProperty_llvmBaseTypeName = in_llvmBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_omnibusType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType ;
}

void cPtr_omnibusType::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@omnibusType:") ;
  mProperty_subscript.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_attributes.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_omnibusTypeDescriptionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_kind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_llvmBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_omnibusType::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_omnibusType (mProperty_subscript, mProperty_attributes, mProperty_omnibusTypeDescriptionName, mProperty_kind, mProperty_llvmBaseTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_omnibusType::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_subscript.printNonNullClassInstanceProperties ("subscript") ;
    mProperty_attributes.printNonNullClassInstanceProperties ("attributes") ;
    mProperty_omnibusTypeDescriptionName.printNonNullClassInstanceProperties ("omnibusTypeDescriptionName") ;
    mProperty_kind.printNonNullClassInstanceProperties ("kind") ;
    mProperty_llvmBaseTypeName.printNonNullClassInstanceProperties ("llvmBaseTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @omnibusType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusType ("omnibusType",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_omnibusType result ;
  const GGS_omnibusType * p = (const GGS_omnibusType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedTaskListDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedTaskListDeclaration::objectCompare (const GGS_decoratedTaskListDeclaration & inOperand) const {
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

GGS_decoratedTaskListDeclaration::GGS_decoratedTaskListDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::
init_21_ (const GGS_decoratedTaskList & in_mTaskList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_decoratedTaskListDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedTaskListDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedTaskListDeclaration_init_21_ (in_mTaskList, inCompiler) ;
  const GGS_decoratedTaskListDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::
decoratedTaskListDeclaration_init_21_ (const GGS_decoratedTaskList & in_mTaskList,
                                       Compiler * /* inCompiler */) {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration::GGS_decoratedTaskListDeclaration (const cPtr_decoratedTaskListDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTaskListDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::class_func_new (const GGS_decoratedTaskList & in_mTaskList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedTaskListDeclaration (in_mTaskList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskListDeclaration::readProperty_mTaskList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_decoratedTaskList () ;
  }else{
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    return p->mProperty_mTaskList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskListDeclaration::setProperty_mTaskList (const GGS_decoratedTaskList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    p->mProperty_mTaskList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedTaskListDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mTaskList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (const GGS_decoratedTaskList & in_mTaskList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mTaskList () {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedTaskListDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

void cPtr_decoratedTaskListDeclaration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedTaskListDeclaration:") ;
  mProperty_mTaskList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedTaskListDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedTaskListDeclaration (mProperty_mTaskList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedTaskListDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mTaskList.printNonNullClassInstanceProperties ("mTaskList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskListDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ("decoratedTaskListDeclaration",
                                                                                 & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskListDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskListDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskListDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration result ;
  const GGS_decoratedTaskListDeclaration * p = (const GGS_decoratedTaskListDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskListDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedTaskListDeclaration_2E_weak::objectCompare (const GGS_decoratedTaskListDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_decoratedTaskListDeclaration_2E_weak::GGS_decoratedTaskListDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak & GGS_decoratedTaskListDeclaration_2E_weak::operator = (const GGS_decoratedTaskListDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak::GGS_decoratedTaskListDeclaration_2E_weak (const GGS_decoratedTaskListDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak GGS_decoratedTaskListDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedTaskListDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedTaskListDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration_2E_weak::bang_decoratedTaskListDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskListDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedTaskListDeclaration) ;
      result = GGS_decoratedTaskListDeclaration ((cPtr_decoratedTaskListDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskListDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ("decoratedTaskListDeclaration.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskListDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskListDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskListDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak GGS_decoratedTaskListDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration_2E_weak result ;
  const GGS_decoratedTaskListDeclaration_2E_weak * p = (const GGS_decoratedTaskListDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskListDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element::GGS_decoratedTaskList_2E_element (void) :
mProperty_mTaskName (),
mProperty_mStackSize (),
mProperty_mTaskSetupListAST (),
mProperty_mTaskActivateListAST (),
mProperty_mTaskDeactivateListAST (),
mProperty_mEndOfTaskDeclaration (),
mProperty_mAutoStart () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element::GGS_decoratedTaskList_2E_element (const GGS_decoratedTaskList_2E_element & inSource) :
mProperty_mTaskName (inSource.mProperty_mTaskName),
mProperty_mStackSize (inSource.mProperty_mStackSize),
mProperty_mTaskSetupListAST (inSource.mProperty_mTaskSetupListAST),
mProperty_mTaskActivateListAST (inSource.mProperty_mTaskActivateListAST),
mProperty_mTaskDeactivateListAST (inSource.mProperty_mTaskDeactivateListAST),
mProperty_mEndOfTaskDeclaration (inSource.mProperty_mEndOfTaskDeclaration),
mProperty_mAutoStart (inSource.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element & GGS_decoratedTaskList_2E_element::operator = (const GGS_decoratedTaskList_2E_element & inSource) {
  mProperty_mTaskName = inSource.mProperty_mTaskName ;
  mProperty_mStackSize = inSource.mProperty_mStackSize ;
  mProperty_mTaskSetupListAST = inSource.mProperty_mTaskSetupListAST ;
  mProperty_mTaskActivateListAST = inSource.mProperty_mTaskActivateListAST ;
  mProperty_mTaskDeactivateListAST = inSource.mProperty_mTaskDeactivateListAST ;
  mProperty_mEndOfTaskDeclaration = inSource.mProperty_mEndOfTaskDeclaration ;
  mProperty_mAutoStart = inSource.mProperty_mAutoStart ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_decoratedTaskList_2E_element GGS_decoratedTaskList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mTaskName,
                                                                                                     const GGS_lbigint & in_mStackSize,
                                                                                                     const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                                     const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                                     const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                                     const GGS_location & in_mEndOfTaskDeclaration,
                                                                                                     const GGS_bool & in_mAutoStart,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedTaskList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mTaskSetupListAST = in_mTaskSetupListAST ;
  result.mProperty_mTaskActivateListAST = in_mTaskActivateListAST ;
  result.mProperty_mTaskDeactivateListAST = in_mTaskDeactivateListAST ;
  result.mProperty_mEndOfTaskDeclaration = in_mEndOfTaskDeclaration ;
  result.mProperty_mAutoStart = in_mAutoStart ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element::GGS_decoratedTaskList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lbigint & inOperand1,
                                                                    const GGS_taskSetupListAST & inOperand2,
                                                                    const GGS_taskSetupListAST & inOperand3,
                                                                    const GGS_taskSetupListAST & inOperand4,
                                                                    const GGS_location & inOperand5,
                                                                    const GGS_bool & inOperand6) :
mProperty_mTaskName (inOperand0),
mProperty_mStackSize (inOperand1),
mProperty_mTaskSetupListAST (inOperand2),
mProperty_mTaskActivateListAST (inOperand3),
mProperty_mTaskDeactivateListAST (inOperand4),
mProperty_mEndOfTaskDeclaration (inOperand5),
mProperty_mAutoStart (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element GGS_decoratedTaskList_2E_element::class_func_new (const GGS_lstring & in_mTaskName,
                                                                                   const GGS_lbigint & in_mStackSize,
                                                                                   const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                   const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                   const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                   const GGS_location & in_mEndOfTaskDeclaration,
                                                                                   const GGS_bool & in_mAutoStart,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedTaskList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mTaskSetupListAST = in_mTaskSetupListAST ;
  result.mProperty_mTaskActivateListAST = in_mTaskActivateListAST ;
  result.mProperty_mTaskDeactivateListAST = in_mTaskDeactivateListAST ;
  result.mProperty_mEndOfTaskDeclaration = in_mEndOfTaskDeclaration ;
  result.mProperty_mAutoStart = in_mAutoStart ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedTaskList_2E_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mStackSize.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mAutoStart.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mTaskSetupListAST.drop () ;
  mProperty_mTaskActivateListAST.drop () ;
  mProperty_mTaskDeactivateListAST.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
  mProperty_mAutoStart.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedTaskList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskSetupListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskActivateListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskDeactivateListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoStart.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ("decoratedTaskList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element GGS_decoratedTaskList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskList_2E_element result ;
  const GGS_decoratedTaskList_2E_element * p = (const GGS_decoratedTaskList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractRoutineIR::objectCompare (const GGS_abstractRoutineIR & inOperand) const {
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

GGS_abstractRoutineIR::GGS_abstractRoutineIR (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractRoutineIR::
abstractRoutineIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                           const GGS_bool & in_isRequired,
                                                           const GGS_bool & in_warnsIfUnused,
                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR::GGS_abstractRoutineIR (const cPtr_abstractRoutineIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractRoutineIR::readProperty_mRoutineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_mRoutineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractRoutineIR::setProperty_mRoutineMangledName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_mRoutineMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_abstractRoutineIR::readProperty_isRequired (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_isRequired ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractRoutineIR::setProperty_isRequired (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_isRequired = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_abstractRoutineIR::readProperty_warnsIfUnused (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_warnsIfUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractRoutineIR::setProperty_warnsIfUnused (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_warnsIfUnused = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_abstractRoutineIR::cPtr_abstractRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mRoutineMangledName (),
mProperty_isRequired (),
mProperty_warnsIfUnused () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractRoutineIR::cPtr_abstractRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                const GGS_bool & in_isRequired,
                                                const GGS_bool & in_warnsIfUnused,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mRoutineMangledName (),
mProperty_isRequired (),
mProperty_warnsIfUnused () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractRoutineIR::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineMangledName.printNonNullClassInstanceProperties ("mRoutineMangledName") ;
    mProperty_isRequired.printNonNullClassInstanceProperties ("isRequired") ;
    mProperty_warnsIfUnused.printNonNullClassInstanceProperties ("warnsIfUnused") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractRoutineIR ("abstractRoutineIR",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR GGS_abstractRoutineIR::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractRoutineIR result ;
  const GGS_abstractRoutineIR * p = (const GGS_abstractRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskActivateFunctionIR_2E_weak::objectCompare (const GGS_taskActivateFunctionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_taskActivateFunctionIR_2E_weak::GGS_taskActivateFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak & GGS_taskActivateFunctionIR_2E_weak::operator = (const GGS_taskActivateFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak::GGS_taskActivateFunctionIR_2E_weak (const GGS_taskActivateFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak GGS_taskActivateFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_taskActivateFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_taskActivateFunctionIR result ;
  if (isValid ()) {
    const cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_taskActivateFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR_2E_weak::bang_taskActivateFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_taskActivateFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_taskActivateFunctionIR) ;
      result = GGS_taskActivateFunctionIR ((cPtr_taskActivateFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @taskActivateFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ("taskActivateFunctionIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskActivateFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskActivateFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskActivateFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak GGS_taskActivateFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_taskActivateFunctionIR_2E_weak result ;
  const GGS_taskActivateFunctionIR_2E_weak * p = (const GGS_taskActivateFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskActivateFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskActivateFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @taskSetupDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskSetupDeclarationAST::objectCompare (const GGS_taskSetupDeclarationAST & inOperand) const {
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

GGS_taskSetupDeclarationAST::GGS_taskSetupDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST::
init_21__21__21__21__21__21_ (const GGS_lstring & in_mTaskName,
                              const GGS_string & in_mQualifier,
                              const GGS_lstring & in_mSetupName,
                              const GGS_lstringlist & in_mDependanceList,
                              const GGS_instructionListAST & in_mTaskSetupInstructionList,
                              const GGS_location & in_mEndOfTaskSetupDeclaration,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_taskSetupDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_taskSetupDeclarationAST (inCompiler COMMA_THERE)) ;
  object->taskSetupDeclarationAST_init_21__21__21__21__21__21_ (in_mTaskName, in_mQualifier, in_mSetupName, in_mDependanceList, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration, inCompiler) ;
  const GGS_taskSetupDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::
taskSetupDeclarationAST_init_21__21__21__21__21__21_ (const GGS_lstring & in_mTaskName,
                                                      const GGS_string & in_mQualifier,
                                                      const GGS_lstring & in_mSetupName,
                                                      const GGS_lstringlist & in_mDependanceList,
                                                      const GGS_instructionListAST & in_mTaskSetupInstructionList,
                                                      const GGS_location & in_mEndOfTaskSetupDeclaration,
                                                      Compiler * /* inCompiler */) {
  mProperty_mTaskName = in_mTaskName ;
  mProperty_mQualifier = in_mQualifier ;
  mProperty_mSetupName = in_mSetupName ;
  mProperty_mDependanceList = in_mDependanceList ;
  mProperty_mTaskSetupInstructionList = in_mTaskSetupInstructionList ;
  mProperty_mEndOfTaskSetupDeclaration = in_mEndOfTaskSetupDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST::GGS_taskSetupDeclarationAST (const cPtr_taskSetupDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_taskSetupDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST::class_func_new (const GGS_lstring & in_mTaskName,
                                                                         const GGS_string & in_mQualifier,
                                                                         const GGS_lstring & in_mSetupName,
                                                                         const GGS_lstringlist & in_mDependanceList,
                                                                         const GGS_instructionListAST & in_mTaskSetupInstructionList,
                                                                         const GGS_location & in_mEndOfTaskSetupDeclaration,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_taskSetupDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_taskSetupDeclarationAST (in_mTaskName, in_mQualifier, in_mSetupName, in_mDependanceList, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_taskSetupDeclarationAST::readProperty_mTaskName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mTaskName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mTaskName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mTaskName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_taskSetupDeclarationAST::readProperty_mQualifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mQualifier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mQualifier (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mQualifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_taskSetupDeclarationAST::readProperty_mSetupName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mSetupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mSetupName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mSetupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_taskSetupDeclarationAST::readProperty_mDependanceList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mDependanceList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mDependanceList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_taskSetupDeclarationAST::readProperty_mTaskSetupInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mTaskSetupInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mTaskSetupInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mTaskSetupInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_taskSetupDeclarationAST::readProperty_mEndOfTaskSetupDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mEndOfTaskSetupDeclaration (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mEndOfTaskSetupDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @taskSetupDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_taskSetupDeclarationAST::cPtr_taskSetupDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTaskName (),
mProperty_mQualifier (),
mProperty_mSetupName (),
mProperty_mDependanceList (),
mProperty_mTaskSetupInstructionList (),
mProperty_mEndOfTaskSetupDeclaration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_taskSetupDeclarationAST::cPtr_taskSetupDeclarationAST (const GGS_lstring & in_mTaskName,
                                                            const GGS_string & in_mQualifier,
                                                            const GGS_lstring & in_mSetupName,
                                                            const GGS_lstringlist & in_mDependanceList,
                                                            const GGS_instructionListAST & in_mTaskSetupInstructionList,
                                                            const GGS_location & in_mEndOfTaskSetupDeclaration,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTaskName (),
mProperty_mQualifier (),
mProperty_mSetupName (),
mProperty_mDependanceList (),
mProperty_mTaskSetupInstructionList (),
mProperty_mEndOfTaskSetupDeclaration () {
  mProperty_mTaskName = in_mTaskName ;
  mProperty_mQualifier = in_mQualifier ;
  mProperty_mSetupName = in_mSetupName ;
  mProperty_mDependanceList = in_mDependanceList ;
  mProperty_mTaskSetupInstructionList = in_mTaskSetupInstructionList ;
  mProperty_mEndOfTaskSetupDeclaration = in_mEndOfTaskSetupDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_taskSetupDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupDeclarationAST ;
}

void cPtr_taskSetupDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@taskSetupDeclarationAST:") ;
  mProperty_mTaskName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mQualifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSetupName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependanceList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTaskSetupInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_taskSetupDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_taskSetupDeclarationAST (mProperty_mTaskName, mProperty_mQualifier, mProperty_mSetupName, mProperty_mDependanceList, mProperty_mTaskSetupInstructionList, mProperty_mEndOfTaskSetupDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_taskSetupDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTaskName.printNonNullClassInstanceProperties ("mTaskName") ;
    mProperty_mQualifier.printNonNullClassInstanceProperties ("mQualifier") ;
    mProperty_mSetupName.printNonNullClassInstanceProperties ("mSetupName") ;
    mProperty_mDependanceList.printNonNullClassInstanceProperties ("mDependanceList") ;
    mProperty_mTaskSetupInstructionList.printNonNullClassInstanceProperties ("mTaskSetupInstructionList") ;
    mProperty_mEndOfTaskSetupDeclaration.printNonNullClassInstanceProperties ("mEndOfTaskSetupDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @taskSetupDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST ("taskSetupDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskSetupDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSetupDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSetupDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_taskSetupDeclarationAST result ;
  const GGS_taskSetupDeclarationAST * p = (const GGS_taskSetupDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSetupDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @staticListAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticListAST::objectCompare (const GGS_staticListAST & inOperand) const {
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

GGS_staticListAST::GGS_staticListAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST::
init_21__21__21_ (const GGS_lstring & in_mStaticListName,
                  const GGS_staticListPropertyListAST & in_mPropertyList,
                  const GGS_staticListValueListAST & in_mValueList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_staticListAST * object = nullptr ;
  macroMyNew (object, cPtr_staticListAST (inCompiler COMMA_THERE)) ;
  object->staticListAST_init_21__21__21_ (in_mStaticListName, in_mPropertyList, in_mValueList, inCompiler) ;
  const GGS_staticListAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::
staticListAST_init_21__21__21_ (const GGS_lstring & in_mStaticListName,
                                const GGS_staticListPropertyListAST & in_mPropertyList,
                                const GGS_staticListValueListAST & in_mValueList,
                                Compiler * /* inCompiler */) {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST::GGS_staticListAST (const cPtr_staticListAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST::class_func_new (const GGS_lstring & in_mStaticListName,
                                                     const GGS_staticListPropertyListAST & in_mPropertyList,
                                                     const GGS_staticListValueListAST & in_mValueList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_staticListAST result ;
  macroMyNew (result.mObjectPtr, cPtr_staticListAST (in_mStaticListName, in_mPropertyList, in_mValueList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_staticListAST::readProperty_mStaticListName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mStaticListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListAST::setProperty_mStaticListName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mStaticListName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_staticListPropertyListAST () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListAST::setProperty_mPropertyList (const GGS_staticListPropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListAST::readProperty_mValueList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_staticListValueListAST () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListAST::setProperty_mValueList (const GGS_staticListValueListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mValueList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticListAST class
//--------------------------------------------------------------------------------------------------

cPtr_staticListAST::cPtr_staticListAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mPropertyList (),
mProperty_mValueList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_staticListAST::cPtr_staticListAST (const GGS_lstring & in_mStaticListName,
                                        const GGS_staticListPropertyListAST & in_mPropertyList,
                                        const GGS_staticListValueListAST & in_mValueList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mPropertyList (),
mProperty_mValueList () {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_staticListAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

void cPtr_staticListAST::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@staticListAST:") ;
  mProperty_mStaticListName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValueList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_staticListAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticListAST (mProperty_mStaticListName, mProperty_mPropertyList, mProperty_mValueList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_staticListAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mStaticListName.printNonNullClassInstanceProperties ("mStaticListName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mValueList.printNonNullClassInstanceProperties ("mValueList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @staticListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListAST ("staticListAST",
                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_staticListAST result ;
  const GGS_staticListAST * p = (const GGS_staticListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedStaticList reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedStaticList::objectCompare (const GGS_decoratedStaticList & inOperand) const {
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

GGS_decoratedStaticList::GGS_decoratedStaticList (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList::
init_21__21_ (const GGS_lstring & in_mStaticListName,
              const GGS_staticListValueListAST & in_mValueList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedStaticList * object = nullptr ;
  macroMyNew (object, cPtr_decoratedStaticList (inCompiler COMMA_THERE)) ;
  object->decoratedStaticList_init_21__21_ (in_mStaticListName, in_mValueList, inCompiler) ;
  const GGS_decoratedStaticList result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedStaticList::
decoratedStaticList_init_21__21_ (const GGS_lstring & in_mStaticListName,
                                  const GGS_staticListValueListAST & in_mValueList,
                                  Compiler * /* inCompiler */) {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList::GGS_decoratedStaticList (const cPtr_decoratedStaticList * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedStaticList) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList::class_func_new (const GGS_lstring & in_mStaticListName,
                                                                 const GGS_staticListValueListAST & in_mValueList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_decoratedStaticList result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedStaticList (in_mStaticListName, in_mValueList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedStaticList::readProperty_mStaticListName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    return p->mProperty_mStaticListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedStaticList::setProperty_mStaticListName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    p->mProperty_mStaticListName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_decoratedStaticList::readProperty_mValueList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_staticListValueListAST () ;
  }else{
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    return p->mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedStaticList::setProperty_mValueList (const GGS_staticListValueListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    p->mProperty_mValueList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedStaticList class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedStaticList::cPtr_decoratedStaticList (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mValueList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedStaticList::cPtr_decoratedStaticList (const GGS_lstring & in_mStaticListName,
                                                    const GGS_staticListValueListAST & in_mValueList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mValueList () {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedStaticList::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList ;
}

void cPtr_decoratedStaticList::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedStaticList:") ;
  mProperty_mStaticListName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValueList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedStaticList::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedStaticList (mProperty_mStaticListName, mProperty_mValueList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedStaticList::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mStaticListName.printNonNullClassInstanceProperties ("mStaticListName") ;
    mProperty_mValueList.printNonNullClassInstanceProperties ("mValueList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedStaticList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedStaticList ("decoratedStaticList",
                                                                        & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedStaticList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedStaticList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedStaticList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_decoratedStaticList result ;
  const GGS_decoratedStaticList * p = (const GGS_decoratedStaticList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedStaticList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedStaticList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @staticListIndirectRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticListIndirectRoutineIR::objectCompare (const GGS_staticListIndirectRoutineIR & inOperand) const {
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

GGS_staticListIndirectRoutineIR::GGS_staticListIndirectRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                         const GGS_bool & in_isRequired,
                                                         const GGS_bool & in_warnsIfUnused,
                                                         const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                         const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                         const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                         const GGS_uint & in_mPropertyIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cPtr_staticListIndirectRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_staticListIndirectRoutineIR (inCompiler COMMA_THERE)) ;
  object->staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStaticListElementType, in_mFormalArgumentListForGeneration, in_mReturnTypeProxy, in_mPropertyIndex, inCompiler) ;
  const GGS_staticListIndirectRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticListIndirectRoutineIR::
staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                     const GGS_bool & in_isRequired,
                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                     const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                                     const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                                     const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                     const GGS_uint & in_mPropertyIndex,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mStaticListElementType = in_mStaticListElementType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR::GGS_staticListIndirectRoutineIR (const cPtr_staticListIndirectRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListIndirectRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                                 const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                                 const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                 const GGS_uint & in_mPropertyIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_staticListIndirectRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_staticListIndirectRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStaticListElementType, in_mFormalArgumentListForGeneration, in_mReturnTypeProxy, in_mPropertyIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_staticListIndirectRoutineIR::readProperty_mStaticListElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mStaticListElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListIndirectRoutineIR::setProperty_mStaticListElementType (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mStaticListElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_staticListIndirectRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineTypedSignature () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListIndirectRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineTypedSignature & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_staticListIndirectRoutineIR::readProperty_mReturnTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mReturnTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListIndirectRoutineIR::setProperty_mReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mReturnTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticListIndirectRoutineIR::readProperty_mPropertyIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mPropertyIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListIndirectRoutineIR::setProperty_mPropertyIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mPropertyIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticListIndirectRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_staticListIndirectRoutineIR::cPtr_staticListIndirectRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mStaticListElementType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnTypeProxy (),
mProperty_mPropertyIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_staticListIndirectRoutineIR::cPtr_staticListIndirectRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                    const GGS_bool & in_isRequired,
                                                                    const GGS_bool & in_warnsIfUnused,
                                                                    const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                    const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                    const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                    const GGS_uint & in_mPropertyIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mStaticListElementType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnTypeProxy (),
mProperty_mPropertyIndex () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mStaticListElementType = in_mStaticListElementType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_staticListIndirectRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;
}

void cPtr_staticListIndirectRoutineIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@staticListIndirectRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStaticListElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_staticListIndirectRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticListIndirectRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStaticListElementType, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnTypeProxy, mProperty_mPropertyIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_staticListIndirectRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mStaticListElementType.printNonNullClassInstanceProperties ("mStaticListElementType") ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReturnTypeProxy.printNonNullClassInstanceProperties ("mReturnTypeProxy") ;
    mProperty_mPropertyIndex.printNonNullClassInstanceProperties ("mPropertyIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @staticListIndirectRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ("staticListIndirectRoutineIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListIndirectRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListIndirectRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListIndirectRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_staticListIndirectRoutineIR result ;
  const GGS_staticListIndirectRoutineIR * p = (const GGS_staticListIndirectRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListIndirectRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListIndirectRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST::GGS_driverDeclarationAST (void) :
mProperty_mDriverName (),
mProperty_mDriverDependanceList (),
mProperty_mPropertyListAST (),
mProperty_mBootLocation (),
mProperty_mBootInstructionList (),
mProperty_mBootEndLocation (),
mProperty_mStartupLocation (),
mProperty_mStartupInstructionList (),
mProperty_mStartupEndLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST::GGS_driverDeclarationAST (const GGS_driverDeclarationAST & inSource) :
mProperty_mDriverName (inSource.mProperty_mDriverName),
mProperty_mDriverDependanceList (inSource.mProperty_mDriverDependanceList),
mProperty_mPropertyListAST (inSource.mProperty_mPropertyListAST),
mProperty_mBootLocation (inSource.mProperty_mBootLocation),
mProperty_mBootInstructionList (inSource.mProperty_mBootInstructionList),
mProperty_mBootEndLocation (inSource.mProperty_mBootEndLocation),
mProperty_mStartupLocation (inSource.mProperty_mStartupLocation),
mProperty_mStartupInstructionList (inSource.mProperty_mStartupInstructionList),
mProperty_mStartupEndLocation (inSource.mProperty_mStartupEndLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST & GGS_driverDeclarationAST::operator = (const GGS_driverDeclarationAST & inSource) {
  mProperty_mDriverName = inSource.mProperty_mDriverName ;
  mProperty_mDriverDependanceList = inSource.mProperty_mDriverDependanceList ;
  mProperty_mPropertyListAST = inSource.mProperty_mPropertyListAST ;
  mProperty_mBootLocation = inSource.mProperty_mBootLocation ;
  mProperty_mBootInstructionList = inSource.mProperty_mBootInstructionList ;
  mProperty_mBootEndLocation = inSource.mProperty_mBootEndLocation ;
  mProperty_mStartupLocation = inSource.mProperty_mStartupLocation ;
  mProperty_mStartupInstructionList = inSource.mProperty_mStartupInstructionList ;
  mProperty_mStartupEndLocation = inSource.mProperty_mStartupEndLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_driverDeclarationAST GGS_driverDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mDriverName,
                                                                                             const GGS_lstringlist & in_mDriverDependanceList,
                                                                                             const GGS_structurePropertyListAST & in_mPropertyListAST,
                                                                                             const GGS_location & in_mBootLocation,
                                                                                             const GGS_instructionListAST & in_mBootInstructionList,
                                                                                             const GGS_location & in_mBootEndLocation,
                                                                                             const GGS_location & in_mStartupLocation,
                                                                                             const GGS_instructionListAST & in_mStartupInstructionList,
                                                                                             const GGS_location & in_mStartupEndLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverDependanceList = in_mDriverDependanceList ;
  result.mProperty_mPropertyListAST = in_mPropertyListAST ;
  result.mProperty_mBootLocation = in_mBootLocation ;
  result.mProperty_mBootInstructionList = in_mBootInstructionList ;
  result.mProperty_mBootEndLocation = in_mBootEndLocation ;
  result.mProperty_mStartupLocation = in_mStartupLocation ;
  result.mProperty_mStartupInstructionList = in_mStartupInstructionList ;
  result.mProperty_mStartupEndLocation = in_mStartupEndLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST::GGS_driverDeclarationAST (const GGS_lstring & inOperand0,
                                                    const GGS_lstringlist & inOperand1,
                                                    const GGS_structurePropertyListAST & inOperand2,
                                                    const GGS_location & inOperand3,
                                                    const GGS_instructionListAST & inOperand4,
                                                    const GGS_location & inOperand5,
                                                    const GGS_location & inOperand6,
                                                    const GGS_instructionListAST & inOperand7,
                                                    const GGS_location & inOperand8) :
mProperty_mDriverName (inOperand0),
mProperty_mDriverDependanceList (inOperand1),
mProperty_mPropertyListAST (inOperand2),
mProperty_mBootLocation (inOperand3),
mProperty_mBootInstructionList (inOperand4),
mProperty_mBootEndLocation (inOperand5),
mProperty_mStartupLocation (inOperand6),
mProperty_mStartupInstructionList (inOperand7),
mProperty_mStartupEndLocation (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST GGS_driverDeclarationAST::class_func_new (const GGS_lstring & in_mDriverName,
                                                                   const GGS_lstringlist & in_mDriverDependanceList,
                                                                   const GGS_structurePropertyListAST & in_mPropertyListAST,
                                                                   const GGS_location & in_mBootLocation,
                                                                   const GGS_instructionListAST & in_mBootInstructionList,
                                                                   const GGS_location & in_mBootEndLocation,
                                                                   const GGS_location & in_mStartupLocation,
                                                                   const GGS_instructionListAST & in_mStartupInstructionList,
                                                                   const GGS_location & in_mStartupEndLocation,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverDependanceList = in_mDriverDependanceList ;
  result.mProperty_mPropertyListAST = in_mPropertyListAST ;
  result.mProperty_mBootLocation = in_mBootLocation ;
  result.mProperty_mBootInstructionList = in_mBootInstructionList ;
  result.mProperty_mBootEndLocation = in_mBootEndLocation ;
  result.mProperty_mStartupLocation = in_mStartupLocation ;
  result.mProperty_mStartupInstructionList = in_mStartupInstructionList ;
  result.mProperty_mStartupEndLocation = in_mStartupEndLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverDeclarationAST::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverDependanceList.isValid () && mProperty_mPropertyListAST.isValid () && mProperty_mBootLocation.isValid () && mProperty_mBootInstructionList.isValid () && mProperty_mBootEndLocation.isValid () && mProperty_mStartupLocation.isValid () && mProperty_mStartupInstructionList.isValid () && mProperty_mStartupEndLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationAST::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverDependanceList.drop () ;
  mProperty_mPropertyListAST.drop () ;
  mProperty_mBootLocation.drop () ;
  mProperty_mBootInstructionList.drop () ;
  mProperty_mBootEndLocation.drop () ;
  mProperty_mStartupLocation.drop () ;
  mProperty_mStartupInstructionList.drop () ;
  mProperty_mStartupEndLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBootLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBootInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBootEndLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStartupLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStartupInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStartupEndLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @driverDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverDeclarationAST ("driverDeclarationAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST GGS_driverDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_driverDeclarationAST result ;
  const GGS_driverDeclarationAST * p = (const GGS_driverDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @implementedDriverAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_implementedDriverAST::objectCompare (const GGS_implementedDriverAST & inOperand) const {
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

GGS_implementedDriverAST::GGS_implementedDriverAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mDriverName,
                                          const GGS_lstringlist & in_mDriverDependanceList,
                                          const GGS_bool & in_mIsInstancied,
                                          const GGS_location & in_mBootLocation,
                                          const GGS_instructionListAST & in_mBootInstructionList,
                                          const GGS_location & in_mBootEndLocation,
                                          const GGS_location & in_mStartupLocation,
                                          const GGS_instructionListAST & in_mStartupInstructionList,
                                          const GGS_location & in_mStartupEndLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_implementedDriverAST * object = nullptr ;
  macroMyNew (object, cPtr_implementedDriverAST (inCompiler COMMA_THERE)) ;
  object->implementedDriverAST_init_21__21__21__21__21__21__21__21__21_ (in_mDriverName, in_mDriverDependanceList, in_mIsInstancied, in_mBootLocation, in_mBootInstructionList, in_mBootEndLocation, in_mStartupLocation, in_mStartupInstructionList, in_mStartupEndLocation, inCompiler) ;
  const GGS_implementedDriverAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::
implementedDriverAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mDriverName,
                                                               const GGS_lstringlist & in_mDriverDependanceList,
                                                               const GGS_bool & in_mIsInstancied,
                                                               const GGS_location & in_mBootLocation,
                                                               const GGS_instructionListAST & in_mBootInstructionList,
                                                               const GGS_location & in_mBootEndLocation,
                                                               const GGS_location & in_mStartupLocation,
                                                               const GGS_instructionListAST & in_mStartupInstructionList,
                                                               const GGS_location & in_mStartupEndLocation,
                                                               Compiler * /* inCompiler */) {
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mDriverDependanceList = in_mDriverDependanceList ;
  mProperty_mIsInstancied = in_mIsInstancied ;
  mProperty_mBootLocation = in_mBootLocation ;
  mProperty_mBootInstructionList = in_mBootInstructionList ;
  mProperty_mBootEndLocation = in_mBootEndLocation ;
  mProperty_mStartupLocation = in_mStartupLocation ;
  mProperty_mStartupInstructionList = in_mStartupInstructionList ;
  mProperty_mStartupEndLocation = in_mStartupEndLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST::GGS_implementedDriverAST (const cPtr_implementedDriverAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementedDriverAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST::class_func_new (const GGS_lstring & in_mDriverName,
                                                                   const GGS_lstringlist & in_mDriverDependanceList,
                                                                   const GGS_bool & in_mIsInstancied,
                                                                   const GGS_location & in_mBootLocation,
                                                                   const GGS_instructionListAST & in_mBootInstructionList,
                                                                   const GGS_location & in_mBootEndLocation,
                                                                   const GGS_location & in_mStartupLocation,
                                                                   const GGS_instructionListAST & in_mStartupInstructionList,
                                                                   const GGS_location & in_mStartupEndLocation,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_implementedDriverAST result ;
  macroMyNew (result.mObjectPtr, cPtr_implementedDriverAST (in_mDriverName, in_mDriverDependanceList, in_mIsInstancied, in_mBootLocation, in_mBootInstructionList, in_mBootEndLocation, in_mStartupLocation, in_mStartupInstructionList, in_mStartupEndLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_implementedDriverAST::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mDriverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_implementedDriverAST::readProperty_mDriverDependanceList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mDriverDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mDriverDependanceList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mDriverDependanceList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_implementedDriverAST::readProperty_mIsInstancied (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mIsInstancied ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mIsInstancied (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mIsInstancied = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implementedDriverAST::readProperty_mBootLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mBootLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_implementedDriverAST::readProperty_mBootInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mBootInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implementedDriverAST::readProperty_mBootEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mBootEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implementedDriverAST::readProperty_mStartupLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mStartupLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_implementedDriverAST::readProperty_mStartupInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mStartupInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implementedDriverAST::readProperty_mStartupEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mStartupEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @implementedDriverAST class
//--------------------------------------------------------------------------------------------------

cPtr_implementedDriverAST::cPtr_implementedDriverAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDriverName (),
mProperty_mDriverDependanceList (),
mProperty_mIsInstancied (),
mProperty_mBootLocation (),
mProperty_mBootInstructionList (),
mProperty_mBootEndLocation (),
mProperty_mStartupLocation (),
mProperty_mStartupInstructionList (),
mProperty_mStartupEndLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_implementedDriverAST::cPtr_implementedDriverAST (const GGS_lstring & in_mDriverName,
                                                      const GGS_lstringlist & in_mDriverDependanceList,
                                                      const GGS_bool & in_mIsInstancied,
                                                      const GGS_location & in_mBootLocation,
                                                      const GGS_instructionListAST & in_mBootInstructionList,
                                                      const GGS_location & in_mBootEndLocation,
                                                      const GGS_location & in_mStartupLocation,
                                                      const GGS_instructionListAST & in_mStartupInstructionList,
                                                      const GGS_location & in_mStartupEndLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDriverName (),
mProperty_mDriverDependanceList (),
mProperty_mIsInstancied (),
mProperty_mBootLocation (),
mProperty_mBootInstructionList (),
mProperty_mBootEndLocation (),
mProperty_mStartupLocation (),
mProperty_mStartupInstructionList (),
mProperty_mStartupEndLocation () {
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mDriverDependanceList = in_mDriverDependanceList ;
  mProperty_mIsInstancied = in_mIsInstancied ;
  mProperty_mBootLocation = in_mBootLocation ;
  mProperty_mBootInstructionList = in_mBootInstructionList ;
  mProperty_mBootEndLocation = in_mBootEndLocation ;
  mProperty_mStartupLocation = in_mStartupLocation ;
  mProperty_mStartupInstructionList = in_mStartupInstructionList ;
  mProperty_mStartupEndLocation = in_mStartupEndLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_implementedDriverAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

void cPtr_implementedDriverAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@implementedDriverAST:") ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInstancied.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBootLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBootInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBootEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartupLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartupInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartupEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_implementedDriverAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_implementedDriverAST (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mIsInstancied, mProperty_mBootLocation, mProperty_mBootInstructionList, mProperty_mBootEndLocation, mProperty_mStartupLocation, mProperty_mStartupInstructionList, mProperty_mStartupEndLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_implementedDriverAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
    mProperty_mDriverDependanceList.printNonNullClassInstanceProperties ("mDriverDependanceList") ;
    mProperty_mIsInstancied.printNonNullClassInstanceProperties ("mIsInstancied") ;
    mProperty_mBootLocation.printNonNullClassInstanceProperties ("mBootLocation") ;
    mProperty_mBootInstructionList.printNonNullClassInstanceProperties ("mBootInstructionList") ;
    mProperty_mBootEndLocation.printNonNullClassInstanceProperties ("mBootEndLocation") ;
    mProperty_mStartupLocation.printNonNullClassInstanceProperties ("mStartupLocation") ;
    mProperty_mStartupInstructionList.printNonNullClassInstanceProperties ("mStartupInstructionList") ;
    mProperty_mStartupEndLocation.printNonNullClassInstanceProperties ("mStartupEndLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @implementedDriverAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implementedDriverAST ("implementedDriverAST",
                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implementedDriverAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implementedDriverAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implementedDriverAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_implementedDriverAST result ;
  const GGS_implementedDriverAST * p = (const GGS_implementedDriverAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implementedDriverAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementedDriverAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedRequiredDriver reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedRequiredDriver::objectCompare (const GGS_decoratedRequiredDriver & inOperand) const {
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

GGS_decoratedRequiredDriver::GGS_decoratedRequiredDriver (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver::
init_21_ (const GGS_lstring & in_mDriverName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_decoratedRequiredDriver * object = nullptr ;
  macroMyNew (object, cPtr_decoratedRequiredDriver (inCompiler COMMA_THERE)) ;
  object->decoratedRequiredDriver_init_21_ (in_mDriverName, inCompiler) ;
  const GGS_decoratedRequiredDriver result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedRequiredDriver::
decoratedRequiredDriver_init_21_ (const GGS_lstring & in_mDriverName,
                                  Compiler * /* inCompiler */) {
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver::GGS_decoratedRequiredDriver (const cPtr_decoratedRequiredDriver * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedRequiredDriver) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver::class_func_new (const GGS_lstring & in_mDriverName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_decoratedRequiredDriver result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedRequiredDriver (in_mDriverName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedRequiredDriver::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRequiredDriver::setProperty_mDriverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedRequiredDriver class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mDriverName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (const GGS_lstring & in_mDriverName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mDriverName () {
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedRequiredDriver::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

void cPtr_decoratedRequiredDriver::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedRequiredDriver:") ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedRequiredDriver::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedRequiredDriver (mProperty_mDriverName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedRequiredDriver::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedRequiredDriver generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver ("decoratedRequiredDriver",
                                                                            & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedRequiredDriver::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRequiredDriver::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRequiredDriver (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_decoratedRequiredDriver result ;
  const GGS_decoratedRequiredDriver * p = (const GGS_decoratedRequiredDriver *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRequiredDriver *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRequiredDriver", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element::GGS_driverListIR_2E_element (void) :
mProperty_mDriverName (),
mProperty_mType (),
mProperty_mInitialValueList () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element::GGS_driverListIR_2E_element (const GGS_driverListIR_2E_element & inSource) :
mProperty_mDriverName (inSource.mProperty_mDriverName),
mProperty_mType (inSource.mProperty_mType),
mProperty_mInitialValueList (inSource.mProperty_mInitialValueList) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element & GGS_driverListIR_2E_element::operator = (const GGS_driverListIR_2E_element & inSource) {
  mProperty_mDriverName = inSource.mProperty_mDriverName ;
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mInitialValueList = inSource.mProperty_mInitialValueList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_driverListIR_2E_element GGS_driverListIR_2E_element::init_21__21__21_ (const GGS_lstring & in_mDriverName,
                                                                           const GGS_omnibusType & in_mType,
                                                                           const GGS_operandIRList & in_mInitialValueList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mInitialValueList = in_mInitialValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element::GGS_driverListIR_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_omnibusType & inOperand1,
                                                          const GGS_operandIRList & inOperand2) :
mProperty_mDriverName (inOperand0),
mProperty_mType (inOperand1),
mProperty_mInitialValueList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element GGS_driverListIR_2E_element::class_func_new (const GGS_lstring & in_mDriverName,
                                                                         const GGS_omnibusType & in_mType,
                                                                         const GGS_operandIRList & in_mInitialValueList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mInitialValueList = in_mInitialValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverListIR_2E_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mType.isValid () && mProperty_mInitialValueList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR_2E_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mType.drop () ;
  mProperty_mInitialValueList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialValueList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @driverListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverListIR_2E_element ("driverListIR.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element GGS_driverListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_driverListIR_2E_element result ;
  const GGS_driverListIR_2E_element * p = (const GGS_driverListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeDynamicArrayDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeDynamicArrayDeclarationAST::objectCompare (const GGS_typeDynamicArrayDeclarationAST & inOperand) const {
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

GGS_typeDynamicArrayDeclarationAST::GGS_typeDynamicArrayDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST::
init_21__21_ (const GGS_lstring & in_mDynamicArrayTypeName,
              const GGS_lstring & in_mElementTypeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_typeDynamicArrayDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeDynamicArrayDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeDynamicArrayDeclarationAST_init_21__21_ (in_mDynamicArrayTypeName, in_mElementTypeName, inCompiler) ;
  const GGS_typeDynamicArrayDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::
typeDynamicArrayDeclarationAST_init_21__21_ (const GGS_lstring & in_mDynamicArrayTypeName,
                                             const GGS_lstring & in_mElementTypeName,
                                             Compiler * /* inCompiler */) {
  mProperty_mDynamicArrayTypeName = in_mDynamicArrayTypeName ;
  mProperty_mElementTypeName = in_mElementTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST::GGS_typeDynamicArrayDeclarationAST (const cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDynamicArrayDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST::class_func_new (const GGS_lstring & in_mDynamicArrayTypeName,
                                                                                       const GGS_lstring & in_mElementTypeName,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typeDynamicArrayDeclarationAST (in_mDynamicArrayTypeName, in_mElementTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeDynamicArrayDeclarationAST::readProperty_mDynamicArrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mDynamicArrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDynamicArrayDeclarationAST::setProperty_mDynamicArrayTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mDynamicArrayTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeDynamicArrayDeclarationAST::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDynamicArrayDeclarationAST::setProperty_mElementTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeDynamicArrayDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDynamicArrayTypeName (),
mProperty_mElementTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (const GGS_lstring & in_mDynamicArrayTypeName,
                                                                          const GGS_lstring & in_mElementTypeName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDynamicArrayTypeName (),
mProperty_mElementTypeName () {
  mProperty_mDynamicArrayTypeName = in_mDynamicArrayTypeName ;
  mProperty_mElementTypeName = in_mElementTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_typeDynamicArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

void cPtr_typeDynamicArrayDeclarationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@typeDynamicArrayDeclarationAST:") ;
  mProperty_mDynamicArrayTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeDynamicArrayDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeDynamicArrayDeclarationAST (mProperty_mDynamicArrayTypeName, mProperty_mElementTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeDynamicArrayDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDynamicArrayTypeName.printNonNullClassInstanceProperties ("mDynamicArrayTypeName") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @typeDynamicArrayDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ("typeDynamicArrayDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDynamicArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDynamicArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDynamicArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST result ;
  const GGS_typeDynamicArrayDeclarationAST * p = (const GGS_typeDynamicArrayDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDynamicArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayRemoveAllFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayRemoveAllFunctionIR::objectCompare (const GGS_dynArrayRemoveAllFunctionIR & inOperand) const {
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

GGS_dynArrayRemoveAllFunctionIR::GGS_dynArrayRemoveAllFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynArrayRemoveAllFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayRemoveAllFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynArrayRemoveAllFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::
dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                     const GGS_bool & in_isRequired,
                                                                     const GGS_bool & in_warnsIfUnused,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR::GGS_dynArrayRemoveAllFunctionIR (const cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayRemoveAllFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayRemoveAllFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayRemoveAllFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                    const GGS_bool & in_isRequired,
                                                                    const GGS_bool & in_warnsIfUnused,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynArrayRemoveAllFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

void cPtr_dynArrayRemoveAllFunctionIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayRemoveAllFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayRemoveAllFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayRemoveAllFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayRemoveAllFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynArrayRemoveAllFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ("dynArrayRemoveAllFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayRemoveAllFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayRemoveAllFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayRemoveAllFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR result ;
  const GGS_dynArrayRemoveAllFunctionIR * p = (const GGS_dynArrayRemoveAllFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayRemoveAllFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayLengthFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayLengthFunctionIR::objectCompare (const GGS_dynArrayLengthFunctionIR & inOperand) const {
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

GGS_dynArrayLengthFunctionIR::GGS_dynArrayLengthFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynArrayLengthFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayLengthFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynArrayLengthFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::
dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                  const GGS_bool & in_isRequired,
                                                                  const GGS_bool & in_warnsIfUnused,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR::GGS_dynArrayLengthFunctionIR (const cPtr_dynArrayLengthFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayLengthFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayLengthFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayLengthFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynArrayLengthFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

void cPtr_dynArrayLengthFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayLengthFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayLengthFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayLengthFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayLengthFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynArrayLengthFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ("dynArrayLengthFunctionIR",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayLengthFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayLengthFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayLengthFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR result ;
  const GGS_dynArrayLengthFunctionIR * p = (const GGS_dynArrayLengthFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayLengthFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayAppendFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayAppendFunctionIR::objectCompare (const GGS_dynArrayAppendFunctionIR & inOperand) const {
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

GGS_dynArrayAppendFunctionIR::GGS_dynArrayAppendFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                     const GGS_bool & in_isRequired,
                                                     const GGS_bool & in_warnsIfUnused,
                                                     const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                     const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                     const GGS_string & in_mInsertFunctionMangledName,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_dynArrayAppendFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayAppendFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mArrayTypeProxy, in_mElementTypeProxy, in_mInsertFunctionMangledName, inCompiler) ;
  const GGS_dynArrayAppendFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::
dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                              const GGS_bool & in_isRequired,
                                                                              const GGS_bool & in_warnsIfUnused,
                                                                              const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                              const GGS_string & in_mInsertFunctionMangledName,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mArrayTypeProxy = in_mArrayTypeProxy ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
  mProperty_mInsertFunctionMangledName = in_mInsertFunctionMangledName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR::GGS_dynArrayAppendFunctionIR (const cPtr_dynArrayAppendFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayAppendFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                                           const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                           const GGS_string & in_mInsertFunctionMangledName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayAppendFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mArrayTypeProxy, in_mElementTypeProxy, in_mInsertFunctionMangledName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayAppendFunctionIR::readProperty_mArrayTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mArrayTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mArrayTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mArrayTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayAppendFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_dynArrayAppendFunctionIR::readProperty_mInsertFunctionMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mInsertFunctionMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mInsertFunctionMangledName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mInsertFunctionMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayAppendFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mArrayTypeProxy (),
mProperty_mElementTypeProxy (),
mProperty_mInsertFunctionMangledName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                              const GGS_string & in_mInsertFunctionMangledName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mArrayTypeProxy (),
mProperty_mElementTypeProxy (),
mProperty_mInsertFunctionMangledName () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mArrayTypeProxy = in_mArrayTypeProxy ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
  mProperty_mInsertFunctionMangledName = in_mInsertFunctionMangledName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynArrayAppendFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

void cPtr_dynArrayAppendFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayAppendFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArrayTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayAppendFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayAppendFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mArrayTypeProxy, mProperty_mElementTypeProxy, mProperty_mInsertFunctionMangledName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayAppendFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mArrayTypeProxy.printNonNullClassInstanceProperties ("mArrayTypeProxy") ;
    mProperty_mElementTypeProxy.printNonNullClassInstanceProperties ("mElementTypeProxy") ;
    mProperty_mInsertFunctionMangledName.printNonNullClassInstanceProperties ("mInsertFunctionMangledName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynArrayAppendFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ("dynArrayAppendFunctionIR",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayAppendFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayAppendFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayAppendFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR result ;
  const GGS_dynArrayAppendFunctionIR * p = (const GGS_dynArrayAppendFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayAppendFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayInsertFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayInsertFunctionIR::objectCompare (const GGS_dynArrayInsertFunctionIR & inOperand) const {
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

GGS_dynArrayInsertFunctionIR::GGS_dynArrayInsertFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_dynArrayInsertFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayInsertFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mElementTypeProxy, inCompiler) ;
  const GGS_dynArrayInsertFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::
dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                      const GGS_bool & in_isRequired,
                                                                      const GGS_bool & in_warnsIfUnused,
                                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR::GGS_dynArrayInsertFunctionIR (const cPtr_dynArrayInsertFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayInsertFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayInsertFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mElementTypeProxy,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayInsertFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayInsertFunctionIR::setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayInsertFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mElementTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mElementTypeProxy () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynArrayInsertFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

void cPtr_dynArrayInsertFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayInsertFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayInsertFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayInsertFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mElementTypeProxy, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayInsertFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeProxy.printNonNullClassInstanceProperties ("mElementTypeProxy") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynArrayInsertFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ("dynArrayInsertFunctionIR",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayInsertFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayInsertFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayInsertFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR result ;
  const GGS_dynArrayInsertFunctionIR * p = (const GGS_dynArrayInsertFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayInsertFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynamicArrayTypeAssignUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynamicArrayTypeAssignUsage::objectCompare (const GGS_dynamicArrayTypeAssignUsage & inOperand) const {
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

GGS_dynamicArrayTypeAssignUsage::GGS_dynamicArrayTypeAssignUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage::
init_21__21_ (const GGS_omnibusType & in_mDynamicArrayType,
              const GGS_string & in_mAssignFunctionName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_dynamicArrayTypeAssignUsage * object = nullptr ;
  macroMyNew (object, cPtr_dynamicArrayTypeAssignUsage (inCompiler COMMA_THERE)) ;
  object->dynamicArrayTypeAssignUsage_init_21__21_ (in_mDynamicArrayType, in_mAssignFunctionName, inCompiler) ;
  const GGS_dynamicArrayTypeAssignUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::
dynamicArrayTypeAssignUsage_init_21__21_ (const GGS_omnibusType & in_mDynamicArrayType,
                                          const GGS_string & in_mAssignFunctionName,
                                          Compiler * /* inCompiler */) {
  mProperty_mDynamicArrayType = in_mDynamicArrayType ;
  mProperty_mAssignFunctionName = in_mAssignFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage::GGS_dynamicArrayTypeAssignUsage (const cPtr_dynamicArrayTypeAssignUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage::class_func_new (const GGS_omnibusType & in_mDynamicArrayType,
                                                                                 const GGS_string & in_mAssignFunctionName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignUsage (in_mDynamicArrayType, in_mAssignFunctionName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_dynamicArrayTypeAssignUsage::readProperty_mDynamicArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mDynamicArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynamicArrayTypeAssignUsage::setProperty_mDynamicArrayType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mDynamicArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_dynamicArrayTypeAssignUsage::readProperty_mAssignFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mAssignFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynamicArrayTypeAssignUsage::setProperty_mAssignFunctionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mAssignFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignUsage class
//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mDynamicArrayType (),
mProperty_mAssignFunctionName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (const GGS_omnibusType & in_mDynamicArrayType,
                                                                    const GGS_string & in_mAssignFunctionName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mDynamicArrayType (),
mProperty_mAssignFunctionName () {
  mProperty_mDynamicArrayType = in_mDynamicArrayType ;
  mProperty_mAssignFunctionName = in_mAssignFunctionName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynamicArrayTypeAssignUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

void cPtr_dynamicArrayTypeAssignUsage::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@dynamicArrayTypeAssignUsage:") ;
  mProperty_mDynamicArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynamicArrayTypeAssignUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignUsage (mProperty_mDynamicArrayType, mProperty_mAssignFunctionName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynamicArrayTypeAssignUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mDynamicArrayType.printNonNullClassInstanceProperties ("mDynamicArrayType") ;
    mProperty_mAssignFunctionName.printNonNullClassInstanceProperties ("mAssignFunctionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynamicArrayTypeAssignUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ("dynamicArrayTypeAssignUsage",
                                                                                & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynamicArrayTypeAssignUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignUsage result ;
  const GGS_dynamicArrayTypeAssignUsage * p = (const GGS_dynamicArrayTypeAssignUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynamicArrayTypeAssignUsage_2E_weak::objectCompare (const GGS_dynamicArrayTypeAssignUsage_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_dynamicArrayTypeAssignUsage_2E_weak::GGS_dynamicArrayTypeAssignUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage_2E_weak & GGS_dynamicArrayTypeAssignUsage_2E_weak::operator = (const GGS_dynamicArrayTypeAssignUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage_2E_weak::GGS_dynamicArrayTypeAssignUsage_2E_weak (const GGS_dynamicArrayTypeAssignUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage_2E_weak GGS_dynamicArrayTypeAssignUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage_2E_weak::unwrappedValue (void) const {
  GGS_dynamicArrayTypeAssignUsage result ;
  if (isValid ()) {
    const cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynamicArrayTypeAssignUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage_2E_weak::bang_dynamicArrayTypeAssignUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynamicArrayTypeAssignUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignUsage) ;
      result = GGS_dynamicArrayTypeAssignUsage ((cPtr_dynamicArrayTypeAssignUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynamicArrayTypeAssignUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2E_weak ("dynamicArrayTypeAssignUsage.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynamicArrayTypeAssignUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage_2E_weak GGS_dynamicArrayTypeAssignUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignUsage_2E_weak result ;
  const GGS_dynamicArrayTypeAssignUsage_2E_weak * p = (const GGS_dynamicArrayTypeAssignUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynamicArrayTypeAssignGenericFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynamicArrayTypeAssignGenericFunctionIR::objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const {
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

GGS_dynamicArrayTypeAssignGenericFunctionIR::GGS_dynamicArrayTypeAssignGenericFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynamicArrayTypeAssignGenericFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynamicArrayTypeAssignGenericFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::
dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR::GGS_dynamicArrayTypeAssignGenericFunctionIR (const cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                                         const GGS_bool & in_isRequired,
                                                                                                         const GGS_bool & in_warnsIfUnused,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                                            const GGS_bool & in_isRequired,
                                                                                            const GGS_bool & in_warnsIfUnused,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynamicArrayTypeAssignGenericFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@dynamicArrayTypeAssignGenericFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynamicArrayTypeAssignGenericFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynamicArrayTypeAssignGenericFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynamicArrayTypeAssignGenericFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ("dynamicArrayTypeAssignGenericFunctionIR",
                                                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynamicArrayTypeAssignGenericFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignGenericFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignGenericFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR * p = (const GGS_dynamicArrayTypeAssignGenericFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignGenericFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolImplicitConverterToBoolean::objectCompare (const GGS_boolImplicitConverterToBoolean & inOperand) const {
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

GGS_boolImplicitConverterToBoolean::GGS_boolImplicitConverterToBoolean (void) :
GGS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_boolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->boolImplicitConverterToBoolean_init (inCompiler) ;
  const GGS_boolImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolImplicitConverterToBoolean::
boolImplicitConverterToBoolean_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean::GGS_boolImplicitConverterToBoolean (const cPtr_boolImplicitConverterToBoolean * inSourcePtr) :
GGS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_boolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_boolImplicitConverterToBoolean::cPtr_boolImplicitConverterToBoolean (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

void cPtr_boolImplicitConverterToBoolean::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@boolImplicitConverterToBoolean]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolImplicitConverterToBoolean::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolImplicitConverterToBoolean generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ("boolImplicitConverterToBoolean",
                                                                                   & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean result ;
  const GGS_boolImplicitConverterToBoolean * p = (const GGS_boolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_boolImplicitConverterToBoolean_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_boolImplicitConverterToBoolean_2E_weak::GGS_boolImplicitConverterToBoolean_2E_weak (void) :
GGS_abstractImplicitConverterToBoolean_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak & GGS_boolImplicitConverterToBoolean_2E_weak::operator = (const GGS_boolImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak::GGS_boolImplicitConverterToBoolean_2E_weak (const GGS_boolImplicitConverterToBoolean & inSource) :
GGS_abstractImplicitConverterToBoolean_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak GGS_boolImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean_2E_weak::unwrappedValue (void) const {
  GGS_boolImplicitConverterToBoolean result ;
  if (isValid ()) {
    const cPtr_boolImplicitConverterToBoolean * p = (cPtr_boolImplicitConverterToBoolean *) ptr () ;
    if (nullptr != p) {
      result = GGS_boolImplicitConverterToBoolean (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean_2E_weak::bang_boolImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolImplicitConverterToBoolean) ;
      result = GGS_boolImplicitConverterToBoolean ((cPtr_boolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @boolImplicitConverterToBoolean.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ("boolImplicitConverterToBoolean.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak GGS_boolImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean_2E_weak result ;
  const GGS_boolImplicitConverterToBoolean_2E_weak * p = (const GGS_boolImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolNotOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolNotOperator::objectCompare (const GGS_boolNotOperator & inOperand) const {
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

GGS_boolNotOperator::GGS_boolNotOperator (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolNotOperator * object = nullptr ;
  macroMyNew (object, cPtr_boolNotOperator (inCompiler COMMA_THERE)) ;
  object->boolNotOperator_init (inCompiler) ;
  const GGS_boolNotOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolNotOperator::
boolNotOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator::GGS_boolNotOperator (const cPtr_boolNotOperator * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolNotOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_boolNotOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_boolNotOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolNotOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_boolNotOperator::cPtr_boolNotOperator (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolNotOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

void cPtr_boolNotOperator::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@boolNotOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolNotOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolNotOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolNotOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolNotOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolNotOperator ("boolNotOperator",
                                                                    & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolNotOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolNotOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolNotOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_boolNotOperator result ;
  const GGS_boolNotOperator * p = (const GGS_boolNotOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolNotOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolNotOperator_2E_weak::objectCompare (const GGS_boolNotOperator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_boolNotOperator_2E_weak::GGS_boolNotOperator_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak & GGS_boolNotOperator_2E_weak::operator = (const GGS_boolNotOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak::GGS_boolNotOperator_2E_weak (const GGS_boolNotOperator & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak GGS_boolNotOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolNotOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator_2E_weak::unwrappedValue (void) const {
  GGS_boolNotOperator result ;
  if (isValid ()) {
    const cPtr_boolNotOperator * p = (cPtr_boolNotOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_boolNotOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator_2E_weak::bang_boolNotOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolNotOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolNotOperator) ;
      result = GGS_boolNotOperator ((cPtr_boolNotOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @boolNotOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolNotOperator_2E_weak ("boolNotOperator.weak",
                                                                            & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolNotOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolNotOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolNotOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak GGS_boolNotOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_boolNotOperator_2E_weak result ;
  const GGS_boolNotOperator_2E_weak * p = (const GGS_boolNotOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolNotOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap::GGS_universalValuedObjectMap (void) :
mProperty_mInternalPropertyAndRoutineMap (),
mProperty_mScopeStack (),
mProperty_mLocalObjectList () {
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap::GGS_universalValuedObjectMap (const GGS_universalValuedObjectMap & inSource) :
mProperty_mInternalPropertyAndRoutineMap (inSource.mProperty_mInternalPropertyAndRoutineMap),
mProperty_mScopeStack (inSource.mProperty_mScopeStack),
mProperty_mLocalObjectList (inSource.mProperty_mLocalObjectList) {
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap & GGS_universalValuedObjectMap::operator = (const GGS_universalValuedObjectMap & inSource) {
  mProperty_mInternalPropertyAndRoutineMap = inSource.mProperty_mInternalPropertyAndRoutineMap ;
  mProperty_mScopeStack = inSource.mProperty_mScopeStack ;
  mProperty_mLocalObjectList = inSource.mProperty_mLocalObjectList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_universalValuedObjectMap GGS_universalValuedObjectMap::init (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_universalValuedObjectMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_universalValuedObjectMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mInternalPropertyAndRoutineMap = GGS_flatValuedObjectMap::init (inCompiler COMMA_HERE) ;
  mProperty_mScopeStack = GGS_scopeStack::init (inCompiler COMMA_HERE) ;
  mProperty_mLocalObjectList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap::GGS_universalValuedObjectMap (const GGS_flatValuedObjectMap & inOperand0,
                                                            const GGS_scopeStack & inOperand1,
                                                            const GGS_lstringlist & inOperand2) :
mProperty_mInternalPropertyAndRoutineMap (inOperand0),
mProperty_mScopeStack (inOperand1),
mProperty_mLocalObjectList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap GGS_universalValuedObjectMap::class_func_new (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_universalValuedObjectMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_universalValuedObjectMap::isValid (void) const {
  return mProperty_mInternalPropertyAndRoutineMap.isValid () && mProperty_mScopeStack.isValid () && mProperty_mLocalObjectList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_universalValuedObjectMap::drop (void) {
  mProperty_mInternalPropertyAndRoutineMap.drop () ;
  mProperty_mScopeStack.drop () ;
  mProperty_mLocalObjectList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_universalValuedObjectMap::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @universalValuedObjectMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInternalPropertyAndRoutineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mScopeStack.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocalObjectList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @universalValuedObjectMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_universalValuedObjectMap ("universalValuedObjectMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_universalValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_universalValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_universalValuedObjectMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap GGS_universalValuedObjectMap::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_universalValuedObjectMap result ;
  const GGS_universalValuedObjectMap * p = (const GGS_universalValuedObjectMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_universalValuedObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalValuedObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertTask'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertTask (GGS_universalValuedObjectMap & ioObject,
                                 const GGS_lstring constinArgument_inTaskName,
                                 const GGS_omnibusType constinArgument_inTaskType,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inTaskName, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 21)), GGS_bool (false), GGS_valuedObject::class_func_task (constinArgument_inTaskType  COMMA_SOURCE_FILE ("universal-map.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 19)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertDriver'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDriver (GGS_universalValuedObjectMap & ioObject,
                                   const GGS_lstring constinArgument_inDriverName,
                                   const GGS_bool constinArgument_inIsInstancied,
                                   const GGS_omnibusType constinArgument_inDriverType,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inDriverName, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 36)), GGS_bool (false), GGS_valuedObject::class_func_driver (constinArgument_inDriverType, constinArgument_inIsInstancied  COMMA_SOURCE_FILE ("universal-map.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalConstant (GGS_universalValuedObjectMap & ioObject,
                                           const GGS_lstring constinArgument_inConstantName,
                                           const GGS_objectIR constinArgument_inConstantObjectIR,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inConstantName, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 50)), GGS_bool (false), GGS_valuedObject::class_func_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 48)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalSyncInstance (GGS_universalValuedObjectMap & ioObject,
                                               const GGS_lstring constinArgument_inSyncInstanceName,
                                               const GGS_omnibusType constinArgument_inType,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inSyncInstanceName, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 64)), GGS_bool (false), GGS_valuedObject::class_func_globalSyncInstance (constinArgument_inType, constinArgument_inSyncInstanceName  COMMA_SOURCE_FILE ("universal-map.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 62)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalConstant (GGS_universalValuedObjectMap & ioObject,
                                          const GGS_lstring constinArgument_inLocalConstantName,
                                          const GGS_bool constinArgument_inIsFormalInputArgument,
                                          const GGS_omnibusType constinArgument_inType,
                                          const GGS_lstring constinArgument_inOmnibusConstantName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 80)), GGS_bool (false), GGS_valuedObject::class_func_localConstant (constinArgument_inType, constinArgument_inOmnibusConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 78)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssignOperation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 84)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GGS_universalValuedObjectMap & ioObject,
                                              const GGS_lstring constinArgument_inLocalConstantName,
                                              const GGS_bool constinArgument_inIsFormalInputArgument,
                                              const GGS_omnibusType constinArgument_inType,
                                              const GGS_lstring constinArgument_inOmnibusConstantName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 97)), GGS_bool (false), GGS_valuedObject::class_func_localConstant (constinArgument_inType, constinArgument_inOmnibusConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 95)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssignOperation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 101)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalVariable (GGS_universalValuedObjectMap & ioObject,
                                          const GGS_lstring constinArgument_inLocalVariableName,
                                          const GGS_omnibusType constinArgument_inType,
                                          const GGS_lstring constinArgument_inOmnibusName,
                                          const GGS_valuedObjectState constinArgument_inVariableInitialState,
                                          const GGS_bool constinArgument_inObjectShouldBeValuedAtEndOfScope,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalVariableName, constinArgument_inVariableInitialState, constinArgument_inObjectShouldBeValuedAtEndOfScope, GGS_valuedObject::class_func_localVariable (constinArgument_inType, constinArgument_inOmnibusName  COMMA_SOURCE_FILE ("universal-map.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 113)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssignOperation (constinArgument_inLocalVariableName  COMMA_SOURCE_FILE ("universal-map.galgas", 119)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchEntity'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchEntity (const GGS_universalValuedObjectMap inObject,
                                   const GGS_lstring constinArgument_inValuedObjectName,
                                   GGS_valuedObject & outArgument_outEntity,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntity.drop () ; // Release 'out' argument
  const GGS_universalValuedObjectMap temp_0 = inObject ;
  GGS_valuedObjectState joker_4337_2 ; // Joker input parameter
  GGS_bool joker_4337_1 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, joker_4337_2, joker_4337_1, outArgument_outEntity, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 130)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObject'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObject (const GGS_universalValuedObjectMap inObject,
                                         const GGS_lstring constinArgument_inValuedObjectName,
                                         const GGS_mode constinArgument_inMode,
                                         const GGS_stringset constinArgument_inInitializedDriverSet,
                                         GGS_objectIR & outArgument_outObjectIR,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GGS_valuedObject var_entity_4731 ;
  const GGS_universalValuedObjectMap temp_0 = inObject ;
  GGS_valuedObjectState joker_4722_2 ; // Joker input parameter
  GGS_bool joker_4722_1 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, joker_4722_2, joker_4722_1, var_entity_4731, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 141)) ;
  switch (var_entity_4731.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_4781_type_0 ;
      var_entity_4731.getAssociatedValuesFor_task (extractedValue_4781_type_0) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_bootMode (SOURCE_FILE ("universal-map.galgas", 144)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("cannot call a task entry in a boot routine"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 145)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_4781_type_0, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 147))  COMMA_SOURCE_FILE ("universal-map.galgas", 147)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_5060_type_0 ;
      GGS_bool extractedValue_5065_instancied_1 ;
      var_entity_4731.getAssociatedValuesFor_driver (extractedValue_5060_type_0, extractedValue_5065_instancied_1) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_bootMode (SOURCE_FILE ("universal-map.galgas", 150)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("cannot call a driver in a boot routine"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 151)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = extractedValue_5065_instancied_1.operator_not (SOURCE_FILE ("universal-map.galgas", 152)).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 153)) ;
            outArgument_outObjectIR.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = constinArgument_inInitializedDriverSet.getter_hasKey (constinArgument_inValuedObjectName.readProperty_string () COMMA_SOURCE_FILE ("universal-map.galgas", 154)).operator_not (SOURCE_FILE ("universal-map.galgas", 154)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("the driver should be named in driver dependence list"), fixItArray8  COMMA_SOURCE_FILE ("universal-map.galgas", 155)) ;
              outArgument_outObjectIR.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_5060_type_0, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 157))  COMMA_SOURCE_FILE ("universal-map.galgas", 157)) ;
          }
        }
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_5635_objectIR_0 ;
      var_entity_4731.getAssociatedValuesFor_globalConstant (extractedValue_5635_objectIR_0) ;
      outArgument_outObjectIR = extractedValue_5635_objectIR_0 ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_5709_type_0 ;
      GGS_lstring extractedValue_5723_omnibusName_1 ;
      GGS_bool extractedValue_5735__2 ;
      var_entity_4731.getAssociatedValuesFor_localConstant (extractedValue_5709_type_0, extractedValue_5723_omnibusName_1, extractedValue_5735__2) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_5709_type_0, function_llvmNameForLocalVariable (extractedValue_5723_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 162))  COMMA_SOURCE_FILE ("universal-map.galgas", 162)) ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_5867_type_0 ;
      GGS_lstring extractedValue_5881_omnibusName_1 ;
      var_entity_4731.getAssociatedValuesFor_localVariable (extractedValue_5867_type_0, extractedValue_5881_omnibusName_1) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_5867_type_0, function_llvmNameForLocalVariable (extractedValue_5881_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 164))  COMMA_SOURCE_FILE ("universal-map.galgas", 164)) ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_6028_type_0 ;
      GGS_lstring extractedValue_6042_omnibusName_1 ;
      var_entity_4731.getAssociatedValuesFor_globalSyncInstance (extractedValue_6028_type_0, extractedValue_6042_omnibusName_1) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_6028_type_0, function_llvmNameForGlobalSyncInstance (extractedValue_6042_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 166))  COMMA_SOURCE_FILE ("universal-map.galgas", 166)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (GGS_universalValuedObjectMap & ioObject,
                                 const GGS_lstring constinArgument_inValuedObjectName,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObjectState var_valueState_6440 ;
  GGS_valuedObject var_property_6459 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_bool joker_6451 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_6440, joker_6451, var_property_6459, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 175)) ;
  switch (var_property_6459.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_6611__0 ;
      GGS_lstring extractedValue_6611__1 ;
      GGS_bool extractedValue_6611__2 ;
      var_property_6459.getAssociatedValuesFor_localConstant (extractedValue_6611__0, extractedValue_6611__1, extractedValue_6611__2) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_valueState_6440.objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 182)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 183)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 183)) ;
          }
        }
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_6792__0 ;
      GGS_lstring extractedValue_6792__1 ;
      var_property_6459.getAssociatedValuesFor_localVariable (extractedValue_6792__0, extractedValue_6792__1) ;
      switch (var_valueState_6440.enumValue ()) {
      case GGS_valuedObjectState::Enumeration::invalid:
        break ;
      case GGS_valuedObjectState::Enumeration::enum_noValue:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("'").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)).add_operation (GGS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 188)) ;
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 190)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 190)) ;
          }
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadAccess (GGS_universalValuedObjectMap & ioObject,
                                                      const GGS_lstring constinArgument_inValuedObjectName,
                                                      GGS_objectIR & outArgument_outObjectIR,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GGS_valuedObjectState var_valueState_7409 ;
  GGS_valuedObject var_property_7428 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_bool joker_7420 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_7409, joker_7420, var_property_7428, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 202)) ;
  switch (var_property_7428.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_7482_type_0 ;
      var_property_7428.getAssociatedValuesFor_task (extractedValue_7482_type_0) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_7482_type_0, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 205))  COMMA_SOURCE_FILE ("universal-map.galgas", 205)) ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_7618_type_0 ;
      GGS_bool extractedValue_7623_instancied_1 ;
      var_property_7428.getAssociatedValuesFor_driver (extractedValue_7618_type_0, extractedValue_7623_instancied_1) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extractedValue_7623_instancied_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_7618_type_0, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 208))  COMMA_SOURCE_FILE ("universal-map.galgas", 208)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 210)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_7893_objectIR_0 ;
      var_property_7428.getAssociatedValuesFor_globalConstant (extractedValue_7893_objectIR_0) ;
      outArgument_outObjectIR = extractedValue_7893_objectIR_0 ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_7967_type_0 ;
      GGS_lstring extractedValue_7981_omnibusName_1 ;
      GGS_bool extractedValue_7993__2 ;
      var_property_7428.getAssociatedValuesFor_localConstant (extractedValue_7967_type_0, extractedValue_7981_omnibusName_1, extractedValue_7993__2) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_7967_type_0, function_llvmNameForLocalVariable (extractedValue_7981_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 215))  COMMA_SOURCE_FILE ("universal-map.galgas", 215)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_valueState_7409.objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 216)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 217)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 217)) ;
          }
        }
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_8292_type_0 ;
      GGS_lstring extractedValue_8306_omnibusName_1 ;
      var_property_7428.getAssociatedValuesFor_globalSyncInstance (extractedValue_8292_type_0, extractedValue_8306_omnibusName_1) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_8292_type_0, function_llvmNameForGlobalSyncInstance (extractedValue_8306_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 220))  COMMA_SOURCE_FILE ("universal-map.galgas", 220)) ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_8453_type_0 ;
      GGS_lstring extractedValue_8467_omnibusName_1 ;
      var_property_7428.getAssociatedValuesFor_localVariable (extractedValue_8453_type_0, extractedValue_8467_omnibusName_1) ;
      switch (var_valueState_7409.enumValue ()) {
      case GGS_valuedObjectState::Enumeration::invalid:
        break ;
      case GGS_valuedObjectState::Enumeration::enum_noValue:
        {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("'").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 224)).add_operation (GGS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 224)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 224)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 226)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 226)) ;
          }
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_8453_type_0, function_llvmNameForLocalVariable (extractedValue_8467_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 227))  COMMA_SOURCE_FILE ("universal-map.galgas", 227)) ;
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
        {
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_8453_type_0, function_llvmNameForLocalVariable (extractedValue_8467_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 229))  COMMA_SOURCE_FILE ("universal-map.galgas", 229)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForWriteAccess (GGS_universalValuedObjectMap & ioObject,
                                                       const GGS_lstring constinArgument_inValuedObjectName,
                                                       GGS_objectIR & outArgument_outObjectIR,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GGS_valuedObjectState var_valueState_9297 ;
  GGS_valuedObject var_property_9316 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_bool joker_9308 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_9297, joker_9308, var_property_9316, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 240)) ;
  switch (var_property_9316.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_9357__0 ;
      var_property_9316.getAssociatedValuesFor_task (extractedValue_9357__0) ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a task cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 243)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_9449__0 ;
      GGS_bool extractedValue_9451__1 ;
      var_property_9316.getAssociatedValuesFor_driver (extractedValue_9449__0, extractedValue_9451__1) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a driver cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 245)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_9553__0 ;
      var_property_9316.getAssociatedValuesFor_globalConstant (extractedValue_9553__0) ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 247)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_9662__0 ;
      GGS_lstring extractedValue_9662__1 ;
      var_property_9316.getAssociatedValuesFor_globalSyncInstance (extractedValue_9662__0, extractedValue_9662__1) ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a global sync instance cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 249)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_9778__0 ;
      GGS_lstring extractedValue_9778__1 ;
      GGS_bool extractedValue_9778__2 ;
      var_property_9316.getAssociatedValuesFor_localConstant (extractedValue_9778__0, extractedValue_9778__1, extractedValue_9778__2) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a constant cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 251)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_9894_type_0 ;
      GGS_lstring extractedValue_9908_omnibusName_1 ;
      var_property_9316.getAssociatedValuesFor_localVariable (extractedValue_9894_type_0, extractedValue_9908_omnibusName_1) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_9894_type_0, function_llvmNameForLocalVariable (extractedValue_9908_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 253))  COMMA_SOURCE_FILE ("universal-map.galgas", 253)) ;
      switch (var_valueState_9297.enumValue ()) {
      case GGS_valuedObjectState::Enumeration::invalid:
        break ;
      case GGS_valuedObjectState::Enumeration::enum_noValue:
      case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 256)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 256)) ;
          }
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("previous '").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 258)).add_operation (GGS_string ("' value has not been read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 258)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 258)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadWriteAccess (GGS_universalValuedObjectMap & ioObject,
                                                           const GGS_lstring constinArgument_inValuedObjectName,
                                                           GGS_objectIR & outArgument_outObjectIR,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GGS_valuedObjectState var_valueState_10655 ;
  GGS_valuedObject var_property_10674 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_bool joker_10666 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_10655, joker_10666, var_property_10674, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 269)) ;
  switch (var_property_10674.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_10715__0 ;
      var_property_10674.getAssociatedValuesFor_task (extractedValue_10715__0) ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a task has no value"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 272)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_10802__0 ;
      GGS_bool extractedValue_10804__1 ;
      var_property_10674.getAssociatedValuesFor_driver (extractedValue_10802__0, extractedValue_10804__1) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a driver has no value"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 274)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_10901__0 ;
      var_property_10674.getAssociatedValuesFor_globalConstant (extractedValue_10901__0) ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 276)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_11005__0 ;
      GGS_lstring extractedValue_11005__1 ;
      GGS_bool extractedValue_11005__2 ;
      var_property_10674.getAssociatedValuesFor_localConstant (extractedValue_11005__0, extractedValue_11005__1, extractedValue_11005__2) ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a constant cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 278)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_11114__0 ;
      GGS_lstring extractedValue_11114__1 ;
      var_property_10674.getAssociatedValuesFor_globalSyncInstance (extractedValue_11114__0, extractedValue_11114__1) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a global sync instance cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 280)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_11242_type_0 ;
      GGS_lstring extractedValue_11256_omnibusName_1 ;
      var_property_10674.getAssociatedValuesFor_localVariable (extractedValue_11242_type_0, extractedValue_11256_omnibusName_1) ;
      switch (var_valueState_10655.enumValue ()) {
      case GGS_valuedObjectState::Enumeration::invalid:
        break ;
      case GGS_valuedObjectState::Enumeration::enum_noValue:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("object has no value"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 284)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
        {
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_11242_type_0, function_llvmNameForLocalVariable (extractedValue_11256_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 286))  COMMA_SOURCE_FILE ("universal-map.galgas", 286)) ;
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 288)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 288)) ;
          }
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_11242_type_0, function_llvmNameForLocalVariable (extractedValue_11256_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 289))  COMMA_SOURCE_FILE ("universal-map.galgas", 289)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObjectType (const GGS_universalValuedObjectMap inObject,
                                             const GGS_semanticContext constinArgument_inContext,
                                             const GGS_omnibusType constinArgument_inSelfType,
                                             const GGS_LValueAST constinArgument_inLValue,
                                             GGS_omnibusType & outArgument_outType,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLValue.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outType = constinArgument_inSelfType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_valuedObject var_property_12251 ;
    const GGS_universalValuedObjectMap temp_1 = inObject ;
    GGS_valuedObjectState joker_12242_2 ; // Joker input parameter
    GGS_bool joker_12242_1 ; // Joker input parameter
    temp_1.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inLValue.readProperty_mIdentifier (), joker_12242_2, joker_12242_1, var_property_12251, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 305)) ;
    switch (var_property_12251.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_12296__0 ;
        var_property_12251.getAssociatedValuesFor_task (extractedValue_12296__0) ;
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GGS_string ("undefined in this context"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 308)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_12391__0 ;
        GGS_bool extractedValue_12393__1 ;
        var_property_12251.getAssociatedValuesFor_driver (extractedValue_12391__0, extractedValue_12393__1) ;
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GGS_string ("undefined in this context"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 310)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_12496__0 ;
        var_property_12251.getAssociatedValuesFor_globalConstant (extractedValue_12496__0) ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GGS_string ("undefined in this context"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 312)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_12599__0 ;
        GGS_lstring extractedValue_12599__1 ;
        GGS_bool extractedValue_12599__2 ;
        var_property_12251.getAssociatedValuesFor_localConstant (extractedValue_12599__0, extractedValue_12599__1, extractedValue_12599__2) ;
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GGS_string ("undefined in this context"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 314)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_12714_type_0 ;
        GGS_lstring extractedValue_12719__1 ;
        var_property_12251.getAssociatedValuesFor_localVariable (extractedValue_12714_type_0, extractedValue_12719__1) ;
        outArgument_outType = extractedValue_12714_type_0 ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_12787_type_0 ;
        GGS_lstring extractedValue_12792__1 ;
        var_property_12251.getAssociatedValuesFor_globalSyncInstance (extractedValue_12787_type_0, extractedValue_12792__1) ;
        outArgument_outType = extractedValue_12787_type_0 ;
      }
      break ;
    }
  }
  extensionMethod_getValuedObjectType (constinArgument_inLValue.readProperty_mOperand (), constinArgument_inContext, outArgument_outType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 321)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST getValuedObjectType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_getValuedObjectType (const GGS_LValueOperandAST inObject,
                                          const GGS_semanticContext constinArgument_inContext,
                                          GGS_omnibusType & ioArgument_ioType,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_13187_propertyName_0 ;
      GGS_LValueOperandAST extractedValue_13218_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_13187_propertyName_0, extractedValue_13218_next_1) ;
      GGS_propertyGetterMap var_propertyGetterMap_13258 = extensionGetter_propertyGetterMap (constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 334)) ;
      GGS_propertyGetterKind var_accessKind_13371 ;
      GGS_propertyVisibility joker_13363 ; // Joker input parameter
      var_propertyGetterMap_13258.method_searchKey (extractedValue_13187_propertyName_0, joker_13363, var_accessKind_13371, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 335)) ;
      switch (var_accessKind_13371.enumValue ()) {
      case GGS_propertyGetterKind::Enumeration::invalid:
        break ;
      case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
        {
          GGS_objectIR extractedValue_13432_value_0 ;
          var_accessKind_13371.getAssociatedValuesFor_constantProperty (extractedValue_13432_value_0) ;
          ioArgument_ioType = extensionGetter_type (extractedValue_13432_value_0, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 338)) ;
        }
        break ;
      case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
        {
          GGS_omnibusType extractedValue_13494_type_0 ;
          GGS_uint extractedValue_13499__1 ;
          var_accessKind_13371.getAssociatedValuesFor_storedProperty (extractedValue_13494_type_0, extractedValue_13499__1) ;
          ioArgument_ioType = extractedValue_13494_type_0 ;
        }
        break ;
      case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
        {
          GGS_unifiedTypeMapEntry extractedValue_13551_propertyTypeProxy_0 ;
          GGS_routineLLVMNameDict extractedValue_13569__1 ;
          var_accessKind_13371.getAssociatedValuesFor_computedProperty (extractedValue_13551_propertyTypeProxy_0, extractedValue_13569__1) ;
          ioArgument_ioType = extensionGetter_type (extractedValue_13551_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 342)) ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_13218_next_1, constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 344)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_13703__0 ;
      GGS_location extractedValue_13703__1 ;
      GGS_bool extractedValue_13703__2 ;
      GGS_LValueOperandAST extractedValue_13723_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_13703__0, extractedValue_13703__1, extractedValue_13703__2, extractedValue_13723_next_3) ;
      switch (ioArgument_ioType.readProperty_subscript ().enumValue ()) {
      case GGS_subscript::Enumeration::invalid:
        break ;
      case GGS_subscript::Enumeration::enum_noSubscript:
        break ;
      case GGS_subscript::Enumeration::enum_literalString:
        break ;
      case GGS_subscript::Enumeration::enum_staticSubscript:
        {
          GGS_omnibusType extractedValue_13846_elementType_0 ;
          GGS_bigint extractedValue_13858__1 ;
          ioArgument_ioType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_13846_elementType_0, extractedValue_13858__1) ;
          ioArgument_ioType = extractedValue_13846_elementType_0 ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_13723_next_3, constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 352)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap checkLocalVariableFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkLocalVariableFinalState (const GGS_universalValuedObjectMap inObject,
                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_universalValuedObjectMap temp_0 = inObject ;
  UpEnumerator_flatValuedObjectMap enumerator_14318 (temp_0.readProperty_mInternalPropertyAndRoutineMap ()) ;
  while (enumerator_14318.hasCurrentObject ()) {
    switch (enumerator_14318.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_14529_type_0 ;
        GGS_lstring extractedValue_14543_omnibusName_1 ;
        GGS_bool extractedValue_14561_isFormalInputArg_2 ;
        enumerator_14318.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localConstant (extractedValue_14529_type_0, extractedValue_14543_omnibusName_1, extractedValue_14561_isFormalInputArg_2) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = extractedValue_14561_isFormalInputArg_2.operator_not (SOURCE_FILE ("universal-map.galgas", 372)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_14529_type_0, extractedValue_14543_omnibusName_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 373)) ;
            }
          }
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_14869_type_0 ;
        GGS_lstring extractedValue_14883_omnibusName_1 ;
        enumerator_14318.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localVariable (extractedValue_14869_type_0, extractedValue_14883_omnibusName_1) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_bool test_3 = GGS_bool (ComparisonKind::equal, enumerator_14318.current (HERE).readProperty_mObjectState ().objectCompare (GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 376)))) ;
          if (GalgasBool::boolTrue == test_3.boolEnum ()) {
            test_3 = enumerator_14318.current (HERE).readProperty_mObjectShouldBeValuedAtEndOfScope () ;
          }
          test_2 = test_3.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14318.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("'").add_operation (enumerator_14318.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 377)).add_operation (GGS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 377)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 377)) ;
          }
        }
        {
        extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_14869_type_0, extractedValue_14883_omnibusName_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 379)) ;
        }
      }
      break ;
    }
    enumerator_14318.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GGS_universalValuedObjectMap & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap var_initialStateMap_15386 = GGS_referenceStateMap::init (inCompiler COMMA_HERE) ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  UpEnumerator_flatValuedObjectMap enumerator_15428 (temp_0.readProperty_mInternalPropertyAndRoutineMap ()) ;
  while (enumerator_15428.hasCurrentObject ()) {
    switch (enumerator_15428.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_15627__0 ;
        GGS_lstring extractedValue_15627__1 ;
        GGS_bool extractedValue_15627__2 ;
        enumerator_15428.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localConstant (extractedValue_15627__0, extractedValue_15627__1, extractedValue_15627__2) ;
        {
        var_initialStateMap_15386.setter_insertKey (enumerator_15428.current (HERE).readProperty_lkey (), enumerator_15428.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 395)) ;
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_15724__0 ;
        GGS_lstring extractedValue_15725__1 ;
        enumerator_15428.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localVariable (extractedValue_15724__0, extractedValue_15725__1) ;
        {
        var_initialStateMap_15386.setter_insertKey (enumerator_15428.current (HERE).readProperty_lkey (), enumerator_15428.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 397)) ;
        }
      }
      break ;
    }
    enumerator_15428.gotoNextObject () ;
  }
  const GGS_universalValuedObjectMap temp_1 = ioObject ;
  ioObject.mProperty_mScopeStack.addAssignOperation (GGS_scopeKind::class_func_selectScope (SOURCE_FILE ("universal-map.galgas", 400)), GGS_bool (true), var_initialStateMap_15386, GGS_referenceStateMap::init (inCompiler COMMA_HERE), temp_1.readProperty_mLocalObjectList ()  COMMA_SOURCE_FILE ("universal-map.galgas", 400)) ;
  ioObject.mProperty_mLocalObjectList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GGS_universalValuedObjectMap & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap var_initialStateMap_16141 = GGS_referenceStateMap::init (inCompiler COMMA_HERE) ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  UpEnumerator_flatValuedObjectMap enumerator_16183 (temp_0.readProperty_mInternalPropertyAndRoutineMap ()) ;
  while (enumerator_16183.hasCurrentObject ()) {
    switch (enumerator_16183.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_16382__0 ;
        GGS_lstring extractedValue_16382__1 ;
        GGS_bool extractedValue_16382__2 ;
        enumerator_16183.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localConstant (extractedValue_16382__0, extractedValue_16382__1, extractedValue_16382__2) ;
        {
        var_initialStateMap_16141.setter_insertKey (enumerator_16183.current (HERE).readProperty_lkey (), enumerator_16183.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 415)) ;
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_16479__0 ;
        GGS_lstring extractedValue_16480__1 ;
        enumerator_16183.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localVariable (extractedValue_16479__0, extractedValue_16480__1) ;
        {
        var_initialStateMap_16141.setter_insertKey (enumerator_16183.current (HERE).readProperty_lkey (), enumerator_16183.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 417)) ;
        }
      }
      break ;
    }
    enumerator_16183.gotoNextObject () ;
  }
  const GGS_universalValuedObjectMap temp_1 = ioObject ;
  ioObject.mProperty_mScopeStack.addAssignOperation (GGS_scopeKind::class_func_repeatScope (SOURCE_FILE ("universal-map.galgas", 420)), GGS_bool (true), var_initialStateMap_16141, GGS_referenceStateMap::init (inCompiler COMMA_HERE), temp_1.readProperty_mLocalObjectList ()  COMMA_SOURCE_FILE ("universal-map.galgas", 420)) ;
  ioObject.mProperty_mLocalObjectList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GGS_universalValuedObjectMap & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap var_initialStateMap_16892 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_scopeKind joker_16881 ; // Joker input parameter
  GGS_bool joker_16884 ; // Joker input parameter
  GGS_referenceStateMap joker_16908_2 ; // Joker input parameter
  GGS_lstringlist joker_16908_1 ; // Joker input parameter
  temp_0.readProperty_mScopeStack ().method_last (joker_16881, joker_16884, var_initialStateMap_16892, joker_16908_2, joker_16908_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 427)) ;
  UpEnumerator_referenceStateMap enumerator_16924 (var_initialStateMap_16892) ;
  while (enumerator_16924.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_16924.current_mState (HERE), enumerator_16924.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 429)) ;
    }
    enumerator_16924.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GGS_universalValuedObjectMap & ioObject,
                                  const GGS_location constinArgument_inErrorLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeKind var_scopeKind_17287 ;
  GGS_bool var_firstBranch_17302 ;
  GGS_referenceStateMap var_initialStateMap_17319 ;
  GGS_referenceStateMap var_referenceStateMap_17340 ;
  GGS_lstringlist var_localObjectList_17363 ;
  {
  ioObject.mProperty_mScopeStack.setter_popLast (var_scopeKind_17287, var_firstBranch_17302, var_initialStateMap_17319, var_referenceStateMap_17340, var_localObjectList_17363, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 436)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_firstBranch_17302.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_referenceStateMap var_newReferenceStateMap_17429 = GGS_referenceStateMap::init (inCompiler COMMA_HERE) ;
      const GGS_universalValuedObjectMap temp_1 = ioObject ;
      UpEnumerator_flatValuedObjectMap enumerator_17478 (temp_1.readProperty_mInternalPropertyAndRoutineMap ()) ;
      while (enumerator_17478.hasCurrentObject ()) {
        switch (enumerator_17478.current (HERE).readProperty_mValuedObject ().enumValue ()) {
        case GGS_valuedObject::Enumeration::invalid:
          break ;
        case GGS_valuedObject::Enumeration::enum_task:
          break ;
        case GGS_valuedObject::Enumeration::enum_driver:
          break ;
        case GGS_valuedObject::Enumeration::enum_globalConstant:
          break ;
        case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
          break ;
        case GGS_valuedObject::Enumeration::enum_localConstant:
          {
            GGS_omnibusType extractedValue_17689__0 ;
            GGS_lstring extractedValue_17689__1 ;
            GGS_bool extractedValue_17689__2 ;
            enumerator_17478.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localConstant (extractedValue_17689__0, extractedValue_17689__1, extractedValue_17689__2) ;
            {
            var_newReferenceStateMap_17429.setter_insertKey (enumerator_17478.current (HERE).readProperty_lkey (), enumerator_17478.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 446)) ;
            }
          }
          break ;
        case GGS_valuedObject::Enumeration::enum_localVariable:
          {
            GGS_omnibusType extractedValue_17795__0 ;
            GGS_lstring extractedValue_17796__1 ;
            enumerator_17478.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localVariable (extractedValue_17795__0, extractedValue_17796__1) ;
            {
            var_newReferenceStateMap_17429.setter_insertKey (enumerator_17478.current (HERE).readProperty_lkey (), enumerator_17478.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 448)) ;
            }
          }
          break ;
        }
        enumerator_17478.gotoNextObject () ;
      }
      ioObject.mProperty_mScopeStack.addAssignOperation (var_scopeKind_17287, GGS_bool (false), var_initialStateMap_17319, var_newReferenceStateMap_17429, var_localObjectList_17363  COMMA_SOURCE_FILE ("universal-map.galgas", 451)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    switch (var_scopeKind_17287.enumValue ()) {
    case GGS_scopeKind::Enumeration::invalid:
      break ;
    case GGS_scopeKind::Enumeration::enum_selectScope:
      {
        UpEnumerator_referenceStateMap enumerator_18059 (var_referenceStateMap_17340) ;
        while (enumerator_18059.hasCurrentObject ()) {
          GGS_valuedObjectState var_currentObjectState_18165 ;
          const GGS_universalValuedObjectMap temp_2 = ioObject ;
          GGS_bool joker_18184_2 ; // Joker input parameter
          GGS_valuedObject joker_18184_1 ; // Joker input parameter
          temp_2.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_18059.current_lkey (HERE), var_currentObjectState_18165, joker_18184_2, joker_18184_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 456)) ;
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_18059.current_mState (HERE).objectCompare (var_currentObjectState_18165)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, var_currentObjectState_18165.objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 458)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_18059.current_mState (HERE).objectCompare (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 458)))) COMMA_SOURCE_FILE ("universal-map.galgas", 458)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_currentObjectState_18165.objectCompare (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 459)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_18059.current_mState (HERE).objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 459)))) COMMA_SOURCE_FILE ("universal-map.galgas", 459)).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  var_referenceStateMap_17340.setter_setMStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 460)), enumerator_18059.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 460)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid state for object '").add_operation (enumerator_18059.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (GGS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (extensionGetter_string (var_currentObjectState_18165, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (GGS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (extensionGetter_string (enumerator_18059.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 462)) ;
              }
            }
          }
          enumerator_18059.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssignOperation (var_scopeKind_17287, GGS_bool (false), var_initialStateMap_17319, var_referenceStateMap_17340, var_localObjectList_17363  COMMA_SOURCE_FILE ("universal-map.galgas", 466)) ;
      }
      break ;
    case GGS_scopeKind::Enumeration::enum_repeatScope:
      {
        UpEnumerator_referenceStateMap enumerator_18860 (var_referenceStateMap_17340) ;
        while (enumerator_18860.hasCurrentObject ()) {
          GGS_valuedObjectState var_currentObjectState_18963 ;
          const GGS_universalValuedObjectMap temp_7 = ioObject ;
          GGS_bool joker_18982_2 ; // Joker input parameter
          GGS_valuedObject joker_18982_1 ; // Joker input parameter
          temp_7.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_18860.current_lkey (HERE), var_currentObjectState_18963, joker_18982_2, joker_18982_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 469)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_18860.current_mState (HERE).objectCompare (var_currentObjectState_18963)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid state for object '").add_operation (enumerator_18860.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (GGS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (extensionGetter_string (var_currentObjectState_18963, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (GGS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (extensionGetter_string (enumerator_18860.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), fixItArray9  COMMA_SOURCE_FILE ("universal-map.galgas", 471)) ;
            }
          }
          enumerator_18860.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssignOperation (var_scopeKind_17287, GGS_bool (false), var_initialStateMap_17319, var_referenceStateMap_17340, var_localObjectList_17363  COMMA_SOURCE_FILE ("universal-map.galgas", 475)) ;
      }
      break ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GGS_universalValuedObjectMap & ioObject,
                                    const GGS_location constinArgument_inErrorLocation,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap var_referenceStateMap_19566 ;
  GGS_lstringlist var_localObjectList_19589 ;
  {
  GGS_scopeKind joker_19552 ; // Joker input parameter
  GGS_bool joker_19555 ; // Joker input parameter
  GGS_referenceStateMap joker_19558 ; // Joker input parameter
  ioObject.mProperty_mScopeStack.setter_popLast (joker_19552, joker_19555, joker_19558, var_referenceStateMap_19566, var_localObjectList_19589, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)) ;
  }
  UpEnumerator_referenceStateMap enumerator_19649 (var_referenceStateMap_19566) ;
  while (enumerator_19649.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_19649.current_mState (HERE), enumerator_19649.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 486)) ;
    }
    enumerator_19649.gotoNextObject () ;
  }
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  UpEnumerator_lstringlist enumerator_19839 (temp_0.readProperty_mLocalObjectList ()) ;
  while (enumerator_19839.hasCurrentObject ()) {
    GGS_valuedObjectState var_currentObjectState_19947 ;
    GGS_bool var_objectShouldBeValuedAtEndOfScope_19977 ;
    GGS_valuedObject var_possibleValuedObject_20021 ;
    const GGS_universalValuedObjectMap temp_1 = ioObject ;
    temp_1.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_19839.current_mValue (HERE), var_currentObjectState_19947, var_objectShouldBeValuedAtEndOfScope_19977, var_possibleValuedObject_20021, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 490)) ;
    switch (var_possibleValuedObject_20021.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_20214__0 ;
        GGS_lstring extractedValue_20214__1 ;
        GGS_bool extractedValue_20214__2 ;
        var_possibleValuedObject_20021.getAssociatedValuesFor_localConstant (extractedValue_20214__0, extractedValue_20214__1, extractedValue_20214__2) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_currentObjectState_19947.objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 502)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("'").add_operation (enumerator_19839.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)).add_operation (GGS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 503)) ;
          }
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_20370__0 ;
        GGS_lstring extractedValue_20371__1 ;
        var_possibleValuedObject_20021.getAssociatedValuesFor_localVariable (extractedValue_20370__0, extractedValue_20371__1) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_bool test_5 = GGS_bool (ComparisonKind::equal, var_currentObjectState_19947.objectCompare (GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 506)))) ;
          if (GalgasBool::boolTrue == test_5.boolEnum ()) {
            test_5 = var_objectShouldBeValuedAtEndOfScope_19977 ;
          }
          test_4 = test_5.boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("'").add_operation (enumerator_19839.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 507)).add_operation (GGS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 507)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 507)) ;
          }
        }
      }
      break ;
    }
    enumerator_19839.gotoNextObject () ;
  }
  const GGS_universalValuedObjectMap temp_7 = ioObject ;
  UpEnumerator_lstringlist enumerator_20611 (temp_7.readProperty_mLocalObjectList ()) ;
  while (enumerator_20611.hasCurrentObject ()) {
    {
    GGS_valuedObjectState joker_20704_3 ; // Joker input parameter
    GGS_bool joker_20704_2 ; // Joker input parameter
    GGS_valuedObject joker_20704_1 ; // Joker input parameter
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_removeKey (enumerator_20611.current_mValue (HERE), joker_20704_3, joker_20704_2, joker_20704_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 513)) ;
    }
    enumerator_20611.gotoNextObject () ;
  }
  ioObject.mProperty_mLocalObjectList = var_localObjectList_19589 ;
}


//--------------------------------------------------------------------------------------------------
// @llvmVarInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmVarInstruction::objectCompare (const GGS_llvmVarInstruction & inOperand) const {
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

GGS_llvmVarInstruction::GGS_llvmVarInstruction (void) :
GGS_abstractLLVMInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmVarInstruction GGS_llvmVarInstruction::
init_21_ (const GGS_lstring & in_mVariableName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_llvmVarInstruction * object = nullptr ;
  macroMyNew (object, cPtr_llvmVarInstruction (inCompiler COMMA_THERE)) ;
  object->llvmVarInstruction_init_21_ (in_mVariableName, inCompiler) ;
  const GGS_llvmVarInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmVarInstruction::
llvmVarInstruction_init_21_ (const GGS_lstring & in_mVariableName,
                             Compiler * /* inCompiler */) {
  mProperty_mVariableName = in_mVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction::GGS_llvmVarInstruction (const cPtr_llvmVarInstruction * inSourcePtr) :
GGS_abstractLLVMInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmVarInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction GGS_llvmVarInstruction::class_func_new (const GGS_lstring & in_mVariableName,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_llvmVarInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmVarInstruction (in_mVariableName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmVarInstruction::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmVarInstruction * p = (cPtr_llvmVarInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmVarInstruction) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmVarInstruction::setProperty_mVariableName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmVarInstruction * p = (cPtr_llvmVarInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmVarInstruction) ;
    p->mProperty_mVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmVarInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_llvmVarInstruction::cPtr_llvmVarInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mVariableName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmVarInstruction::cPtr_llvmVarInstruction (const GGS_lstring & in_mVariableName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mVariableName () {
  mProperty_mVariableName = in_mVariableName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_llvmVarInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction ;
}

void cPtr_llvmVarInstruction::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmVarInstruction:") ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmVarInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmVarInstruction (mProperty_mVariableName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmVarInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @llvmVarInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmVarInstruction ("llvmVarInstruction",
                                                                       & kTypeDescriptor_GALGAS_abstractLLVMInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmVarInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmVarInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmVarInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction GGS_llvmVarInstruction::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_llvmVarInstruction result ;
  const GGS_llvmVarInstruction * p = (const GGS_llvmVarInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmVarInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmVarInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_omnibusType::getter_llvmTypeName (Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  switch (temp_0.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_void:
    {
      result_result = GGS_string ("void") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
    {
      result_result = GGS_string ("i1") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      result_result = GGS_string ("i8*") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_2379_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_2379_bitCount_0) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2379_bitCount_0.getter_string (SOURCE_FILE ("types.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 65)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_2437__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_2437__0) ;
      const GGS_omnibusType temp_1 = this ;
      result_result = GGS_string ("%").add_operation (temp_1.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 67)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      const GGS_omnibusType temp_2 = this ;
      result_result = GGS_string ("%").add_operation (temp_2.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 69)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_2610__0 ;
      GGS_bigint extractedValue_2612__1 ;
      GGS_bool extractedValue_2614__2 ;
      GGS_uint extractedValue_2622_bitCount_3 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_2610__0, extractedValue_2612__1, extractedValue_2614__2, extractedValue_2622_bitCount_3) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2622_bitCount_3.getter_string (SOURCE_FILE ("types.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 71)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_2774__0 ;
      GGS_ctExpressionAST extractedValue_2774__1 ;
      GGS_llvmStringDefinition extractedValue_2774__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_2774__0, extractedValue_2774__1, extractedValue_2774__2) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_2846__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_2846__0) ;
      const GGS_omnibusType temp_3 = this ;
      result_result = temp_3.readProperty_llvmBaseTypeName () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_2909_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_2909_bitCount_0) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2909_bitCount_0.getter_string (SOURCE_FILE ("types.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 79)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_2973__0 ;
      GGS_bigint extractedValue_2975__1 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_2973__0, extractedValue_2975__1) ;
      const GGS_omnibusType temp_4 = this ;
      result_result = GGS_string ("%").add_operation (temp_4.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 81)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_3072__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_3072__0) ;
      result_result = GGS_string ("%ptrtype") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_3134__0 ;
      GGS_routineTypedSignature extractedValue_3136_signature_1 ;
      GGS_unifiedTypeMapEntry extractedValue_3146_returnTypeProxy_2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_3134__0, extractedValue_3136_signature_1, extractedValue_3146_returnTypeProxy_2) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extractedValue_3146_returnTypeProxy_2.getter_isNull (SOURCE_FILE ("types.galgas", 85)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          result_result = GGS_string ("void") ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (extractedValue_3146_returnTypeProxy_2, inCompiler COMMA_SOURCE_FILE ("types.galgas", 88)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 88)) ;
      }
      result_result.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 90)) ;
      UpEnumerator_routineTypedSignature enumerator_3361 (extractedValue_3136_signature_1) ;
      while (enumerator_3361.hasCurrentObject ()) {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_3361.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 93)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 93)) ;
        switch (enumerator_3361.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
          break ;
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
          {
            result_result.plusAssignOperation(GGS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 95)) ;
          }
          break ;
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
          break ;
        }
        enumerator_3361.gotoNextObject () ;
        if (enumerator_3361.hasCurrentObject ()) {
          result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 98)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 100)) ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_llvmTypeName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType checkIsCompileTimeType'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_checkIsCompileTimeType (const GGS_location constinArgument_inErrorLocation,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_omnibusType temp_1 = this ;
    const GGS_omnibusType temp_2 = this ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 107)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 107)) COMMA_SOURCE_FILE ("types.galgas", 107)).operator_not (SOURCE_FILE ("types.galgas", 107)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this type should be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas", 108)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (cPtr_omnibusType * inObject,
                                                 const GGS_location constin_inErrorLocation,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_checkIsCompileTimeType (constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType checkIsNotCompileTimeType'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_checkIsNotCompileTimeType (const GGS_location constinArgument_inErrorLocation,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_omnibusType temp_1 = this ;
    const GGS_omnibusType temp_2 = this ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 115)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 115)) COMMA_SOURCE_FILE ("types.galgas", 115)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this type should not be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas", 116)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (cPtr_omnibusType * inObject,
                                                    const GGS_location constin_inErrorLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_checkIsNotCompileTimeType (constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType isCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_isCompileTimeType (Compiler */* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  const GGS_omnibusType temp_1 = this ;
  result_result = temp_0.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 123)).operator_or (temp_1.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 123)) COMMA_SOURCE_FILE ("types.galgas", 123)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isCompileTimeType (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType instanciable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_instanciable (Compiler */* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_attributes ().getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas", 189)) COMMA_SOURCE_FILE ("types.galgas", 189)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_instanciable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType copyable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_copyable (Compiler */* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_attributes ().getter_contains (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 195)) COMMA_SOURCE_FILE ("types.galgas", 195)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_copyable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType generateRetain'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateRetain (const GGS_string constinArgument_inOmnibusName,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_7077 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 205)) ;
  GGS_string var_LLVMVariable_7118 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 206)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 207)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_tempLLVMVariable_7225 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 209)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempLLVMVariable_7225, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_llvmTypeName_7077, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_llvmTypeName_7077, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_LLVMVariable_7118, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 210)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_llvmTypeName_7077, inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (var_tempLLVMVariable_7225, inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 211)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)) ;
    GGS_arcAssignmentList var_arcAssignmentList_7609 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)) ;
    UpEnumerator_arcAssignmentList enumerator_7684 (var_arcAssignmentList_7609) ;
    while (enumerator_7684.hasCurrentObject ()) {
      GGS_string var_llvmVarName_7730 = GGS_string ("%arc.retain.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 215)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 216)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_7730, inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 217)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_llvmTypeName_7077.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)).add_operation (var_llvmTypeName_7077, inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)).add_operation (var_LLVMVariable_7118, inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 218)) ;
      UpEnumerator_uintlist enumerator_8002 (enumerator_7684.current_mPropertyIndexPath (HERE)) ;
      while (enumerator_8002.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_8002.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 220)) ;
        enumerator_8002.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_7684.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 222)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 222)) ;
      GGS_string var_propertyTypeLLVMName_8128 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7684.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 223)) ;
      GGS_string var_llvmLoadedVarName_8189 = var_llvmVarName_7730.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_8189, inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (var_propertyTypeLLVMName_8128, inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 225)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_propertyTypeLLVMName_8128.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)).add_operation (var_llvmVarName_7730, inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 226)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_8128, inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (var_llvmLoadedVarName_8189, inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 227)) ;
      enumerator_7684.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (cPtr_omnibusType * inObject,
                                         const GGS_string constin_inOmnibusName,
                                         GGS_string & io_ioLLVMcode,
                                         GGS_generationAdds & io_ioGenerationAdds,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateRetain (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType generateInsulate'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateInsulate (const GGS_string constinArgument_inOmnibusName,
                                                GGS_string & ioArgument_ioLLVMcode,
                                                GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_8770 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 239)) ;
  GGS_string var_LLVMVariable_8811 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 240)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 241)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_loadedVar_8918 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)) ;
      GGS_string var_insulatedVar_9037 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GGS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 244)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loadedVar_8918, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_llvmTypeName_8770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_llvmTypeName_8770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_LLVMVariable_8811, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 245)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_insulatedVar_9037, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_llvmTypeName_8770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GGS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_llvmTypeName_8770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_loadedVar_8918, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 246)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmTypeName_8770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_insulatedVar_9037, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_llvmTypeName_8770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_LLVMVariable_8811, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 247)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)) ;
    GGS_arcAssignmentList var_arcAssignmentList_9566 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)) ;
    UpEnumerator_arcAssignmentList enumerator_9641 (var_arcAssignmentList_9566) ;
    while (enumerator_9641.hasCurrentObject ()) {
      GGS_string var_llvmVarName_9687 = GGS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 252)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_9687, inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (var_llvmTypeName_8770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (var_llvmTypeName_8770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (var_LLVMVariable_8811, inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 253)) ;
      UpEnumerator_uintlist enumerator_9942 (enumerator_9641.current_mPropertyIndexPath (HERE)) ;
      while (enumerator_9942.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_9942.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 255)) ;
        enumerator_9942.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_9641.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 257)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 257)) ;
      GGS_string var_propertyTypeLLVMName_10068 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_9641.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 258)) ;
      GGS_string var_loadedVar_10129 = var_llvmVarName_9687.add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 259)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 259)) ;
      GGS_string var_insulatedVar_10209 = var_llvmVarName_9687.add_operation (GGS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 261)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loadedVar_10129, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_propertyTypeLLVMName_10068, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_propertyTypeLLVMName_10068, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_llvmVarName_9687, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 262)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_insulatedVar_10209, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_propertyTypeLLVMName_10068, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GGS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_propertyTypeLLVMName_10068, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_loadedVar_10129, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 263)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_propertyTypeLLVMName_10068, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_insulatedVar_10209, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_propertyTypeLLVMName_10068, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_llvmVarName_9687, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 264)) ;
      enumerator_9641.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (cPtr_omnibusType * inObject,
                                           const GGS_string constin_inOmnibusName,
                                           GGS_string & io_ioLLVMcode,
                                           GGS_generationAdds & io_ioGenerationAdds,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateInsulate (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType generateRelease'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateRelease (const GGS_string constinArgument_inOmnibusName,
                                               GGS_string & ioArgument_ioLLVMcode,
                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_11010 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 276)) ;
  GGS_string var_LLVMVariable_11051 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 278)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_tempLLVMVariable_11158 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 280)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempLLVMVariable_11158, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (var_llvmTypeName_11010, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (var_llvmTypeName_11010, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (var_LLVMVariable_11051, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 281)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_llvmTypeName_11010, inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)).add_operation (var_tempLLVMVariable_11158, inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 282)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)) ;
    GGS_arcAssignmentList var_arcAssignmentList_11548 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)) ;
    UpEnumerator_arcAssignmentList enumerator_11623 (var_arcAssignmentList_11548) ;
    while (enumerator_11623.hasCurrentObject ()) {
      GGS_string var_llvmVarName_11669 = GGS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 287)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_11669, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_llvmTypeName_11010, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_llvmTypeName_11010, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_LLVMVariable_11051, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 288)) ;
      UpEnumerator_uintlist enumerator_11924 (enumerator_11623.current_mPropertyIndexPath (HERE)) ;
      while (enumerator_11924.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_11924.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 290)) ;
        enumerator_11924.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_11623.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 292)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 292)) ;
      GGS_string var_propertyTypeLLVMName_12050 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_11623.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)) ;
      GGS_string var_llvmLoadedVarName_12111 = var_llvmVarName_11669.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_12111, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (var_propertyTypeLLVMName_12050, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (var_propertyTypeLLVMName_12050, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (var_llvmVarName_11669, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 295)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_12050, inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)).add_operation (var_llvmLoadedVarName_12111, inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 296)) ;
      enumerator_11623.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (cPtr_omnibusType * inObject,
                                          const GGS_string constin_inOmnibusName,
                                          GGS_string & io_ioLLVMcode,
                                          GGS_generationAdds & io_ioGenerationAdds,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateRelease (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType descriptionForHTMLFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_omnibusType::getter_descriptionForHTMLFile (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  switch (temp_0.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_void:
    {
      result_result = GGS_string ("Void") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
    {
      result_result = GGS_string ("Boolean") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      result_result = GGS_string ("Literal String") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_12763__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_12763__0) ;
      result_result = GGS_string ("Enumeration") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_12813__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_12813__0) ;
      result_result = GGS_string ("Structure") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      result_result = GGS_string ("Synchronization tool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_12913__0 ;
      GGS_bigint extractedValue_12915__1 ;
      GGS_bool extractedValue_12923_unsigned_2 ;
      GGS_uint extractedValue_12938_bitCount_3 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_12913__0, extractedValue_12915__1, extractedValue_12923_unsigned_2, extractedValue_12938_bitCount_3) ;
      GGS_string temp_1 ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, extractedValue_12938_bitCount_3.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        temp_1 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_2) {
        temp_1 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_3 ;
      const GalgasBool test_4 = extractedValue_12923_unsigned_2.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        temp_3 = GGS_string ("unsigned") ;
      }else if (GalgasBool::boolFalse == test_4) {
        temp_3 = GGS_string ("signed") ;
      }
      result_result = GGS_string ("Integer (").add_operation (extractedValue_12938_bitCount_3.getter_string (SOURCE_FILE ("types.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      result_result = GGS_string ("Compile Time Bool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      result_result = GGS_string ("Compile Time Integer") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_13245__0 ;
      GGS_ctExpressionAST extractedValue_13245__1 ;
      GGS_llvmStringDefinition extractedValue_13245__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_13245__0, extractedValue_13245__1, extractedValue_13245__2) ;
      result_result = GGS_string ("Generic Type") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_13295__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_13295__0) ;
      result_result = GGS_string ("LLVM Type") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_13348_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_13348_bitCount_0) ;
      result_result = GGS_string ("Opaque (").add_operation (extractedValue_13348_bitCount_0.getter_string (SOURCE_FILE ("types.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 329)).add_operation (GGS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 329)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_13430__0 ;
      GGS_bigint extractedValue_13432__1 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_13430__0, extractedValue_13432__1) ;
      result_result = GGS_string ("Static array") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_13490__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_13490__0) ;
      result_result = GGS_string ("Dynamic array") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_13542__0 ;
      GGS_routineTypedSignature extractedValue_13542__1 ;
      GGS_unifiedTypeMapEntry extractedValue_13542__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_13542__0, extractedValue_13542__1, extractedValue_13542__2) ;
      result_result = GGS_string ("Function") ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_descriptionForHTMLFile (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType arcList'
//
//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList cPtr_omnibusType::getter_arcList (const GGS_uintlist constinArgument_inPropertyIndexPath,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arcAssignmentList result_result ; // Returned variable
  GGS_arcAssignmentList temp_0 = GGS_arcAssignmentList::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 350)) ;
  result_result = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 351)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_omnibusType temp_3 = this ;
      result_result.addAssignOperation (GGS_string::makeEmptyString (), temp_3, constinArgument_inPropertyIndexPath  COMMA_SOURCE_FILE ("types.galgas", 352)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_omnibusType temp_5 = this ;
      test_4 = temp_5.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas", 353)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_propertyList var_propertyList_14259 ;
        const GGS_omnibusType temp_6 = this ;
        temp_6.readProperty_kind ().method_extractStructure (var_propertyList_14259, inCompiler COMMA_SOURCE_FILE ("types.galgas", 354)) ;
        UpEnumerator_propertyList enumerator_14284 (var_propertyList_14259) ;
        GGS_uint index_14277 (uint32_t (0)) ;
        while (enumerator_14284.hasCurrentObject ()) {
          GGS_uintlist temp_7 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 356)) ;
          temp_7.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (index_14277, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("types.galgas", 356)) ;
          GGS_uintlist var_indexPath_14333 = constinArgument_inPropertyIndexPath.add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("types.galgas", 356)) ;
          result_result.plusAssignOperation(callExtensionGetter_arcList ((const cPtr_omnibusType *) enumerator_14284.current_mType (HERE).ptr (), var_indexPath_14333, inCompiler COMMA_SOURCE_FILE ("types.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 357)) ;
          enumerator_14284.gotoNextObject () ;
          index_14277.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 355)) ;
        }
      }
    }
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                   const GGS_uintlist in_inPropertyIndexPath,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  if (nullptr != inObject) {
    result = inObject->getter_arcList (in_inPropertyIndexPath, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType deinitNeeded'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_deinitNeeded (Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 365)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas", 366)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyList var_propertyList_14750 ;
      const GGS_omnibusType temp_3 = this ;
      temp_3.readProperty_kind ().method_extractStructure (var_propertyList_14750, inCompiler COMMA_SOURCE_FILE ("types.galgas", 367)) ;
      UpEnumerator_propertyList enumerator_14775 (var_propertyList_14750) ;
      bool bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas", 368)).isValidAndTrue () ;
      if (enumerator_14775.hasCurrentObject () && bool_4) {
        while (enumerator_14775.hasCurrentObject () && bool_4) {
          result_result = callExtensionGetter_deinitNeeded ((const cPtr_omnibusType *) enumerator_14775.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 369)) ;
          enumerator_14775.gotoNextObject () ;
          if (enumerator_14775.hasCurrentObject ()) {
            bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas", 368)).isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_deinitNeeded (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSelectOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (GGS_instructionListIR & ioObject,
                                            const GGS_objectIR constinArgument_inTargetValue,
                                            const GGS_string constinArgument_in_5F_if_5F_variableLLVMName,
                                            const GGS_objectIR constinArgument_in_5F_then_5F_variable,
                                            const GGS_objectIR constinArgument_in_5F_else_5F_variable,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_selectInstructionIR::init_21__21__21__21_ (constinArgument_inTargetValue, constinArgument_in_5F_if_5F_variableLLVMName, constinArgument_in_5F_then_5F_variable, constinArgument_in_5F_else_5F_variable, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 8)) ;
}


//--------------------------------------------------------------------------------------------------
// @selectInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionIR::objectCompare (const GGS_selectInstructionIR & inOperand) const {
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

GGS_selectInstructionIR::GGS_selectInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::
init_21__21__21__21_ (const GGS_objectIR & in_mTargetValue,
                      const GGS_string & in_m_5F_if_5F_variableLLVMName,
                      const GGS_objectIR & in_m_5F_then_5F_variable,
                      const GGS_objectIR & in_m_5F_else_5F_variable,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionIR (inCompiler COMMA_THERE)) ;
  object->selectInstructionIR_init_21__21__21__21_ (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable, inCompiler) ;
  const GGS_selectInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionIR::
selectInstructionIR_init_21__21__21__21_ (const GGS_objectIR & in_mTargetValue,
                                          const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                          const GGS_objectIR & in_m_5F_then_5F_variable,
                                          const GGS_objectIR & in_m_5F_else_5F_variable,
                                          Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_m_5F_if_5F_variableLLVMName = in_m_5F_if_5F_variableLLVMName ;
  mProperty_m_5F_then_5F_variable = in_m_5F_then_5F_variable ;
  mProperty_m_5F_else_5F_variable = in_m_5F_else_5F_variable ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR::GGS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::class_func_new (const GGS_objectIR & in_mTargetValue,
                                                                 const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                                                 const GGS_objectIR & in_m_5F_then_5F_variable,
                                                                 const GGS_objectIR & in_m_5F_else_5F_variable,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstructionIR (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_mTargetValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectInstructionIR::readProperty_m_5F_if_5F_variableLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_if_5F_variableLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_if_5F_variableLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_if_5F_variableLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_m_5F_then_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_then_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_then_5F_variable (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_then_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_m_5F_else_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_else_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_else_5F_variable (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_else_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_m_5F_if_5F_variableLLVMName (),
mProperty_m_5F_then_5F_variable (),
mProperty_m_5F_else_5F_variable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (const GGS_objectIR & in_mTargetValue,
                                                    const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                                    const GGS_objectIR & in_m_5F_then_5F_variable,
                                                    const GGS_objectIR & in_m_5F_else_5F_variable,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_m_5F_if_5F_variableLLVMName (),
mProperty_m_5F_then_5F_variable (),
mProperty_m_5F_else_5F_variable () {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_m_5F_if_5F_variableLLVMName = in_m_5F_if_5F_variableLLVMName ;
  mProperty_m_5F_then_5F_variable = in_m_5F_then_5F_variable ;
  mProperty_m_5F_else_5F_variable = in_m_5F_else_5F_variable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selectInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

void cPtr_selectInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionIR:") ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_if_5F_variableLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_variable.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_variable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionIR (mProperty_mTargetValue, mProperty_m_5F_if_5F_variableLLVMName, mProperty_m_5F_then_5F_variable, mProperty_m_5F_else_5F_variable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetValue.printNonNullClassInstanceProperties ("mTargetValue") ;
    mProperty_m_5F_if_5F_variableLLVMName.printNonNullClassInstanceProperties ("m_if_variableLLVMName") ;
    mProperty_m_5F_then_5F_variable.printNonNullClassInstanceProperties ("m_then_variable") ;
    mProperty_m_5F_else_5F_variable.printNonNullClassInstanceProperties ("m_else_variable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR ("selectInstructionIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR result ;
  const GGS_selectInstructionIR * p = (const GGS_selectInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionIR_2E_weak::objectCompare (const GGS_selectInstructionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_selectInstructionIR_2E_weak::GGS_selectInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak & GGS_selectInstructionIR_2E_weak::operator = (const GGS_selectInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak::GGS_selectInstructionIR_2E_weak (const GGS_selectInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak GGS_selectInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_selectInstructionIR result ;
  if (isValid ()) {
    const cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR_2E_weak::bang_selectInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionIR) ;
      result = GGS_selectInstructionIR ((cPtr_selectInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ("selectInstructionIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak GGS_selectInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR_2E_weak result ;
  const GGS_selectInstructionIR_2E_weak * p = (const GGS_selectInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getUniversalArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getUniversalArrayElementReferenceIR::objectCompare (const GGS_getUniversalArrayElementReferenceIR & inOperand) const {
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

GGS_getUniversalArrayElementReferenceIR::GGS_getUniversalArrayElementReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR::
init_21__21__21__21__21_ (const GGS_omnibusType & in_mType,
                          const GGS_string & in_mLLVMName,
                          const GGS_omnibusType & in_mElementType,
                          const GGS_string & in_mElementLLVMName,
                          const GGS_objectIR & in_mIndexIR,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_getUniversalArrayElementReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_getUniversalArrayElementReferenceIR (inCompiler COMMA_THERE)) ;
  object->getUniversalArrayElementReferenceIR_init_21__21__21__21__21_ (in_mType, in_mLLVMName, in_mElementType, in_mElementLLVMName, in_mIndexIR, inCompiler) ;
  const GGS_getUniversalArrayElementReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getUniversalArrayElementReferenceIR::
getUniversalArrayElementReferenceIR_init_21__21__21__21__21_ (const GGS_omnibusType & in_mType,
                                                              const GGS_string & in_mLLVMName,
                                                              const GGS_omnibusType & in_mElementType,
                                                              const GGS_string & in_mElementLLVMName,
                                                              const GGS_objectIR & in_mIndexIR,
                                                              Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mElementLLVMName = in_mElementLLVMName ;
  mProperty_mIndexIR = in_mIndexIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR::GGS_getUniversalArrayElementReferenceIR (const cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalArrayElementReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR::class_func_new (const GGS_omnibusType & in_mType,
                                                                                                 const GGS_string & in_mLLVMName,
                                                                                                 const GGS_omnibusType & in_mElementType,
                                                                                                 const GGS_string & in_mElementLLVMName,
                                                                                                 const GGS_objectIR & in_mIndexIR,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getUniversalArrayElementReferenceIR (in_mType, in_mLLVMName, in_mElementType, in_mElementLLVMName, in_mIndexIR,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_getUniversalArrayElementReferenceIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalArrayElementReferenceIR::setProperty_mType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getUniversalArrayElementReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalArrayElementReferenceIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_getUniversalArrayElementReferenceIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalArrayElementReferenceIR::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getUniversalArrayElementReferenceIR::readProperty_mElementLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mElementLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalArrayElementReferenceIR::setProperty_mElementLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mElementLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getUniversalArrayElementReferenceIR::readProperty_mIndexIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mIndexIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalArrayElementReferenceIR::setProperty_mIndexIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mIndexIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getUniversalArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getUniversalArrayElementReferenceIR::cPtr_getUniversalArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_mLLVMName (),
mProperty_mElementType (),
mProperty_mElementLLVMName (),
mProperty_mIndexIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getUniversalArrayElementReferenceIR::cPtr_getUniversalArrayElementReferenceIR (const GGS_omnibusType & in_mType,
                                                                                    const GGS_string & in_mLLVMName,
                                                                                    const GGS_omnibusType & in_mElementType,
                                                                                    const GGS_string & in_mElementLLVMName,
                                                                                    const GGS_objectIR & in_mIndexIR,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_mLLVMName (),
mProperty_mElementType (),
mProperty_mElementLLVMName (),
mProperty_mIndexIR () {
  mProperty_mType = in_mType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mElementLLVMName = in_mElementLLVMName ;
  mProperty_mIndexIR = in_mIndexIR ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getUniversalArrayElementReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

void cPtr_getUniversalArrayElementReferenceIR::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@getUniversalArrayElementReferenceIR:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getUniversalArrayElementReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getUniversalArrayElementReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementType, mProperty_mElementLLVMName, mProperty_mIndexIR, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getUniversalArrayElementReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mElementLLVMName.printNonNullClassInstanceProperties ("mElementLLVMName") ;
    mProperty_mIndexIR.printNonNullClassInstanceProperties ("mIndexIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getUniversalArrayElementReferenceIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ("getUniversalArrayElementReferenceIR",
                                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getUniversalArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR result ;
  const GGS_getUniversalArrayElementReferenceIR * p = (const GGS_getUniversalArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sliceAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sliceAssignmentInstructionAST::objectCompare (const GGS_sliceAssignmentInstructionAST & inOperand) const {
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

GGS_sliceAssignmentInstructionAST::GGS_sliceAssignmentInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_lstring & in_mTypeName,
                          const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                          const GGS_expressionAST & in_mSourceExpression,
                          const GGS_location & in_mSourceExpressionLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_sliceAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_sliceAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->sliceAssignmentInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GGS_sliceAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::
sliceAssignmentInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_lstring & in_mTypeName,
                                                        const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                        const GGS_expressionAST & in_mSourceExpression,
                                                        const GGS_location & in_mSourceExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceAssignmentList = in_mSliceAssignmentList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST::GGS_sliceAssignmentInstructionAST (const cPtr_sliceAssignmentInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sliceAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_lstring & in_mTypeName,
                                                                                     const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                                     const GGS_expressionAST & in_mSourceExpression,
                                                                                     const GGS_location & in_mSourceExpressionLocation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sliceAssignmentInstructionAST (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sliceAssignmentInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentInstructionAST::readProperty_mSliceAssignmentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sliceAssignmentListAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSliceAssignmentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSliceAssignmentList (const GGS_sliceAssignmentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSliceAssignmentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_sliceAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_sliceAssignmentInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSourceExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sliceAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceAssignmentList (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mTypeName,
                                                                        const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                        const GGS_expressionAST & in_mSourceExpression,
                                                                        const GGS_location & in_mSourceExpressionLocation,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceAssignmentList (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceAssignmentList = in_mSliceAssignmentList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sliceAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

void cPtr_sliceAssignmentInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@sliceAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSliceAssignmentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sliceAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sliceAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mSliceAssignmentList, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sliceAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mSliceAssignmentList.printNonNullClassInstanceProperties ("mSliceAssignmentList") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceExpressionLocation.printNonNullClassInstanceProperties ("mSourceExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sliceAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ("sliceAssignmentInstructionAST",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentInstructionAST result ;
  const GGS_sliceAssignmentInstructionAST * p = (const GGS_sliceAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sliceAssignmentInstructionAST_2E_weak::objectCompare (const GGS_sliceAssignmentInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_sliceAssignmentInstructionAST_2E_weak::GGS_sliceAssignmentInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST_2E_weak & GGS_sliceAssignmentInstructionAST_2E_weak::operator = (const GGS_sliceAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST_2E_weak::GGS_sliceAssignmentInstructionAST_2E_weak (const GGS_sliceAssignmentInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST_2E_weak GGS_sliceAssignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sliceAssignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_sliceAssignmentInstructionAST result ;
  if (isValid ()) {
    const cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_sliceAssignmentInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST_2E_weak::bang_sliceAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sliceAssignmentInstructionAST) ;
      result = GGS_sliceAssignmentInstructionAST ((cPtr_sliceAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sliceAssignmentInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2E_weak ("sliceAssignmentInstructionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceAssignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceAssignmentInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceAssignmentInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST_2E_weak GGS_sliceAssignmentInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentInstructionAST_2E_weak result ;
  const GGS_sliceAssignmentInstructionAST_2E_weak * p = (const GGS_sliceAssignmentInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceAssignmentInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @standaloneFunctionInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_standaloneFunctionInExpressionAST::objectCompare (const GGS_standaloneFunctionInExpressionAST & inOperand) const {
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

GGS_standaloneFunctionInExpressionAST::GGS_standaloneFunctionInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mStandaloneFunctionName,
                  const GGS_effectiveArgumentListAST & in_mArguments,
                  const GGS_location & in_mEndOfArguments,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_standaloneFunctionInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_standaloneFunctionInExpressionAST (inCompiler COMMA_THERE)) ;
  object->standaloneFunctionInExpressionAST_init_21__21__21_ (in_mStandaloneFunctionName, in_mArguments, in_mEndOfArguments, inCompiler) ;
  const GGS_standaloneFunctionInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::
standaloneFunctionInExpressionAST_init_21__21__21_ (const GGS_lstring & in_mStandaloneFunctionName,
                                                    const GGS_effectiveArgumentListAST & in_mArguments,
                                                    const GGS_location & in_mEndOfArguments,
                                                    Compiler * /* inCompiler */) {
  mProperty_mStandaloneFunctionName = in_mStandaloneFunctionName ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST::GGS_standaloneFunctionInExpressionAST (const cPtr_standaloneFunctionInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneFunctionInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST::class_func_new (const GGS_lstring & in_mStandaloneFunctionName,
                                                                                             const GGS_effectiveArgumentListAST & in_mArguments,
                                                                                             const GGS_location & in_mEndOfArguments,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_standaloneFunctionInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_standaloneFunctionInExpressionAST (in_mStandaloneFunctionName, in_mArguments, in_mEndOfArguments,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_standaloneFunctionInExpressionAST::readProperty_mStandaloneFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mStandaloneFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneFunctionInExpressionAST::setProperty_mStandaloneFunctionName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mStandaloneFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_standaloneFunctionInExpressionAST::readProperty_mArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_effectiveArgumentListAST () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneFunctionInExpressionAST::setProperty_mArguments (const GGS_effectiveArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_standaloneFunctionInExpressionAST::readProperty_mEndOfArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mEndOfArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneFunctionInExpressionAST::setProperty_mEndOfArguments (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mEndOfArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @standaloneFunctionInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mStandaloneFunctionName (),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
}

//--------------------------------------------------------------------------------------------------

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (const GGS_lstring & in_mStandaloneFunctionName,
                                                                                const GGS_effectiveArgumentListAST & in_mArguments,
                                                                                const GGS_location & in_mEndOfArguments,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mStandaloneFunctionName (),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
  mProperty_mStandaloneFunctionName = in_mStandaloneFunctionName ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_standaloneFunctionInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

void cPtr_standaloneFunctionInExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@standaloneFunctionInExpressionAST:") ;
  mProperty_mStandaloneFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_standaloneFunctionInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_standaloneFunctionInExpressionAST (mProperty_mStandaloneFunctionName, mProperty_mArguments, mProperty_mEndOfArguments, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_standaloneFunctionInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mStandaloneFunctionName.printNonNullClassInstanceProperties ("mStandaloneFunctionName") ;
    mProperty_mArguments.printNonNullClassInstanceProperties ("mArguments") ;
    mProperty_mEndOfArguments.printNonNullClassInstanceProperties ("mEndOfArguments") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @standaloneFunctionInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ("standaloneFunctionInExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_standaloneFunctionInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_standaloneFunctionInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_standaloneFunctionInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_standaloneFunctionInExpressionAST result ;
  const GGS_standaloneFunctionInExpressionAST * p = (const GGS_standaloneFunctionInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_standaloneFunctionInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneFunctionInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_standaloneFunctionInExpressionAST_2E_weak::objectCompare (const GGS_standaloneFunctionInExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_standaloneFunctionInExpressionAST_2E_weak::GGS_standaloneFunctionInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST_2E_weak & GGS_standaloneFunctionInExpressionAST_2E_weak::operator = (const GGS_standaloneFunctionInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST_2E_weak::GGS_standaloneFunctionInExpressionAST_2E_weak (const GGS_standaloneFunctionInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST_2E_weak GGS_standaloneFunctionInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_standaloneFunctionInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_standaloneFunctionInExpressionAST result ;
  if (isValid ()) {
    const cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_standaloneFunctionInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST_2E_weak::bang_standaloneFunctionInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_standaloneFunctionInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standaloneFunctionInExpressionAST) ;
      result = GGS_standaloneFunctionInExpressionAST ((cPtr_standaloneFunctionInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @standaloneFunctionInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2E_weak ("standaloneFunctionInExpressionAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_standaloneFunctionInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_standaloneFunctionInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_standaloneFunctionInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST_2E_weak GGS_standaloneFunctionInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_standaloneFunctionInExpressionAST_2E_weak result ;
  const GGS_standaloneFunctionInExpressionAST_2E_weak * p = (const GGS_standaloneFunctionInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_standaloneFunctionInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneFunctionInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @panicAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicAST::objectCompare (const GGS_panicAST & inOperand) const {
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

GGS_panicAST::GGS_panicAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_panicAST GGS_panicAST::
init_21__21__21__21_ (const GGS_bool & in_mIsSetup,
                      const GGS_instructionListAST & in_mPanicInstructionList,
                      const GGS_location & in_mEndOfPanicInstructions,
                      const GGS_lbigint & in_mPriority,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_panicAST * object = nullptr ;
  macroMyNew (object, cPtr_panicAST (inCompiler COMMA_THERE)) ;
  object->panicAST_init_21__21__21__21_ (in_mIsSetup, in_mPanicInstructionList, in_mEndOfPanicInstructions, in_mPriority, inCompiler) ;
  const GGS_panicAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::
panicAST_init_21__21__21__21_ (const GGS_bool & in_mIsSetup,
                               const GGS_instructionListAST & in_mPanicInstructionList,
                               const GGS_location & in_mEndOfPanicInstructions,
                               const GGS_lbigint & in_mPriority,
                               Compiler * /* inCompiler */) {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPanicInstructionList = in_mPanicInstructionList ;
  mProperty_mEndOfPanicInstructions = in_mEndOfPanicInstructions ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST::GGS_panicAST (const cPtr_panicAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_panicAST GGS_panicAST::class_func_new (const GGS_bool & in_mIsSetup,
                                           const GGS_instructionListAST & in_mPanicInstructionList,
                                           const GGS_location & in_mEndOfPanicInstructions,
                                           const GGS_lbigint & in_mPriority,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_panicAST result ;
  macroMyNew (result.mObjectPtr, cPtr_panicAST (in_mIsSetup, in_mPanicInstructionList, in_mEndOfPanicInstructions, in_mPriority,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_panicAST::readProperty_mIsSetup (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mIsSetup ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicAST::setProperty_mIsSetup (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mIsSetup = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_panicAST::readProperty_mPanicInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mPanicInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicAST::setProperty_mPanicInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mPanicInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_panicAST::readProperty_mEndOfPanicInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mEndOfPanicInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicAST::setProperty_mEndOfPanicInstructions (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mEndOfPanicInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_panicAST::readProperty_mPriority (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicAST::setProperty_mPriority (const GGS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mPriority = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicAST class
//--------------------------------------------------------------------------------------------------

cPtr_panicAST::cPtr_panicAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPanicInstructionList (),
mProperty_mEndOfPanicInstructions (),
mProperty_mPriority () {
}

//--------------------------------------------------------------------------------------------------

cPtr_panicAST::cPtr_panicAST (const GGS_bool & in_mIsSetup,
                              const GGS_instructionListAST & in_mPanicInstructionList,
                              const GGS_location & in_mEndOfPanicInstructions,
                              const GGS_lbigint & in_mPriority,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPanicInstructionList (),
mProperty_mEndOfPanicInstructions (),
mProperty_mPriority () {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPanicInstructionList = in_mPanicInstructionList ;
  mProperty_mEndOfPanicInstructions = in_mEndOfPanicInstructions ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_panicAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

void cPtr_panicAST::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@panicAST:") ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_panicAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicAST (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsSetup.printNonNullClassInstanceProperties ("mIsSetup") ;
    mProperty_mPanicInstructionList.printNonNullClassInstanceProperties ("mPanicInstructionList") ;
    mProperty_mEndOfPanicInstructions.printNonNullClassInstanceProperties ("mEndOfPanicInstructions") ;
    mProperty_mPriority.printNonNullClassInstanceProperties ("mPriority") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @panicAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicAST ("panicAST",
                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST GGS_panicAST::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_panicAST result ;
  const GGS_panicAST * p = (const GGS_panicAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_noteTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mPanicInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 53)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_panicAST * inObject,
                                                     GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_panicAST) ;
    inObject->method_noteTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @decoratedPanicRoutine reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedPanicRoutine::objectCompare (const GGS_decoratedPanicRoutine & inOperand) const {
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

GGS_decoratedPanicRoutine::GGS_decoratedPanicRoutine (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedPanicRoutine GGS_decoratedPanicRoutine::
init_21__21_ (const GGS_bool & in_mIsSetup,
              const GGS_lbigint & in_mPriority,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedPanicRoutine * object = nullptr ;
  macroMyNew (object, cPtr_decoratedPanicRoutine (inCompiler COMMA_THERE)) ;
  object->decoratedPanicRoutine_init_21__21_ (in_mIsSetup, in_mPriority, inCompiler) ;
  const GGS_decoratedPanicRoutine result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedPanicRoutine::
decoratedPanicRoutine_init_21__21_ (const GGS_bool & in_mIsSetup,
                                    const GGS_lbigint & in_mPriority,
                                    Compiler * /* inCompiler */) {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine::GGS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedPanicRoutine) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine GGS_decoratedPanicRoutine::class_func_new (const GGS_bool & in_mIsSetup,
                                                                     const GGS_lbigint & in_mPriority,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_decoratedPanicRoutine result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedPanicRoutine (in_mIsSetup, in_mPriority,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_decoratedPanicRoutine::readProperty_mIsSetup (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    return p->mProperty_mIsSetup ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedPanicRoutine::setProperty_mIsSetup (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    p->mProperty_mIsSetup = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_decoratedPanicRoutine::readProperty_mPriority (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    return p->mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedPanicRoutine::setProperty_mPriority (const GGS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    p->mProperty_mPriority = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedPanicRoutine class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPriority () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (const GGS_bool & in_mIsSetup,
                                                        const GGS_lbigint & in_mPriority,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPriority () {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedPanicRoutine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

void cPtr_decoratedPanicRoutine::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedPanicRoutine:") ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedPanicRoutine::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedPanicRoutine (mProperty_mIsSetup, mProperty_mPriority, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedPanicRoutine::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mIsSetup.printNonNullClassInstanceProperties ("mIsSetup") ;
    mProperty_mPriority.printNonNullClassInstanceProperties ("mPriority") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedPanicRoutine generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine ("decoratedPanicRoutine",
                                                                          & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedPanicRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedPanicRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedPanicRoutine (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine GGS_decoratedPanicRoutine::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedPanicRoutine result ;
  const GGS_decoratedPanicRoutine * p = (const GGS_decoratedPanicRoutine *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedPanicRoutine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedPanicRoutine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

