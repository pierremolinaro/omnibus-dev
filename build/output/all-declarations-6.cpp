#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assertInstructionAST_2D_weak::objectCompare (const GALGAS_assertInstructionAST_2D_weak & inOperand) const {
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

GALGAS_assertInstructionAST_2D_weak::GALGAS_assertInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST_2D_weak & GALGAS_assertInstructionAST_2D_weak::operator = (const GALGAS_assertInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST_2D_weak::GALGAS_assertInstructionAST_2D_weak (const GALGAS_assertInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST_2D_weak GALGAS_assertInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assertInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST GALGAS_assertInstructionAST_2D_weak::bang_assertInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assertInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertInstructionAST) ;
      result = GALGAS_assertInstructionAST ((cPtr_assertInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assertInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionAST_2D_weak ("assertInstructionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST_2D_weak GALGAS_assertInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST_2D_weak result ;
  const GALGAS_assertInstructionAST_2D_weak * p = (const GALGAS_assertInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assertInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionIR::cPtr_assertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mAssertInstructionLocation (),
mProperty_mInstructionList (),
mProperty_mExpressionValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mAssertInstructionLocation.printNonNullClassInstanceProperties ("mAssertInstructionLocation") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assertInstructionIR::objectCompare (const GALGAS_assertInstructionIR & inOperand) const {
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

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::
init_21__21__21_ (const GALGAS_location & in_mAssertInstructionLocation,
                  const GALGAS_instructionListIR & in_mInstructionList,
                  const GALGAS_objectIR & in_mExpressionValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionIR (inCompiler COMMA_THERE)) ;
  object->assertInstructionIR_init_21__21__21_ (in_mAssertInstructionLocation, in_mInstructionList, in_mExpressionValue, inCompiler) ;
  const GALGAS_assertInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::
assertInstructionIR_init_21__21__21_ (const GALGAS_location & in_mAssertInstructionLocation,
                                      const GALGAS_instructionListIR & in_mInstructionList,
                                      const GALGAS_objectIR & in_mExpressionValue,
                                      Compiler * /* inCompiler */) {
  mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mExpressionValue = in_mExpressionValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::class_func_new (const GALGAS_location & in_mAssertInstructionLocation,
                                                                       const GALGAS_instructionListIR & in_mInstructionList,
                                                                       const GALGAS_objectIR & in_mExpressionValue
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_assertInstructionIR (in_mAssertInstructionLocation, in_mInstructionList, in_mExpressionValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_assertInstructionIR::readProperty_mAssertInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mAssertInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assertInstructionIR::setProperty_mAssertInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mAssertInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_assertInstructionIR::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assertInstructionIR::setProperty_mInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_assertInstructionIR::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assertInstructionIR::setProperty_mExpressionValue (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mExpressionValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assertInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionIR::cPtr_assertInstructionIR (const GALGAS_location & in_mAssertInstructionLocation,
                                                    const GALGAS_instructionListIR & in_mInstructionList,
                                                    const GALGAS_objectIR & in_mExpressionValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mAssertInstructionLocation (),
mProperty_mInstructionList (),
mProperty_mExpressionValue () {
  mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mExpressionValue = in_mExpressionValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

void cPtr_assertInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@assertInstructionIR:") ;
  mProperty_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assertInstructionIR (mProperty_mAssertInstructionLocation, mProperty_mInstructionList, mProperty_mExpressionValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assertInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR ("assertInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  const GALGAS_assertInstructionIR * p = (const GALGAS_assertInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assertInstructionIR_2D_weak::objectCompare (const GALGAS_assertInstructionIR_2D_weak & inOperand) const {
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

GALGAS_assertInstructionIR_2D_weak::GALGAS_assertInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR_2D_weak & GALGAS_assertInstructionIR_2D_weak::operator = (const GALGAS_assertInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR_2D_weak::GALGAS_assertInstructionIR_2D_weak (const GALGAS_assertInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR_2D_weak GALGAS_assertInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assertInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR GALGAS_assertInstructionIR_2D_weak::bang_assertInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assertInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertInstructionIR) ;
      result = GALGAS_assertInstructionIR ((cPtr_assertInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assertInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR_2D_weak ("assertInstructionIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR_2D_weak GALGAS_assertInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR_2D_weak result ;
  const GALGAS_assertInstructionIR_2D_weak * p = (const GALGAS_assertInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assertInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assignmentInstructionAST_2D_weak::objectCompare (const GALGAS_assignmentInstructionAST_2D_weak & inOperand) const {
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

GALGAS_assignmentInstructionAST_2D_weak::GALGAS_assignmentInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak & GALGAS_assignmentInstructionAST_2D_weak::operator = (const GALGAS_assignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak::GALGAS_assignmentInstructionAST_2D_weak (const GALGAS_assignmentInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak GALGAS_assignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST_2D_weak::bang_assignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstructionAST) ;
      result = GALGAS_assignmentInstructionAST ((cPtr_assignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ("assignmentInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak GALGAS_assignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST_2D_weak result ;
  const GALGAS_assignmentInstructionAST_2D_weak * p = (const GALGAS_assignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind::GALGAS_controlRegisterAssignmentOperatorKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentOperatorKind::class_func_assignment (UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentOperatorKind result ;
  result.mEnum = Enumeration::enum_assignment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentOperatorKind::class_func_assignmentWithOperator (const GALGAS_omnibusInfixOperator & inAssociatedValue0,
                                                                                                                              const GALGAS_location & inAssociatedValue1
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentOperatorKind result ;
  result.mEnum = Enumeration::enum_assignmentWithOperator ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentOperatorKind::method_assignmentWithOperator (GALGAS_omnibusInfixOperator & outAssociatedValue_infixOperator,
                                                                                  GALGAS_location & outAssociatedValue_operatorLocation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_assignmentWithOperator) {
    outAssociatedValue_infixOperator.drop () ;
    outAssociatedValue_operatorLocation.drop () ;
    String s ;
    s.appendCString ("method @controlRegisterAssignmentOperatorKind.assignmentWithOperator invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_infixOperator = ptr->mProperty_infixOperator ;
    outAssociatedValue_operatorLocation = ptr->mProperty_operatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_controlRegisterAssignmentOperatorKind::getter_assignment (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_assignment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ GALGAS_controlRegisterAssignmentOperatorKind::getter_assignmentWithOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ result ;
  if (mEnum == Enumeration::enum_assignmentWithOperator) {
    const auto ptr = (const GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentOperatorKind::getAssociatedValuesFor_assignmentWithOperator (GALGAS_omnibusInfixOperator & out_infixOperator,
                                                                                                  GALGAS_location & out_operatorLocation) const {
  const auto ptr = (const GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator *) mAssociatedValues.associatedValuesPointer () ;
  out_infixOperator = ptr->mProperty_infixOperator ;
  out_operatorLocation = ptr->mProperty_operatorLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterAssignmentOperatorKind [3] = {
  "(not built)",
  "assignment",
  "assignmentWithOperator"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentOperatorKind::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @controlRegisterAssignmentOperatorKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_controlRegisterAssignmentOperatorKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterAssignmentOperatorKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind ("controlRegisterAssignmentOperatorKind",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterAssignmentOperatorKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterAssignmentOperatorKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterAssignmentOperatorKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentOperatorKind::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentOperatorKind result ;
  const GALGAS_controlRegisterAssignmentOperatorKind * p = (const GALGAS_controlRegisterAssignmentOperatorKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterAssignmentOperatorKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentOperatorKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::objectCompare (const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak & inOperand) const {
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

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak & GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::operator = (const GALGAS_controlRegisterAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (const GALGAS_controlRegisterAssignmentInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::bang_controlRegisterAssignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_controlRegisterAssignmentInstructionAST) ;
      result = GALGAS_controlRegisterAssignmentInstructionAST ((cPtr_controlRegisterAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterAssignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2D_weak ("controlRegisterAssignmentInstructionAST-weak",
                                                                                                       & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST_2D_weak GALGAS_controlRegisterAssignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST_2D_weak result ;
  const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak * p = (const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@sliceAssignmentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sliceAssignmentListAST : public cCollectionElement {
  public: GALGAS_sliceAssignmentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_sliceAssignmentListAST (const GALGAS_lstring & in_mSliceWidth,
                                                     const GALGAS_sliceTargetAST & in_mSliceKind
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sliceAssignmentListAST (const GALGAS_sliceAssignmentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sliceAssignmentListAST::cCollectionElement_sliceAssignmentListAST (const GALGAS_lstring & in_mSliceWidth,
                                                                                      const GALGAS_sliceTargetAST & in_mSliceKind
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceWidth, in_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sliceAssignmentListAST::cCollectionElement_sliceAssignmentListAST (const GALGAS_sliceAssignmentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSliceWidth, inElement.mProperty_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sliceAssignmentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sliceAssignmentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sliceAssignmentListAST (mObject.mProperty_mSliceWidth, mObject.mProperty_mSliceKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_sliceAssignmentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSliceWidth" ":") ;
  mObject.mProperty_mSliceWidth.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSliceKind" ":") ;
  mObject.mProperty_mSliceKind.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST::GALGAS_sliceAssignmentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST::GALGAS_sliceAssignmentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sliceAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_sliceAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::enterElement (const GALGAS_sliceAssignmentListAST_2D_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sliceAssignmentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                       const GALGAS_sliceTargetAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sliceAssignmentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sliceAssignmentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSliceWidth,
                                                               const GALGAS_sliceTargetAST & in_mSliceKind
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_sliceAssignmentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sliceAssignmentListAST (in_mSliceWidth,
                                                            in_mSliceKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_sliceTargetAST & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sliceAssignmentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_sliceTargetAST inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sliceAssignmentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_sliceTargetAST inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_sliceAssignmentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_sliceTargetAST & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
        outOperand0 = p->mObject.mProperty_mSliceWidth ;
        outOperand1 = p->mObject.mProperty_mSliceKind ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_sliceTargetAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mSliceKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_sliceTargetAST & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mSliceKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_sliceTargetAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mSliceKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_sliceTargetAST & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mSliceWidth ;
    outOperand1 = p->mObject.mProperty_mSliceKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::add_operation (const GALGAS_sliceAssignmentListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result = GALGAS_sliceAssignmentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result = GALGAS_sliceAssignmentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result = GALGAS_sliceAssignmentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::plusAssign_operation (const GALGAS_sliceAssignmentListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_setMSliceWidthAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSliceWidth = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sliceAssignmentListAST::getter_mSliceWidthAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    result = p->mObject.mProperty_mSliceWidth ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST::setter_setMSliceKindAtIndex (GALGAS_sliceTargetAST inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSliceKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceAssignmentListAST::getter_mSliceKindAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) attributes.ptr () ;
  GALGAS_sliceTargetAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    result = p->mObject.mProperty_mSliceKind ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_sliceAssignmentListAST::cEnumerator_sliceAssignmentListAST (const GALGAS_sliceAssignmentListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element cEnumerator_sliceAssignmentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sliceAssignmentListAST * p = (const cCollectionElement_sliceAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sliceAssignmentListAST::current_mSliceWidth (LOCATION_ARGS) const {
  const cCollectionElement_sliceAssignmentListAST * p = (const cCollectionElement_sliceAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
  return p->mObject.mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST cEnumerator_sliceAssignmentListAST::current_mSliceKind (LOCATION_ARGS) const {
  const cCollectionElement_sliceAssignmentListAST * p = (const cCollectionElement_sliceAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
  return p->mObject.mProperty_mSliceKind ;
}




//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST ("sliceAssignmentListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentListAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST result ;
  const GALGAS_sliceAssignmentListAST * p = (const GALGAS_sliceAssignmentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceAssignmentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sliceAssignmentInstructionAST_2D_weak::objectCompare (const GALGAS_sliceAssignmentInstructionAST_2D_weak & inOperand) const {
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

GALGAS_sliceAssignmentInstructionAST_2D_weak::GALGAS_sliceAssignmentInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST_2D_weak & GALGAS_sliceAssignmentInstructionAST_2D_weak::operator = (const GALGAS_sliceAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST_2D_weak::GALGAS_sliceAssignmentInstructionAST_2D_weak (const GALGAS_sliceAssignmentInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST_2D_weak GALGAS_sliceAssignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST_2D_weak::bang_sliceAssignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sliceAssignmentInstructionAST) ;
      result = GALGAS_sliceAssignmentInstructionAST ((cPtr_sliceAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2D_weak ("sliceAssignmentInstructionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST_2D_weak GALGAS_sliceAssignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST_2D_weak result ;
  const GALGAS_sliceAssignmentInstructionAST_2D_weak * p = (const GALGAS_sliceAssignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceAssignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST::GALGAS_sliceTargetAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::class_func_discarded (UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_discarded ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::class_func_varDeclaration (const GALGAS_lstring & inAssociatedValue0
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_varDeclaration ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_sliceTargetAST_2D_varDeclaration (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::class_func_letDeclaration (const GALGAS_lstring & inAssociatedValue0
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_letDeclaration ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_sliceTargetAST_2D_letDeclaration (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::class_func_lValue (const GALGAS_LValueAST & inAssociatedValue0
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_lValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_sliceTargetAST_2D_lValue (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::method_varDeclaration (GALGAS_lstring & outAssociatedValue_varName,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_varDeclaration) {
    outAssociatedValue_varName.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.varDeclaration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_sliceTargetAST_2D_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_varName = ptr->mProperty_varName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::method_letDeclaration (GALGAS_lstring & outAssociatedValue_letName,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letDeclaration) {
    outAssociatedValue_letName.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.letDeclaration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_sliceTargetAST_2D_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_letName = ptr->mProperty_letName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::method_lValue (GALGAS_LValueAST & outAssociatedValue_target,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_lValue) {
    outAssociatedValue_target.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.lValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_sliceTargetAST_2D_lValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_target = ptr->mProperty_target ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sliceTargetAST::getter_discarded (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_discarded == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_varDeclaration_3F_ GALGAS_sliceTargetAST::getter_varDeclaration (UNUSED_LOCATION_ARGS) const {
  GALGAS_sliceTargetAST_2D_varDeclaration_3F_ result ;
  if (mEnum == Enumeration::enum_varDeclaration) {
    const auto ptr = (const GALGAS_sliceTargetAST_2D_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_sliceTargetAST_2D_varDeclaration (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::getAssociatedValuesFor_varDeclaration (GALGAS_lstring & out_varName) const {
  const auto ptr = (const GALGAS_sliceTargetAST_2D_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
  out_varName = ptr->mProperty_varName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_letDeclaration_3F_ GALGAS_sliceTargetAST::getter_letDeclaration (UNUSED_LOCATION_ARGS) const {
  GALGAS_sliceTargetAST_2D_letDeclaration_3F_ result ;
  if (mEnum == Enumeration::enum_letDeclaration) {
    const auto ptr = (const GALGAS_sliceTargetAST_2D_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_sliceTargetAST_2D_letDeclaration (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::getAssociatedValuesFor_letDeclaration (GALGAS_lstring & out_letName) const {
  const auto ptr = (const GALGAS_sliceTargetAST_2D_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
  out_letName = ptr->mProperty_letName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST_2D_lValue_3F_ GALGAS_sliceTargetAST::getter_lValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_sliceTargetAST_2D_lValue_3F_ result ;
  if (mEnum == Enumeration::enum_lValue) {
    const auto ptr = (const GALGAS_sliceTargetAST_2D_lValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_sliceTargetAST_2D_lValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::getAssociatedValuesFor_lValue (GALGAS_LValueAST & out_target) const {
  const auto ptr = (const GALGAS_sliceTargetAST_2D_lValue *) mAssociatedValues.associatedValuesPointer () ;
  out_target = ptr->mProperty_target ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_sliceTargetAST [5] = {
  "(not built)",
  "discarded",
  "varDeclaration",
  "letDeclaration",
  "lValue"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceTargetAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @sliceTargetAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_sliceTargetAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sliceTargetAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST ("sliceTargetAST",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceTargetAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceTargetAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceTargetAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceTargetAST GALGAS_sliceTargetAST::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sliceTargetAST result ;
  const GALGAS_sliceTargetAST * p = (const GALGAS_sliceTargetAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceTargetAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bitbandInstructionAST_2D_weak::objectCompare (const GALGAS_bitbandInstructionAST_2D_weak & inOperand) const {
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

GALGAS_bitbandInstructionAST_2D_weak::GALGAS_bitbandInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST_2D_weak & GALGAS_bitbandInstructionAST_2D_weak::operator = (const GALGAS_bitbandInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST_2D_weak::GALGAS_bitbandInstructionAST_2D_weak (const GALGAS_bitbandInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST_2D_weak GALGAS_bitbandInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST_2D_weak::bang_bitbandInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitbandInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitbandInstructionAST) ;
      result = GALGAS_bitbandInstructionAST ((cPtr_bitbandInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionAST_2D_weak ("bitbandInstructionAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST_2D_weak GALGAS_bitbandInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST_2D_weak result ;
  const GALGAS_bitbandInstructionAST_2D_weak * p = (const GALGAS_bitbandInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitbandInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitbandInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionIR::cPtr_bitbandInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mRegisterAddressLLVMname (),
mProperty_mBitExpressionOperand (),
mProperty_mSourceExpressionOperand (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitbandInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterAddressLLVMname.printNonNullClassInstanceProperties ("mRegisterAddressLLVMname") ;
    mProperty_mBitExpressionOperand.printNonNullClassInstanceProperties ("mBitExpressionOperand") ;
    mProperty_mSourceExpressionOperand.printNonNullClassInstanceProperties ("mSourceExpressionOperand") ;
    mProperty_mBitbandRegisterBaseAddress.printNonNullClassInstanceProperties ("mBitbandRegisterBaseAddress") ;
    mProperty_mBitbandRegisterRelocationAddress.printNonNullClassInstanceProperties ("mBitbandRegisterRelocationAddress") ;
    mProperty_mBitbandRegisterOffsetMultiplier.printNonNullClassInstanceProperties ("mBitbandRegisterOffsetMultiplier") ;
    mProperty_mBitbandRegisterBitMultiplier.printNonNullClassInstanceProperties ("mBitbandRegisterBitMultiplier") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bitbandInstructionIR::objectCompare (const GALGAS_bitbandInstructionIR & inOperand) const {
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

GALGAS_bitbandInstructionIR::GALGAS_bitbandInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR::
init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mRegisterAddressLLVMname,
                                  const GALGAS_objectIR & in_mBitExpressionOperand,
                                  const GALGAS_objectIR & in_mSourceExpressionOperand,
                                  const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                  const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                  const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                  const GALGAS_bigint & in_mBitbandRegisterBitMultiplier,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_bitbandInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_bitbandInstructionIR (inCompiler COMMA_THERE)) ;
  object->bitbandInstructionIR_init_21__21__21__21__21__21__21_ (in_mRegisterAddressLLVMname, in_mBitExpressionOperand, in_mSourceExpressionOperand, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier, inCompiler) ;
  const GALGAS_bitbandInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionIR::
bitbandInstructionIR_init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mRegisterAddressLLVMname,
                                                       const GALGAS_objectIR & in_mBitExpressionOperand,
                                                       const GALGAS_objectIR & in_mSourceExpressionOperand,
                                                       const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                                       const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                                       const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                       const GALGAS_bigint & in_mBitbandRegisterBitMultiplier,
                                                       Compiler * /* inCompiler */) {
  mProperty_mRegisterAddressLLVMname = in_mRegisterAddressLLVMname ;
  mProperty_mBitExpressionOperand = in_mBitExpressionOperand ;
  mProperty_mSourceExpressionOperand = in_mSourceExpressionOperand ;
  mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR::GALGAS_bitbandInstructionIR (const cPtr_bitbandInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR::class_func_new (const GALGAS_string & in_mRegisterAddressLLVMname,
                                                                         const GALGAS_objectIR & in_mBitExpressionOperand,
                                                                         const GALGAS_objectIR & in_mSourceExpressionOperand,
                                                                         const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                                                         const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                                                         const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                                         const GALGAS_bigint & in_mBitbandRegisterBitMultiplier
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionIR (in_mRegisterAddressLLVMname, in_mBitExpressionOperand, in_mSourceExpressionOperand, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_bitbandInstructionIR::readProperty_mRegisterAddressLLVMname (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mRegisterAddressLLVMname ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setProperty_mRegisterAddressLLVMname (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mRegisterAddressLLVMname = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_bitbandInstructionIR::readProperty_mBitExpressionOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitExpressionOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setProperty_mBitExpressionOperand (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitExpressionOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_bitbandInstructionIR::readProperty_mSourceExpressionOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mSourceExpressionOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setProperty_mSourceExpressionOperand (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mSourceExpressionOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_bitbandInstructionIR::readProperty_mBitbandRegisterBaseAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterBaseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setProperty_mBitbandRegisterBaseAddress (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBaseAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_bitbandInstructionIR::readProperty_mBitbandRegisterRelocationAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterRelocationAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setProperty_mBitbandRegisterRelocationAddress (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterRelocationAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_bitbandInstructionIR::readProperty_mBitbandRegisterOffsetMultiplier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterOffsetMultiplier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setProperty_mBitbandRegisterOffsetMultiplier (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterOffsetMultiplier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_bitbandInstructionIR::readProperty_mBitbandRegisterBitMultiplier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterBitMultiplier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionIR::setProperty_mBitbandRegisterBitMultiplier (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBitMultiplier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionIR::cPtr_bitbandInstructionIR (const GALGAS_string & in_mRegisterAddressLLVMname,
                                                      const GALGAS_objectIR & in_mBitExpressionOperand,
                                                      const GALGAS_objectIR & in_mSourceExpressionOperand,
                                                      const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                                      const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                                      const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                      const GALGAS_bigint & in_mBitbandRegisterBitMultiplier
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mRegisterAddressLLVMname (),
mProperty_mBitExpressionOperand (),
mProperty_mSourceExpressionOperand (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier () {
  mProperty_mRegisterAddressLLVMname = in_mRegisterAddressLLVMname ;
  mProperty_mBitExpressionOperand = in_mBitExpressionOperand ;
  mProperty_mSourceExpressionOperand = in_mSourceExpressionOperand ;
  mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitbandInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR ;
}

void cPtr_bitbandInstructionIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@bitbandInstructionIR:") ;
  mProperty_mRegisterAddressLLVMname.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpressionOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitbandInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionIR (mProperty_mRegisterAddressLLVMname, mProperty_mBitExpressionOperand, mProperty_mSourceExpressionOperand, mProperty_mBitbandRegisterBaseAddress, mProperty_mBitbandRegisterRelocationAddress, mProperty_mBitbandRegisterOffsetMultiplier, mProperty_mBitbandRegisterBitMultiplier COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ("bitbandInstructionIR",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR result ;
  const GALGAS_bitbandInstructionIR * p = (const GALGAS_bitbandInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitbandInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bitbandInstructionIR_2D_weak::objectCompare (const GALGAS_bitbandInstructionIR_2D_weak & inOperand) const {
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

GALGAS_bitbandInstructionIR_2D_weak::GALGAS_bitbandInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR_2D_weak & GALGAS_bitbandInstructionIR_2D_weak::operator = (const GALGAS_bitbandInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR_2D_weak::GALGAS_bitbandInstructionIR_2D_weak (const GALGAS_bitbandInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR_2D_weak GALGAS_bitbandInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR GALGAS_bitbandInstructionIR_2D_weak::bang_bitbandInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitbandInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitbandInstructionIR) ;
      result = GALGAS_bitbandInstructionIR ((cPtr_bitbandInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR_2D_weak ("bitbandInstructionIR-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionIR_2D_weak GALGAS_bitbandInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionIR_2D_weak result ;
  const GALGAS_bitbandInstructionIR_2D_weak * p = (const GALGAS_bitbandInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitbandInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST buildExpressionAccessList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildExpressionAccessList (const GALGAS_LValueOperandAST inObject,
                                                GALGAS_primaryInExpressionAccessListAST & ioArgument_ioExpressionAccessList,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_3182_name_0 ;
      GALGAS_LValueOperandAST extractedValue_3205_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_3182_name_0, extractedValue_3205_next_1) ;
      ioArgument_ioExpressionAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_property (extractedValue_3182_name_0  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3205_next_1, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 94)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_3364_index_0 ;
      GALGAS_location extractedValue_3380_endOfIndex_1 ;
      GALGAS_bool extractedValue_3397_checkIndexExpression_2 ;
      GALGAS_LValueOperandAST extractedValue_3436_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_3364_index_0, extractedValue_3380_endOfIndex_1, extractedValue_3397_checkIndexExpression_2, extractedValue_3436_next_3) ;
      ioArgument_ioExpressionAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_arrayAccess (extractedValue_3364_index_0, extractedValue_3380_endOfIndex_1, extractedValue_3397_checkIndexExpression_2  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3436_next_3, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 97)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_varInstructionWithAssignmentAST_2D_weak::objectCompare (const GALGAS_varInstructionWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_varInstructionWithAssignmentAST_2D_weak::GALGAS_varInstructionWithAssignmentAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST_2D_weak & GALGAS_varInstructionWithAssignmentAST_2D_weak::operator = (const GALGAS_varInstructionWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST_2D_weak::GALGAS_varInstructionWithAssignmentAST_2D_weak (const GALGAS_varInstructionWithAssignmentAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST_2D_weak GALGAS_varInstructionWithAssignmentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST_2D_weak::bang_varInstructionWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varInstructionWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInstructionWithAssignmentAST) ;
      result = GALGAS_varInstructionWithAssignmentAST ((cPtr_varInstructionWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varInstructionWithAssignmentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2D_weak ("varInstructionWithAssignmentAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST_2D_weak GALGAS_varInstructionWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST_2D_weak result ;
  const GALGAS_varInstructionWithAssignmentAST_2D_weak * p = (const GALGAS_varInstructionWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varInstructionWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_varDeclarationInstructionAST_2D_weak::objectCompare (const GALGAS_varDeclarationInstructionAST_2D_weak & inOperand) const {
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

GALGAS_varDeclarationInstructionAST_2D_weak::GALGAS_varDeclarationInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST_2D_weak & GALGAS_varDeclarationInstructionAST_2D_weak::operator = (const GALGAS_varDeclarationInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST_2D_weak::GALGAS_varDeclarationInstructionAST_2D_weak (const GALGAS_varDeclarationInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST_2D_weak GALGAS_varDeclarationInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST_2D_weak::bang_varDeclarationInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varDeclarationInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varDeclarationInstructionAST) ;
      result = GALGAS_varDeclarationInstructionAST ((cPtr_varDeclarationInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varDeclarationInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2D_weak ("varDeclarationInstructionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varDeclarationInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varDeclarationInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varDeclarationInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST_2D_weak GALGAS_varDeclarationInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST_2D_weak result ;
  const GALGAS_varDeclarationInstructionAST_2D_weak * p = (const GALGAS_varDeclarationInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varDeclarationInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varDeclarationInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_letInstructionWithAssignmentAST_2D_weak::objectCompare (const GALGAS_letInstructionWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_letInstructionWithAssignmentAST_2D_weak::GALGAS_letInstructionWithAssignmentAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST_2D_weak & GALGAS_letInstructionWithAssignmentAST_2D_weak::operator = (const GALGAS_letInstructionWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST_2D_weak::GALGAS_letInstructionWithAssignmentAST_2D_weak (const GALGAS_letInstructionWithAssignmentAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST_2D_weak GALGAS_letInstructionWithAssignmentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST_2D_weak::bang_letInstructionWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_letInstructionWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_letInstructionWithAssignmentAST) ;
      result = GALGAS_letInstructionWithAssignmentAST ((cPtr_letInstructionWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @letInstructionWithAssignmentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2D_weak ("letInstructionWithAssignmentAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST_2D_weak GALGAS_letInstructionWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST_2D_weak result ;
  const GALGAS_letInstructionWithAssignmentAST_2D_weak * p = (const GALGAS_letInstructionWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_letInstructionWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @instructionNOP reference class
//--------------------------------------------------------------------------------------------------

cPtr_instructionNOP::cPtr_instructionNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_instructionNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_instructionNOP::objectCompare (const GALGAS_instructionNOP & inOperand) const {
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

GALGAS_instructionNOP::GALGAS_instructionNOP (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_instructionNOP GALGAS_instructionNOP::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_instructionNOP * object = nullptr ;
  macroMyNew (object, cPtr_instructionNOP (inCompiler COMMA_THERE)) ;
  object->instructionNOP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_instructionNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::
instructionNOP_init_21_ (const GALGAS_location & in_mInstructionLocation,
                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP::GALGAS_instructionNOP (const cPtr_instructionNOP * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP GALGAS_instructionNOP::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_instructionNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_instructionNOP (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @instructionNOP class
//--------------------------------------------------------------------------------------------------

cPtr_instructionNOP::cPtr_instructionNOP (const GALGAS_location & in_mInstructionLocation
                                          COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_instructionNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP ;
}

void cPtr_instructionNOP::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@instructionNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_instructionNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_instructionNOP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @instructionNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP ("instructionNOP",
                                                                      & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP GALGAS_instructionNOP::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instructionNOP result ;
  const GALGAS_instructionNOP * p = (const GALGAS_instructionNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_instructionNOP_2D_weak::objectCompare (const GALGAS_instructionNOP_2D_weak & inOperand) const {
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

GALGAS_instructionNOP_2D_weak::GALGAS_instructionNOP_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP_2D_weak & GALGAS_instructionNOP_2D_weak::operator = (const GALGAS_instructionNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP_2D_weak::GALGAS_instructionNOP_2D_weak (const GALGAS_instructionNOP & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP_2D_weak GALGAS_instructionNOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_instructionNOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP GALGAS_instructionNOP_2D_weak::bang_instructionNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_instructionNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_instructionNOP) ;
      result = GALGAS_instructionNOP ((cPtr_instructionNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instructionNOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP_2D_weak ("instructionNOP-weak",
                                                                              & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionNOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionNOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionNOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionNOP_2D_weak GALGAS_instructionNOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instructionNOP_2D_weak result ;
  const GALGAS_instructionNOP_2D_weak * p = (const GALGAS_instructionNOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionNOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionNOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @panicInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mCodeExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCodeExpression.printNonNullClassInstanceProperties ("mCodeExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_panicInstructionAST::objectCompare (const GALGAS_panicInstructionAST & inOperand) const {
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

GALGAS_panicInstructionAST::GALGAS_panicInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_expressionAST & in_mCodeExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionAST (inCompiler COMMA_THERE)) ;
  object->panicInstructionAST_init_21__21_ (in_mInstructionLocation, in_mCodeExpression, inCompiler) ;
  const GALGAS_panicInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::
panicInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_expressionAST & in_mCodeExpression,
                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCodeExpression = in_mCodeExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST::GALGAS_panicInstructionAST (const cPtr_panicInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_expressionAST & in_mCodeExpression
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_panicInstructionAST (in_mInstructionLocation, in_mCodeExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_panicInstructionAST::readProperty_mCodeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    return p->mProperty_mCodeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicInstructionAST::setProperty_mCodeExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    p->mProperty_mCodeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionAST & in_mCodeExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCodeExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCodeExpression = in_mCodeExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_panicInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

void cPtr_panicInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@panicInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCodeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_panicInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicInstructionAST (mProperty_mInstructionLocation, mProperty_mCodeExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST ("panicInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST GALGAS_panicInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST result ;
  const GALGAS_panicInstructionAST * p = (const GALGAS_panicInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_panicInstructionAST_2D_weak::objectCompare (const GALGAS_panicInstructionAST_2D_weak & inOperand) const {
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

GALGAS_panicInstructionAST_2D_weak::GALGAS_panicInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST_2D_weak & GALGAS_panicInstructionAST_2D_weak::operator = (const GALGAS_panicInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST_2D_weak::GALGAS_panicInstructionAST_2D_weak (const GALGAS_panicInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST_2D_weak GALGAS_panicInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_panicInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST GALGAS_panicInstructionAST_2D_weak::bang_panicInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_panicInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicInstructionAST) ;
      result = GALGAS_panicInstructionAST ((cPtr_panicInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST_2D_weak ("panicInstructionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionAST_2D_weak GALGAS_panicInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionAST_2D_weak result ;
  const GALGAS_panicInstructionAST_2D_weak * p = (const GALGAS_panicInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @panicInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mThrowLocation (),
mProperty_mPanicCode () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mThrowLocation.printNonNullClassInstanceProperties ("mThrowLocation") ;
    mProperty_mPanicCode.printNonNullClassInstanceProperties ("mPanicCode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_panicInstructionIR::objectCompare (const GALGAS_panicInstructionIR & inOperand) const {
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

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::
init_21__21_ (const GALGAS_location & in_mThrowLocation,
              const GALGAS_bigint & in_mPanicCode,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionIR (inCompiler COMMA_THERE)) ;
  object->panicInstructionIR_init_21__21_ (in_mThrowLocation, in_mPanicCode, inCompiler) ;
  const GALGAS_panicInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::
panicInstructionIR_init_21__21_ (const GALGAS_location & in_mThrowLocation,
                                 const GALGAS_bigint & in_mPanicCode,
                                 Compiler * /* inCompiler */) {
  mProperty_mThrowLocation = in_mThrowLocation ;
  mProperty_mPanicCode = in_mPanicCode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (const cPtr_panicInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::class_func_new (const GALGAS_location & in_mThrowLocation,
                                                                     const GALGAS_bigint & in_mPanicCode
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_panicInstructionIR (in_mThrowLocation, in_mPanicCode COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_panicInstructionIR::readProperty_mThrowLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    return p->mProperty_mThrowLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicInstructionIR::setProperty_mThrowLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mThrowLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_panicInstructionIR::readProperty_mPanicCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    return p->mProperty_mPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicInstructionIR::setProperty_mPanicCode (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mPanicCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GALGAS_location & in_mThrowLocation,
                                                  const GALGAS_bigint & in_mPanicCode
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mThrowLocation (),
mProperty_mPanicCode () {
  mProperty_mThrowLocation = in_mThrowLocation ;
  mProperty_mPanicCode = in_mPanicCode ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_panicInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

void cPtr_panicInstructionIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@panicInstructionIR:") ;
  mProperty_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicCode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_panicInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicInstructionIR (mProperty_mThrowLocation, mProperty_mPanicCode COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR ("panicInstructionIR",
                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  const GALGAS_panicInstructionIR * p = (const GALGAS_panicInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_panicInstructionIR_2D_weak::objectCompare (const GALGAS_panicInstructionIR_2D_weak & inOperand) const {
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

GALGAS_panicInstructionIR_2D_weak::GALGAS_panicInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR_2D_weak & GALGAS_panicInstructionIR_2D_weak::operator = (const GALGAS_panicInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR_2D_weak::GALGAS_panicInstructionIR_2D_weak (const GALGAS_panicInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR_2D_weak GALGAS_panicInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_panicInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR GALGAS_panicInstructionIR_2D_weak::bang_panicInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_panicInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicInstructionIR) ;
      result = GALGAS_panicInstructionIR ((cPtr_panicInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR_2D_weak ("panicInstructionIR-weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicInstructionIR_2D_weak GALGAS_panicInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR_2D_weak result ;
  const GALGAS_panicInstructionIR_2D_weak * p = (const GALGAS_panicInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTestExpression (),
mProperty_mTestExpressionEndLocation (),
mProperty_mStaticIfExpression (),
mProperty_mThenInstructionList (),
mProperty_mEndOfThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTestExpression.printNonNullClassInstanceProperties ("mTestExpression") ;
    mProperty_mTestExpressionEndLocation.printNonNullClassInstanceProperties ("mTestExpressionEndLocation") ;
    mProperty_mStaticIfExpression.printNonNullClassInstanceProperties ("mStaticIfExpression") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mEndOfThenInstructionList.printNonNullClassInstanceProperties ("mEndOfThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElseInstructionList.printNonNullClassInstanceProperties ("mEndOfElseInstructionList") ;
    mProperty_mEndOf_5F_if_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_if_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionAST::objectCompare (const GALGAS_ifInstructionAST & inOperand) const {
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

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_expressionAST & in_mTestExpression,
                                          const GALGAS_location & in_mTestExpressionEndLocation,
                                          const GALGAS_bool & in_mStaticIfExpression,
                                          const GALGAS_instructionListAST & in_mThenInstructionList,
                                          const GALGAS_location & in_mEndOfThenInstructionList,
                                          const GALGAS_instructionListAST & in_mElseInstructionList,
                                          const GALGAS_location & in_mEndOfElseInstructionList,
                                          const GALGAS_location & in_mEndOf_5F_if_5F_instruction,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionAST (inCompiler COMMA_THERE)) ;
  object->ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mTestExpression, in_mTestExpressionEndLocation, in_mStaticIfExpression, in_mThenInstructionList, in_mEndOfThenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, in_mEndOf_5F_if_5F_instruction, inCompiler) ;
  const GALGAS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::
ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_expressionAST & in_mTestExpression,
                                                           const GALGAS_location & in_mTestExpressionEndLocation,
                                                           const GALGAS_bool & in_mStaticIfExpression,
                                                           const GALGAS_instructionListAST & in_mThenInstructionList,
                                                           const GALGAS_location & in_mEndOfThenInstructionList,
                                                           const GALGAS_instructionListAST & in_mElseInstructionList,
                                                           const GALGAS_location & in_mEndOfElseInstructionList,
                                                           const GALGAS_location & in_mEndOf_5F_if_5F_instruction,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTestExpression = in_mTestExpression ;
  mProperty_mTestExpressionEndLocation = in_mTestExpressionEndLocation ;
  mProperty_mStaticIfExpression = in_mStaticIfExpression ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mEndOfThenInstructionList = in_mEndOfThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_expressionAST & in_mTestExpression,
                                                                 const GALGAS_location & in_mTestExpressionEndLocation,
                                                                 const GALGAS_bool & in_mStaticIfExpression,
                                                                 const GALGAS_instructionListAST & in_mThenInstructionList,
                                                                 const GALGAS_location & in_mEndOfThenInstructionList,
                                                                 const GALGAS_instructionListAST & in_mElseInstructionList,
                                                                 const GALGAS_location & in_mEndOfElseInstructionList,
                                                                 const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (in_mInstructionLocation, in_mTestExpression, in_mTestExpressionEndLocation, in_mStaticIfExpression, in_mThenInstructionList, in_mEndOfThenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, in_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_ifInstructionAST::readProperty_mTestExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mTestExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setProperty_mTestExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mTestExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mTestExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setProperty_mTestExpressionEndLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifInstructionAST::readProperty_mStaticIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mStaticIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setProperty_mStaticIfExpression (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mStaticIfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_ifInstructionAST::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setProperty_mThenInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOfThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOfThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setProperty_mEndOfThenInstructionList (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_ifInstructionAST::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setProperty_mElseInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOfElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOfElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setProperty_mEndOfElseInstructionList (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionAST::setProperty_mEndOf_5F_if_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOf_5F_if_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_expressionAST & in_mTestExpression,
                                              const GALGAS_location & in_mTestExpressionEndLocation,
                                              const GALGAS_bool & in_mStaticIfExpression,
                                              const GALGAS_instructionListAST & in_mThenInstructionList,
                                              const GALGAS_location & in_mEndOfThenInstructionList,
                                              const GALGAS_instructionListAST & in_mElseInstructionList,
                                              const GALGAS_location & in_mEndOfElseInstructionList,
                                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTestExpression (),
mProperty_mTestExpressionEndLocation (),
mProperty_mStaticIfExpression (),
mProperty_mThenInstructionList (),
mProperty_mEndOfThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTestExpression = in_mTestExpression ;
  mProperty_mTestExpressionEndLocation = in_mTestExpressionEndLocation ;
  mProperty_mStaticIfExpression = in_mStaticIfExpression ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mEndOfThenInstructionList = in_mEndOfThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTestExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTestExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStaticIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mTestExpression, mProperty_mTestExpressionEndLocation, mProperty_mStaticIfExpression, mProperty_mThenInstructionList, mProperty_mEndOfThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList, mProperty_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  const GALGAS_ifInstructionAST * p = (const GALGAS_ifInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionAST_2D_weak::objectCompare (const GALGAS_ifInstructionAST_2D_weak & inOperand) const {
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

GALGAS_ifInstructionAST_2D_weak::GALGAS_ifInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak & GALGAS_ifInstructionAST_2D_weak::operator = (const GALGAS_ifInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak::GALGAS_ifInstructionAST_2D_weak (const GALGAS_ifInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak GALGAS_ifInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST_2D_weak::bang_ifInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionAST) ;
      result = GALGAS_ifInstructionAST ((cPtr_ifInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ("ifInstructionAST-weak",
                                                                                & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak GALGAS_ifInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST_2D_weak result ;
  const GALGAS_ifInstructionAST_2D_weak * p = (const GALGAS_ifInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionIR::cPtr_ifInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTestName (),
mProperty_mLocation (),
mProperty_mThenInstructionGenerationList (),
mProperty_mElseInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMTestName.printNonNullClassInstanceProperties ("mLLVMTestName") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mThenInstructionGenerationList.printNonNullClassInstanceProperties ("mThenInstructionGenerationList") ;
    mProperty_mElseInstructionGenerationList.printNonNullClassInstanceProperties ("mElseInstructionGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionIR::objectCompare (const GALGAS_ifInstructionIR & inOperand) const {
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

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::
init_21__21__21__21_ (const GALGAS_string & in_mLLVMTestName,
                      const GALGAS_location & in_mLocation,
                      const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                      const GALGAS_instructionListIR & in_mElseInstructionGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionIR (inCompiler COMMA_THERE)) ;
  object->ifInstructionIR_init_21__21__21__21_ (in_mLLVMTestName, in_mLocation, in_mThenInstructionGenerationList, in_mElseInstructionGenerationList, inCompiler) ;
  const GALGAS_ifInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::
ifInstructionIR_init_21__21__21__21_ (const GALGAS_string & in_mLLVMTestName,
                                      const GALGAS_location & in_mLocation,
                                      const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                      const GALGAS_instructionListIR & in_mElseInstructionGenerationList,
                                      Compiler * /* inCompiler */) {
  mProperty_mLLVMTestName = in_mLLVMTestName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mThenInstructionGenerationList = in_mThenInstructionGenerationList ;
  mProperty_mElseInstructionGenerationList = in_mElseInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::class_func_new (const GALGAS_string & in_mLLVMTestName,
                                                               const GALGAS_location & in_mLocation,
                                                               const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                                               const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionIR (in_mLLVMTestName, in_mLocation, in_mThenInstructionGenerationList, in_mElseInstructionGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ifInstructionIR::readProperty_mLLVMTestName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mLLVMTestName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionIR::setProperty_mLLVMTestName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLLVMTestName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionIR::setProperty_mLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_ifInstructionIR::readProperty_mThenInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mThenInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionIR::setProperty_mThenInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mThenInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_ifInstructionIR::readProperty_mElseInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mElseInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifInstructionIR::setProperty_mElseInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mElseInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionIR::cPtr_ifInstructionIR (const GALGAS_string & in_mLLVMTestName,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                            const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMTestName (),
mProperty_mLocation (),
mProperty_mThenInstructionGenerationList (),
mProperty_mElseInstructionGenerationList () {
  mProperty_mLLVMTestName = in_mLLVMTestName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mThenInstructionGenerationList = in_mThenInstructionGenerationList ;
  mProperty_mElseInstructionGenerationList = in_mElseInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

void cPtr_ifInstructionIR::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionIR:") ;
  mProperty_mLLVMTestName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionIR (mProperty_mLLVMTestName, mProperty_mLocation, mProperty_mThenInstructionGenerationList, mProperty_mElseInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR ("ifInstructionIR",
                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  const GALGAS_ifInstructionIR * p = (const GALGAS_ifInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionIR_2D_weak::objectCompare (const GALGAS_ifInstructionIR_2D_weak & inOperand) const {
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

GALGAS_ifInstructionIR_2D_weak::GALGAS_ifInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR_2D_weak & GALGAS_ifInstructionIR_2D_weak::operator = (const GALGAS_ifInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR_2D_weak::GALGAS_ifInstructionIR_2D_weak (const GALGAS_ifInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR_2D_weak GALGAS_ifInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR GALGAS_ifInstructionIR_2D_weak::bang_ifInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionIR) ;
      result = GALGAS_ifInstructionIR ((cPtr_ifInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR_2D_weak ("ifInstructionIR-weak",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionIR_2D_weak GALGAS_ifInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR_2D_weak result ;
  const GALGAS_ifInstructionIR_2D_weak * p = (const GALGAS_ifInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST::GALGAS_guardedCommandAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::class_func_boolean (const GALGAS_bool & inAssociatedValue0,
                                                                       const GALGAS_expressionAST & inAssociatedValue1,
                                                                       const GALGAS_location & inAssociatedValue2
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  result.mEnum = Enumeration::enum_boolean ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_guardedCommandAST_2D_boolean (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::class_func_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                           const GALGAS_expressionAST & inAssociatedValue1,
                                                                           const GALGAS_bool & inAssociatedValue2,
                                                                           const GALGAS_location & inAssociatedValue3,
                                                                           const GALGAS_lbool & inAssociatedValue4,
                                                                           const GALGAS_lstringlist & inAssociatedValue5,
                                                                           const GALGAS_effectiveArgumentListAST & inAssociatedValue6
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  result.mEnum = Enumeration::enum_boolAndSync ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_guardedCommandAST_2D_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5, inAssociatedValue6)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandAST::method_boolean (GALGAS_bool & outAssociatedValue_isExitCommand,
                                               GALGAS_expressionAST & outAssociatedValue_expression,
                                               GALGAS_location & outAssociatedValue_endOfExpression,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_boolean) {
    outAssociatedValue_isExitCommand.drop () ;
    outAssociatedValue_expression.drop () ;
    outAssociatedValue_endOfExpression.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandAST.boolean invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_guardedCommandAST_2D_boolean *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_expression = ptr->mProperty_expression ;
    outAssociatedValue_endOfExpression = ptr->mProperty_endOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandAST::method_boolAndSync (GALGAS_bool & outAssociatedValue_isExitCommand,
                                                   GALGAS_expressionAST & outAssociatedValue_expression,
                                                   GALGAS_bool & outAssociatedValue_warnsOnStaticExpression,
                                                   GALGAS_location & outAssociatedValue_endOfExpression,
                                                   GALGAS_lbool & outAssociatedValue_usesSelf,
                                                   GALGAS_lstringlist & outAssociatedValue_nameList,
                                                   GALGAS_effectiveArgumentListAST & outAssociatedValue_effectiveParameterListAST,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_boolAndSync) {
    outAssociatedValue_isExitCommand.drop () ;
    outAssociatedValue_expression.drop () ;
    outAssociatedValue_warnsOnStaticExpression.drop () ;
    outAssociatedValue_endOfExpression.drop () ;
    outAssociatedValue_usesSelf.drop () ;
    outAssociatedValue_nameList.drop () ;
    outAssociatedValue_effectiveParameterListAST.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandAST.boolAndSync invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_guardedCommandAST_2D_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_expression = ptr->mProperty_expression ;
    outAssociatedValue_warnsOnStaticExpression = ptr->mProperty_warnsOnStaticExpression ;
    outAssociatedValue_endOfExpression = ptr->mProperty_endOfExpression ;
    outAssociatedValue_usesSelf = ptr->mProperty_usesSelf ;
    outAssociatedValue_nameList = ptr->mProperty_nameList ;
    outAssociatedValue_effectiveParameterListAST = ptr->mProperty_effectiveParameterListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST_2D_boolean_3F_ GALGAS_guardedCommandAST::getter_boolean (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardedCommandAST_2D_boolean_3F_ result ;
  if (mEnum == Enumeration::enum_boolean) {
    const auto ptr = (const GALGAS_guardedCommandAST_2D_boolean *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_guardedCommandAST_2D_boolean (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandAST::getAssociatedValuesFor_boolean (GALGAS_bool & out_isExitCommand,
                                                               GALGAS_expressionAST & out_expression,
                                                               GALGAS_location & out_endOfExpression) const {
  const auto ptr = (const GALGAS_guardedCommandAST_2D_boolean *) mAssociatedValues.associatedValuesPointer () ;
  out_isExitCommand = ptr->mProperty_isExitCommand ;
  out_expression = ptr->mProperty_expression ;
  out_endOfExpression = ptr->mProperty_endOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST_2D_boolAndSync_3F_ GALGAS_guardedCommandAST::getter_boolAndSync (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardedCommandAST_2D_boolAndSync_3F_ result ;
  if (mEnum == Enumeration::enum_boolAndSync) {
    const auto ptr = (const GALGAS_guardedCommandAST_2D_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_guardedCommandAST_2D_boolAndSync (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandAST::getAssociatedValuesFor_boolAndSync (GALGAS_bool & out_isExitCommand,
                                                                   GALGAS_expressionAST & out_expression,
                                                                   GALGAS_bool & out_warnsOnStaticExpression,
                                                                   GALGAS_location & out_endOfExpression,
                                                                   GALGAS_lbool & out_usesSelf,
                                                                   GALGAS_lstringlist & out_nameList,
                                                                   GALGAS_effectiveArgumentListAST & out_effectiveParameterListAST) const {
  const auto ptr = (const GALGAS_guardedCommandAST_2D_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
  out_isExitCommand = ptr->mProperty_isExitCommand ;
  out_expression = ptr->mProperty_expression ;
  out_warnsOnStaticExpression = ptr->mProperty_warnsOnStaticExpression ;
  out_endOfExpression = ptr->mProperty_endOfExpression ;
  out_usesSelf = ptr->mProperty_usesSelf ;
  out_nameList = ptr->mProperty_nameList ;
  out_effectiveParameterListAST = ptr->mProperty_effectiveParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardedCommandAST [3] = {
  "(not built)",
  "boolean",
  "boolAndSync"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardedCommandAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardedCommandAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @guardedCommandAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST ("guardedCommandAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardedCommandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardedCommandAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST GALGAS_guardedCommandAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandAST result ;
  const GALGAS_guardedCommandAST * p = (const GALGAS_guardedCommandAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardedCommandAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionAST::cPtr_syncInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mBranchList (),
mProperty_mEndOf_5F_on_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mBranchList.printNonNullClassInstanceProperties ("mBranchList") ;
    mProperty_mEndOf_5F_on_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_on_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syncInstructionAST::objectCompare (const GALGAS_syncInstructionAST & inOperand) const {
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

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                  const GALGAS_location & in_mEndOf_5F_on_5F_instruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_syncInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_syncInstructionAST (inCompiler COMMA_THERE)) ;
  object->syncInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mBranchList, in_mEndOf_5F_on_5F_instruction, inCompiler) ;
  const GALGAS_syncInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::
syncInstructionAST_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                     const GALGAS_location & in_mEndOf_5F_on_5F_instruction,
                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBranchList = in_mBranchList ;
  mProperty_mEndOf_5F_on_5F_instruction = in_mEndOf_5F_on_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST::GALGAS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                                                     const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncInstructionAST (in_mInstructionLocation, in_mBranchList, in_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionAST::readProperty_mBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syncInstructionBranchListAST () ;
  }else{
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    return p->mProperty_mBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionAST::setProperty_mBranchList (const GALGAS_syncInstructionBranchListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    p->mProperty_mBranchList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syncInstructionAST::readProperty_mEndOf_5F_on_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    return p->mProperty_mEndOf_5F_on_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionAST::setProperty_mEndOf_5F_on_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    p->mProperty_mEndOf_5F_on_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionAST::cPtr_syncInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                                  const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mBranchList (),
mProperty_mEndOf_5F_on_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBranchList = in_mBranchList ;
  mProperty_mEndOf_5F_on_5F_instruction = in_mEndOf_5F_on_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syncInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

void cPtr_syncInstructionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@syncInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_on_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncInstructionAST (mProperty_mInstructionLocation, mProperty_mBranchList, mProperty_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST ("syncInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST GALGAS_syncInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST result ;
  const GALGAS_syncInstructionAST * p = (const GALGAS_syncInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syncInstructionAST_2D_weak::objectCompare (const GALGAS_syncInstructionAST_2D_weak & inOperand) const {
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

GALGAS_syncInstructionAST_2D_weak::GALGAS_syncInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST_2D_weak & GALGAS_syncInstructionAST_2D_weak::operator = (const GALGAS_syncInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST_2D_weak::GALGAS_syncInstructionAST_2D_weak (const GALGAS_syncInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST_2D_weak GALGAS_syncInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_syncInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST GALGAS_syncInstructionAST_2D_weak::bang_syncInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncInstructionAST) ;
      result = GALGAS_syncInstructionAST ((cPtr_syncInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST_2D_weak ("syncInstructionAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionAST_2D_weak GALGAS_syncInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionAST_2D_weak result ;
  const GALGAS_syncInstructionAST_2D_weak * p = (const GALGAS_syncInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR::GALGAS_guardedCommandIR (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::class_func_booleanGuard (const GALGAS_bool & inAssociatedValue0,
                                                                          const GALGAS_instructionListIR & inAssociatedValue1,
                                                                          const GALGAS_string & inAssociatedValue2
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  result.mEnum = Enumeration::enum_booleanGuard ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_guardedCommandIR_2D_booleanGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::class_func_sync (const GALGAS_bool & inAssociatedValue0,
                                                                  const GALGAS_string & inAssociatedValue1,
                                                                  const GALGAS_instructionListIR & inAssociatedValue2,
                                                                  const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  result.mEnum = Enumeration::enum_sync ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_guardedCommandIR_2D_sync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::class_func_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                         const GALGAS_instructionListIR & inAssociatedValue1,
                                                                         const GALGAS_string & inAssociatedValue2,
                                                                         const GALGAS_string & inAssociatedValue3,
                                                                         const GALGAS_instructionListIR & inAssociatedValue4,
                                                                         const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue5
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  result.mEnum = Enumeration::enum_boolAndSync ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_guardedCommandIR_2D_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::method_booleanGuard (GALGAS_bool & outAssociatedValue_isExitCommand,
                                                   GALGAS_instructionListIR & outAssociatedValue_instructionGenerationList,
                                                   GALGAS_string & outAssociatedValue_boolGuardBoolLLVMName,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_booleanGuard) {
    outAssociatedValue_isExitCommand.drop () ;
    outAssociatedValue_instructionGenerationList.drop () ;
    outAssociatedValue_boolGuardBoolLLVMName.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandIR.booleanGuard invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_guardedCommandIR_2D_booleanGuard *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_instructionGenerationList = ptr->mProperty_instructionGenerationList ;
    outAssociatedValue_boolGuardBoolLLVMName = ptr->mProperty_boolGuardBoolLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::method_sync (GALGAS_bool & outAssociatedValue_isExitCommand,
                                           GALGAS_string & outAssociatedValue_guardMangledName,
                                           GALGAS_instructionListIR & outAssociatedValue_guardInstructionGenerationList,
                                           GALGAS_procCallEffectiveParameterListIR & outAssociatedValue_effectiveParameterListIR,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_sync) {
    outAssociatedValue_isExitCommand.drop () ;
    outAssociatedValue_guardMangledName.drop () ;
    outAssociatedValue_guardInstructionGenerationList.drop () ;
    outAssociatedValue_effectiveParameterListIR.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandIR.sync invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_guardedCommandIR_2D_sync *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_guardMangledName = ptr->mProperty_guardMangledName ;
    outAssociatedValue_guardInstructionGenerationList = ptr->mProperty_guardInstructionGenerationList ;
    outAssociatedValue_effectiveParameterListIR = ptr->mProperty_effectiveParameterListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::method_boolAndSync (GALGAS_bool & outAssociatedValue_isExitCommand,
                                                  GALGAS_instructionListIR & outAssociatedValue_boolExpInstructionGenerationList,
                                                  GALGAS_string & outAssociatedValue_boolGuardBoolLLVMName,
                                                  GALGAS_string & outAssociatedValue_guardMangledName,
                                                  GALGAS_instructionListIR & outAssociatedValue_guardInstructionGenerationList,
                                                  GALGAS_procCallEffectiveParameterListIR & outAssociatedValue_effectiveParameterListIR,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_boolAndSync) {
    outAssociatedValue_isExitCommand.drop () ;
    outAssociatedValue_boolExpInstructionGenerationList.drop () ;
    outAssociatedValue_boolGuardBoolLLVMName.drop () ;
    outAssociatedValue_guardMangledName.drop () ;
    outAssociatedValue_guardInstructionGenerationList.drop () ;
    outAssociatedValue_effectiveParameterListIR.drop () ;
    String s ;
    s.appendCString ("method @guardedCommandIR.boolAndSync invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_guardedCommandIR_2D_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_boolExpInstructionGenerationList = ptr->mProperty_boolExpInstructionGenerationList ;
    outAssociatedValue_boolGuardBoolLLVMName = ptr->mProperty_boolGuardBoolLLVMName ;
    outAssociatedValue_guardMangledName = ptr->mProperty_guardMangledName ;
    outAssociatedValue_guardInstructionGenerationList = ptr->mProperty_guardInstructionGenerationList ;
    outAssociatedValue_effectiveParameterListIR = ptr->mProperty_effectiveParameterListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR_2D_booleanGuard_3F_ GALGAS_guardedCommandIR::getter_booleanGuard (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardedCommandIR_2D_booleanGuard_3F_ result ;
  if (mEnum == Enumeration::enum_booleanGuard) {
    const auto ptr = (const GALGAS_guardedCommandIR_2D_booleanGuard *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_guardedCommandIR_2D_booleanGuard (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::getAssociatedValuesFor_booleanGuard (GALGAS_bool & out_isExitCommand,
                                                                   GALGAS_instructionListIR & out_instructionGenerationList,
                                                                   GALGAS_string & out_boolGuardBoolLLVMName) const {
  const auto ptr = (const GALGAS_guardedCommandIR_2D_booleanGuard *) mAssociatedValues.associatedValuesPointer () ;
  out_isExitCommand = ptr->mProperty_isExitCommand ;
  out_instructionGenerationList = ptr->mProperty_instructionGenerationList ;
  out_boolGuardBoolLLVMName = ptr->mProperty_boolGuardBoolLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR_2D_sync_3F_ GALGAS_guardedCommandIR::getter_sync (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardedCommandIR_2D_sync_3F_ result ;
  if (mEnum == Enumeration::enum_sync) {
    const auto ptr = (const GALGAS_guardedCommandIR_2D_sync *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_guardedCommandIR_2D_sync (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::getAssociatedValuesFor_sync (GALGAS_bool & out_isExitCommand,
                                                           GALGAS_string & out_guardMangledName,
                                                           GALGAS_instructionListIR & out_guardInstructionGenerationList,
                                                           GALGAS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const {
  const auto ptr = (const GALGAS_guardedCommandIR_2D_sync *) mAssociatedValues.associatedValuesPointer () ;
  out_isExitCommand = ptr->mProperty_isExitCommand ;
  out_guardMangledName = ptr->mProperty_guardMangledName ;
  out_guardInstructionGenerationList = ptr->mProperty_guardInstructionGenerationList ;
  out_effectiveParameterListIR = ptr->mProperty_effectiveParameterListIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR_2D_boolAndSync_3F_ GALGAS_guardedCommandIR::getter_boolAndSync (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardedCommandIR_2D_boolAndSync_3F_ result ;
  if (mEnum == Enumeration::enum_boolAndSync) {
    const auto ptr = (const GALGAS_guardedCommandIR_2D_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_guardedCommandIR_2D_boolAndSync (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::getAssociatedValuesFor_boolAndSync (GALGAS_bool & out_isExitCommand,
                                                                  GALGAS_instructionListIR & out_boolExpInstructionGenerationList,
                                                                  GALGAS_string & out_boolGuardBoolLLVMName,
                                                                  GALGAS_string & out_guardMangledName,
                                                                  GALGAS_instructionListIR & out_guardInstructionGenerationList,
                                                                  GALGAS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const {
  const auto ptr = (const GALGAS_guardedCommandIR_2D_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
  out_isExitCommand = ptr->mProperty_isExitCommand ;
  out_boolExpInstructionGenerationList = ptr->mProperty_boolExpInstructionGenerationList ;
  out_boolGuardBoolLLVMName = ptr->mProperty_boolGuardBoolLLVMName ;
  out_guardMangledName = ptr->mProperty_guardMangledName ;
  out_guardInstructionGenerationList = ptr->mProperty_guardInstructionGenerationList ;
  out_effectiveParameterListIR = ptr->mProperty_effectiveParameterListIR ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardedCommandIR [4] = {
  "(not built)",
  "booleanGuard",
  "sync",
  "boolAndSync"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardedCommandIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardedCommandIR [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @guardedCommandIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR ("guardedCommandIR",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardedCommandIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardedCommandIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  const GALGAS_guardedCommandIR * p = (const GALGAS_guardedCommandIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardedCommandIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syncInstructionBranchListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syncInstructionBranchListIR : public cCollectionElement {
  public: GALGAS_syncInstructionBranchListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_syncInstructionBranchListIR (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                          const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListIR::cCollectionElement_syncInstructionBranchListIR (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                                                                const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionGenerationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListIR::cCollectionElement_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGuardedCommand, inElement.mProperty_mInstructionGenerationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syncInstructionBranchListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syncInstructionBranchListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListIR (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionGenerationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syncInstructionBranchListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGuardedCommand" ":") ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionGenerationList" ":") ;
  mObject.mProperty_mInstructionGenerationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::enterElement (const GALGAS_syncInstructionBranchListIR_2D_element & inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::class_func_listWithValue (const GALGAS_guardedCommandIR & inOperand0,
                                                                                                 const GALGAS_instructionListIR & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syncInstructionBranchListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                                    const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (in_mGuardedCommand,
                                                                 in_mInstructionGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::addAssign_operation (const GALGAS_guardedCommandIR & inOperand0,
                                                              const GALGAS_instructionListIR & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_append (const GALGAS_guardedCommandIR inOperand0,
                                                        const GALGAS_instructionListIR inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_insertAtIndex (const GALGAS_guardedCommandIR inOperand0,
                                                               const GALGAS_instructionListIR inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_removeAtIndex (GALGAS_guardedCommandIR & outOperand0,
                                                               GALGAS_instructionListIR & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
        outOperand0 = p->mObject.mProperty_mGuardedCommand ;
        outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_popFirst (GALGAS_guardedCommandIR & outOperand0,
                                                          GALGAS_instructionListIR & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_popLast (GALGAS_guardedCommandIR & outOperand0,
                                                         GALGAS_instructionListIR & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::method_first (GALGAS_guardedCommandIR & outOperand0,
                                                       GALGAS_instructionListIR & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::method_last (GALGAS_guardedCommandIR & outOperand0,
                                                      GALGAS_instructionListIR & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::add_operation (const GALGAS_syncInstructionBranchListIR & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::plusAssign_operation (const GALGAS_syncInstructionBranchListIR inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_setMGuardedCommandAtIndex (GALGAS_guardedCommandIR inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommand = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_syncInstructionBranchListIR::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  GALGAS_guardedCommandIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListIR::setter_setMInstructionGenerationListAtIndex (GALGAS_instructionListIR inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionGenerationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_syncInstructionBranchListIR::getter_mInstructionGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    result = p->mObject.mProperty_mInstructionGenerationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syncInstructionBranchListIR::cEnumerator_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR_2D_element cEnumerator_syncInstructionBranchListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR cEnumerator_syncInstructionBranchListIR::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR cEnumerator_syncInstructionBranchListIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mProperty_mInstructionGenerationList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionBranchListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR ("syncInstructionBranchListIR",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionBranchListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR result ;
  const GALGAS_syncInstructionBranchListIR * p = (const GALGAS_syncInstructionBranchListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionBranchListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@guardedCommandIRList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guardedCommandIRList : public cCollectionElement {
  public: GALGAS_guardedCommandIRList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIR & in_mGuardedCommand
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIRList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guardedCommandIRList::cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIR & in_mGuardedCommand
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guardedCommandIRList::cCollectionElement_guardedCommandIRList (const GALGAS_guardedCommandIRList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGuardedCommand) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_guardedCommandIRList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guardedCommandIRList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_guardedCommandIRList (mObject.mProperty_mGuardedCommand COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_guardedCommandIRList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGuardedCommand" ":") ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList::GALGAS_guardedCommandIRList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList::GALGAS_guardedCommandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guardedCommandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_guardedCommandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::enterElement (const GALGAS_guardedCommandIRList_2D_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_guardedCommandIRList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::class_func_listWithValue (const GALGAS_guardedCommandIR & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIRList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_guardedCommandIRList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guardedCommandIRList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_guardedCommandIR & in_mGuardedCommand
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_guardedCommandIRList * p = nullptr ;
  macroMyNew (p, cCollectionElement_guardedCommandIRList (in_mGuardedCommand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::addAssign_operation (const GALGAS_guardedCommandIR & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_append (const GALGAS_guardedCommandIR inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_insertAtIndex (const GALGAS_guardedCommandIR inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_removeAtIndex (GALGAS_guardedCommandIR & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
        outOperand0 = p->mObject.mProperty_mGuardedCommand ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_popFirst (GALGAS_guardedCommandIR & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_popLast (GALGAS_guardedCommandIR & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::method_first (GALGAS_guardedCommandIR & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::method_last (GALGAS_guardedCommandIR & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::add_operation (const GALGAS_guardedCommandIRList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guardedCommandIRList result = GALGAS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::plusAssign_operation (const GALGAS_guardedCommandIRList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardedCommandIRList::setter_setMGuardedCommandAtIndex (GALGAS_guardedCommandIR inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommand = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR GALGAS_guardedCommandIRList::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  GALGAS_guardedCommandIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_guardedCommandIRList::cEnumerator_guardedCommandIRList (const GALGAS_guardedCommandIRList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList_2D_element cEnumerator_guardedCommandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_guardedCommandIRList * p = (const cCollectionElement_guardedCommandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIR cEnumerator_guardedCommandIRList::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_guardedCommandIRList * p = (const cCollectionElement_guardedCommandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
  return p->mObject.mProperty_mGuardedCommand ;
}




//--------------------------------------------------------------------------------------------------
//
//     @guardedCommandIRList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIRList ("guardedCommandIRList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardedCommandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIRList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardedCommandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandIRList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandIRList GALGAS_guardedCommandIRList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIRList result ;
  const GALGAS_guardedCommandIRList * p = (const GALGAS_guardedCommandIRList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardedCommandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionIR::cPtr_syncInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mSelectInstructionLocation (),
mProperty_mOnInstructionBranchListIR () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mSelectInstructionLocation.printNonNullClassInstanceProperties ("mSelectInstructionLocation") ;
    mProperty_mOnInstructionBranchListIR.printNonNullClassInstanceProperties ("mOnInstructionBranchListIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syncInstructionIR::objectCompare (const GALGAS_syncInstructionIR & inOperand) const {
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

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::
init_21__21_ (const GALGAS_location & in_mSelectInstructionLocation,
              const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syncInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_syncInstructionIR (inCompiler COMMA_THERE)) ;
  object->syncInstructionIR_init_21__21_ (in_mSelectInstructionLocation, in_mOnInstructionBranchListIR, inCompiler) ;
  const GALGAS_syncInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::
syncInstructionIR_init_21__21_ (const GALGAS_location & in_mSelectInstructionLocation,
                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
                                Compiler * /* inCompiler */) {
  mProperty_mSelectInstructionLocation = in_mSelectInstructionLocation ;
  mProperty_mOnInstructionBranchListIR = in_mOnInstructionBranchListIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (const cPtr_syncInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::class_func_new (const GALGAS_location & in_mSelectInstructionLocation,
                                                                   const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_syncInstructionIR (in_mSelectInstructionLocation, in_mOnInstructionBranchListIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syncInstructionIR::readProperty_mSelectInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    return p->mProperty_mSelectInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionIR::setProperty_mSelectInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    p->mProperty_mSelectInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionIR::readProperty_mOnInstructionBranchListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syncInstructionBranchListIR () ;
  }else{
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    return p->mProperty_mOnInstructionBranchListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionIR::setProperty_mOnInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    p->mProperty_mOnInstructionBranchListIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSelectInstructionLocation (),
mProperty_mOnInstructionBranchListIR () {
  mProperty_mSelectInstructionLocation = in_mSelectInstructionLocation ;
  mProperty_mOnInstructionBranchListIR = in_mOnInstructionBranchListIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syncInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

void cPtr_syncInstructionIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@syncInstructionIR:") ;
  mProperty_mSelectInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOnInstructionBranchListIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncInstructionIR (mProperty_mSelectInstructionLocation, mProperty_mOnInstructionBranchListIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR ("syncInstructionIR",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  const GALGAS_syncInstructionIR * p = (const GALGAS_syncInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syncInstructionIR_2D_weak::objectCompare (const GALGAS_syncInstructionIR_2D_weak & inOperand) const {
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

GALGAS_syncInstructionIR_2D_weak::GALGAS_syncInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR_2D_weak & GALGAS_syncInstructionIR_2D_weak::operator = (const GALGAS_syncInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR_2D_weak::GALGAS_syncInstructionIR_2D_weak (const GALGAS_syncInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR_2D_weak GALGAS_syncInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_syncInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR GALGAS_syncInstructionIR_2D_weak::bang_syncInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncInstructionIR) ;
      result = GALGAS_syncInstructionIR ((cPtr_syncInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR_2D_weak ("syncInstructionIR-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionIR_2D_weak GALGAS_syncInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR_2D_weak result ;
  const GALGAS_syncInstructionIR_2D_weak * p = (const GALGAS_syncInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @whileInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionAST::cPtr_whileInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_m_5F_while_5F_Expression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mWhileInstructionList (),
mProperty_mEndOf_5F_while_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_whileInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_m_5F_while_5F_Expression.printNonNullClassInstanceProperties ("m_while_Expression") ;
    mProperty_mEndOf_5F_test_5F_expression.printNonNullClassInstanceProperties ("mEndOf_test_expression") ;
    mProperty_mWhileInstructionList.printNonNullClassInstanceProperties ("mWhileInstructionList") ;
    mProperty_mEndOf_5F_while_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_while_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_whileInstructionAST::objectCompare (const GALGAS_whileInstructionAST & inOperand) const {
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

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                          const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                          const GALGAS_instructionListAST & in_mWhileInstructionList,
                          const GALGAS_location & in_mEndOf_5F_while_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_whileInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_whileInstructionAST (inCompiler COMMA_THERE)) ;
  object->whileInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_m_5F_while_5F_Expression, in_mEndOf_5F_test_5F_expression, in_mWhileInstructionList, in_mEndOf_5F_while_5F_instruction, inCompiler) ;
  const GALGAS_whileInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::
whileInstructionAST_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                                              const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                              const GALGAS_instructionListAST & in_mWhileInstructionList,
                                              const GALGAS_location & in_mEndOf_5F_while_5F_instruction,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_m_5F_while_5F_Expression = in_m_5F_while_5F_Expression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mEndOf_5F_while_5F_instruction = in_mEndOf_5F_while_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                                                                       const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                                       const GALGAS_instructionListAST & in_mWhileInstructionList,
                                                                       const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_whileInstructionAST (in_mInstructionLocation, in_m_5F_while_5F_Expression, in_mEndOf_5F_test_5F_expression, in_mWhileInstructionList, in_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_whileInstructionAST::readProperty_m_5F_while_5F_Expression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_m_5F_while_5F_Expression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionAST::setProperty_m_5F_while_5F_Expression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_m_5F_while_5F_Expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_whileInstructionAST::readProperty_mEndOf_5F_test_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mEndOf_5F_test_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionAST::setProperty_mEndOf_5F_test_5F_expression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_whileInstructionAST::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionAST::setProperty_mWhileInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_whileInstructionAST::readProperty_mEndOf_5F_while_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mEndOf_5F_while_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionAST::setProperty_mEndOf_5F_while_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mEndOf_5F_while_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @whileInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionAST::cPtr_whileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                                                    const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                    const GALGAS_instructionListAST & in_mWhileInstructionList,
                                                    const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_m_5F_while_5F_Expression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mWhileInstructionList (),
mProperty_mEndOf_5F_while_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_m_5F_while_5F_Expression = in_m_5F_while_5F_Expression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mEndOf_5F_while_5F_instruction = in_mEndOf_5F_while_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_whileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

void cPtr_whileInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@whileInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_while_5F_Expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_while_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_whileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_whileInstructionAST (mProperty_mInstructionLocation, mProperty_m_5F_while_5F_Expression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mWhileInstructionList, mProperty_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST ("whileInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_whileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_whileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  const GALGAS_whileInstructionAST * p = (const GALGAS_whileInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_whileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_whileInstructionAST_2D_weak::objectCompare (const GALGAS_whileInstructionAST_2D_weak & inOperand) const {
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

GALGAS_whileInstructionAST_2D_weak::GALGAS_whileInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST_2D_weak & GALGAS_whileInstructionAST_2D_weak::operator = (const GALGAS_whileInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST_2D_weak::GALGAS_whileInstructionAST_2D_weak (const GALGAS_whileInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST_2D_weak GALGAS_whileInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_whileInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST GALGAS_whileInstructionAST_2D_weak::bang_whileInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_whileInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_whileInstructionAST) ;
      result = GALGAS_whileInstructionAST ((cPtr_whileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST_2D_weak ("whileInstructionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_whileInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_whileInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionAST_2D_weak GALGAS_whileInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST_2D_weak result ;
  const GALGAS_whileInstructionAST_2D_weak * p = (const GALGAS_whileInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_whileInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @whileInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionIR::cPtr_whileInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLabelIndex (),
mProperty_mTestInstructionGenerationList (),
mProperty_m_5F_while_5F_llvmName (),
mProperty_mInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_whileInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLabelIndex.printNonNullClassInstanceProperties ("mLabelIndex") ;
    mProperty_mTestInstructionGenerationList.printNonNullClassInstanceProperties ("mTestInstructionGenerationList") ;
    mProperty_m_5F_while_5F_llvmName.printNonNullClassInstanceProperties ("m_while_llvmName") ;
    mProperty_mInstructionGenerationList.printNonNullClassInstanceProperties ("mInstructionGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_whileInstructionIR::objectCompare (const GALGAS_whileInstructionIR & inOperand) const {
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

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::
init_21__21__21__21_ (const GALGAS_uint & in_mLabelIndex,
                      const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                      const GALGAS_string & in_m_5F_while_5F_llvmName,
                      const GALGAS_instructionListIR & in_mInstructionGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_whileInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_whileInstructionIR (inCompiler COMMA_THERE)) ;
  object->whileInstructionIR_init_21__21__21__21_ (in_mLabelIndex, in_mTestInstructionGenerationList, in_m_5F_while_5F_llvmName, in_mInstructionGenerationList, inCompiler) ;
  const GALGAS_whileInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::
whileInstructionIR_init_21__21__21__21_ (const GALGAS_uint & in_mLabelIndex,
                                         const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                         const GALGAS_string & in_m_5F_while_5F_llvmName,
                                         const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                         Compiler * /* inCompiler */) {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mTestInstructionGenerationList = in_mTestInstructionGenerationList ;
  mProperty_m_5F_while_5F_llvmName = in_m_5F_while_5F_llvmName ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::class_func_new (const GALGAS_uint & in_mLabelIndex,
                                                                     const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                                                     const GALGAS_string & in_m_5F_while_5F_llvmName,
                                                                     const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_whileInstructionIR (in_mLabelIndex, in_mTestInstructionGenerationList, in_m_5F_while_5F_llvmName, in_mInstructionGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_whileInstructionIR::readProperty_mLabelIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mLabelIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionIR::setProperty_mLabelIndex (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_whileInstructionIR::readProperty_mTestInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mTestInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionIR::setProperty_mTestInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mTestInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_whileInstructionIR::readProperty_m_5F_while_5F_llvmName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_m_5F_while_5F_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionIR::setProperty_m_5F_while_5F_llvmName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_m_5F_while_5F_llvmName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_whileInstructionIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_whileInstructionIR::setProperty_mInstructionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @whileInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionIR::cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                                  const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                                  const GALGAS_string & in_m_5F_while_5F_llvmName,
                                                  const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLabelIndex (),
mProperty_mTestInstructionGenerationList (),
mProperty_m_5F_while_5F_llvmName (),
mProperty_mInstructionGenerationList () {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mTestInstructionGenerationList = in_mTestInstructionGenerationList ;
  mProperty_m_5F_while_5F_llvmName = in_m_5F_while_5F_llvmName ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_whileInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

void cPtr_whileInstructionIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@whileInstructionIR:") ;
  mProperty_mLabelIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTestInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_while_5F_llvmName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_whileInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_whileInstructionIR (mProperty_mLabelIndex, mProperty_mTestInstructionGenerationList, mProperty_m_5F_while_5F_llvmName, mProperty_mInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR ("whileInstructionIR",
                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_whileInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_whileInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  const GALGAS_whileInstructionIR * p = (const GALGAS_whileInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_whileInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_whileInstructionIR_2D_weak::objectCompare (const GALGAS_whileInstructionIR_2D_weak & inOperand) const {
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

GALGAS_whileInstructionIR_2D_weak::GALGAS_whileInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR_2D_weak & GALGAS_whileInstructionIR_2D_weak::operator = (const GALGAS_whileInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR_2D_weak::GALGAS_whileInstructionIR_2D_weak (const GALGAS_whileInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR_2D_weak GALGAS_whileInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_whileInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR GALGAS_whileInstructionIR_2D_weak::bang_whileInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_whileInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_whileInstructionIR) ;
      result = GALGAS_whileInstructionIR ((cPtr_whileInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR_2D_weak ("whileInstructionIR-weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_whileInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_whileInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_whileInstructionIR_2D_weak GALGAS_whileInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR_2D_weak result ;
  const GALGAS_whileInstructionIR_2D_weak * p = (const GALGAS_whileInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_whileInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionAST_2D_weak::objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const {
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

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak & GALGAS_forInstructionAST_2D_weak::operator = (const GALGAS_forInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (const GALGAS_forInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST_2D_weak::bang_forInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GALGAS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ("forInstructionAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  const GALGAS_forInstructionAST_2D_weak * p = (const GALGAS_forInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionOnArrayIR_2D_weak::objectCompare (const GALGAS_forInstructionOnArrayIR_2D_weak & inOperand) const {
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

GALGAS_forInstructionOnArrayIR_2D_weak::GALGAS_forInstructionOnArrayIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR_2D_weak & GALGAS_forInstructionOnArrayIR_2D_weak::operator = (const GALGAS_forInstructionOnArrayIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR_2D_weak::GALGAS_forInstructionOnArrayIR_2D_weak (const GALGAS_forInstructionOnArrayIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR_2D_weak GALGAS_forInstructionOnArrayIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR_2D_weak::bang_forInstructionOnArrayIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionOnArrayIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionOnArrayIR) ;
      result = GALGAS_forInstructionOnArrayIR ((cPtr_forInstructionOnArrayIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionOnArrayIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2D_weak ("forInstructionOnArrayIR-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionOnArrayIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionOnArrayIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnArrayIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR_2D_weak GALGAS_forInstructionOnArrayIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR_2D_weak result ;
  const GALGAS_forInstructionOnArrayIR_2D_weak * p = (const GALGAS_forInstructionOnArrayIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionOnArrayIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionOnLiteralStringIR_2D_weak::objectCompare (const GALGAS_forInstructionOnLiteralStringIR_2D_weak & inOperand) const {
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

GALGAS_forInstructionOnLiteralStringIR_2D_weak::GALGAS_forInstructionOnLiteralStringIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR_2D_weak & GALGAS_forInstructionOnLiteralStringIR_2D_weak::operator = (const GALGAS_forInstructionOnLiteralStringIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR_2D_weak::GALGAS_forInstructionOnLiteralStringIR_2D_weak (const GALGAS_forInstructionOnLiteralStringIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR_2D_weak GALGAS_forInstructionOnLiteralStringIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR_2D_weak::bang_forInstructionOnLiteralStringIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionOnLiteralStringIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionOnLiteralStringIR) ;
      result = GALGAS_forInstructionOnLiteralStringIR ((cPtr_forInstructionOnLiteralStringIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionOnLiteralStringIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2D_weak ("forInstructionOnLiteralStringIR-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionOnLiteralStringIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionOnLiteralStringIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnLiteralStringIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR_2D_weak GALGAS_forInstructionOnLiteralStringIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR_2D_weak result ;
  const GALGAS_forInstructionOnLiteralStringIR_2D_weak * p = (const GALGAS_forInstructionOnLiteralStringIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionOnLiteralStringIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnLiteralStringIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forLowerUpperBoundInstructionAST_2D_weak::objectCompare (const GALGAS_forLowerUpperBoundInstructionAST_2D_weak & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionAST_2D_weak::GALGAS_forLowerUpperBoundInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST_2D_weak & GALGAS_forLowerUpperBoundInstructionAST_2D_weak::operator = (const GALGAS_forLowerUpperBoundInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST_2D_weak::GALGAS_forLowerUpperBoundInstructionAST_2D_weak (const GALGAS_forLowerUpperBoundInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST_2D_weak GALGAS_forLowerUpperBoundInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST_2D_weak::bang_forLowerUpperBoundInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forLowerUpperBoundInstructionAST) ;
      result = GALGAS_forLowerUpperBoundInstructionAST ((cPtr_forLowerUpperBoundInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forLowerUpperBoundInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2D_weak ("forLowerUpperBoundInstructionAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST_2D_weak GALGAS_forLowerUpperBoundInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST_2D_weak result ;
  const GALGAS_forLowerUpperBoundInstructionAST_2D_weak * p = (const GALGAS_forLowerUpperBoundInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forLowerUpperBoundInstructionIR_2D_weak::objectCompare (const GALGAS_forLowerUpperBoundInstructionIR_2D_weak & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionIR_2D_weak::GALGAS_forLowerUpperBoundInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR_2D_weak & GALGAS_forLowerUpperBoundInstructionIR_2D_weak::operator = (const GALGAS_forLowerUpperBoundInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR_2D_weak::GALGAS_forLowerUpperBoundInstructionIR_2D_weak (const GALGAS_forLowerUpperBoundInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR_2D_weak GALGAS_forLowerUpperBoundInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR_2D_weak::bang_forLowerUpperBoundInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forLowerUpperBoundInstructionIR) ;
      result = GALGAS_forLowerUpperBoundInstructionIR ((cPtr_forLowerUpperBoundInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forLowerUpperBoundInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2D_weak ("forLowerUpperBoundInstructionIR-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR_2D_weak GALGAS_forLowerUpperBoundInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR_2D_weak result ;
  const GALGAS_forLowerUpperBoundInstructionIR_2D_weak * p = (const GALGAS_forLowerUpperBoundInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_callInstructionAST_2D_weak::objectCompare (const GALGAS_callInstructionAST_2D_weak & inOperand) const {
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

GALGAS_callInstructionAST_2D_weak::GALGAS_callInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST_2D_weak & GALGAS_callInstructionAST_2D_weak::operator = (const GALGAS_callInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST_2D_weak::GALGAS_callInstructionAST_2D_weak (const GALGAS_callInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST_2D_weak GALGAS_callInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_callInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST GALGAS_callInstructionAST_2D_weak::bang_callInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_callInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_callInstructionAST) ;
      result = GALGAS_callInstructionAST ((cPtr_callInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @callInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST_2D_weak ("callInstructionAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_callInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_callInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_callInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_callInstructionAST_2D_weak GALGAS_callInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_callInstructionAST_2D_weak result ;
  const GALGAS_callInstructionAST_2D_weak * p = (const GALGAS_callInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_callInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("callInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_standAloneProcedureCallInstructionAST_2D_weak::objectCompare (const GALGAS_standAloneProcedureCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_standAloneProcedureCallInstructionAST_2D_weak::GALGAS_standAloneProcedureCallInstructionAST_2D_weak (void) :
GALGAS_callInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST_2D_weak & GALGAS_standAloneProcedureCallInstructionAST_2D_weak::operator = (const GALGAS_standAloneProcedureCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST_2D_weak::GALGAS_standAloneProcedureCallInstructionAST_2D_weak (const GALGAS_standAloneProcedureCallInstructionAST & inSource) :
GALGAS_callInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST_2D_weak GALGAS_standAloneProcedureCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST_2D_weak::bang_standAloneProcedureCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standAloneProcedureCallInstructionAST) ;
      result = GALGAS_standAloneProcedureCallInstructionAST ((cPtr_standAloneProcedureCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @standAloneProcedureCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2D_weak ("standAloneProcedureCallInstructionAST-weak",
                                                                                                     & kTypeDescriptor_GALGAS_callInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standAloneProcedureCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standAloneProcedureCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standAloneProcedureCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST_2D_weak GALGAS_standAloneProcedureCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST_2D_weak result ;
  const GALGAS_standAloneProcedureCallInstructionAST_2D_weak * p = (const GALGAS_standAloneProcedureCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_standAloneProcedureCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standAloneProcedureCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@accessInAssignmentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_accessInAssignmentListAST : public cCollectionElement {
  public: GALGAS_accessInAssignmentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentAST & in_mAccess
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_accessInAssignmentListAST::cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentAST & in_mAccess
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_accessInAssignmentListAST::cCollectionElement_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_accessInAssignmentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_accessInAssignmentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_accessInAssignmentListAST (mObject.mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_accessInAssignmentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccess" ":") ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST::GALGAS_accessInAssignmentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessInAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_accessInAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::enterElement (const GALGAS_accessInAssignmentListAST_2D_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::class_func_listWithValue (const GALGAS_accessInAssignmentAST & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_accessInAssignmentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_accessInAssignmentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_accessInAssignmentAST & in_mAccess
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_accessInAssignmentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_accessInAssignmentListAST (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::addAssign_operation (const GALGAS_accessInAssignmentAST & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_append (const GALGAS_accessInAssignmentAST inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_insertAtIndex (const GALGAS_accessInAssignmentAST inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_removeAtIndex (GALGAS_accessInAssignmentAST & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
        outOperand0 = p->mObject.mProperty_mAccess ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_popFirst (GALGAS_accessInAssignmentAST & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_popLast (GALGAS_accessInAssignmentAST & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::method_first (GALGAS_accessInAssignmentAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::method_last (GALGAS_accessInAssignmentAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    outOperand0 = p->mObject.mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::add_operation (const GALGAS_accessInAssignmentListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result = GALGAS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::plusAssign_operation (const GALGAS_accessInAssignmentListAST inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentListAST::setter_setMAccessAtIndex (GALGAS_accessInAssignmentAST inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAccess = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentListAST::getter_mAccessAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  GALGAS_accessInAssignmentAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    result = p->mObject.mProperty_mAccess ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_accessInAssignmentListAST::cEnumerator_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST_2D_element cEnumerator_accessInAssignmentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST cEnumerator_accessInAssignmentListAST::current_mAccess (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject.mProperty_mAccess ;
}




//--------------------------------------------------------------------------------------------------
//
//     @accessInAssignmentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST ("accessInAssignmentListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_accessInAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_accessInAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_accessInAssignmentListAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST result ;
  const GALGAS_accessInAssignmentListAST * p = (const GALGAS_accessInAssignmentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_accessInAssignmentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_procedureCallInstructionAST_2D_weak::objectCompare (const GALGAS_procedureCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_procedureCallInstructionAST_2D_weak::GALGAS_procedureCallInstructionAST_2D_weak (void) :
GALGAS_callInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST_2D_weak & GALGAS_procedureCallInstructionAST_2D_weak::operator = (const GALGAS_procedureCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST_2D_weak::GALGAS_procedureCallInstructionAST_2D_weak (const GALGAS_procedureCallInstructionAST & inSource) :
GALGAS_callInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST_2D_weak GALGAS_procedureCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST_2D_weak::bang_procedureCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_procedureCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procedureCallInstructionAST) ;
      result = GALGAS_procedureCallInstructionAST ((cPtr_procedureCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procedureCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2D_weak ("procedureCallInstructionAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_callInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procedureCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procedureCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST_2D_weak GALGAS_procedureCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST_2D_weak result ;
  const GALGAS_procedureCallInstructionAST_2D_weak * p = (const GALGAS_procedureCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procedureCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST buildProcedureCallAccessList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildProcedureCallAccessList (const GALGAS_LValueOperandAST inObject,
                                                   GALGAS_accessInAssignmentListAST & ioArgument_ioAccessList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_3151_name_0 ;
      GALGAS_LValueOperandAST extractedValue_3174_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_3151_name_0, extractedValue_3174_next_1) ;
      ioArgument_ioAccessList.addAssign_operation (GALGAS_accessInAssignmentAST::class_func_property (extractedValue_3151_name_0  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3174_next_1, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 73)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_3316_index_0 ;
      GALGAS_location extractedValue_3332_endOfIndex_1 ;
      GALGAS_bool extractedValue_3349_checkIndexExpression_2 ;
      GALGAS_LValueOperandAST extractedValue_3388_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_3316_index_0, extractedValue_3332_endOfIndex_1, extractedValue_3349_checkIndexExpression_2, extractedValue_3388_next_3) ;
      ioArgument_ioAccessList.addAssign_operation (GALGAS_accessInAssignmentAST::class_func_arrayAccess (extractedValue_3316_index_0, extractedValue_3332_endOfIndex_1, extractedValue_3349_checkIndexExpression_2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3388_next_3, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 76)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST::GALGAS_effectiveArgumentPassingModeAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_input ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_effectiveArgumentPassingModeAST_2D_input (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                                         const GALGAS_lstring & inAssociatedValue1,
                                                                                                         const GALGAS_lstring & inAssociatedValue2
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_inputWithType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_output ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_effectiveArgumentPassingModeAST_2D_output (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_outputInput ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::class_func_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_outputInputSelfVariable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_input (GALGAS_lstring & outAssociatedValue_name,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_input) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.input invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_effectiveArgumentPassingModeAST_2D_input *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_inputWithType (GALGAS_bool & outAssociatedValue_constant,
                                                                   GALGAS_lstring & outAssociatedValue_typeName,
                                                                   GALGAS_lstring & outAssociatedValue_name,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_inputWithType) {
    outAssociatedValue_constant.drop () ;
    outAssociatedValue_typeName.drop () ;
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.inputWithType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_constant = ptr->mProperty_constant ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_output (GALGAS_expressionAST & outAssociatedValue_exp,
                                                            GALGAS_location & outAssociatedValue_endOfExp,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_output) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.output invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_effectiveArgumentPassingModeAST_2D_output *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_outputInput (GALGAS_lstring & outAssociatedValue_name,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_outputInput) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.outputInput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_effectiveArgumentPassingModeAST_2D_outputInput *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::method_outputInputSelfVariable (GALGAS_lstring & outAssociatedValue_name,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_outputInputSelfVariable) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.outputInputSelfVariable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ GALGAS_effectiveArgumentPassingModeAST::getter_input (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ result ;
  if (mEnum == Enumeration::enum_input) {
    const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_input *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_effectiveArgumentPassingModeAST_2D_input (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_input (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_input *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ GALGAS_effectiveArgumentPassingModeAST::getter_inputWithType (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ result ;
  if (mEnum == Enumeration::enum_inputWithType) {
    const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_inputWithType (GALGAS_bool & out_constant,
                                                                                   GALGAS_lstring & out_typeName,
                                                                                   GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType *) mAssociatedValues.associatedValuesPointer () ;
  out_constant = ptr->mProperty_constant ;
  out_typeName = ptr->mProperty_typeName ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ GALGAS_effectiveArgumentPassingModeAST::getter_output (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ result ;
  if (mEnum == Enumeration::enum_output) {
    const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_output *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_effectiveArgumentPassingModeAST_2D_output (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_output (GALGAS_expressionAST & out_exp,
                                                                            GALGAS_location & out_endOfExp) const {
  const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_output *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ GALGAS_effectiveArgumentPassingModeAST::getter_outputInput (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ result ;
  if (mEnum == Enumeration::enum_outputInput) {
    const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_outputInput (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ GALGAS_effectiveArgumentPassingModeAST::getter_outputInputSelfVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ result ;
  if (mEnum == Enumeration::enum_outputInputSelfVariable) {
    const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_outputInputSelfVariable (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_effectiveArgumentPassingModeAST [6] = {
  "(not built)",
  "input",
  "inputWithType",
  "output",
  "outputInput",
  "outputInputSelfVariable"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentPassingModeAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @effectiveArgumentPassingModeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_effectiveArgumentPassingModeAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentPassingModeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ("effectiveArgumentPassingModeAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentPassingModeAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentPassingModeAST result ;
  const GALGAS_effectiveArgumentPassingModeAST * p = (const GALGAS_effectiveArgumentPassingModeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@procEffectiveParameterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_procEffectiveParameterList : public cCollectionElement {
  public: GALGAS_procEffectiveParameterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                         const GALGAS_lstring & in_mSelector,
                                                         const GALGAS_omnibusType & in_mParameterType
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_procEffectiveParameterList (const GALGAS_procEffectiveParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                              const GALGAS_lstring & in_mSelector,
                                                                                              const GALGAS_omnibusType & in_mParameterType
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GALGAS_procEffectiveParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEffectiveParameterPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_procEffectiveParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_procEffectiveParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_procEffectiveParameterList (mObject.mProperty_mEffectiveParameterPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mParameterType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_procEffectiveParameterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEffectiveParameterPassingMode" ":") ;
  mObject.mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterType" ":") ;
  mObject.mProperty_mParameterType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_procEffectiveParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_procEffectiveParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::enterElement (const GALGAS_procEffectiveParameterList_2D_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::class_func_listWithValue (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                               const GALGAS_lstring & inOperand1,
                                                                                               const GALGAS_omnibusType & inOperand2
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procEffectiveParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_procEffectiveParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                   const GALGAS_lstring & in_mSelector,
                                                                   const GALGAS_omnibusType & in_mParameterType
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (in_mEffectiveParameterPassingMode,
                                                                in_mSelector,
                                                                in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::addAssign_operation (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_omnibusType & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_append (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_omnibusType inOperand2,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_insertAtIndex (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_omnibusType inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_removeAtIndex (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_omnibusType & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
        outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
        outOperand1 = p->mObject.mProperty_mSelector ;
        outOperand2 = p->mObject.mProperty_mParameterType ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_popFirst (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_omnibusType & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mParameterType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_popLast (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_omnibusType & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mParameterType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::method_first (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_omnibusType & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mParameterType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::method_last (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_omnibusType & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mParameterType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::add_operation (const GALGAS_procEffectiveParameterList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::plusAssign_operation (const GALGAS_procEffectiveParameterList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_setMEffectiveParameterPassingModeAtIndex (GALGAS_effectiveArgumentPassingModeAST inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEffectiveParameterPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST GALGAS_procEffectiveParameterList::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_procEffectiveParameterList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList::setter_setMParameterTypeAtIndex (GALGAS_omnibusType inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_procEffectiveParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mParameterType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_procEffectiveParameterList::cEnumerator_procEffectiveParameterList (const GALGAS_procEffectiveParameterList & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element cEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentPassingModeAST cEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mParameterType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @procEffectiveParameterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList ("procEffectiveParameterList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procEffectiveParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  const GALGAS_procEffectiveParameterList * p = (const GALGAS_procEffectiveParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procEffectiveParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR::GALGAS_procEffectiveParameterPassingModeIR (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::class_func_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = Enumeration::enum_input ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::class_func_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = Enumeration::enum_output ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::class_func_outputInput (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = Enumeration::enum_outputInput ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_input (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_input == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_output (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_output == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_outputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_outputInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_procEffectiveParameterPassingModeIR [4] = {
  "(not built)",
  "input",
  "output",
  "outputInput"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterPassingModeIR::description (String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @procEffectiveParameterPassingModeIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_procEffectiveParameterPassingModeIR [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @procEffectiveParameterPassingModeIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ("procEffectiveParameterPassingModeIR",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterPassingModeIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procEffectiveParameterPassingModeIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterPassingModeIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  const GALGAS_procEffectiveParameterPassingModeIR * p = (const GALGAS_procEffectiveParameterPassingModeIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procEffectiveParameterPassingModeIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterPassingModeIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@procCallEffectiveParameterListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_procCallEffectiveParameterListIR : public cCollectionElement {
  public: GALGAS_procCallEffectiveParameterListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                               const GALGAS_objectIR & in_mParameter
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                                                          const GALGAS_objectIR & in_mParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEffectiveParameterPassingMode, inElement.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_procCallEffectiveParameterListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_procCallEffectiveParameterListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_procCallEffectiveParameterListIR (mObject.mProperty_mEffectiveParameterPassingMode, mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_procCallEffectiveParameterListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEffectiveParameterPassingMode" ":") ;
  mObject.mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameter" ":") ;
  mObject.mProperty_mParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::enterElement (const GALGAS_procCallEffectiveParameterListIR_2D_element & inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::class_func_listWithValue (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                           const GALGAS_objectIR & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                         const GALGAS_objectIR & in_mParameter
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (in_mEffectiveParameterPassingMode,
                                                                      in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::addAssign_operation (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                   const GALGAS_objectIR & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_append (const GALGAS_procEffectiveParameterPassingModeIR inOperand0,
                                                             const GALGAS_objectIR inOperand1,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_insertAtIndex (const GALGAS_procEffectiveParameterPassingModeIR inOperand0,
                                                                    const GALGAS_objectIR inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_removeAtIndex (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                    GALGAS_objectIR & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
        outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
        outOperand1 = p->mObject.mProperty_mParameter ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_popFirst (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                               GALGAS_objectIR & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_popLast (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                              GALGAS_objectIR & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::method_first (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                            GALGAS_objectIR & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::method_last (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                           GALGAS_objectIR & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::add_operation (const GALGAS_procCallEffectiveParameterListIR & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::plusAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_setMEffectiveParameterPassingModeAtIndex (GALGAS_procEffectiveParameterPassingModeIR inOperand,
                                                                                               GALGAS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEffectiveParameterPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_procEffectiveParameterPassingModeIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mProperty_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procCallEffectiveParameterListIR::setter_setMParameterAtIndex (GALGAS_objectIR inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_procCallEffectiveParameterListIR::getter_mParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mProperty_mParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_procCallEffectiveParameterListIR::cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR_2D_element cEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterPassingModeIR cEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mParameter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @procCallEffectiveParameterListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ("procCallEffectiveParameterListIR",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  const GALGAS_procCallEffectiveParameterListIR * p = (const GALGAS_procCallEffectiveParameterListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@switchCaseListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchCaseListAST : public cCollectionElement {
  public: GALGAS_switchCaseListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_switchCaseListAST (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                const GALGAS_instructionListAST & in_mCaseInstructionList
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchCaseListAST (const GALGAS_switchCaseListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListAST::cCollectionElement_switchCaseListAST (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                                            const GALGAS_instructionListAST & in_mCaseInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifiers, in_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListAST::cCollectionElement_switchCaseListAST (const GALGAS_switchCaseListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCaseIdentifiers, inElement.mProperty_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchCaseListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchCaseListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchCaseListAST (mObject.mProperty_mCaseIdentifiers, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchCaseListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCaseIdentifiers" ":") ;
  mObject.mProperty_mCaseIdentifiers.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCaseInstructionList" ":") ;
  mObject.mProperty_mCaseInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST::GALGAS_switchCaseListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST::GALGAS_switchCaseListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::enterElement (const GALGAS_switchCaseListAST_2D_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::class_func_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                             const GALGAS_instructionListAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_switchCaseListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchCaseListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstringlist & in_mCaseIdentifiers,
                                                          const GALGAS_instructionListAST & in_mCaseInstructionList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListAST (in_mCaseIdentifiers,
                                                       in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                    const GALGAS_instructionListAST & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_append (const GALGAS_lstringlist inOperand0,
                                              const GALGAS_instructionListAST inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                     const GALGAS_instructionListAST inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                     GALGAS_instructionListAST & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
        outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
        outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                GALGAS_instructionListAST & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_popLast (GALGAS_lstringlist & outOperand0,
                                               GALGAS_instructionListAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::method_first (GALGAS_lstringlist & outOperand0,
                                             GALGAS_instructionListAST & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::method_last (GALGAS_lstringlist & outOperand0,
                                            GALGAS_instructionListAST & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::add_operation (const GALGAS_switchCaseListAST & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListAST result = GALGAS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::plusAssign_operation (const GALGAS_switchCaseListAST inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_setMCaseIdentifiersAtIndex (GALGAS_lstringlist inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseIdentifiers = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_switchCaseListAST::getter_mCaseIdentifiersAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    result = p->mObject.mProperty_mCaseIdentifiers ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListAST::setter_setMCaseInstructionListAtIndex (GALGAS_instructionListAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_switchCaseListAST::getter_mCaseInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchCaseListAST::cEnumerator_switchCaseListAST (const GALGAS_switchCaseListAST & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST_2D_element cEnumerator_switchCaseListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_switchCaseListAST::current_mCaseIdentifiers (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject.mProperty_mCaseIdentifiers ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST cEnumerator_switchCaseListAST::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject.mProperty_mCaseInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @switchCaseListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListAST ("switchCaseListAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchCaseListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchCaseListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchCaseListAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListAST result ;
  const GALGAS_switchCaseListAST * p = (const GALGAS_switchCaseListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchCaseListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mSwitchCaseList (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mEndOf_5F_test_5F_expression.printNonNullClassInstanceProperties ("mEndOf_test_expression") ;
    mProperty_mSwitchCaseList.printNonNullClassInstanceProperties ("mSwitchCaseList") ;
    mProperty_mEndOf_5F_switch_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_switch_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionAST::objectCompare (const GALGAS_switchInstructionAST & inOperand) const {
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

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_expressionAST & in_mSwitchExpression,
                          const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                          const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                          const GALGAS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOf_5F_test_5F_expression, in_mSwitchCaseList, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GALGAS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_expressionAST & in_mSwitchExpression,
                                               const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                               const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                                               const GALGAS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mSwitchCaseList = in_mSwitchCaseList ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                         const GALGAS_expressionAST & in_mSwitchExpression,
                                                                         const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                                         const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                                                                         const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (in_mInstructionLocation, in_mSwitchExpression, in_mEndOf_5F_test_5F_expression, in_mSwitchCaseList, in_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setProperty_mSwitchExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchInstructionAST::readProperty_mEndOf_5F_test_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_test_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setProperty_mEndOf_5F_test_5F_expression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListAST GALGAS_switchInstructionAST::readProperty_mSwitchCaseList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_switchCaseListAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchCaseList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setProperty_mSwitchCaseList (const GALGAS_switchCaseListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchCaseList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setProperty_mEndOf_5F_switch_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_switch_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_expressionAST & in_mSwitchExpression,
                                                      const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                      const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                                                      const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mSwitchCaseList (),
mProperty_mEndOf_5F_switch_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mSwitchCaseList = in_mSwitchCaseList ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchCaseList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mSwitchCaseList, mProperty_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  const GALGAS_switchInstructionAST * p = (const GALGAS_switchInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionAST_2D_weak::objectCompare (const GALGAS_switchInstructionAST_2D_weak & inOperand) const {
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

GALGAS_switchInstructionAST_2D_weak::GALGAS_switchInstructionAST_2D_weak (void) :
GALGAS_instructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak & GALGAS_switchInstructionAST_2D_weak::operator = (const GALGAS_switchInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak::GALGAS_switchInstructionAST_2D_weak (const GALGAS_switchInstructionAST & inSource) :
GALGAS_instructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak GALGAS_switchInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_switchInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST_2D_weak::bang_switchInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_switchInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionAST) ;
      result = GALGAS_switchInstructionAST ((cPtr_switchInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST_2D_weak ("switchInstructionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak GALGAS_switchInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST_2D_weak result ;
  const GALGAS_switchInstructionAST_2D_weak * p = (const GALGAS_switchInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@switchCaseListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchCaseListIR : public cCollectionElement {
  public: GALGAS_switchCaseListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_switchCaseListIR (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                               const GALGAS_instructionListIR & in_mCaseInstructionList
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchCaseListIR (const GALGAS_switchCaseListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListIR::cCollectionElement_switchCaseListIR (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                                          const GALGAS_instructionListIR & in_mCaseInstructionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifierIndexes, in_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListIR::cCollectionElement_switchCaseListIR (const GALGAS_switchCaseListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCaseIdentifierIndexes, inElement.mProperty_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchCaseListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchCaseListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchCaseListIR (mObject.mProperty_mCaseIdentifierIndexes, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchCaseListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCaseIdentifierIndexes" ":") ;
  mObject.mProperty_mCaseIdentifierIndexes.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCaseInstructionList" ":") ;
  mObject.mProperty_mCaseInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR::GALGAS_switchCaseListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::enterElement (const GALGAS_switchCaseListIR_2D_element & inValue,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::class_func_listWithValue (const GALGAS_uintlist & inOperand0,
                                                                           const GALGAS_instructionListIR & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_switchCaseListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchCaseListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                         const GALGAS_instructionListIR & in_mCaseInstructionList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListIR (in_mCaseIdentifierIndexes,
                                                      in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::addAssign_operation (const GALGAS_uintlist & inOperand0,
                                                   const GALGAS_instructionListIR & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_append (const GALGAS_uintlist inOperand0,
                                             const GALGAS_instructionListIR inOperand1,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_insertAtIndex (const GALGAS_uintlist inOperand0,
                                                    const GALGAS_instructionListIR inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_removeAtIndex (GALGAS_uintlist & outOperand0,
                                                    GALGAS_instructionListIR & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
        outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
        outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_popFirst (GALGAS_uintlist & outOperand0,
                                               GALGAS_instructionListIR & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_popLast (GALGAS_uintlist & outOperand0,
                                              GALGAS_instructionListIR & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::method_first (GALGAS_uintlist & outOperand0,
                                            GALGAS_instructionListIR & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::method_last (GALGAS_uintlist & outOperand0,
                                           GALGAS_instructionListIR & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
    outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::add_operation (const GALGAS_switchCaseListIR & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_switchCaseListIR result = GALGAS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::plusAssign_operation (const GALGAS_switchCaseListIR inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_setMCaseIdentifierIndexesAtIndex (GALGAS_uintlist inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseIdentifierIndexes = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_switchCaseListIR::getter_mCaseIdentifierIndexesAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    result = p->mObject.mProperty_mCaseIdentifierIndexes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchCaseListIR::setter_setMCaseInstructionListAtIndex (GALGAS_instructionListIR inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_switchCaseListIR::getter_mCaseInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchCaseListIR::cEnumerator_switchCaseListIR (const GALGAS_switchCaseListIR & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR_2D_element cEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mProperty_mCaseIdentifierIndexes ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR cEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mProperty_mCaseInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @switchCaseListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListIR ("switchCaseListIR",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchCaseListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchCaseListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchCaseListIR::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseListIR result ;
  const GALGAS_switchCaseListIR * p = (const GALGAS_switchCaseListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchCaseListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionIR::cPtr_switchInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLabelIndex (),
mProperty_mSwitchExpressionGenerationList (),
mProperty_mSwitchExpression (),
mProperty_mCaseGenerationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLabelIndex.printNonNullClassInstanceProperties ("mLabelIndex") ;
    mProperty_mSwitchExpressionGenerationList.printNonNullClassInstanceProperties ("mSwitchExpressionGenerationList") ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mCaseGenerationList.printNonNullClassInstanceProperties ("mCaseGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionIR::objectCompare (const GALGAS_switchInstructionIR & inOperand) const {
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

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::
init_21__21__21__21_ (const GALGAS_uint & in_mLabelIndex,
                      const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                      const GALGAS_objectIR & in_mSwitchExpression,
                      const GALGAS_switchCaseListIR & in_mCaseGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionIR (inCompiler COMMA_THERE)) ;
  object->switchInstructionIR_init_21__21__21__21_ (in_mLabelIndex, in_mSwitchExpressionGenerationList, in_mSwitchExpression, in_mCaseGenerationList, inCompiler) ;
  const GALGAS_switchInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::
switchInstructionIR_init_21__21__21__21_ (const GALGAS_uint & in_mLabelIndex,
                                          const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                          const GALGAS_objectIR & in_mSwitchExpression,
                                          const GALGAS_switchCaseListIR & in_mCaseGenerationList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mSwitchExpressionGenerationList = in_mSwitchExpressionGenerationList ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mCaseGenerationList = in_mCaseGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR::GALGAS_switchInstructionIR (const cPtr_switchInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::class_func_new (const GALGAS_uint & in_mLabelIndex,
                                                                       const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                                       const GALGAS_objectIR & in_mSwitchExpression,
                                                                       const GALGAS_switchCaseListIR & in_mCaseGenerationList
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionIR (in_mLabelIndex, in_mSwitchExpressionGenerationList, in_mSwitchExpression, in_mCaseGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_switchInstructionIR::readProperty_mLabelIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mLabelIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionIR::setProperty_mLabelIndex (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_switchInstructionIR::readProperty_mSwitchExpressionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mSwitchExpressionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionIR::setProperty_mSwitchExpressionGenerationList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpressionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_switchInstructionIR::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionIR::setProperty_mSwitchExpression (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchCaseListIR GALGAS_switchInstructionIR::readProperty_mCaseGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_switchCaseListIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mCaseGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionIR::setProperty_mCaseGenerationList (const GALGAS_switchCaseListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mCaseGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionIR::cPtr_switchInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                                    const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                    const GALGAS_objectIR & in_mSwitchExpression,
                                                    const GALGAS_switchCaseListIR & in_mCaseGenerationList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLabelIndex (),
mProperty_mSwitchExpressionGenerationList (),
mProperty_mSwitchExpression (),
mProperty_mCaseGenerationList () {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mSwitchExpressionGenerationList = in_mSwitchExpressionGenerationList ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mCaseGenerationList = in_mCaseGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

void cPtr_switchInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionIR:") ;
  mProperty_mLabelIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpressionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionIR (mProperty_mLabelIndex, mProperty_mSwitchExpressionGenerationList, mProperty_mSwitchExpression, mProperty_mCaseGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR ("switchInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR GALGAS_switchInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionIR result ;
  const GALGAS_switchInstructionIR * p = (const GALGAS_switchInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionIR_2D_weak::objectCompare (const GALGAS_switchInstructionIR_2D_weak & inOperand) const {
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

GALGAS_switchInstructionIR_2D_weak::GALGAS_switchInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR_2D_weak & GALGAS_switchInstructionIR_2D_weak::operator = (const GALGAS_switchInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR_2D_weak::GALGAS_switchInstructionIR_2D_weak (const GALGAS_switchInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR_2D_weak GALGAS_switchInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_switchInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR GALGAS_switchInstructionIR_2D_weak::bang_switchInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_switchInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionIR) ;
      result = GALGAS_switchInstructionIR ((cPtr_switchInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR_2D_weak ("switchInstructionIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionIR_2D_weak GALGAS_switchInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionIR_2D_weak result ;
  const GALGAS_switchInstructionIR_2D_weak * p = (const GALGAS_switchInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST::GALGAS_accessInAssignmentAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::class_func_property (const GALGAS_lstring & inAssociatedValue0
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  result.mEnum = Enumeration::enum_property ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_accessInAssignmentAST_2D_property (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::class_func_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                   const GALGAS_location & inAssociatedValue1,
                                                                                   const GALGAS_bool & inAssociatedValue2
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  result.mEnum = Enumeration::enum_arrayAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_accessInAssignmentAST_2D_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST::method_property (GALGAS_lstring & outAssociatedValue_name,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_property) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @accessInAssignmentAST.property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_accessInAssignmentAST_2D_property *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST::method_arrayAccess (GALGAS_expressionAST & outAssociatedValue_index,
                                                       GALGAS_location & outAssociatedValue_endOfIndex,
                                                       GALGAS_bool & outAssociatedValue_checkIndexExpression,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayAccess) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    String s ;
    s.appendCString ("method @accessInAssignmentAST.arrayAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_accessInAssignmentAST_2D_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_property_3F_ GALGAS_accessInAssignmentAST::getter_property (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentAST_2D_property_3F_ result ;
  if (mEnum == Enumeration::enum_property) {
    const auto ptr = (const GALGAS_accessInAssignmentAST_2D_property *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_accessInAssignmentAST_2D_property (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST::getAssociatedValuesFor_property (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_accessInAssignmentAST_2D_property *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ GALGAS_accessInAssignmentAST::getter_arrayAccess (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ result ;
  if (mEnum == Enumeration::enum_arrayAccess) {
    const auto ptr = (const GALGAS_accessInAssignmentAST_2D_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_accessInAssignmentAST_2D_arrayAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST::getAssociatedValuesFor_arrayAccess (GALGAS_expressionAST & out_index,
                                                                       GALGAS_location & out_endOfIndex,
                                                                       GALGAS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GALGAS_accessInAssignmentAST_2D_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_accessInAssignmentAST [3] = {
  "(not built)",
  "property",
  "arrayAccess"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_accessInAssignmentAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @accessInAssignmentAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_accessInAssignmentAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @accessInAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ("accessInAssignmentAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_accessInAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_accessInAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  const GALGAS_accessInAssignmentAST * p = (const GALGAS_accessInAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_accessInAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueOperandAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_4315__0 ;
      GALGAS_LValueOperandAST extractedValue_4335_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_4315__0, extractedValue_4335_next_1) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4335_next_1, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 108)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_4437_indexExpression_0 ;
      GALGAS_location extractedValue_4454__1 ;
      GALGAS_bool extractedValue_4454__2 ;
      GALGAS_LValueOperandAST extractedValue_4474_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_4437_indexExpression_0, extractedValue_4454__1, extractedValue_4454__2, extractedValue_4474_next_3) ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4437_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 110)) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4474_next_3, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 111)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST::GALGAS_registerGroupIndexAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::class_func_noIndex (UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  result.mEnum = Enumeration::enum_noIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::class_func_index (const GALGAS_expressionAST & inAssociatedValue0,
                                                                             const GALGAS_location & inAssociatedValue1,
                                                                             const GALGAS_bool & inAssociatedValue2
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  result.mEnum = Enumeration::enum_index ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_registerGroupIndexAST_2D_index (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupIndexAST::method_index (GALGAS_expressionAST & outAssociatedValue_index,
                                                 GALGAS_location & outAssociatedValue_endOfIndex,
                                                 GALGAS_bool & outAssociatedValue_checkIndexExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_index) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    String s ;
    s.appendCString ("method @registerGroupIndexAST.index invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_registerGroupIndexAST_2D_index *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupIndexAST::getter_noIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST_2D_index_3F_ GALGAS_registerGroupIndexAST::getter_index (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerGroupIndexAST_2D_index_3F_ result ;
  if (mEnum == Enumeration::enum_index) {
    const auto ptr = (const GALGAS_registerGroupIndexAST_2D_index *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_registerGroupIndexAST_2D_index (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupIndexAST::getAssociatedValuesFor_index (GALGAS_expressionAST & out_index,
                                                                 GALGAS_location & out_endOfIndex,
                                                                 GALGAS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GALGAS_registerGroupIndexAST_2D_index *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerGroupIndexAST [3] = {
  "(not built)",
  "noIndex",
  "index"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerGroupIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_index == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupIndexAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @registerGroupIndexAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerGroupIndexAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @registerGroupIndexAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupIndexAST ("registerGroupIndexAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupIndexAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupIndexAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupIndexAST GALGAS_registerGroupIndexAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupIndexAST result ;
  const GALGAS_registerGroupIndexAST * p = (const GALGAS_registerGroupIndexAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerGroupIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST::GALGAS_registerIndexAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST GALGAS_registerIndexAST::class_func_noIndex (UNUSED_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  result.mEnum = Enumeration::enum_noIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST GALGAS_registerIndexAST::class_func_index (const GALGAS_expressionAST & inAssociatedValue0,
                                                                   const GALGAS_location & inAssociatedValue1,
                                                                   const GALGAS_bool & inAssociatedValue2
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  result.mEnum = Enumeration::enum_index ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_registerIndexAST_2D_index (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIndexAST::method_index (GALGAS_expressionAST & outAssociatedValue_index,
                                            GALGAS_location & outAssociatedValue_endOfIndex,
                                            GALGAS_bool & outAssociatedValue_checkIndexExpression,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_index) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    String s ;
    s.appendCString ("method @registerIndexAST.index invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_registerIndexAST_2D_index *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerIndexAST::getter_noIndex (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST_2D_index_3F_ GALGAS_registerIndexAST::getter_index (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerIndexAST_2D_index_3F_ result ;
  if (mEnum == Enumeration::enum_index) {
    const auto ptr = (const GALGAS_registerIndexAST_2D_index *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_registerIndexAST_2D_index (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIndexAST::getAssociatedValuesFor_index (GALGAS_expressionAST & out_index,
                                                            GALGAS_location & out_endOfIndex,
                                                            GALGAS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GALGAS_registerIndexAST_2D_index *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerIndexAST [3] = {
  "(not built)",
  "noIndex",
  "index"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIndexAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @registerIndexAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerIndexAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @registerIndexAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIndexAST ("registerIndexAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIndexAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIndexAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIndexAST GALGAS_registerIndexAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerIndexAST result ;
  const GALGAS_registerIndexAST * p = (const GALGAS_registerIndexAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@effectiveArgumentPassingModeAST matchingFormalArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_matchingFormalArgument (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                      Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
    {
      GALGAS_lstring extractedValue_869__0 ;
      temp_0.getAssociatedValuesFor_input (extractedValue_869__0) ;
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
    {
      GALGAS_bool extractedValue_909__0 ;
      GALGAS_lstring extractedValue_911__1 ;
      GALGAS_lstring extractedValue_913__2 ;
      temp_0.getAssociatedValuesFor_inputWithType (extractedValue_909__0, extractedValue_911__1, extractedValue_913__2) ;
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
    {
      GALGAS_expressionAST extractedValue_946__0 ;
      GALGAS_location extractedValue_948__1 ;
      temp_0.getAssociatedValuesFor_output (extractedValue_946__0, extractedValue_948__1) ;
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
    {
      GALGAS_lstring extractedValue_986__0 ;
      temp_0.getAssociatedValuesFor_outputInput (extractedValue_986__0) ;
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
    {
      GALGAS_lstring extractedValue_1037__0 ;
      temp_0.getAssociatedValuesFor_outputInputSelfVariable (extractedValue_1037__0) ;
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@effectiveArgumentListAST mangledName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring extensionGetter_mangledName (const GALGAS_effectiveArgumentListAST & inObject,
                                            const GALGAS_string & constinArgument_inReceiverTypeName,
                                            const GALGAS_lstring & constinArgument_inFunctionName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1613 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_1613.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)) ;
    }
  }
  var_s_1613.plusAssign_operation(constinArgument_inFunctionName.readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  const GALGAS_effectiveArgumentListAST temp_1 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_1766 (temp_1, EnumerationOrder::up) ;
  while (enumerator_1766.hasCurrentObject ()) {
    var_s_1613.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1766.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (enumerator_1766.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)) ;
    enumerator_1766.gotoNextObject () ;
  }
  var_s_1613.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 46)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_s_1613, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR llvmName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_llvmName (const GALGAS_objectIR & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::Enumeration::invalid:
    break ;
  case GALGAS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 29)), GALGAS_string ("<<@objectIR llvmName void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 29)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_zero:
    {
      GALGAS_omnibusType extractedValue_1381__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_1381__0) ;
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_null:
    {
      GALGAS_omnibusType extractedValue_1426__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_1426__0) ;
      result_result = GALGAS_string ("null") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalInteger:
    {
      GALGAS_omnibusType extractedValue_1470__0 ;
      GALGAS_bigint extractedValue_1480_value_1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_1470__0, extractedValue_1480_value_1) ;
      result_result = extractedValue_1480_value_1.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 32)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GALGAS_omnibusType extractedValue_1536__0 ;
      GALGAS_string extractedValue_1538_llvmName_1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_1536__0, extractedValue_1538_llvmName_1) ;
      result_result = extractedValue_1538_llvmName_1 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_reference:
    {
      GALGAS_omnibusType extractedValue_1586__0 ;
      GALGAS_string extractedValue_1588_llvmName_1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_1586__0, extractedValue_1588_llvmName_1) ;
      result_result = extractedValue_1588_llvmName_1 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GALGAS_omnibusType extractedValue_1645__0 ;
      GALGAS_sortedOperandIRList extractedValue_1668_inValues_1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_1645__0, extractedValue_1668_inValues_1) ;
      result_result = GALGAS_string ("{") ;
      cEnumerator_sortedOperandIRList enumerator_1715 (extractedValue_1668_inValues_1, EnumerationOrder::up) ;
      while (enumerator_1715.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1715.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)).add_operation (extensionGetter_llvmName (enumerator_1715.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)) ;
        if (enumerator_1715.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 39)) ;
        }
        enumerator_1715.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 41)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GALGAS_omnibusType extractedValue_1887__0 ;
      GALGAS_operandIRList extractedValue_1887__1 ;
      GALGAS_uint extractedValue_1889_index_2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_1887__0, extractedValue_1887__1, extractedValue_1889_index_2) ;
      result_result = GALGAS_string ("@gconst.").add_operation (extractedValue_1889_index_2.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 43)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GALGAS_omnibusType extractedValue_1968__0 ;
      GALGAS_uint extractedValue_1968__1 ;
      GALGAS_objectIR extractedValue_1968__2 ;
      GALGAS_uint extractedValue_1970_index_3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_1968__0, extractedValue_1968__1, extractedValue_1968__2, extractedValue_1970_index_3) ;
      result_result = GALGAS_string ("@gconst.").add_operation (extractedValue_1970_index_3.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 45)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalString:
    {
      GALGAS_uint extractedValue_2040_size_0 ;
      GALGAS_uint extractedValue_2051_index_1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_2040_size_0, extractedValue_2051_index_1) ;
      GALGAS_string var_sizeStr_2068 = extractedValue_2040_size_0.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 47)) ;
      result_result = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_2068, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (var_sizeStr_2068, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_2051_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GALGAS_omnibusType extractedValue_2288__0 ;
      GALGAS_uint extractedValue_2288__1 ;
      GALGAS_objectIR extractedValue_2288__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_2288__0, extractedValue_2288__1, extractedValue_2288__2) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 51)), GALGAS_string ("<< ERROR @objectIR llvmName llvmArrayRepeatedDynamicValue >>\n"), fixItArray2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 51)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GALGAS_omnibusType extractedValue_2420__0 ;
      GALGAS_operandIRList extractedValue_2420__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_2420__0, extractedValue_2420__1) ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 53)), GALGAS_string ("<< ERROR @objectIR llvmName llvmArrayDynamicValues >>\n"), fixItArray3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 53)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR llvmValue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_llvmValue (const GALGAS_objectIR & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::Enumeration::invalid:
    break ;
  case GALGAS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 61)), GALGAS_string ("<<@objectIR llvmName void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 61)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_zero:
    {
      GALGAS_omnibusType extractedValue_2781__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_2781__0) ;
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_null:
    {
      GALGAS_omnibusType extractedValue_2826__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_2826__0) ;
      result_result = GALGAS_string ("null") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalInteger:
    {
      GALGAS_omnibusType extractedValue_2870__0 ;
      GALGAS_bigint extractedValue_2880_value_1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_2870__0, extractedValue_2880_value_1) ;
      result_result = extractedValue_2880_value_1.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 64)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GALGAS_omnibusType extractedValue_2936__0 ;
      GALGAS_string extractedValue_2938_llvmName_1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_2936__0, extractedValue_2938_llvmName_1) ;
      result_result = extractedValue_2938_llvmName_1 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_reference:
    {
      GALGAS_omnibusType extractedValue_2986__0 ;
      GALGAS_string extractedValue_2988_llvmName_1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_2986__0, extractedValue_2988_llvmName_1) ;
      result_result = extractedValue_2988_llvmName_1 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalString:
    {
      GALGAS_uint extractedValue_3047_size_0 ;
      GALGAS_uint extractedValue_3058_index_1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_3047_size_0, extractedValue_3058_index_1) ;
      GALGAS_string var_sizeStr_3075 = extractedValue_3047_size_0.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 68)) ;
      result_result = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_3075, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (var_sizeStr_3075, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_3058_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GALGAS_omnibusType extractedValue_3283__0 ;
      GALGAS_sortedOperandIRList extractedValue_3306_inValues_1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_3283__0, extractedValue_3306_inValues_1) ;
      result_result = GALGAS_string ("{") ;
      cEnumerator_sortedOperandIRList enumerator_3353 (extractedValue_3306_inValues_1, EnumerationOrder::up) ;
      while (enumerator_3353.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_3353.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)).add_operation (extensionGetter_llvmValue (enumerator_3353.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)) ;
        if (enumerator_3353.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 75)) ;
        }
        enumerator_3353.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 77)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GALGAS_omnibusType extractedValue_3525__0 ;
      GALGAS_operandIRList extractedValue_3542_inValues_1 ;
      GALGAS_uint extractedValue_3551__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_3525__0, extractedValue_3542_inValues_1, extractedValue_3551__2) ;
      result_result = GALGAS_string ("[") ;
      cEnumerator_operandIRList enumerator_3582 (extractedValue_3542_inValues_1, EnumerationOrder::up) ;
      while (enumerator_3582.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_3582.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)).add_operation (extensionGetter_llvmValue (enumerator_3582.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)) ;
        if (enumerator_3582.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 82)) ;
        }
        enumerator_3582.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 84)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GALGAS_omnibusType extractedValue_3768__0 ;
      GALGAS_uint extractedValue_3770_size_1 ;
      GALGAS_objectIR extractedValue_3775_value_2 ;
      GALGAS_uint extractedValue_3781__3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_3768__0, extractedValue_3770_size_1, extractedValue_3775_value_2, extractedValue_3781__3) ;
      result_result = GALGAS_string ("[") ;
      cEnumerator_range enumerator_3822 (GALGAS_range (GALGAS_uint (uint32_t (0U)), extractedValue_3770_size_1.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 87))), EnumerationOrder::up) ;
      while (enumerator_3822.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (extractedValue_3775_value_2, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)).add_operation (extensionGetter_llvmValue (extractedValue_3775_value_2, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)) ;
        if (enumerator_3822.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 89)) ;
        }
        enumerator_3822.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 91)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GALGAS_omnibusType extractedValue_3987__0 ;
      GALGAS_uint extractedValue_3987__1 ;
      GALGAS_objectIR extractedValue_3987__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_3987__0, extractedValue_3987__1, extractedValue_3987__2) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 93)), GALGAS_string ("<< ERROR @objectIR llvmValue llvmArrayRepeatedDynamicValue >>\n"), fixItArray2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 93)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GALGAS_omnibusType extractedValue_4120__0 ;
      GALGAS_operandIRList extractedValue_4120__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_4120__0, extractedValue_4120__1) ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 95)), GALGAS_string ("<< ERROR @objectIR llvmValue llvmArrayRepeatedDynamicValue >>\n"), fixItArray3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 95)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType extensionGetter_type (const GALGAS_objectIR & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::Enumeration::invalid:
    break ;
  case GALGAS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 103)), GALGAS_string ("<<@objectIR type void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 103)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_reference:
    {
      GALGAS_omnibusType extractedValue_4490_type_0 ;
      GALGAS_string extractedValue_4495__1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_4490_type_0, extractedValue_4495__1) ;
      result_result = extractedValue_4490_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_null:
    {
      GALGAS_omnibusType extractedValue_4527_type_0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_4527_type_0) ;
      result_result = extractedValue_4527_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_zero:
    {
      GALGAS_omnibusType extractedValue_4562_type_0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_4562_type_0) ;
      result_result = extractedValue_4562_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalInteger:
    {
      GALGAS_omnibusType extractedValue_4607_type_0 ;
      GALGAS_bigint extractedValue_4612__1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_4607_type_0, extractedValue_4612__1) ;
      result_result = extractedValue_4607_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GALGAS_omnibusType extractedValue_4654_type_0 ;
      GALGAS_string extractedValue_4659__1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_4654_type_0, extractedValue_4659__1) ;
      result_result = extractedValue_4654_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GALGAS_omnibusType extractedValue_4705_type_0 ;
      GALGAS_sortedOperandIRList extractedValue_4710__1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_4705_type_0, extractedValue_4710__1) ;
      result_result = extractedValue_4705_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GALGAS_omnibusType extractedValue_4759_type_0 ;
      GALGAS_operandIRList extractedValue_4764__1 ;
      GALGAS_uint extractedValue_4766__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_4759_type_0, extractedValue_4764__1, extractedValue_4766__2) ;
      result_result = extractedValue_4759_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalString:
    {
      GALGAS_uint extractedValue_4808__0 ;
      GALGAS_uint extractedValue_4810__1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_4808__0, extractedValue_4810__1) ;
      result_result = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 111)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GALGAS_omnibusType extractedValue_4882_type_0 ;
      GALGAS_uint extractedValue_4888__1 ;
      GALGAS_objectIR extractedValue_4888__2 ;
      GALGAS_uint extractedValue_4888__3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_4882_type_0, extractedValue_4888__1, extractedValue_4888__2, extractedValue_4888__3) ;
      result_result = extractedValue_4882_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GALGAS_omnibusType extractedValue_4945_type_0 ;
      GALGAS_uint extractedValue_4951__1 ;
      GALGAS_objectIR extractedValue_4951__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_4945_type_0, extractedValue_4951__1, extractedValue_4951__2) ;
      result_result = extractedValue_4945_type_0 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GALGAS_omnibusType extractedValue_5001_type_0 ;
      GALGAS_operandIRList extractedValue_5006__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_5001_type_0, extractedValue_5006__1) ;
      result_result = extractedValue_5001_type_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_llvmTypeName (const GALGAS_objectIR & inObject,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 121)).ptr (), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 121)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR omnibusTypeDescriptionName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_omnibusTypeDescriptionName (const GALGAS_objectIR & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 127)).readProperty_omnibusTypeDescriptionName () ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR withType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_objectIR extensionGetter_withType (const GALGAS_objectIR & inObject,
                                          const GALGAS_omnibusType & constinArgument_inType,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::Enumeration::invalid:
    break ;
  case GALGAS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 135)), GALGAS_string ("<<@objectIR withType void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 135)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_reference:
    {
      GALGAS_omnibusType extractedValue_5766__0 ;
      GALGAS_string extractedValue_5768_llvmName_1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_5766__0, extractedValue_5768_llvmName_1) ;
      result_result = GALGAS_objectIR::class_func_reference (constinArgument_inType, extractedValue_5768_llvmName_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 137)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_null:
    {
      GALGAS_omnibusType extractedValue_5851__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_5851__0) ;
      result_result = GALGAS_objectIR::class_func_null (constinArgument_inType  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 139)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalInteger:
    {
      GALGAS_omnibusType extractedValue_5914__0 ;
      GALGAS_bigint extractedValue_5924_value_1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_5914__0, extractedValue_5924_value_1) ;
      result_result = GALGAS_objectIR::class_func_literalInteger (constinArgument_inType, extractedValue_5924_value_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 141)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GALGAS_omnibusType extractedValue_6015__0 ;
      GALGAS_string extractedValue_6017_llvmName_1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_6015__0, extractedValue_6017_llvmName_1) ;
      result_result = GALGAS_objectIR::class_func_llvmNamedValue (constinArgument_inType, extractedValue_6017_llvmName_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 143)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_zero:
    {
      GALGAS_omnibusType extractedValue_6106__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_6106__0) ;
      result_result = GALGAS_objectIR::class_func_zero (constinArgument_inType  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 145)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GALGAS_omnibusType extractedValue_6173__0 ;
      GALGAS_sortedOperandIRList extractedValue_6196_values_1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_6173__0, extractedValue_6196_values_1) ;
      result_result = GALGAS_objectIR::class_func_llvmStructureValue (constinArgument_inType, extractedValue_6196_values_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 147)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalString:
    {
      GALGAS_uint extractedValue_6300_size_0 ;
      GALGAS_uint extractedValue_6311_index_1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_6300_size_0, extractedValue_6311_index_1) ;
      result_result = GALGAS_objectIR::class_func_literalString (extractedValue_6300_size_0, extractedValue_6311_index_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 149)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GALGAS_omnibusType extractedValue_6417__0 ;
      GALGAS_uint extractedValue_6419_size_1 ;
      GALGAS_objectIR extractedValue_6424_value_2 ;
      GALGAS_uint extractedValue_6430_index_3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_6417__0, extractedValue_6419_size_1, extractedValue_6424_value_2, extractedValue_6430_index_3) ;
      result_result = GALGAS_objectIR::class_func_llvmArrayRepeatedStaticValue (constinArgument_inType, extractedValue_6419_size_1, extractedValue_6424_value_2, extractedValue_6430_index_3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 151)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GALGAS_omnibusType extractedValue_6579__0 ;
      GALGAS_uint extractedValue_6581_size_1 ;
      GALGAS_objectIR extractedValue_6586_value_2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_6579__0, extractedValue_6581_size_1, extractedValue_6586_value_2) ;
      result_result = GALGAS_objectIR::class_func_llvmArrayRepeatedDynamicValue (constinArgument_inType, extractedValue_6581_size_1, extractedValue_6586_value_2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 153)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GALGAS_omnibusType extractedValue_6715__0 ;
      GALGAS_operandIRList extractedValue_6732_values_1 ;
      GALGAS_uint extractedValue_6739_index_2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_6715__0, extractedValue_6732_values_1, extractedValue_6739_index_2) ;
      result_result = GALGAS_objectIR::class_func_llvmArrayStaticValues (constinArgument_inType, extractedValue_6732_values_1, extractedValue_6739_index_2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 155)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GALGAS_omnibusType extractedValue_6860__0 ;
      GALGAS_operandIRList extractedValue_6877_values_1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_6860__0, extractedValue_6877_values_1) ;
      result_result = GALGAS_objectIR::class_func_llvmArrayDynamicValues (constinArgument_inType, extractedValue_6877_values_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 157)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR name'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_name (const GALGAS_objectIR & inObject,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::Enumeration::invalid:
    break ;
  case GALGAS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 165)), GALGAS_string ("<<@objectIR name void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 165)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_reference:
    {
      GALGAS_omnibusType extractedValue_7220__0 ;
      GALGAS_string extractedValue_7222_llvmName_1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_7220__0, extractedValue_7222_llvmName_1) ;
      result_result = extractedValue_7222_llvmName_1 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_zero:
    {
      GALGAS_omnibusType extractedValue_7265__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_7265__0) ;
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_null:
    {
      GALGAS_omnibusType extractedValue_7310__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_7310__0) ;
      result_result = GALGAS_string ("null") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalInteger:
    {
      GALGAS_omnibusType extractedValue_7354__0 ;
      GALGAS_bigint extractedValue_7364_value_1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_7354__0, extractedValue_7364_value_1) ;
      result_result = extractedValue_7364_value_1.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 169)) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GALGAS_omnibusType extractedValue_7420__0 ;
      GALGAS_string extractedValue_7422_name_1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_7420__0, extractedValue_7422_name_1) ;
      result_result = extractedValue_7422_name_1 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GALGAS_omnibusType extractedValue_7471__0 ;
      GALGAS_sortedOperandIRList extractedValue_7473__1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_7471__0, extractedValue_7473__1) ;
      result_result = GALGAS_string ("{...}") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GALGAS_omnibusType extractedValue_7526__0 ;
      GALGAS_operandIRList extractedValue_7526__1 ;
      GALGAS_uint extractedValue_7526__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_7526__0, extractedValue_7526__1, extractedValue_7526__2) ;
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GALGAS_omnibusType extractedValue_7580__0 ;
      GALGAS_operandIRList extractedValue_7580__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_7580__0, extractedValue_7580__1) ;
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GALGAS_omnibusType extractedValue_7640__0 ;
      GALGAS_uint extractedValue_7640__1 ;
      GALGAS_objectIR extractedValue_7640__2 ;
      GALGAS_uint extractedValue_7640__3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_7640__0, extractedValue_7640__1, extractedValue_7640__2, extractedValue_7640__3) ;
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GALGAS_omnibusType extractedValue_7701__0 ;
      GALGAS_uint extractedValue_7701__1 ;
      GALGAS_objectIR extractedValue_7701__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_7701__0, extractedValue_7701__1, extractedValue_7701__2) ;
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalString:
    {
      GALGAS_uint extractedValue_7752_size_0 ;
      GALGAS_uint extractedValue_7763_index_1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_7752_size_0, extractedValue_7763_index_1) ;
      GALGAS_string var_sizeStr_7780 = extractedValue_7752_size_0.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 177)) ;
      result_result = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_7780, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (var_sizeStr_7780, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_7763_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR isStatic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isStatic (const GALGAS_objectIR & inObject,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::Enumeration::invalid:
    break ;
  case GALGAS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 187)), GALGAS_string ("<<@objectIR isStatic void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 187)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_reference:
    {
      GALGAS_omnibusType extractedValue_8231__0 ;
      GALGAS_string extractedValue_8232__1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_8231__0, extractedValue_8232__1) ;
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_zero:
    {
      GALGAS_omnibusType extractedValue_8265__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_8265__0) ;
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_null:
    {
      GALGAS_omnibusType extractedValue_8297__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_8297__0) ;
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalInteger:
    {
      GALGAS_omnibusType extractedValue_8339__0 ;
      GALGAS_bigint extractedValue_8341__1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_8339__0, extractedValue_8341__1) ;
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GALGAS_omnibusType extractedValue_8383__0 ;
      GALGAS_string extractedValue_8385__1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_8383__0, extractedValue_8385__1) ;
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GALGAS_omnibusType extractedValue_8432__0 ;
      GALGAS_sortedOperandIRList extractedValue_8434__1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_8432__0, extractedValue_8434__1) ;
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GALGAS_omnibusType extractedValue_8484__0 ;
      GALGAS_operandIRList extractedValue_8484__1 ;
      GALGAS_uint extractedValue_8484__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_8484__0, extractedValue_8484__1, extractedValue_8484__2) ;
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GALGAS_omnibusType extractedValue_8535__0 ;
      GALGAS_operandIRList extractedValue_8535__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_8535__0, extractedValue_8535__1) ;
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalString:
    {
      GALGAS_uint extractedValue_8578__0 ;
      GALGAS_uint extractedValue_8580__1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_8578__0, extractedValue_8580__1) ;
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GALGAS_omnibusType extractedValue_8637__0 ;
      GALGAS_uint extractedValue_8637__1 ;
      GALGAS_objectIR extractedValue_8637__2 ;
      GALGAS_uint extractedValue_8637__3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_8637__0, extractedValue_8637__1, extractedValue_8637__2, extractedValue_8637__3) ;
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GALGAS_omnibusType extractedValue_8695__0 ;
      GALGAS_uint extractedValue_8695__1 ;
      GALGAS_objectIR extractedValue_8695__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_8695__0, extractedValue_8695__1, extractedValue_8695__2) ;
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Class for element of '@routineListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineListIR : public cCollectionElement {
  public: GALGAS_routineListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_routineListIR (const GALGAS_abstractRoutineIR & in_mRoutine
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineListIR (const GALGAS_routineListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineListIR::cCollectionElement_routineListIR (const GALGAS_abstractRoutineIR & in_mRoutine
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutine) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineListIR::cCollectionElement_routineListIR (const GALGAS_routineListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutine) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineListIR (mObject.mProperty_mRoutine COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_routineListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutine" ":") ;
  mObject.mProperty_mRoutine.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR::GALGAS_routineListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR::GALGAS_routineListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_routineListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::enterElement (const GALGAS_routineListIR_2D_element & inValue,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::class_func_listWithValue (const GALGAS_abstractRoutineIR & inOperand0
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_routineListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_abstractRoutineIR & in_mRoutine
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_routineListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineListIR (in_mRoutine COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::addAssign_operation (const GALGAS_abstractRoutineIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_append (const GALGAS_abstractRoutineIR inOperand0,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_insertAtIndex (const GALGAS_abstractRoutineIR inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_removeAtIndex (GALGAS_abstractRoutineIR & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_routineListIR) ;
        outOperand0 = p->mObject.mProperty_mRoutine ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_popFirst (GALGAS_abstractRoutineIR & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_popLast (GALGAS_abstractRoutineIR & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::method_first (GALGAS_abstractRoutineIR & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::method_last (GALGAS_abstractRoutineIR & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::add_operation (const GALGAS_routineListIR & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::plusAssign_operation (const GALGAS_routineListIR inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_setMRoutineAtIndex (GALGAS_abstractRoutineIR inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutine = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_routineListIR::getter_mRoutineAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  GALGAS_abstractRoutineIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    result = p->mObject.mProperty_mRoutine ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineListIR::cEnumerator_routineListIR (const GALGAS_routineListIR & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element cEnumerator_routineListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineListIR * p = (const cCollectionElement_routineListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR cEnumerator_routineListIR::current_mRoutine (LOCATION_ARGS) const {
  const cCollectionElement_routineListIR * p = (const cCollectionElement_routineListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineListIR) ;
  return p->mObject.mProperty_mRoutine ;
}




//--------------------------------------------------------------------------------------------------
//
//     @routineListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR ("routineListIR",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR result ;
  const GALGAS_routineListIR * p = (const GALGAS_routineListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineListIR llvmRoutineGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmRoutineGeneration (const GALGAS_routineListIR inObject,
                                            GALGAS_string & ioArgument_ioLLVMcode,
                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineListIR temp_0 = inObject ;
  cEnumerator_routineListIR enumerator_3926 (temp_0, EnumerationOrder::up) ;
  while (enumerator_3926.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Routine ").add_operation (enumerator_3926.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex = GALGAS_uint (uint32_t (0U)) ;
    callExtensionMethod_llvmCodeGeneration ((cPtr_abstractRoutineIR *) enumerator_3926.current (HERE).readProperty_mRoutine ().ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 111)) ;
    enumerator_3926.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendNOP'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendNOP (GALGAS_instructionListIR & ioObject,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_nopIR::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @nopIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_nopIR::cPtr_nopIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nopIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nopIR::objectCompare (const GALGAS_nopIR & inOperand) const {
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

GALGAS_nopIR::GALGAS_nopIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_nopIR * object = nullptr ;
  macroMyNew (object, cPtr_nopIR (inCompiler COMMA_THERE)) ;
  object->nopIR_init (inCompiler) ;
  const GALGAS_nopIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nopIR::
nopIR_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR::GALGAS_nopIR (const cPtr_nopIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nopIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR::class_func_new (LOCATION_ARGS) {
  GALGAS_nopIR result ;
  macroMyNew (result.mObjectPtr, cPtr_nopIR (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nopIR class
//--------------------------------------------------------------------------------------------------

cPtr_nopIR::cPtr_nopIR (LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_nopIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR ;
}

void cPtr_nopIR::description (String & ioString,
                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@nopIR]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nopIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nopIR (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @nopIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR ("nopIR",
                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nopIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nopIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nopIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR::extractObject (const GALGAS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_nopIR result ;
  const GALGAS_nopIR * p = (const GALGAS_nopIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nopIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nopIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nopIR_2D_weak::objectCompare (const GALGAS_nopIR_2D_weak & inOperand) const {
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

GALGAS_nopIR_2D_weak::GALGAS_nopIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak & GALGAS_nopIR_2D_weak::operator = (const GALGAS_nopIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak::GALGAS_nopIR_2D_weak (const GALGAS_nopIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak GALGAS_nopIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_nopIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR_2D_weak::bang_nopIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_nopIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nopIR) ;
      result = GALGAS_nopIR ((cPtr_nopIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nopIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR_2D_weak ("nopIR-weak",
                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nopIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nopIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nopIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak GALGAS_nopIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_nopIR_2D_weak result ;
  const GALGAS_nopIR_2D_weak * p = (const GALGAS_nopIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nopIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nopIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendInstructionAsFreeString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendInstructionAsFreeString (GALGAS_instructionListIR & ioObject,
                                                    const GALGAS_string constinArgument_inString,
                                                    const GALGAS_stringset constinArgument_inInvokedFunctionSet,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_freeStringIR::init_21__21_ (constinArgument_inString, constinArgument_inInvokedFunctionSet, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 4)) ;
}


//--------------------------------------------------------------------------------------------------
// @freeStringIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_freeStringIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
    mProperty_mInvokedFunctionSet.printNonNullClassInstanceProperties ("mInvokedFunctionSet") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_freeStringIR::objectCompare (const GALGAS_freeStringIR & inOperand) const {
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

GALGAS_freeStringIR::GALGAS_freeStringIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR::
init_21__21_ (const GALGAS_string & in_mString,
              const GALGAS_stringset & in_mInvokedFunctionSet,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_freeStringIR * object = nullptr ;
  macroMyNew (object, cPtr_freeStringIR (inCompiler COMMA_THERE)) ;
  object->freeStringIR_init_21__21_ (in_mString, in_mInvokedFunctionSet, inCompiler) ;
  const GALGAS_freeStringIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::
freeStringIR_init_21__21_ (const GALGAS_string & in_mString,
                           const GALGAS_stringset & in_mInvokedFunctionSet,
                           Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR::GALGAS_freeStringIR (const cPtr_freeStringIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeStringIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR::class_func_new (const GALGAS_string & in_mString,
                                                         const GALGAS_stringset & in_mInvokedFunctionSet
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR result ;
  macroMyNew (result.mObjectPtr, cPtr_freeStringIR (in_mString, in_mInvokedFunctionSet COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_freeStringIR::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_freeStringIR::setProperty_mString (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_freeStringIR::readProperty_mInvokedFunctionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mInvokedFunctionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_freeStringIR::setProperty_mInvokedFunctionSet (const GALGAS_stringset & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mInvokedFunctionSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @freeStringIR class
//--------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (const GALGAS_string & in_mString,
                                      const GALGAS_stringset & in_mInvokedFunctionSet
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mString (),
mProperty_mInvokedFunctionSet () {
  mProperty_mString = in_mString ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_freeStringIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR ;
}

void cPtr_freeStringIR::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@freeStringIR:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_freeStringIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_freeStringIR (mProperty_mString, mProperty_mInvokedFunctionSet COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @freeStringIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR ("freeStringIR",
                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeStringIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR result ;
  const GALGAS_freeStringIR * p = (const GALGAS_freeStringIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_freeStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_freeStringIR_2D_weak::objectCompare (const GALGAS_freeStringIR_2D_weak & inOperand) const {
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

GALGAS_freeStringIR_2D_weak::GALGAS_freeStringIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak & GALGAS_freeStringIR_2D_weak::operator = (const GALGAS_freeStringIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak::GALGAS_freeStringIR_2D_weak (const GALGAS_freeStringIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak GALGAS_freeStringIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_freeStringIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR_2D_weak::bang_freeStringIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_freeStringIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeStringIR) ;
      result = GALGAS_freeStringIR ((cPtr_freeStringIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @freeStringIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR_2D_weak ("freeStringIR-weak",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeStringIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeStringIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeStringIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak GALGAS_freeStringIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR_2D_weak result ;
  const GALGAS_freeStringIR_2D_weak * p = (const GALGAS_freeStringIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_freeStringIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendExtend'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (GALGAS_instructionListIR & ioObject,
                                   const GALGAS_objectIR constinArgument_inResult,
                                   const GALGAS_objectIR constinArgument_inSource,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_extendIR::init_21__21_ (constinArgument_inResult, constinArgument_inSource, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @extendIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_extendIR::cPtr_extendIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extendIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extendIR::objectCompare (const GALGAS_extendIR & inOperand) const {
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

GALGAS_extendIR::GALGAS_extendIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR::
init_21__21_ (const GALGAS_objectIR & in_mResult,
              const GALGAS_objectIR & in_mSource,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_extendIR * object = nullptr ;
  macroMyNew (object, cPtr_extendIR (inCompiler COMMA_THERE)) ;
  object->extendIR_init_21__21_ (in_mResult, in_mSource, inCompiler) ;
  const GALGAS_extendIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extendIR::
extendIR_init_21__21_ (const GALGAS_objectIR & in_mResult,
                       const GALGAS_objectIR & in_mSource,
                       Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR::GALGAS_extendIR (const cPtr_extendIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR::class_func_new (const GALGAS_objectIR & in_mResult,
                                                 const GALGAS_objectIR & in_mSource
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  macroMyNew (result.mObjectPtr, cPtr_extendIR (in_mResult, in_mSource COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_extendIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendIR::setProperty_mResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_extendIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendIR::setProperty_mSource (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extendIR class
//--------------------------------------------------------------------------------------------------

cPtr_extendIR::cPtr_extendIR (const GALGAS_objectIR & in_mResult,
                              const GALGAS_objectIR & in_mSource
                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (),
mProperty_mSource () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extendIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

void cPtr_extendIR::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@extendIR:") ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extendIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extendIR (mProperty_mResult, mProperty_mSource COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @extendIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR ("extendIR",
                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  const GALGAS_extendIR * p = (const GALGAS_extendIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extendIR_2D_weak::objectCompare (const GALGAS_extendIR_2D_weak & inOperand) const {
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

GALGAS_extendIR_2D_weak::GALGAS_extendIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR_2D_weak & GALGAS_extendIR_2D_weak::operator = (const GALGAS_extendIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR_2D_weak::GALGAS_extendIR_2D_weak (const GALGAS_extendIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR_2D_weak GALGAS_extendIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_extendIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR_2D_weak::bang_extendIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extendIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extendIR) ;
      result = GALGAS_extendIR ((cPtr_extendIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR_2D_weak ("extendIR-weak",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendIR_2D_weak GALGAS_extendIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendIR_2D_weak result ;
  const GALGAS_extendIR_2D_weak * p = (const GALGAS_extendIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendTrunc'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendTrunc (GALGAS_instructionListIR & ioObject,
                                  const GALGAS_omnibusType constinArgument_inResultType,
                                  GALGAS_objectIR & ioArgument_ioObject,
                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioObject.getter_isLiteralInteger (SOURCE_FILE ("intermediate-trunc.galgas", 8)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_value_357 ;
      GALGAS_omnibusType joker_330 ; // Joker input parameter
      ioArgument_ioObject.method_literalInteger (joker_330, var_value_357, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 9)) ;
      ioArgument_ioObject = GALGAS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_value_357  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 10)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_objectIR var_result_492 ;
    {
    routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, var_result_492, inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 12)) ;
    }
    ioObject.addAssign_operation (GALGAS_truncIR::init_21__21_ (var_result_492, ioArgument_ioObject, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 13)) ;
    ioArgument_ioObject = var_result_492 ;
  }
}


//--------------------------------------------------------------------------------------------------
// @truncIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_truncIR::cPtr_truncIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_truncIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_truncIR::objectCompare (const GALGAS_truncIR & inOperand) const {
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

GALGAS_truncIR::GALGAS_truncIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_truncIR GALGAS_truncIR::
init_21__21_ (const GALGAS_objectIR & in_mResult,
              const GALGAS_objectIR & in_mSource,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_truncIR * object = nullptr ;
  macroMyNew (object, cPtr_truncIR (inCompiler COMMA_THERE)) ;
  object->truncIR_init_21__21_ (in_mResult, in_mSource, inCompiler) ;
  const GALGAS_truncIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_truncIR::
truncIR_init_21__21_ (const GALGAS_objectIR & in_mResult,
                      const GALGAS_objectIR & in_mSource,
                      Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncIR::GALGAS_truncIR (const cPtr_truncIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_truncIR GALGAS_truncIR::class_func_new (const GALGAS_objectIR & in_mResult,
                                               const GALGAS_objectIR & in_mSource
                                               COMMA_LOCATION_ARGS) {
  GALGAS_truncIR result ;
  macroMyNew (result.mObjectPtr, cPtr_truncIR (in_mResult, in_mSource COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_truncIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncIR::setProperty_mResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_truncIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncIR::setProperty_mSource (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @truncIR class
//--------------------------------------------------------------------------------------------------

cPtr_truncIR::cPtr_truncIR (const GALGAS_objectIR & in_mResult,
                            const GALGAS_objectIR & in_mSource
                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (),
mProperty_mSource () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_truncIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR ;
}

void cPtr_truncIR::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@truncIR:") ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_truncIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_truncIR (mProperty_mResult, mProperty_mSource COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @truncIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR ("truncIR",
                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncIR GALGAS_truncIR::extractObject (const GALGAS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_truncIR result ;
  const GALGAS_truncIR * p = (const GALGAS_truncIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_truncIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_truncIR_2D_weak::objectCompare (const GALGAS_truncIR_2D_weak & inOperand) const {
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

GALGAS_truncIR_2D_weak::GALGAS_truncIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncIR_2D_weak & GALGAS_truncIR_2D_weak::operator = (const GALGAS_truncIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncIR_2D_weak::GALGAS_truncIR_2D_weak (const GALGAS_truncIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncIR_2D_weak GALGAS_truncIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_truncIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncIR GALGAS_truncIR_2D_weak::bang_truncIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_truncIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_truncIR) ;
      result = GALGAS_truncIR ((cPtr_truncIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @truncIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR_2D_weak ("truncIR-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncIR_2D_weak GALGAS_truncIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_truncIR_2D_weak result ;
  const GALGAS_truncIR_2D_weak * p = (const GALGAS_truncIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_truncIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendBoolToUInt'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBoolToUInt (GALGAS_instructionListIR & ioObject,
                                       const GALGAS_objectIR constinArgument_inUIntResult,
                                       const GALGAS_objectIR constinArgument_inBoolSource,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_boolToUIntIR::init_21__21_ (constinArgument_inUIntResult, constinArgument_inBoolSource, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @boolToUIntIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_boolToUIntIR::cPtr_boolToUIntIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mUIntResult (),
mProperty_mBoolSource () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolToUIntIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mUIntResult.printNonNullClassInstanceProperties ("mUIntResult") ;
    mProperty_mBoolSource.printNonNullClassInstanceProperties ("mBoolSource") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_boolToUIntIR::objectCompare (const GALGAS_boolToUIntIR & inOperand) const {
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

GALGAS_boolToUIntIR::GALGAS_boolToUIntIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_boolToUIntIR GALGAS_boolToUIntIR::
init_21__21_ (const GALGAS_objectIR & in_mUIntResult,
              const GALGAS_objectIR & in_mBoolSource,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_boolToUIntIR * object = nullptr ;
  macroMyNew (object, cPtr_boolToUIntIR (inCompiler COMMA_THERE)) ;
  object->boolToUIntIR_init_21__21_ (in_mUIntResult, in_mBoolSource, inCompiler) ;
  const GALGAS_boolToUIntIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolToUIntIR::
boolToUIntIR_init_21__21_ (const GALGAS_objectIR & in_mUIntResult,
                           const GALGAS_objectIR & in_mBoolSource,
                           Compiler * /* inCompiler */) {
  mProperty_mUIntResult = in_mUIntResult ;
  mProperty_mBoolSource = in_mBoolSource ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR::GALGAS_boolToUIntIR (const cPtr_boolToUIntIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolToUIntIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR GALGAS_boolToUIntIR::class_func_new (const GALGAS_objectIR & in_mUIntResult,
                                                         const GALGAS_objectIR & in_mBoolSource
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_boolToUIntIR result ;
  macroMyNew (result.mObjectPtr, cPtr_boolToUIntIR (in_mUIntResult, in_mBoolSource COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_boolToUIntIR::readProperty_mUIntResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    return p->mProperty_mUIntResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_boolToUIntIR::setProperty_mUIntResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    p->mProperty_mUIntResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_boolToUIntIR::readProperty_mBoolSource (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    return p->mProperty_mBoolSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_boolToUIntIR::setProperty_mBoolSource (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    p->mProperty_mBoolSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolToUIntIR class
//--------------------------------------------------------------------------------------------------

cPtr_boolToUIntIR::cPtr_boolToUIntIR (const GALGAS_objectIR & in_mUIntResult,
                                      const GALGAS_objectIR & in_mBoolSource
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mUIntResult (),
mProperty_mBoolSource () {
  mProperty_mUIntResult = in_mUIntResult ;
  mProperty_mBoolSource = in_mBoolSource ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolToUIntIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolToUIntIR ;
}

void cPtr_boolToUIntIR::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@boolToUIntIR:") ;
  mProperty_mUIntResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBoolSource.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolToUIntIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolToUIntIR (mProperty_mUIntResult, mProperty_mBoolSource COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolToUIntIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR ("boolToUIntIR",
                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolToUIntIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolToUIntIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolToUIntIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolToUIntIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR GALGAS_boolToUIntIR::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_boolToUIntIR result ;
  const GALGAS_boolToUIntIR * p = (const GALGAS_boolToUIntIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolToUIntIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolToUIntIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_boolToUIntIR_2D_weak::objectCompare (const GALGAS_boolToUIntIR_2D_weak & inOperand) const {
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

GALGAS_boolToUIntIR_2D_weak::GALGAS_boolToUIntIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR_2D_weak & GALGAS_boolToUIntIR_2D_weak::operator = (const GALGAS_boolToUIntIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR_2D_weak::GALGAS_boolToUIntIR_2D_weak (const GALGAS_boolToUIntIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR_2D_weak GALGAS_boolToUIntIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_boolToUIntIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR GALGAS_boolToUIntIR_2D_weak::bang_boolToUIntIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolToUIntIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolToUIntIR) ;
      result = GALGAS_boolToUIntIR ((cPtr_boolToUIntIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolToUIntIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR_2D_weak ("boolToUIntIR-weak",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolToUIntIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolToUIntIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolToUIntIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolToUIntIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR_2D_weak GALGAS_boolToUIntIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_boolToUIntIR_2D_weak result ;
  const GALGAS_boolToUIntIR_2D_weak * p = (const GALGAS_boolToUIntIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolToUIntIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolToUIntIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendShiftLeft'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShiftLeft (GALGAS_instructionListIR & ioObject,
                                      const GALGAS_objectIR constinArgument_inResult,
                                      const GALGAS_objectIR constinArgument_inSource,
                                      const GALGAS_uint constinArgument_inShiftAmount,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_leftShiftIR::init_21__21__21_ (constinArgument_inResult, constinArgument_inSource, constinArgument_inShiftAmount, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 7)) ;
}


//--------------------------------------------------------------------------------------------------
// @leftShiftIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_leftShiftIR::cPtr_leftShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_leftShiftIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
    mProperty_mShiftAmount.printNonNullClassInstanceProperties ("mShiftAmount") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_leftShiftIR::objectCompare (const GALGAS_leftShiftIR & inOperand) const {
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

GALGAS_leftShiftIR::GALGAS_leftShiftIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_leftShiftIR GALGAS_leftShiftIR::
init_21__21__21_ (const GALGAS_objectIR & in_mResult,
                  const GALGAS_objectIR & in_mSource,
                  const GALGAS_uint & in_mShiftAmount,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_leftShiftIR * object = nullptr ;
  macroMyNew (object, cPtr_leftShiftIR (inCompiler COMMA_THERE)) ;
  object->leftShiftIR_init_21__21__21_ (in_mResult, in_mSource, in_mShiftAmount, inCompiler) ;
  const GALGAS_leftShiftIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftIR::
leftShiftIR_init_21__21__21_ (const GALGAS_objectIR & in_mResult,
                              const GALGAS_objectIR & in_mSource,
                              const GALGAS_uint & in_mShiftAmount,
                              Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR::GALGAS_leftShiftIR (const cPtr_leftShiftIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR GALGAS_leftShiftIR::class_func_new (const GALGAS_objectIR & in_mResult,
                                                       const GALGAS_objectIR & in_mSource,
                                                       const GALGAS_uint & in_mShiftAmount
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftIR result ;
  macroMyNew (result.mObjectPtr, cPtr_leftShiftIR (in_mResult, in_mSource, in_mShiftAmount COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_leftShiftIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_leftShiftIR::setProperty_mResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_leftShiftIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_leftShiftIR::setProperty_mSource (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_leftShiftIR::readProperty_mShiftAmount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mShiftAmount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_leftShiftIR::setProperty_mShiftAmount (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mShiftAmount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @leftShiftIR class
//--------------------------------------------------------------------------------------------------

cPtr_leftShiftIR::cPtr_leftShiftIR (const GALGAS_objectIR & in_mResult,
                                    const GALGAS_objectIR & in_mSource,
                                    const GALGAS_uint & in_mShiftAmount
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_leftShiftIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR ;
}

void cPtr_leftShiftIR::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@leftShiftIR:") ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mShiftAmount.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_leftShiftIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_leftShiftIR (mProperty_mResult, mProperty_mSource, mProperty_mShiftAmount COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @leftShiftIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR ("leftShiftIR",
                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_leftShiftIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_leftShiftIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR GALGAS_leftShiftIR::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftIR result ;
  const GALGAS_leftShiftIR * p = (const GALGAS_leftShiftIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_leftShiftIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_leftShiftIR_2D_weak::objectCompare (const GALGAS_leftShiftIR_2D_weak & inOperand) const {
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

GALGAS_leftShiftIR_2D_weak::GALGAS_leftShiftIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR_2D_weak & GALGAS_leftShiftIR_2D_weak::operator = (const GALGAS_leftShiftIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR_2D_weak::GALGAS_leftShiftIR_2D_weak (const GALGAS_leftShiftIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR_2D_weak GALGAS_leftShiftIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_leftShiftIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR GALGAS_leftShiftIR_2D_weak::bang_leftShiftIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_leftShiftIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_leftShiftIR) ;
      result = GALGAS_leftShiftIR ((cPtr_leftShiftIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @leftShiftIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR_2D_weak ("leftShiftIR-weak",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_leftShiftIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_leftShiftIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR_2D_weak GALGAS_leftShiftIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftIR_2D_weak result ;
  const GALGAS_leftShiftIR_2D_weak * p = (const GALGAS_leftShiftIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_leftShiftIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLogicalShiftRight'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLogicalShiftRight (GALGAS_instructionListIR & ioObject,
                                              GALGAS_objectIR & ioArgument_ioResult,
                                              const GALGAS_uint constinArgument_inShiftAmount,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioResult.getter_isLiteralInteger (SOURCE_FILE ("intermediate-logical-shift-right.galgas", 7)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_omnibusType var_type_238 ;
      GALGAS_bigint var_value_262 ;
      ioArgument_ioResult.method_literalInteger (var_type_238, var_value_262, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 8)) ;
      ioArgument_ioResult = GALGAS_objectIR::class_func_literalInteger (var_type_238, var_value_262.right_shift_operation (constinArgument_inShiftAmount, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 9))  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 9)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_appendLoadWhenReference (ioObject, ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 11)) ;
    }
    GALGAS_objectIR var_source_422 = ioArgument_ioResult ;
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_source_422, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 13)), ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 13)) ;
    }
    ioObject.addAssign_operation (GALGAS_logicalRightShiftIR::init_21__21__21_ (ioArgument_ioResult, var_source_422, constinArgument_inShiftAmount, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 14)) ;
  }
}


//--------------------------------------------------------------------------------------------------
// @logicalRightShiftIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_logicalRightShiftIR::cPtr_logicalRightShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logicalRightShiftIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
    mProperty_mShiftAmount.printNonNullClassInstanceProperties ("mShiftAmount") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_logicalRightShiftIR::objectCompare (const GALGAS_logicalRightShiftIR & inOperand) const {
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

GALGAS_logicalRightShiftIR::GALGAS_logicalRightShiftIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_logicalRightShiftIR GALGAS_logicalRightShiftIR::
init_21__21__21_ (const GALGAS_objectIR & in_mResult,
                  const GALGAS_objectIR & in_mSource,
                  const GALGAS_uint & in_mShiftAmount,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_logicalRightShiftIR * object = nullptr ;
  macroMyNew (object, cPtr_logicalRightShiftIR (inCompiler COMMA_THERE)) ;
  object->logicalRightShiftIR_init_21__21__21_ (in_mResult, in_mSource, in_mShiftAmount, inCompiler) ;
  const GALGAS_logicalRightShiftIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_logicalRightShiftIR::
logicalRightShiftIR_init_21__21__21_ (const GALGAS_objectIR & in_mResult,
                                      const GALGAS_objectIR & in_mSource,
                                      const GALGAS_uint & in_mShiftAmount,
                                      Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR::GALGAS_logicalRightShiftIR (const cPtr_logicalRightShiftIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalRightShiftIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR GALGAS_logicalRightShiftIR::class_func_new (const GALGAS_objectIR & in_mResult,
                                                                       const GALGAS_objectIR & in_mSource,
                                                                       const GALGAS_uint & in_mShiftAmount
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_logicalRightShiftIR result ;
  macroMyNew (result.mObjectPtr, cPtr_logicalRightShiftIR (in_mResult, in_mSource, in_mShiftAmount COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_logicalRightShiftIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logicalRightShiftIR::setProperty_mResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_logicalRightShiftIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logicalRightShiftIR::setProperty_mSource (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_logicalRightShiftIR::readProperty_mShiftAmount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mShiftAmount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logicalRightShiftIR::setProperty_mShiftAmount (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mShiftAmount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logicalRightShiftIR class
//--------------------------------------------------------------------------------------------------

cPtr_logicalRightShiftIR::cPtr_logicalRightShiftIR (const GALGAS_objectIR & in_mResult,
                                                    const GALGAS_objectIR & in_mSource,
                                                    const GALGAS_uint & in_mShiftAmount
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_logicalRightShiftIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR ;
}

void cPtr_logicalRightShiftIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@logicalRightShiftIR:") ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mShiftAmount.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logicalRightShiftIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logicalRightShiftIR (mProperty_mResult, mProperty_mSource, mProperty_mShiftAmount COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @logicalRightShiftIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR ("logicalRightShiftIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logicalRightShiftIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logicalRightShiftIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalRightShiftIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR GALGAS_logicalRightShiftIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logicalRightShiftIR result ;
  const GALGAS_logicalRightShiftIR * p = (const GALGAS_logicalRightShiftIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_logicalRightShiftIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalRightShiftIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_logicalRightShiftIR_2D_weak::objectCompare (const GALGAS_logicalRightShiftIR_2D_weak & inOperand) const {
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

GALGAS_logicalRightShiftIR_2D_weak::GALGAS_logicalRightShiftIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR_2D_weak & GALGAS_logicalRightShiftIR_2D_weak::operator = (const GALGAS_logicalRightShiftIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR_2D_weak::GALGAS_logicalRightShiftIR_2D_weak (const GALGAS_logicalRightShiftIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR_2D_weak GALGAS_logicalRightShiftIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_logicalRightShiftIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR GALGAS_logicalRightShiftIR_2D_weak::bang_logicalRightShiftIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_logicalRightShiftIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logicalRightShiftIR) ;
      result = GALGAS_logicalRightShiftIR ((cPtr_logicalRightShiftIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @logicalRightShiftIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR_2D_weak ("logicalRightShiftIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logicalRightShiftIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logicalRightShiftIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalRightShiftIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR_2D_weak GALGAS_logicalRightShiftIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logicalRightShiftIR_2D_weak result ;
  const GALGAS_logicalRightShiftIR_2D_weak * p = (const GALGAS_logicalRightShiftIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_logicalRightShiftIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalRightShiftIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendBinaryOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBinaryOperation (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_objectIR constinArgument_inTarget,
                                            const GALGAS_omnibusType constinArgument_inOperandType,
                                            const GALGAS_location constinArgument_inLocation,
                                            const GALGAS_objectIR constinArgument_inLeft,
                                            const GALGAS_llvmBinaryOperation constinArgument_inOperation,
                                            const GALGAS_objectIR constinArgument_inRight,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_binaryOperationIR::init_21__21__21__21__21__21_ (constinArgument_inTarget, constinArgument_inOperandType, constinArgument_inLeft, constinArgument_inOperation, constinArgument_inRight, constinArgument_inLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 51)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_binaryOperationIR_2D_weak::objectCompare (const GALGAS_binaryOperationIR_2D_weak & inOperand) const {
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

GALGAS_binaryOperationIR_2D_weak::GALGAS_binaryOperationIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR_2D_weak & GALGAS_binaryOperationIR_2D_weak::operator = (const GALGAS_binaryOperationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR_2D_weak::GALGAS_binaryOperationIR_2D_weak (const GALGAS_binaryOperationIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR_2D_weak GALGAS_binaryOperationIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_binaryOperationIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR GALGAS_binaryOperationIR_2D_weak::bang_binaryOperationIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_binaryOperationIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binaryOperationIR) ;
      result = GALGAS_binaryOperationIR ((cPtr_binaryOperationIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @binaryOperationIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR_2D_weak ("binaryOperationIR-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binaryOperationIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binaryOperationIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperationIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR_2D_weak GALGAS_binaryOperationIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR_2D_weak result ;
  const GALGAS_binaryOperationIR_2D_weak * p = (const GALGAS_binaryOperationIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_binaryOperationIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendShortCircuitAndOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShortCircuitAndOperation (GALGAS_instructionListIR & ioObject,
                                                     const GALGAS_objectIR constinArgument_inTargetOperand,
                                                     const GALGAS_string constinArgument_inLeftOperandLLVMName,
                                                     const GALGAS_instructionListIR constinArgument_inLeftInstructionList,
                                                     const GALGAS_string constinArgument_inRightOperandLLVMName,
                                                     const GALGAS_instructionListIR constinArgument_inRightInstructionList,
                                                     const GALGAS_location constinArgument_inLocation,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_shortCircuitAndOperationIR::init_21__21__21__21__21__21_ (constinArgument_inTargetOperand, constinArgument_inLeftOperandLLVMName, constinArgument_inLeftInstructionList, constinArgument_inRightOperandLLVMName, constinArgument_inRightInstructionList, constinArgument_inLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11)) ;
}


//--------------------------------------------------------------------------------------------------
// @shortCircuitAndOperationIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_shortCircuitAndOperationIR::cPtr_shortCircuitAndOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetOperand (),
mProperty_mLeftOperandLLVMName (),
mProperty_mLeftInstructionList (),
mProperty_mRightOperandLLVMName (),
mProperty_mRightInstructionList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_shortCircuitAndOperationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetOperand.printNonNullClassInstanceProperties ("mTargetOperand") ;
    mProperty_mLeftOperandLLVMName.printNonNullClassInstanceProperties ("mLeftOperandLLVMName") ;
    mProperty_mLeftInstructionList.printNonNullClassInstanceProperties ("mLeftInstructionList") ;
    mProperty_mRightOperandLLVMName.printNonNullClassInstanceProperties ("mRightOperandLLVMName") ;
    mProperty_mRightInstructionList.printNonNullClassInstanceProperties ("mRightInstructionList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_shortCircuitAndOperationIR::objectCompare (const GALGAS_shortCircuitAndOperationIR & inOperand) const {
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

GALGAS_shortCircuitAndOperationIR::GALGAS_shortCircuitAndOperationIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR::
init_21__21__21__21__21__21_ (const GALGAS_objectIR & in_mTargetOperand,
                              const GALGAS_string & in_mLeftOperandLLVMName,
                              const GALGAS_instructionListIR & in_mLeftInstructionList,
                              const GALGAS_string & in_mRightOperandLLVMName,
                              const GALGAS_instructionListIR & in_mRightInstructionList,
                              const GALGAS_location & in_mLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_shortCircuitAndOperationIR * object = nullptr ;
  macroMyNew (object, cPtr_shortCircuitAndOperationIR (inCompiler COMMA_THERE)) ;
  object->shortCircuitAndOperationIR_init_21__21__21__21__21__21_ (in_mTargetOperand, in_mLeftOperandLLVMName, in_mLeftInstructionList, in_mRightOperandLLVMName, in_mRightInstructionList, in_mLocation, inCompiler) ;
  const GALGAS_shortCircuitAndOperationIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_shortCircuitAndOperationIR::
shortCircuitAndOperationIR_init_21__21__21__21__21__21_ (const GALGAS_objectIR & in_mTargetOperand,
                                                         const GALGAS_string & in_mLeftOperandLLVMName,
                                                         const GALGAS_instructionListIR & in_mLeftInstructionList,
                                                         const GALGAS_string & in_mRightOperandLLVMName,
                                                         const GALGAS_instructionListIR & in_mRightInstructionList,
                                                         const GALGAS_location & in_mLocation,
                                                         Compiler * /* inCompiler */) {
  mProperty_mTargetOperand = in_mTargetOperand ;
  mProperty_mLeftOperandLLVMName = in_mLeftOperandLLVMName ;
  mProperty_mLeftInstructionList = in_mLeftInstructionList ;
  mProperty_mRightOperandLLVMName = in_mRightOperandLLVMName ;
  mProperty_mRightInstructionList = in_mRightInstructionList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR::GALGAS_shortCircuitAndOperationIR (const cPtr_shortCircuitAndOperationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_shortCircuitAndOperationIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR::class_func_new (const GALGAS_objectIR & in_mTargetOperand,
                                                                                     const GALGAS_string & in_mLeftOperandLLVMName,
                                                                                     const GALGAS_instructionListIR & in_mLeftInstructionList,
                                                                                     const GALGAS_string & in_mRightOperandLLVMName,
                                                                                     const GALGAS_instructionListIR & in_mRightInstructionList,
                                                                                     const GALGAS_location & in_mLocation
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR result ;
  macroMyNew (result.mObjectPtr, cPtr_shortCircuitAndOperationIR (in_mTargetOperand, in_mLeftOperandLLVMName, in_mLeftInstructionList, in_mRightOperandLLVMName, in_mRightInstructionList, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_shortCircuitAndOperationIR::readProperty_mTargetOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mTargetOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setProperty_mTargetOperand (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mTargetOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_shortCircuitAndOperationIR::readProperty_mLeftOperandLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLeftOperandLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setProperty_mLeftOperandLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLeftOperandLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_shortCircuitAndOperationIR::readProperty_mLeftInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLeftInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setProperty_mLeftInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLeftInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_shortCircuitAndOperationIR::readProperty_mRightOperandLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mRightOperandLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setProperty_mRightOperandLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mRightOperandLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_shortCircuitAndOperationIR::readProperty_mRightInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mRightInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setProperty_mRightInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mRightInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_shortCircuitAndOperationIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setProperty_mLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @shortCircuitAndOperationIR class
//--------------------------------------------------------------------------------------------------

cPtr_shortCircuitAndOperationIR::cPtr_shortCircuitAndOperationIR (const GALGAS_objectIR & in_mTargetOperand,
                                                                  const GALGAS_string & in_mLeftOperandLLVMName,
                                                                  const GALGAS_instructionListIR & in_mLeftInstructionList,
                                                                  const GALGAS_string & in_mRightOperandLLVMName,
                                                                  const GALGAS_instructionListIR & in_mRightInstructionList,
                                                                  const GALGAS_location & in_mLocation
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetOperand (),
mProperty_mLeftOperandLLVMName (),
mProperty_mLeftInstructionList (),
mProperty_mRightOperandLLVMName (),
mProperty_mRightInstructionList (),
mProperty_mLocation () {
  mProperty_mTargetOperand = in_mTargetOperand ;
  mProperty_mLeftOperandLLVMName = in_mLeftOperandLLVMName ;
  mProperty_mLeftInstructionList = in_mLeftInstructionList ;
  mProperty_mRightOperandLLVMName = in_mRightOperandLLVMName ;
  mProperty_mRightInstructionList = in_mRightInstructionList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_shortCircuitAndOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;
}

void cPtr_shortCircuitAndOperationIR::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@shortCircuitAndOperationIR:") ;
  mProperty_mTargetOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftOperandLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_shortCircuitAndOperationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_shortCircuitAndOperationIR (mProperty_mTargetOperand, mProperty_mLeftOperandLLVMName, mProperty_mLeftInstructionList, mProperty_mRightOperandLLVMName, mProperty_mRightInstructionList, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @shortCircuitAndOperationIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ("shortCircuitAndOperationIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_shortCircuitAndOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_shortCircuitAndOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_shortCircuitAndOperationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR result ;
  const GALGAS_shortCircuitAndOperationIR * p = (const GALGAS_shortCircuitAndOperationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_shortCircuitAndOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("shortCircuitAndOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

