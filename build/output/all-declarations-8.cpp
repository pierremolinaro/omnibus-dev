#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctInfixExpressionAST_2E_weak::objectCompare (const GGS_ctInfixExpressionAST_2E_weak & inOperand) const {
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

GGS_ctInfixExpressionAST_2E_weak::GGS_ctInfixExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST_2E_weak & GGS_ctInfixExpressionAST_2E_weak::operator = (const GGS_ctInfixExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST_2E_weak::GGS_ctInfixExpressionAST_2E_weak (const GGS_ctInfixExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST_2E_weak GGS_ctInfixExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctInfixExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ctInfixExpressionAST result ;
  if (isValid ()) {
    const cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ctInfixExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST_2E_weak::bang_ctInfixExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctInfixExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctInfixExpressionAST) ;
      result = GGS_ctInfixExpressionAST ((cPtr_ctInfixExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ctInfixExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST_2E_weak ("ctInfixExpressionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctInfixExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctInfixExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctInfixExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST_2E_weak GGS_ctInfixExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctInfixExpressionAST_2E_weak result ;
  const GGS_ctInfixExpressionAST_2E_weak * p = (const GGS_ctInfixExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctInfixExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctInfixExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctPrefixExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctPrefixExpressionAST::objectCompare (const GGS_ctPrefixExpressionAST & inOperand) const {
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

GGS_ctPrefixExpressionAST::GGS_ctPrefixExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                  const GGS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ctPrefixExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctPrefixExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctPrefixExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mPrefixOperator, in_mExpression, inCompiler) ;
  const GGS_ctPrefixExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::
ctPrefixExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                        const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                        const GGS_ctExpressionAST & in_mExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST::GGS_ctPrefixExpressionAST (const cPtr_ctPrefixExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctPrefixExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                     const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                     const GGS_ctExpressionAST & in_mExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_ctPrefixExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctPrefixExpressionAST (in_mOperatorLocation, in_mPrefixOperator, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ctPrefixExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctPrefixExpressionAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorEnumeration GGS_ctPrefixExpressionAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimePrefixOperatorEnumeration () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctPrefixExpressionAST::setProperty_mPrefixOperator (const GGS_compileTimePrefixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctPrefixExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctPrefixExpressionAST::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctPrefixExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mPrefixOperator (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (const GGS_location & in_mOperatorLocation,
                                                        const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                        const GGS_ctExpressionAST & in_mExpression,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mPrefixOperator (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ctPrefixExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST ;
}

void cPtr_ctPrefixExpressionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@ctPrefixExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctPrefixExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctPrefixExpressionAST (mProperty_mOperatorLocation, mProperty_mPrefixOperator, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctPrefixExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mPrefixOperator.printNonNullClassInstanceProperties ("mPrefixOperator") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ctPrefixExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST ("ctPrefixExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctPrefixExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctPrefixExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctPrefixExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_ctPrefixExpressionAST result ;
  const GGS_ctPrefixExpressionAST * p = (const GGS_ctPrefixExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctPrefixExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctPrefixExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctPrefixExpressionAST_2E_weak::objectCompare (const GGS_ctPrefixExpressionAST_2E_weak & inOperand) const {
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

GGS_ctPrefixExpressionAST_2E_weak::GGS_ctPrefixExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST_2E_weak & GGS_ctPrefixExpressionAST_2E_weak::operator = (const GGS_ctPrefixExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST_2E_weak::GGS_ctPrefixExpressionAST_2E_weak (const GGS_ctPrefixExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST_2E_weak GGS_ctPrefixExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctPrefixExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ctPrefixExpressionAST result ;
  if (isValid ()) {
    const cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ctPrefixExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST GGS_ctPrefixExpressionAST_2E_weak::bang_ctPrefixExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctPrefixExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctPrefixExpressionAST) ;
      result = GGS_ctPrefixExpressionAST ((cPtr_ctPrefixExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ctPrefixExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2E_weak ("ctPrefixExpressionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctPrefixExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctPrefixExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctPrefixExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctPrefixExpressionAST_2E_weak GGS_ctPrefixExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ctPrefixExpressionAST_2E_weak result ;
  const GGS_ctPrefixExpressionAST_2E_weak * p = (const GGS_ctPrefixExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctPrefixExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctPrefixExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctTrueExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctTrueExpressionAST::objectCompare (const GGS_ctTrueExpressionAST & inOperand) const {
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

GGS_ctTrueExpressionAST::GGS_ctTrueExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctTrueExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctTrueExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctTrueExpressionAST_init (inCompiler) ;
  const GGS_ctTrueExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::
ctTrueExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST::GGS_ctTrueExpressionAST (const cPtr_ctTrueExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctTrueExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_ctTrueExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctTrueExpressionAST (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctTrueExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_ctTrueExpressionAST::cPtr_ctTrueExpressionAST (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ctTrueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST ;
}

void cPtr_ctTrueExpressionAST::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@ctTrueExpressionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctTrueExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctTrueExpressionAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctTrueExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ctTrueExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST ("ctTrueExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctTrueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctTrueExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctTrueExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ctTrueExpressionAST result ;
  const GGS_ctTrueExpressionAST * p = (const GGS_ctTrueExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctTrueExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctTrueExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctTrueExpressionAST_2E_weak::objectCompare (const GGS_ctTrueExpressionAST_2E_weak & inOperand) const {
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

GGS_ctTrueExpressionAST_2E_weak::GGS_ctTrueExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST_2E_weak & GGS_ctTrueExpressionAST_2E_weak::operator = (const GGS_ctTrueExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST_2E_weak::GGS_ctTrueExpressionAST_2E_weak (const GGS_ctTrueExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST_2E_weak GGS_ctTrueExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctTrueExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ctTrueExpressionAST result ;
  if (isValid ()) {
    const cPtr_ctTrueExpressionAST * p = (cPtr_ctTrueExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ctTrueExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST GGS_ctTrueExpressionAST_2E_weak::bang_ctTrueExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctTrueExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctTrueExpressionAST) ;
      result = GGS_ctTrueExpressionAST ((cPtr_ctTrueExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ctTrueExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST_2E_weak ("ctTrueExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctTrueExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctTrueExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctTrueExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctTrueExpressionAST_2E_weak GGS_ctTrueExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ctTrueExpressionAST_2E_weak result ;
  const GGS_ctTrueExpressionAST_2E_weak * p = (const GGS_ctTrueExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctTrueExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctTrueExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctFalseExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctFalseExpressionAST::objectCompare (const GGS_ctFalseExpressionAST & inOperand) const {
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

GGS_ctFalseExpressionAST::GGS_ctFalseExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctFalseExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctFalseExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctFalseExpressionAST_init (inCompiler) ;
  const GGS_ctFalseExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::
ctFalseExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST::GGS_ctFalseExpressionAST (const cPtr_ctFalseExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctFalseExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_ctFalseExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctFalseExpressionAST (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctFalseExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_ctFalseExpressionAST::cPtr_ctFalseExpressionAST (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ctFalseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST ;
}

void cPtr_ctFalseExpressionAST::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@ctFalseExpressionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctFalseExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctFalseExpressionAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctFalseExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ctFalseExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST ("ctFalseExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctFalseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctFalseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctFalseExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctFalseExpressionAST result ;
  const GGS_ctFalseExpressionAST * p = (const GGS_ctFalseExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctFalseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctFalseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctFalseExpressionAST_2E_weak::objectCompare (const GGS_ctFalseExpressionAST_2E_weak & inOperand) const {
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

GGS_ctFalseExpressionAST_2E_weak::GGS_ctFalseExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST_2E_weak & GGS_ctFalseExpressionAST_2E_weak::operator = (const GGS_ctFalseExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST_2E_weak::GGS_ctFalseExpressionAST_2E_weak (const GGS_ctFalseExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST_2E_weak GGS_ctFalseExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctFalseExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ctFalseExpressionAST result ;
  if (isValid ()) {
    const cPtr_ctFalseExpressionAST * p = (cPtr_ctFalseExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ctFalseExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST GGS_ctFalseExpressionAST_2E_weak::bang_ctFalseExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctFalseExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctFalseExpressionAST) ;
      result = GGS_ctFalseExpressionAST ((cPtr_ctFalseExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ctFalseExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST_2E_weak ("ctFalseExpressionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctFalseExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctFalseExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctFalseExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctFalseExpressionAST_2E_weak GGS_ctFalseExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctFalseExpressionAST_2E_weak result ;
  const GGS_ctFalseExpressionAST_2E_weak * p = (const GGS_ctFalseExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctFalseExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctFalseExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctIntExpressionAST_2E_weak::objectCompare (const GGS_ctIntExpressionAST_2E_weak & inOperand) const {
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

GGS_ctIntExpressionAST_2E_weak::GGS_ctIntExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST_2E_weak & GGS_ctIntExpressionAST_2E_weak::operator = (const GGS_ctIntExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST_2E_weak::GGS_ctIntExpressionAST_2E_weak (const GGS_ctIntExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST_2E_weak GGS_ctIntExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctIntExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST GGS_ctIntExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ctIntExpressionAST result ;
  if (isValid ()) {
    const cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ctIntExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST GGS_ctIntExpressionAST_2E_weak::bang_ctIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctIntExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctIntExpressionAST) ;
      result = GGS_ctIntExpressionAST ((cPtr_ctIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ctIntExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctIntExpressionAST_2E_weak ("ctIntExpressionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctIntExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctIntExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctIntExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST_2E_weak GGS_ctIntExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_ctIntExpressionAST_2E_weak result ;
  const GGS_ctIntExpressionAST_2E_weak * p = (const GGS_ctIntExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctIntExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIntExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctIdentifierExpressionAST_2E_weak::objectCompare (const GGS_ctIdentifierExpressionAST_2E_weak & inOperand) const {
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

GGS_ctIdentifierExpressionAST_2E_weak::GGS_ctIdentifierExpressionAST_2E_weak (void) :
GGS_ctExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST_2E_weak & GGS_ctIdentifierExpressionAST_2E_weak::operator = (const GGS_ctIdentifierExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST_2E_weak::GGS_ctIdentifierExpressionAST_2E_weak (const GGS_ctIdentifierExpressionAST & inSource) :
GGS_ctExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST_2E_weak GGS_ctIdentifierExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctIdentifierExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST GGS_ctIdentifierExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ctIdentifierExpressionAST result ;
  if (isValid ()) {
    const cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ctIdentifierExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST GGS_ctIdentifierExpressionAST_2E_weak::bang_ctIdentifierExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctIdentifierExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctIdentifierExpressionAST) ;
      result = GGS_ctIdentifierExpressionAST ((cPtr_ctIdentifierExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ctIdentifierExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2E_weak ("ctIdentifierExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctIdentifierExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctIdentifierExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctIdentifierExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST_2E_weak GGS_ctIdentifierExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ctIdentifierExpressionAST_2E_weak result ;
  const GGS_ctIdentifierExpressionAST_2E_weak * p = (const GGS_ctIdentifierExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctIdentifierExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIdentifierExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @ctCheckMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap::GGS_ctCheckMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap::~ GGS_ctCheckMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap::GGS_ctCheckMap (const GGS_ctCheckMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap & GGS_ctCheckMap::operator = (const GGS_ctCheckMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_ctCheckMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_ctCheckMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ctCheckMap::getter_hasKey (const GGS_string & inKey
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ctCheckMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                               const GGS_uint & inLevel
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ctCheckMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ctCheckMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ctCheckMap::getter_locationForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_ctCheckMap::getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ctCheckMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_ctCheckMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::performInsert (const GGS_ctCheckMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_ctCheckMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element>
GGS_ctCheckMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_ctCheckMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element>>
GGS_ctCheckMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_ctCheckMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element_3F_ GGS_ctCheckMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ctCheckMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_ctCheckMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_ctCheckMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::class_func_mapWithMapToOverride (const GGS_ctCheckMap & inMapToOverride
                                                                COMMA_LOCATION_ARGS) {
  GGS_ctCheckMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_ctCheckMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_ctCheckMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::setter_insertKey (GGS_lstring inLKey,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  const GGS_ctCheckMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::method_searchKey (GGS_lstring inLKey,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' key" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_ctCheckMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctCheckMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element>> array = sortedInfoArray () ;
    GGS_ctCheckMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_ctCheckMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_ctCheckMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @ctCheckMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_ctCheckMap::DownEnumerator_ctCheckMap (const GGS_ctCheckMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element DownEnumerator_ctCheckMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ctCheckMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @ctCheckMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_ctCheckMap::UpEnumerator_ctCheckMap (const GGS_ctCheckMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap_2E_element UpEnumerator_ctCheckMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ctCheckMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @ctCheckMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctCheckMap ("ctCheckMap",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctCheckMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctCheckMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctCheckMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctCheckMap GGS_ctCheckMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_ctCheckMap result ;
  const GGS_ctCheckMap * p = (const GGS_ctCheckMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctCheckMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkCompileTimeExpression (cPtr_ctExpressionAST * inObject,
                                                     const GGS_ctCheckMap constin_inMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ctExpressionAST) ;
    inObject->method_checkCompileTimeExpression (constin_inMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @ctMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_ctMap::GGS_ctMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap::~ GGS_ctMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap::GGS_ctMap (const GGS_ctMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap & GGS_ctMap::operator = (const GGS_ctMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_ctMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_ctMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ctMap::getter_hasKey (const GGS_string & inKey
                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ctMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                          const GGS_uint & inLevel
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ctMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ctMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ctMap::getter_locationForKey (const GGS_string & inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_ctMap::getter_keyList (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ctMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_ctMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::performInsert (const GGS_ctMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_ctMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element>
GGS_ctMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_ctMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element>>
GGS_ctMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_ctMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element_3F_ GGS_ctMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ctMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_ctMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_ctMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mValue = info->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::class_func_mapWithMapToOverride (const GGS_ctMap & inMapToOverride
                                                      COMMA_LOCATION_ARGS) {
  GGS_ctMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_ctMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::getter_overriddenMap (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  GGS_ctMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::setter_insertKey (GGS_lstring inLKey,
                                  GGS_bigint inArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  const GGS_ctMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::method_searchKey (GGS_lstring inLKey,
                                  GGS_bigint & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' key" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_ctMap::getter_mValueForKey (const GGS_string & inKey,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ctMap::setter_setMValueForKey (GGS_bigint inValue,
                                        GGS_string inKey,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ctMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_ctMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mValue:") ;
    inArray (i COMMA_HERE)->mProperty_mValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element>> array = sortedInfoArray () ;
    GGS_ctMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_ctMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_ctMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @ctMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_ctMap::DownEnumerator_ctMap (const GGS_ctMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element DownEnumerator_ctMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ctMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_ctMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @ctMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_ctMap::UpEnumerator_ctMap (const GGS_ctMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap_2E_element UpEnumerator_ctMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ctMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_ctMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}


//--------------------------------------------------------------------------------------------------
//     @ctMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctMap ("ctMap",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctMap GGS_ctMap::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_ctMap result ;
  const GGS_ctMap * p = (const GGS_ctMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeCompileTimeExpression (cPtr_ctExpressionAST * inObject,
                                                       const GGS_ctMap constin_inMap,
                                                       GGS_bigint & out_outValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outValue.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ctExpressionAST) ;
    inObject->method_computeCompileTimeExpression (constin_inMap, out_outValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Enum genericFormalParameter
//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter::GGS_genericFormalParameter (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::class_func_constant (const GGS_lstring & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  result.mEnum = Enumeration::enum_constant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_genericFormalParameter_2E_constant (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::class_func_type (const GGS_lstring & inAssociatedValue0
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  result.mEnum = Enumeration::enum_type ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_genericFormalParameter_2E_type (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::method_extractConstant (GGS_lstring & outAssociatedValue_name,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_constant) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @genericFormalParameter.constant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::method_extractType (GGS_lstring & outAssociatedValue_name,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_type) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @genericFormalParameter.type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant_3F_ GGS_genericFormalParameter::getter_getConstant (UNUSED_LOCATION_ARGS) const {
  GGS_genericFormalParameter_2E_constant_3F_ result ;
  if (mEnum == Enumeration::enum_constant) {
    const auto ptr = (const GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_genericFormalParameter_2E_constant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::getAssociatedValuesFor_constant (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type_3F_ GGS_genericFormalParameter::getter_getType (UNUSED_LOCATION_ARGS) const {
  GGS_genericFormalParameter_2E_type_3F_ result ;
  if (mEnum == Enumeration::enum_type) {
    const auto ptr = (const GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_genericFormalParameter_2E_type (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::getAssociatedValuesFor_type (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_genericFormalParameter [3] = {
  "(not built)",
  "constant",
  "type"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_genericFormalParameter::getter_isConstant (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_constant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_genericFormalParameter::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<enum @genericFormalParameter: ") ;
  ioString.appendCString (gEnumNameArrayFor_genericFormalParameter [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_genericFormalParameter::objectCompare (const GGS_genericFormalParameter & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_constant: {
        const auto left = (GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_genericFormalParameter_2E_constant *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_type: {
        const auto left = (GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_genericFormalParameter_2E_type *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @genericFormalParameter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter ("genericFormalParameter",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericFormalParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  const GGS_genericFormalParameter * p = (const GGS_genericFormalParameter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum llvmStringDefinitionElement
//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement::GGS_llvmStringDefinitionElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::class_func_variable (const GGS_lstring & inAssociatedValue0
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  result.mEnum = Enumeration::enum_variable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmStringDefinitionElement_2E_variable (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::class_func_string (const GGS_lstring & inAssociatedValue0
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmStringDefinitionElement_2E_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::method_extractVariable (GGS_lstring & outAssociatedValue_name,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_variable) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmStringDefinitionElement.variable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::method_extractString (GGS_lstring & outAssociatedValue_value,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @llvmStringDefinitionElement.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable_3F_ GGS_llvmStringDefinitionElement::getter_getVariable (UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinitionElement_2E_variable_3F_ result ;
  if (mEnum == Enumeration::enum_variable) {
    const auto ptr = (const GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmStringDefinitionElement_2E_variable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::getAssociatedValuesFor_variable (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string_3F_ GGS_llvmStringDefinitionElement::getter_getString (UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinitionElement_2E_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmStringDefinitionElement_2E_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::getAssociatedValuesFor_string (GGS_lstring & out_value) const {
  const auto ptr = (const GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmStringDefinitionElement [3] = {
  "(not built)",
  "variable",
  "string"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmStringDefinitionElement::getter_isVariable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_variable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmStringDefinitionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<enum @llvmStringDefinitionElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmStringDefinitionElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinitionElement::objectCompare (const GGS_llvmStringDefinitionElement & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_variable: {
        const auto left = (GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_llvmStringDefinitionElement_2E_variable *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_string: {
        const auto left = (GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_llvmStringDefinitionElement_2E_string *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmStringDefinitionElement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement ("llvmStringDefinitionElement",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinitionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinitionElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinitionElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  const GGS_llvmStringDefinitionElement * p = (const GGS_llvmStringDefinitionElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinitionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@llvmStringDefinition' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmStringDefinition : public cCollectionElement {
  public: GGS_llvmStringDefinition_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmStringDefinition (const GGS_llvmStringDefinitionElement & in_mElement
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmStringDefinition (const GGS_llvmStringDefinition_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmStringDefinition::cCollectionElement_llvmStringDefinition (const GGS_llvmStringDefinitionElement & in_mElement
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmStringDefinition::cCollectionElement_llvmStringDefinition (const GGS_llvmStringDefinition_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_llvmStringDefinition::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_llvmStringDefinition::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_llvmStringDefinition (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @llvmStringDefinition
//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition::GGS_llvmStringDefinition (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition::GGS_llvmStringDefinition (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    const GGS_llvmStringDefinition_2E_element element (p->mObject.mProperty_mElement) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_llvmStringDefinitionElement & in_mElement
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmStringDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmStringDefinition (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_llvmStringDefinition::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_llvmStringDefinition::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mElement:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mElement.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinition result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinition result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::plusPlusAssignOperation (const GGS_llvmStringDefinition_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::class_func_listWithValue (const GGS_llvmStringDefinitionElement & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_llvmStringDefinition_2E_element element (inOperand0) ;
  GGS_llvmStringDefinition result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::addAssignOperation (const GGS_llvmStringDefinitionElement & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  const GGS_llvmStringDefinition_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_append (const GGS_llvmStringDefinitionElement inOperand0,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_llvmStringDefinition_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_insertAtIndex (const GGS_llvmStringDefinitionElement inOperand0,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_llvmStringDefinition_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_removeAtIndex (GGS_llvmStringDefinitionElement & outOperand0,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mElement ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_popFirst (GGS_llvmStringDefinitionElement & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_popLast (GGS_llvmStringDefinitionElement & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::method_first (GGS_llvmStringDefinitionElement & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::method_last (GGS_llvmStringDefinitionElement & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::add_operation (const GGS_llvmStringDefinition & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::plusAssignOperation (const GGS_llvmStringDefinition inList,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_setMElementAtIndex (GGS_llvmStringDefinitionElement inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mElement = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_llvmStringDefinitionElement GGS_llvmStringDefinition::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinitionElement result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mElement ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinition::objectCompare (const GGS_llvmStringDefinition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_llvmStringDefinition_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_llvmStringDefinition_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @llvmStringDefinition
//--------------------------------------------------------------------------------------------------

DownEnumerator_llvmStringDefinition::DownEnumerator_llvmStringDefinition (const GGS_llvmStringDefinition & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element DownEnumerator_llvmStringDefinition::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement DownEnumerator_llvmStringDefinition::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @llvmStringDefinition
//--------------------------------------------------------------------------------------------------

UpEnumerator_llvmStringDefinition::UpEnumerator_llvmStringDefinition (const GGS_llvmStringDefinition & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element UpEnumerator_llvmStringDefinition::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement UpEnumerator_llvmStringDefinition::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @llvmStringDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinition ("llvmStringDefinition",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinition result ;
  const GGS_llvmStringDefinition * p = (const GGS_llvmStringDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmGenericType_2E_weak::objectCompare (const GGS_llvmGenericType_2E_weak & inOperand) const {
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

GGS_llvmGenericType_2E_weak::GGS_llvmGenericType_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak & GGS_llvmGenericType_2E_weak::operator = (const GGS_llvmGenericType & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak::GGS_llvmGenericType_2E_weak (const GGS_llvmGenericType & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak GGS_llvmGenericType_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmGenericType_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType_2E_weak::unwrappedValue (void) const {
  GGS_llvmGenericType result ;
  if (isValid ()) {
    const cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmGenericType (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType_2E_weak::bang_llvmGenericType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmGenericType result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenericType) ;
      result = GGS_llvmGenericType ((cPtr_llvmGenericType *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmGenericType.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenericType_2E_weak ("llvmGenericType.weak",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenericType_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenericType_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenericType_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak GGS_llvmGenericType_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmGenericType_2E_weak result ;
  const GGS_llvmGenericType_2E_weak * p = (const GGS_llvmGenericType_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenericType_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenericType.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@genericFormalParameterList buildFormalGenericConstantMap'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildFormalGenericConstantMap (const GGS_genericFormalParameterList inObject,
                                                    GGS_ctCheckMap & ioArgument_ioMap,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_genericFormalParameterList temp_0 = inObject ;
  UpEnumerator_genericFormalParameterList enumerator_5753 (temp_0) ;
  while (enumerator_5753.hasCurrentObject ()) {
    switch (enumerator_5753.current_mParameter (HERE).enumValue ()) {
    case GGS_genericFormalParameter::Enumeration::invalid:
      break ;
    case GGS_genericFormalParameter::Enumeration::enum_type:
      break ;
    case GGS_genericFormalParameter::Enumeration::enum_constant:
      {
        GGS_lstring extractedValue_5832_constantName_0 ;
        enumerator_5753.current_mParameter (HERE).getAssociatedValuesFor_constant (extractedValue_5832_constantName_0) ;
        {
        ioArgument_ioMap.setter_insertKey (extractedValue_5832_constantName_0, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 164)) ;
        }
      }
      break ;
    }
    enumerator_5753.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmStringDefinition checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompileTimeExpression (const GGS_llvmStringDefinition inObject,
                                                 const GGS_ctCheckMap constinArgument_inMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmStringDefinition temp_0 = inObject ;
  UpEnumerator_llvmStringDefinition enumerator_6115 (temp_0) ;
  while (enumerator_6115.hasCurrentObject ()) {
    switch (enumerator_6115.current_mElement (HERE).enumValue ()) {
    case GGS_llvmStringDefinitionElement::Enumeration::invalid:
      break ;
    case GGS_llvmStringDefinitionElement::Enumeration::enum_string:
      break ;
    case GGS_llvmStringDefinitionElement::Enumeration::enum_variable:
      {
        GGS_lstring extractedValue_6196_name_0 ;
        enumerator_6115.current_mElement (HERE).getAssociatedValuesFor_variable (extractedValue_6196_name_0) ;
        constinArgument_inMap.method_searchKey (extractedValue_6196_name_0, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 176)) ;
      }
      break ;
    }
    enumerator_6115.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::objectCompare (const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak & inOperand) const {
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

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak & GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::operator = (const GGS_llvmAssignmentOperatorDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (const GGS_llvmAssignmentOperatorDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_llvmAssignmentOperatorDeclarationAST result ;
  if (isValid ()) {
    const cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmAssignmentOperatorDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::bang_llvmAssignmentOperatorDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmAssignmentOperatorDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
      result = GGS_llvmAssignmentOperatorDeclarationAST ((cPtr_llvmAssignmentOperatorDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmAssignmentOperatorDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2E_weak ("llvmAssignmentOperatorDeclarationAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST_2E_weak result ;
  const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak * p = (const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractAssignmentOperatorUsage * inObject,
                                       GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       GGS_instructionListIR & io_ioInstructionListIR,
                                       GGS_allocaList & io_ioAllocaList,
                                       const GGS_omnibusType constin_inTargetType,
                                       const GGS_string constin_inTargetLLVMName,
                                       const GGS_objectIR constin_inSourcePossibleReference,
                                       const GGS_location constin_inErrorLocation,
                                       const GGS_bool constin_inTargetIsInitialized,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractAssignmentOperatorUsage) ;
    inObject->method_generateCode (io_ioTemporaries, io_ioInstructionListIR, io_ioAllocaList, constin_inTargetType, constin_inTargetLLVMName, constin_inSourcePossibleReference, constin_inErrorLocation, constin_inTargetIsInitialized, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_llvmAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_llvmAssignmentOperatorUsage_2E_weak::GGS_llvmAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak & GGS_llvmAssignmentOperatorUsage_2E_weak::operator = (const GGS_llvmAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak::GGS_llvmAssignmentOperatorUsage_2E_weak (const GGS_llvmAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak GGS_llvmAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_llvmAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage_2E_weak::bang_llvmAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorUsage) ;
      result = GGS_llvmAssignmentOperatorUsage ((cPtr_llvmAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2E_weak ("llvmAssignmentOperatorUsage.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak GGS_llvmAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage_2E_weak result ;
  const GGS_llvmAssignmentOperatorUsage_2E_weak * p = (const GGS_llvmAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendAssignmentIR'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendAssignmentIR (GGS_instructionListIR & ioObject,
                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         const GGS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                         GGS_allocaList & ioArgument_ioAllocaList,
                                         const GGS_omnibusType constinArgument_inTargetType,
                                         const GGS_string constinArgument_inTargetLLVMName,
                                         const GGS_objectIR constinArgument_inSourcePossibleReference,
                                         const GGS_location constinArgument_inErrorLocation,
                                         const GGS_bool constinArgument_inTargetIsInitialized,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_key_15765 = function_assignmentOperatorKey (constinArgument_inTargetType, constinArgument_inErrorLocation, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)) ;
  GGS_abstractAssignmentOperatorUsage var_operatorUsage_15907 ;
  constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_15765, var_operatorUsage_15907, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)) ;
  GGS_instructionListIR var_instructions_15947 = GGS_instructionListIR::init (inCompiler COMMA_HERE) ;
  callExtensionMethod_generateCode ((cPtr_abstractAssignmentOperatorUsage *) var_operatorUsage_15907.ptr (), ioArgument_ioTemporaries, var_instructions_15947, ioArgument_ioAllocaList, constinArgument_inTargetType, constinArgument_inTargetLLVMName, constinArgument_inSourcePossibleReference, constinArgument_inErrorLocation, constinArgument_inTargetIsInitialized, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 348)) ;
  ioObject.plusAssignOperation(var_instructions_15947, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 358)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentRoutineIR_2E_weak::objectCompare (const GGS_assignmentRoutineIR_2E_weak & inOperand) const {
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

GGS_assignmentRoutineIR_2E_weak::GGS_assignmentRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak & GGS_assignmentRoutineIR_2E_weak::operator = (const GGS_assignmentRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak::GGS_assignmentRoutineIR_2E_weak (const GGS_assignmentRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak GGS_assignmentRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignmentRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_assignmentRoutineIR result ;
  if (isValid ()) {
    const cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_assignmentRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR_2E_weak::bang_assignmentRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignmentRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentRoutineIR) ;
      result = GGS_assignmentRoutineIR ((cPtr_assignmentRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assignmentRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentRoutineIR_2E_weak ("assignmentRoutineIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak GGS_assignmentRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_assignmentRoutineIR_2E_weak result ;
  const GGS_assignmentRoutineIR_2E_weak * p = (const GGS_assignmentRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleAssignmentCopyRoutineIR_2E_weak::objectCompare (const GGS_simpleAssignmentCopyRoutineIR_2E_weak & inOperand) const {
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

GGS_simpleAssignmentCopyRoutineIR_2E_weak::GGS_simpleAssignmentCopyRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak & GGS_simpleAssignmentCopyRoutineIR_2E_weak::operator = (const GGS_simpleAssignmentCopyRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak::GGS_simpleAssignmentCopyRoutineIR_2E_weak (const GGS_simpleAssignmentCopyRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak GGS_simpleAssignmentCopyRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_simpleAssignmentCopyRoutineIR result ;
  if (isValid ()) {
    const cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_simpleAssignmentCopyRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR_2E_weak::bang_simpleAssignmentCopyRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_simpleAssignmentCopyRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleAssignmentCopyRoutineIR) ;
      result = GGS_simpleAssignmentCopyRoutineIR ((cPtr_simpleAssignmentCopyRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @simpleAssignmentCopyRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2E_weak ("simpleAssignmentCopyRoutineIR.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleAssignmentCopyRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleAssignmentCopyRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleAssignmentCopyRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak GGS_simpleAssignmentCopyRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR_2E_weak result ;
  const GGS_simpleAssignmentCopyRoutineIR_2E_weak * p = (const GGS_simpleAssignmentCopyRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleAssignmentCopyRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleAssignmentCopyRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @simpleCopyAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleCopyAssignmentOperatorUsage::objectCompare (const GGS_simpleCopyAssignmentOperatorUsage & inOperand) const {
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

GGS_simpleCopyAssignmentOperatorUsage::GGS_simpleCopyAssignmentOperatorUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_simpleCopyAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_simpleCopyAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->simpleCopyAssignmentOperatorUsage_init (inCompiler) ;
  const GGS_simpleCopyAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_simpleCopyAssignmentOperatorUsage::
simpleCopyAssignmentOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage::GGS_simpleCopyAssignmentOperatorUsage (const cPtr_simpleCopyAssignmentOperatorUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_simpleCopyAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @simpleCopyAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_simpleCopyAssignmentOperatorUsage::cPtr_simpleCopyAssignmentOperatorUsage (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_simpleCopyAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

void cPtr_simpleCopyAssignmentOperatorUsage::description (String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@simpleCopyAssignmentOperatorUsage]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_simpleCopyAssignmentOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_simpleCopyAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_simpleCopyAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @simpleCopyAssignmentOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ("simpleCopyAssignmentOperatorUsage",
                                                                                      & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleCopyAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleCopyAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleCopyAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  const GGS_simpleCopyAssignmentOperatorUsage * p = (const GGS_simpleCopyAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleCopyAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleCopyAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_simpleCopyAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_simpleCopyAssignmentOperatorUsage_2E_weak::GGS_simpleCopyAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak & GGS_simpleCopyAssignmentOperatorUsage_2E_weak::operator = (const GGS_simpleCopyAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak::GGS_simpleCopyAssignmentOperatorUsage_2E_weak (const GGS_simpleCopyAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak GGS_simpleCopyAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_simpleCopyAssignmentOperatorUsage * p = (cPtr_simpleCopyAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_simpleCopyAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage_2E_weak::bang_simpleCopyAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
      result = GGS_simpleCopyAssignmentOperatorUsage ((cPtr_simpleCopyAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @simpleCopyAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2E_weak ("simpleCopyAssignmentOperatorUsage.weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleCopyAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleCopyAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleCopyAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak GGS_simpleCopyAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage_2E_weak result ;
  const GGS_simpleCopyAssignmentOperatorUsage_2E_weak * p = (const GGS_simpleCopyAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleCopyAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum llvmGenerationInstructionElement
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement::GGS_llvmGenerationInstructionElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElement::class_func_string (const GGS_string & inAssociatedValue0
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmGenerationInstructionElement_2E_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElement::class_func_symbol (const GGS_lstring & inAssociatedValue0
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_symbol ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmGenerationInstructionElement_2E_symbol (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElement::class_func_type (const GGS_lstring & inAssociatedValue0
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_type ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmGenerationInstructionElement_2E_type (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::method_extractString (GGS_string & outAssociatedValue_string,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_string.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmGenerationInstructionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_string = ptr->mProperty_string ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::method_extractSymbol (GGS_lstring & outAssociatedValue_name,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_symbol) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.symbol invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmGenerationInstructionElement_2E_symbol *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::method_extractType (GGS_lstring & outAssociatedValue_name,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_type) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmGenerationInstructionElement_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string_3F_ GGS_llvmGenerationInstructionElement::getter_getString (UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElement_2E_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmGenerationInstructionElement_2E_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::getAssociatedValuesFor_string (GGS_string & out_string) const {
  const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
  out_string = ptr->mProperty_string ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_symbol_3F_ GGS_llvmGenerationInstructionElement::getter_getSymbol (UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElement_2E_symbol_3F_ result ;
  if (mEnum == Enumeration::enum_symbol) {
    const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_symbol *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmGenerationInstructionElement_2E_symbol (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::getAssociatedValuesFor_symbol (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_symbol *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_type_3F_ GGS_llvmGenerationInstructionElement::getter_getType (UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElement_2E_type_3F_ result ;
  if (mEnum == Enumeration::enum_type) {
    const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmGenerationInstructionElement_2E_type (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::getAssociatedValuesFor_type (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_llvmGenerationInstructionElement_2E_type *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmGenerationInstructionElement [4] = {
  "(not built)",
  "string",
  "symbol",
  "type"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmGenerationInstructionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmGenerationInstructionElement::getter_isSymbol (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_symbol == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmGenerationInstructionElement::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @llvmGenerationInstructionElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmGenerationInstructionElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionElement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ("llvmGenerationInstructionElement",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElement::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement result ;
  const GGS_llvmGenerationInstructionElement * p = (const GGS_llvmGenerationInstructionElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@llvmGenerationInstructionElementList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmGenerationInstructionElementList : public cCollectionElement {
  public: GGS_llvmGenerationInstructionElementList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElement & in_mElement
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionElementList::cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElement & in_mElement
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionElementList::cCollectionElement_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_llvmGenerationInstructionElementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_llvmGenerationInstructionElementList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_llvmGenerationInstructionElementList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @llvmGenerationInstructionElementList
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList::GGS_llvmGenerationInstructionElementList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList::GGS_llvmGenerationInstructionElementList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    const GGS_llvmGenerationInstructionElementList_2E_element element (p->mObject.mProperty_mElement) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_llvmGenerationInstructionElement & in_mElement
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionElementList * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_llvmGenerationInstructionElementList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_llvmGenerationInstructionElementList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mElement:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mElement.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::plusPlusAssignOperation (const GGS_llvmGenerationInstructionElementList_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::class_func_listWithValue (const GGS_llvmGenerationInstructionElement & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionElementList_2E_element element (inOperand0) ;
  GGS_llvmGenerationInstructionElementList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::addAssignOperation (const GGS_llvmGenerationInstructionElement & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionElementList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_append (const GGS_llvmGenerationInstructionElement inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionElementList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_insertAtIndex (const GGS_llvmGenerationInstructionElement inOperand0,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionElementList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_removeAtIndex (GGS_llvmGenerationInstructionElement & outOperand0,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mElement ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_popFirst (GGS_llvmGenerationInstructionElement & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_popLast (GGS_llvmGenerationInstructionElement & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::method_first (GGS_llvmGenerationInstructionElement & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::method_last (GGS_llvmGenerationInstructionElement & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::add_operation (const GGS_llvmGenerationInstructionElementList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::plusAssignOperation (const GGS_llvmGenerationInstructionElementList inList,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList::setter_setMElementAtIndex (GGS_llvmGenerationInstructionElement inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mElement = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_llvmGenerationInstructionElement GGS_llvmGenerationInstructionElementList::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionElement result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mElement ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @llvmGenerationInstructionElementList
//--------------------------------------------------------------------------------------------------

DownEnumerator_llvmGenerationInstructionElementList::DownEnumerator_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element DownEnumerator_llvmGenerationInstructionElementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement DownEnumerator_llvmGenerationInstructionElementList::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @llvmGenerationInstructionElementList
//--------------------------------------------------------------------------------------------------

UpEnumerator_llvmGenerationInstructionElementList::UpEnumerator_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element UpEnumerator_llvmGenerationInstructionElementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement UpEnumerator_llvmGenerationInstructionElementList::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionElementList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ("llvmGenerationInstructionElementList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElementList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElementList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstructionElementList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList result ;
  const GGS_llvmGenerationInstructionElementList * p = (const GGS_llvmGenerationInstructionElementList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractLLVMInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLLVMInstruction::objectCompare (const GGS_abstractLLVMInstruction & inOperand) const {
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

GGS_abstractLLVMInstruction::GGS_abstractLLVMInstruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractLLVMInstruction::
abstractLLVMInstruction_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction::GGS_abstractLLVMInstruction (const cPtr_abstractLLVMInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLLVMInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLLVMInstruction class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractLLVMInstruction::cPtr_abstractLLVMInstruction (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractLLVMInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction ("abstractLLVMInstruction",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLLVMInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLLVMInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLLVMInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLLVMInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction GGS_abstractLLVMInstruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLLVMInstruction result ;
  const GGS_abstractLLVMInstruction * p = (const GGS_abstractLLVMInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLLVMInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLLVMInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLLVMInstruction_2E_weak::objectCompare (const GGS_abstractLLVMInstruction_2E_weak & inOperand) const {
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

GGS_abstractLLVMInstruction_2E_weak::GGS_abstractLLVMInstruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction_2E_weak & GGS_abstractLLVMInstruction_2E_weak::operator = (const GGS_abstractLLVMInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction_2E_weak::GGS_abstractLLVMInstruction_2E_weak (const GGS_abstractLLVMInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction_2E_weak GGS_abstractLLVMInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractLLVMInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction GGS_abstractLLVMInstruction_2E_weak::unwrappedValue (void) const {
  GGS_abstractLLVMInstruction result ;
  if (isValid ()) {
    const cPtr_abstractLLVMInstruction * p = (cPtr_abstractLLVMInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractLLVMInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction GGS_abstractLLVMInstruction_2E_weak::bang_abstractLLVMInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractLLVMInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLLVMInstruction) ;
      result = GGS_abstractLLVMInstruction ((cPtr_abstractLLVMInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractLLVMInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak ("abstractLLVMInstruction.weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLLVMInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLLVMInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLLVMInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction_2E_weak GGS_abstractLLVMInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLLVMInstruction_2E_weak result ;
  const GGS_abstractLLVMInstruction_2E_weak * p = (const GGS_abstractLLVMInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLLVMInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLLVMInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmGenerationInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmGenerationInstruction::objectCompare (const GGS_llvmGenerationInstruction & inOperand) const {
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

GGS_llvmGenerationInstruction::GGS_llvmGenerationInstruction (void) :
GGS_abstractLLVMInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction::
init_21_ (const GGS_llvmGenerationInstructionElementList & in_mGenerationList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_llvmGenerationInstruction * object = nullptr ;
  macroMyNew (object, cPtr_llvmGenerationInstruction (inCompiler COMMA_THERE)) ;
  object->llvmGenerationInstruction_init_21_ (in_mGenerationList, inCompiler) ;
  const GGS_llvmGenerationInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::
llvmGenerationInstruction_init_21_ (const GGS_llvmGenerationInstructionElementList & in_mGenerationList,
                                    Compiler * /* inCompiler */) {
  mProperty_mGenerationList = in_mGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction::GGS_llvmGenerationInstruction (const cPtr_llvmGenerationInstruction * inSourcePtr) :
GGS_abstractLLVMInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmGenerationInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction::class_func_new (const GGS_llvmGenerationInstructionElementList & in_mGenerationList,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmGenerationInstruction (in_mGenerationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList GGS_llvmGenerationInstruction::readProperty_mGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionElementList () ;
  }else{
    cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
    return p->mProperty_mGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstruction::setProperty_mGenerationList (const GGS_llvmGenerationInstructionElementList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
    p->mProperty_mGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmGenerationInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (const GGS_llvmGenerationInstructionElementList & in_mGenerationList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mGenerationList () {
  mProperty_mGenerationList = in_mGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_llvmGenerationInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

void cPtr_llvmGenerationInstruction::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmGenerationInstruction:") ;
  mProperty_mGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmGenerationInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmGenerationInstruction (mProperty_mGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmGenerationInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mGenerationList.printNonNullClassInstanceProperties ("mGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction ("llvmGenerationInstruction",
                                                                              & kTypeDescriptor_GALGAS_abstractLLVMInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstruction result ;
  const GGS_llvmGenerationInstruction * p = (const GGS_llvmGenerationInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmGenerationInstruction_2E_weak::objectCompare (const GGS_llvmGenerationInstruction_2E_weak & inOperand) const {
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

GGS_llvmGenerationInstruction_2E_weak::GGS_llvmGenerationInstruction_2E_weak (void) :
GGS_abstractLLVMInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction_2E_weak & GGS_llvmGenerationInstruction_2E_weak::operator = (const GGS_llvmGenerationInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction_2E_weak::GGS_llvmGenerationInstruction_2E_weak (const GGS_llvmGenerationInstruction & inSource) :
GGS_abstractLLVMInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction_2E_weak GGS_llvmGenerationInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmGenerationInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction_2E_weak::unwrappedValue (void) const {
  GGS_llvmGenerationInstruction result ;
  if (isValid ()) {
    const cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmGenerationInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction GGS_llvmGenerationInstruction_2E_weak::bang_llvmGenerationInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenerationInstruction) ;
      result = GGS_llvmGenerationInstruction ((cPtr_llvmGenerationInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction_2E_weak ("llvmGenerationInstruction.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstruction_2E_weak GGS_llvmGenerationInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstruction_2E_weak result ;
  const GGS_llvmGenerationInstruction_2E_weak * p = (const GGS_llvmGenerationInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmVarInstruction_2E_weak::objectCompare (const GGS_llvmVarInstruction_2E_weak & inOperand) const {
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

GGS_llvmVarInstruction_2E_weak::GGS_llvmVarInstruction_2E_weak (void) :
GGS_abstractLLVMInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction_2E_weak & GGS_llvmVarInstruction_2E_weak::operator = (const GGS_llvmVarInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction_2E_weak::GGS_llvmVarInstruction_2E_weak (const GGS_llvmVarInstruction & inSource) :
GGS_abstractLLVMInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction_2E_weak GGS_llvmVarInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmVarInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction GGS_llvmVarInstruction_2E_weak::unwrappedValue (void) const {
  GGS_llvmVarInstruction result ;
  if (isValid ()) {
    const cPtr_llvmVarInstruction * p = (cPtr_llvmVarInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmVarInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction GGS_llvmVarInstruction_2E_weak::bang_llvmVarInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmVarInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmVarInstruction) ;
      result = GGS_llvmVarInstruction ((cPtr_llvmVarInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmVarInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmVarInstruction_2E_weak ("llvmVarInstruction.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmVarInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmVarInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmVarInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmVarInstruction_2E_weak GGS_llvmVarInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_llvmVarInstruction_2E_weak result ;
  const GGS_llvmVarInstruction_2E_weak * p = (const GGS_llvmVarInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmVarInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmVarInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList appendReturn'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendReturn (GGS_llvmGenerationInstructionList & ioObject,
                                   const GGS_lstring constinArgument_inReturnType,
                                   const GGS_lstring constinArgument_inReturnValue,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList temp_0 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 43)) ;
  GGS_llvmGenerationInstructionElementList var_elements_1804 = temp_0 ;
  var_elements_1804.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string ("ret ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44)) ;
  var_elements_1804.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (constinArgument_inReturnType  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45)) ;
  var_elements_1804.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46)) ;
  var_elements_1804.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (constinArgument_inReturnValue  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47)) ;
  ioObject.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_elements_1804, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 48)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkInstructionList (const GGS_llvmGenerationInstructionList inObject,
                                           const GGS_ctCheckMap constinArgument_inMap,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctCheckMap var_currentMap_4221 = constinArgument_inMap ;
  const GGS_llvmGenerationInstructionList temp_0 = inObject ;
  UpEnumerator_llvmGenerationInstructionList enumerator_4247 (temp_0) ;
  while (enumerator_4247.hasCurrentObject ()) {
    callExtensionMethod_checkInstructionList ((cPtr_abstractLLVMInstruction *) enumerator_4247.current_mInstruction (HERE).ptr (), var_currentMap_4221, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 109)) ;
    enumerator_4247.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkInstructionList (cPtr_abstractLLVMInstruction * inObject,
                                               GGS_ctCheckMap & io_ioMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLLVMInstruction) ;
    inObject->method_checkInstructionList (io_ioMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @assignmentGenerationVarMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap::GGS_assignmentGenerationVarMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap::~ GGS_assignmentGenerationVarMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap::GGS_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap & GGS_assignmentGenerationVarMap::operator = (const GGS_assignmentGenerationVarMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_assignmentGenerationVarMap::getter_hasKey (const GGS_string & inKey
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_assignmentGenerationVarMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                               const GGS_uint & inLevel
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignmentGenerationVarMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignmentGenerationVarMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_assignmentGenerationVarMap::getter_locationForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_assignmentGenerationVarMap::getter_keyList (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentGenerationVarMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_assignmentGenerationVarMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::performInsert (const GGS_assignmentGenerationVarMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_assignmentGenerationVarMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>
GGS_assignmentGenerationVarMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_assignmentGenerationVarMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>>
GGS_assignmentGenerationVarMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_assignmentGenerationVarMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_ GGS_assignmentGenerationVarMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_assignmentGenerationVarMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_assignmentGenerationVarMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_assignmentGenerationVarMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mValue = info->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::class_func_mapWithMapToOverride (const GGS_assignmentGenerationVarMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_assignmentGenerationVarMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_assignmentGenerationVarMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::setter_insertKey (GGS_lstring inLKey,
                                                       GGS_string inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_assignmentGenerationVarMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::method_searchKey (GGS_lstring inLKey,
                                                       GGS_string & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentGenerationVarMap::getter_mValueForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::setter_setMValueForKey (GGS_string inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_assignmentGenerationVarMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_assignmentGenerationVarMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mValue:") ;
    inArray (i COMMA_HERE)->mProperty_mValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> array = sortedInfoArray () ;
    GGS_assignmentGenerationVarMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_assignmentGenerationVarMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_assignmentGenerationVarMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @assignmentGenerationVarMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_assignmentGenerationVarMap::DownEnumerator_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element DownEnumerator_assignmentGenerationVarMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_assignmentGenerationVarMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_assignmentGenerationVarMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @assignmentGenerationVarMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_assignmentGenerationVarMap::UpEnumerator_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element UpEnumerator_assignmentGenerationVarMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_assignmentGenerationVarMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_assignmentGenerationVarMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}


//--------------------------------------------------------------------------------------------------
//     @assignmentGenerationVarMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap ("assignmentGenerationVarMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentGenerationVarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentGenerationVarMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentGenerationVarMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap GGS_assignmentGenerationVarMap::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap result ;
  const GGS_assignmentGenerationVarMap * p = (const GGS_assignmentGenerationVarMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentGenerationVarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateIRCode (const GGS_llvmGenerationInstructionList inObject,
                                     const GGS_assignmentGenerationVarMap constinArgument_inVarMap,
                                     const GGS_assignmentGenerationVarMap constinArgument_inTypeMap,
                                     GGS_stringlist & ioArgument_ioInstructionAsStringListIR,
                                     GGS_uint & ioArgument_ioTemporaryIndex,
                                     GGS_allocaList & ioArgument_ioAllocaList,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap var_varMap_5967 = constinArgument_inVarMap ;
  GGS_assignmentGenerationVarMap var_typeMap_5991 = constinArgument_inTypeMap ;
  const GGS_llvmGenerationInstructionList temp_0 = inObject ;
  UpEnumerator_llvmGenerationInstructionList enumerator_6018 (temp_0) ;
  while (enumerator_6018.hasCurrentObject ()) {
    callExtensionMethod_generateIRCode ((cPtr_abstractLLVMInstruction *) enumerator_6018.current_mInstruction (HERE).ptr (), var_varMap_5967, var_typeMap_5991, ioArgument_ioInstructionAsStringListIR, ioArgument_ioTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 159)) ;
    enumerator_6018.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateIRCode (cPtr_abstractLLVMInstruction * inObject,
                                         GGS_assignmentGenerationVarMap & io_ioVarMap,
                                         GGS_assignmentGenerationVarMap & io_ioTypeMap,
                                         GGS_stringlist & io_ioInstructionAsStringListIR,
                                         GGS_uint & io_ioTemporaryIndex,
                                         GGS_allocaList & io_ioAllocaList,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLLVMInstruction) ;
    inObject->method_generateIRCode (io_ioVarMap, io_ioTypeMap, io_ioInstructionAsStringListIR, io_ioTemporaryIndex, io_ioAllocaList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (const GGS_declarationListAST_2E_element & inSource) :
mProperty_mDeclaration (inSource.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element & GGS_declarationListAST_2E_element::operator = (const GGS_declarationListAST_2E_element & inSource) {
  mProperty_mDeclaration = inSource.mProperty_mDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::init_21_ (const GGS_abstractDeclarationAST & in_mDeclaration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (const GGS_abstractDeclarationAST & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::class_func_new (const GGS_abstractDeclarationAST & in_mDeclaration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declarationListAST_2E_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationListAST_2E_element ("declarationListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  const GGS_declarationListAST_2E_element * p = (const GGS_declarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element::GGS_checkTargetListAST_2E_element (void) :
mProperty_mTargetConstructLocation (),
mProperty_mAcceptedTargetList () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element::GGS_checkTargetListAST_2E_element (const GGS_checkTargetListAST_2E_element & inSource) :
mProperty_mTargetConstructLocation (inSource.mProperty_mTargetConstructLocation),
mProperty_mAcceptedTargetList (inSource.mProperty_mAcceptedTargetList) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element & GGS_checkTargetListAST_2E_element::operator = (const GGS_checkTargetListAST_2E_element & inSource) {
  mProperty_mTargetConstructLocation = inSource.mProperty_mTargetConstructLocation ;
  mProperty_mAcceptedTargetList = inSource.mProperty_mAcceptedTargetList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_checkTargetListAST_2E_element GGS_checkTargetListAST_2E_element::init_21__21_ (const GGS_location & in_mTargetConstructLocation,
                                                                                   const GGS_lstringlist & in_mAcceptedTargetList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_checkTargetListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetConstructLocation = in_mTargetConstructLocation ;
  result.mProperty_mAcceptedTargetList = in_mAcceptedTargetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element::GGS_checkTargetListAST_2E_element (const GGS_location & inOperand0,
                                                                      const GGS_lstringlist & inOperand1) :
mProperty_mTargetConstructLocation (inOperand0),
mProperty_mAcceptedTargetList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element GGS_checkTargetListAST_2E_element::class_func_new (const GGS_location & in_mTargetConstructLocation,
                                                                                     const GGS_lstringlist & in_mAcceptedTargetList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_checkTargetListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetConstructLocation = in_mTargetConstructLocation ;
  result.mProperty_mAcceptedTargetList = in_mAcceptedTargetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_checkTargetListAST_2E_element::isValid (void) const {
  return mProperty_mTargetConstructLocation.isValid () && mProperty_mAcceptedTargetList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST_2E_element::drop (void) {
  mProperty_mTargetConstructLocation.drop () ;
  mProperty_mAcceptedTargetList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @checkTargetListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetConstructLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAcceptedTargetList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @checkTargetListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkTargetListAST_2E_element ("checkTargetListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_checkTargetListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkTargetListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkTargetListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element GGS_checkTargetListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_checkTargetListAST_2E_element result ;
  const GGS_checkTargetListAST_2E_element * p = (const GGS_checkTargetListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkTargetListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element::GGS_scopeStack_2E_element (void) :
mProperty_mScopeKind (),
mProperty_mFirstBranch (),
mProperty_mInitialStateMap (),
mProperty_mReferenceStateMap (),
mProperty_mObjectList () {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element::GGS_scopeStack_2E_element (const GGS_scopeStack_2E_element & inSource) :
mProperty_mScopeKind (inSource.mProperty_mScopeKind),
mProperty_mFirstBranch (inSource.mProperty_mFirstBranch),
mProperty_mInitialStateMap (inSource.mProperty_mInitialStateMap),
mProperty_mReferenceStateMap (inSource.mProperty_mReferenceStateMap),
mProperty_mObjectList (inSource.mProperty_mObjectList) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element & GGS_scopeStack_2E_element::operator = (const GGS_scopeStack_2E_element & inSource) {
  mProperty_mScopeKind = inSource.mProperty_mScopeKind ;
  mProperty_mFirstBranch = inSource.mProperty_mFirstBranch ;
  mProperty_mInitialStateMap = inSource.mProperty_mInitialStateMap ;
  mProperty_mReferenceStateMap = inSource.mProperty_mReferenceStateMap ;
  mProperty_mObjectList = inSource.mProperty_mObjectList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_scopeStack_2E_element GGS_scopeStack_2E_element::init_21__21__21__21__21_ (const GGS_scopeKind & in_mScopeKind,
                                                                               const GGS_bool & in_mFirstBranch,
                                                                               const GGS_referenceStateMap & in_mInitialStateMap,
                                                                               const GGS_referenceStateMap & in_mReferenceStateMap,
                                                                               const GGS_lstringlist & in_mObjectList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeStack_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScopeKind = in_mScopeKind ;
  result.mProperty_mFirstBranch = in_mFirstBranch ;
  result.mProperty_mInitialStateMap = in_mInitialStateMap ;
  result.mProperty_mReferenceStateMap = in_mReferenceStateMap ;
  result.mProperty_mObjectList = in_mObjectList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element::GGS_scopeStack_2E_element (const GGS_scopeKind & inOperand0,
                                                      const GGS_bool & inOperand1,
                                                      const GGS_referenceStateMap & inOperand2,
                                                      const GGS_referenceStateMap & inOperand3,
                                                      const GGS_lstringlist & inOperand4) :
mProperty_mScopeKind (inOperand0),
mProperty_mFirstBranch (inOperand1),
mProperty_mInitialStateMap (inOperand2),
mProperty_mReferenceStateMap (inOperand3),
mProperty_mObjectList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element GGS_scopeStack_2E_element::class_func_new (const GGS_scopeKind & in_mScopeKind,
                                                                     const GGS_bool & in_mFirstBranch,
                                                                     const GGS_referenceStateMap & in_mInitialStateMap,
                                                                     const GGS_referenceStateMap & in_mReferenceStateMap,
                                                                     const GGS_lstringlist & in_mObjectList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeStack_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScopeKind = in_mScopeKind ;
  result.mProperty_mFirstBranch = in_mFirstBranch ;
  result.mProperty_mInitialStateMap = in_mInitialStateMap ;
  result.mProperty_mReferenceStateMap = in_mReferenceStateMap ;
  result.mProperty_mObjectList = in_mObjectList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_scopeStack_2E_element::isValid (void) const {
  return mProperty_mScopeKind.isValid () && mProperty_mFirstBranch.isValid () && mProperty_mInitialStateMap.isValid () && mProperty_mReferenceStateMap.isValid () && mProperty_mObjectList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack_2E_element::drop (void) {
  mProperty_mScopeKind.drop () ;
  mProperty_mFirstBranch.drop () ;
  mProperty_mInitialStateMap.drop () ;
  mProperty_mReferenceStateMap.drop () ;
  mProperty_mObjectList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @scopeStack.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mScopeKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFirstBranch.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialStateMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReferenceStateMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mObjectList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @scopeStack.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeStack_2E_element ("scopeStack.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_scopeStack_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeStack_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeStack_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element GGS_scopeStack_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_scopeStack_2E_element result ;
  const GGS_scopeStack_2E_element * p = (const GGS_scopeStack_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeStack_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant::GGS_valuedObject_2E_globalConstant (void) :
mProperty_objectIR () {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant::GGS_valuedObject_2E_globalConstant (const GGS_valuedObject_2E_globalConstant & inSource) :
mProperty_objectIR (inSource.mProperty_objectIR) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant & GGS_valuedObject_2E_globalConstant::operator = (const GGS_valuedObject_2E_globalConstant & inSource) {
  mProperty_objectIR = inSource.mProperty_objectIR ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant GGS_valuedObject_2E_globalConstant::init_21_ (const GGS_objectIR & in_objectIR,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_objectIR = in_objectIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant::GGS_valuedObject_2E_globalConstant (const GGS_objectIR & inOperand0) :
mProperty_objectIR (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant GGS_valuedObject_2E_globalConstant::class_func_new (const GGS_objectIR & in_objectIR,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_objectIR = in_objectIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_globalConstant::isValid (void) const {
  return mProperty_objectIR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant::drop (void) {
  mProperty_objectIR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @valuedObject.globalConstant:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_objectIR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @valuedObject.globalConstant generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant ("valuedObject.globalConstant",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_valuedObject_2E_globalConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_globalConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_globalConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant GGS_valuedObject_2E_globalConstant::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalConstant result ;
  const GGS_valuedObject_2E_globalConstant * p = (const GGS_valuedObject_2E_globalConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_globalConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.globalConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @valuedObject_2E_globalConstant_3F_
//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_::GGS_valuedObject_2E_globalConstant_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_::GGS_valuedObject_2E_globalConstant_3F_ (const GGS_valuedObject_2E_globalConstant & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_ GGS_valuedObject_2E_globalConstant_3F_::init_nil (void) {
  GGS_valuedObject_2E_globalConstant_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_globalConstant_3F_::isValid (void) const {
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

bool GGS_valuedObject_2E_globalConstant_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_valuedObject_2E_globalConstant () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalConstant_3F_::description (String & ioString,
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
//     @valuedObject.globalConstant? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant_3F_ ("valuedObject.globalConstant?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_valuedObject_2E_globalConstant_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_globalConstant_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_globalConstant_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_ GGS_valuedObject_2E_globalConstant_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalConstant_3F_ result ;
  const GGS_valuedObject_2E_globalConstant_3F_ * p = (const GGS_valuedObject_2E_globalConstant_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_globalConstant_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.globalConstant?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_typeKind_2E_enumeration::GGS_typeKind_2E_enumeration (void) :
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration::GGS_typeKind_2E_enumeration (const GGS_typeKind_2E_enumeration & inSource) :
mProperty_bitCount (inSource.mProperty_bitCount) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration & GGS_typeKind_2E_enumeration::operator = (const GGS_typeKind_2E_enumeration & inSource) {
  mProperty_bitCount = inSource.mProperty_bitCount ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_enumeration GGS_typeKind_2E_enumeration::init_21_ (const GGS_uint & in_bitCount,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_enumeration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration::GGS_typeKind_2E_enumeration (const GGS_uint & inOperand0) :
mProperty_bitCount (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration GGS_typeKind_2E_enumeration::class_func_new (const GGS_uint & in_bitCount,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_enumeration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_enumeration::objectCompare (const GGS_typeKind_2E_enumeration & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitCount.objectCompare (inOperand.mProperty_bitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumeration::isValid (void) const {
  return mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration::drop (void) {
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.enumeration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.enumeration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumeration ("typeKind.enumeration",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_enumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_enumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_enumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_enumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration GGS_typeKind_2E_enumeration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_enumeration result ;
  const GGS_typeKind_2E_enumeration * p = (const GGS_typeKind_2E_enumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_enumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.enumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_enumeration_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_::GGS_typeKind_2E_enumeration_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_::GGS_typeKind_2E_enumeration_3F_ (const GGS_typeKind_2E_enumeration & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_ GGS_typeKind_2E_enumeration_3F_::init_nil (void) {
  GGS_typeKind_2E_enumeration_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumeration_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_enumeration_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumeration_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_enumeration () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_enumeration_3F_::objectCompare (const GGS_typeKind_2E_enumeration_3F_ & inOperand) const {
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

void GGS_typeKind_2E_enumeration_3F_::description (String & ioString,
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
//     @typeKind.enumeration? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumeration_3F_ ("typeKind.enumeration?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_enumeration_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_enumeration_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_enumeration_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_enumeration_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_ GGS_typeKind_2E_enumeration_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_enumeration_3F_ result ;
  const GGS_typeKind_2E_enumeration_3F_ * p = (const GGS_typeKind_2E_enumeration_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_enumeration_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.enumeration?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure::GGS_typeKind_2E_structure (void) :
mProperty_propertyList () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure::GGS_typeKind_2E_structure (const GGS_typeKind_2E_structure & inSource) :
mProperty_propertyList (inSource.mProperty_propertyList) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure & GGS_typeKind_2E_structure::operator = (const GGS_typeKind_2E_structure & inSource) {
  mProperty_propertyList = inSource.mProperty_propertyList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_structure GGS_typeKind_2E_structure::init_21_ (const GGS_propertyList & in_propertyList,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyList = in_propertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure::GGS_typeKind_2E_structure (const GGS_propertyList & inOperand0) :
mProperty_propertyList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure GGS_typeKind_2E_structure::class_func_new (const GGS_propertyList & in_propertyList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyList = in_propertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_structure::objectCompare (const GGS_typeKind_2E_structure & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_propertyList.objectCompare (inOperand.mProperty_propertyList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_structure::isValid (void) const {
  return mProperty_propertyList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure::drop (void) {
  mProperty_propertyList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.structure:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.structure generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_structure ("typeKind.structure",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_structure::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_structure ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_structure::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_structure (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure GGS_typeKind_2E_structure::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_structure result ;
  const GGS_typeKind_2E_structure * p = (const GGS_typeKind_2E_structure *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_structure *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.structure", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_structure_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_::GGS_typeKind_2E_structure_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_::GGS_typeKind_2E_structure_3F_ (const GGS_typeKind_2E_structure & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_ GGS_typeKind_2E_structure_3F_::init_nil (void) {
  GGS_typeKind_2E_structure_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_structure_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_structure_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_structure_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_structure () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_structure_3F_::objectCompare (const GGS_typeKind_2E_structure_3F_ & inOperand) const {
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

void GGS_typeKind_2E_structure_3F_::description (String & ioString,
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
//     @typeKind.structure? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_structure_3F_ ("typeKind.structure?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_structure_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_structure_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_structure_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_structure_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_ GGS_typeKind_2E_structure_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_structure_3F_ result ;
  const GGS_typeKind_2E_structure_3F_ * p = (const GGS_typeKind_2E_structure_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_structure_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.structure?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer::GGS_typeKind_2E_integer (void) :
mProperty_min (),
mProperty_max (),
mProperty_unsigned (),
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer::GGS_typeKind_2E_integer (const GGS_typeKind_2E_integer & inSource) :
mProperty_min (inSource.mProperty_min),
mProperty_max (inSource.mProperty_max),
mProperty_unsigned (inSource.mProperty_unsigned),
mProperty_bitCount (inSource.mProperty_bitCount) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer & GGS_typeKind_2E_integer::operator = (const GGS_typeKind_2E_integer & inSource) {
  mProperty_min = inSource.mProperty_min ;
  mProperty_max = inSource.mProperty_max ;
  mProperty_unsigned = inSource.mProperty_unsigned ;
  mProperty_bitCount = inSource.mProperty_bitCount ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_integer GGS_typeKind_2E_integer::init_21__21__21__21_ (const GGS_bigint & in_min,
                                                                       const GGS_bigint & in_max,
                                                                       const GGS_bool & in_unsigned,
                                                                       const GGS_uint & in_bitCount,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_integer result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_min = in_min ;
  result.mProperty_max = in_max ;
  result.mProperty_unsigned = in_unsigned ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer::GGS_typeKind_2E_integer (const GGS_bigint & inOperand0,
                                                  const GGS_bigint & inOperand1,
                                                  const GGS_bool & inOperand2,
                                                  const GGS_uint & inOperand3) :
mProperty_min (inOperand0),
mProperty_max (inOperand1),
mProperty_unsigned (inOperand2),
mProperty_bitCount (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer GGS_typeKind_2E_integer::class_func_new (const GGS_bigint & in_min,
                                                                 const GGS_bigint & in_max,
                                                                 const GGS_bool & in_unsigned,
                                                                 const GGS_uint & in_bitCount,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_integer result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_min = in_min ;
  result.mProperty_max = in_max ;
  result.mProperty_unsigned = in_unsigned ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_integer::objectCompare (const GGS_typeKind_2E_integer & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_min.objectCompare (inOperand.mProperty_min) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_max.objectCompare (inOperand.mProperty_max) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_unsigned.objectCompare (inOperand.mProperty_unsigned) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitCount.objectCompare (inOperand.mProperty_bitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_integer::isValid (void) const {
  return mProperty_min.isValid () && mProperty_max.isValid () && mProperty_unsigned.isValid () && mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer::drop (void) {
  mProperty_min.drop () ;
  mProperty_max.drop () ;
  mProperty_unsigned.drop () ;
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.integer:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_min.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_max.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_unsigned.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_bitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.integer generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_integer ("typeKind.integer",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_integer::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_integer ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_integer::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_integer (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer GGS_typeKind_2E_integer::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_integer result ;
  const GGS_typeKind_2E_integer * p = (const GGS_typeKind_2E_integer *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_integer *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.integer", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_integer_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_::GGS_typeKind_2E_integer_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_::GGS_typeKind_2E_integer_3F_ (const GGS_typeKind_2E_integer & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_ GGS_typeKind_2E_integer_3F_::init_nil (void) {
  GGS_typeKind_2E_integer_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_integer_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_integer_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_integer_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_integer () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_integer_3F_::objectCompare (const GGS_typeKind_2E_integer_3F_ & inOperand) const {
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

void GGS_typeKind_2E_integer_3F_::description (String & ioString,
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
//     @typeKind.integer? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_integer_3F_ ("typeKind.integer?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_integer_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_integer_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_integer_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_integer_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_ GGS_typeKind_2E_integer_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_integer_3F_ result ;
  const GGS_typeKind_2E_integer_3F_ * p = (const GGS_typeKind_2E_integer_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_integer_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.integer?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType::GGS_typeKind_2E_llvmType (void) :
mProperty_bitSize () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType::GGS_typeKind_2E_llvmType (const GGS_typeKind_2E_llvmType & inSource) :
mProperty_bitSize (inSource.mProperty_bitSize) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType & GGS_typeKind_2E_llvmType::operator = (const GGS_typeKind_2E_llvmType & inSource) {
  mProperty_bitSize = inSource.mProperty_bitSize ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_llvmType GGS_typeKind_2E_llvmType::init_21_ (const GGS_bigint & in_bitSize,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_llvmType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitSize = in_bitSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType::GGS_typeKind_2E_llvmType (const GGS_bigint & inOperand0) :
mProperty_bitSize (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType GGS_typeKind_2E_llvmType::class_func_new (const GGS_bigint & in_bitSize,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_llvmType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitSize = in_bitSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_llvmType::objectCompare (const GGS_typeKind_2E_llvmType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitSize.objectCompare (inOperand.mProperty_bitSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_llvmType::isValid (void) const {
  return mProperty_bitSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType::drop (void) {
  mProperty_bitSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.llvmType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitSize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.llvmType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_llvmType ("typeKind.llvmType",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_llvmType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_llvmType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_llvmType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_llvmType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType GGS_typeKind_2E_llvmType::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_llvmType result ;
  const GGS_typeKind_2E_llvmType * p = (const GGS_typeKind_2E_llvmType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_llvmType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.llvmType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_llvmType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_::GGS_typeKind_2E_llvmType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_::GGS_typeKind_2E_llvmType_3F_ (const GGS_typeKind_2E_llvmType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_ GGS_typeKind_2E_llvmType_3F_::init_nil (void) {
  GGS_typeKind_2E_llvmType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_llvmType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_llvmType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_llvmType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_llvmType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_llvmType_3F_::objectCompare (const GGS_typeKind_2E_llvmType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_llvmType_3F_::description (String & ioString,
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
//     @typeKind.llvmType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_llvmType_3F_ ("typeKind.llvmType?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_llvmType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_llvmType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_llvmType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_llvmType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_ GGS_typeKind_2E_llvmType_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_llvmType_3F_ result ;
  const GGS_typeKind_2E_llvmType_3F_ * p = (const GGS_typeKind_2E_llvmType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_llvmType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.llvmType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic::GGS_typeKind_2E_generic (void) :
mProperty_parameters (),
mProperty_whereClause (),
mProperty_llvmNativeTypeNameExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic::GGS_typeKind_2E_generic (const GGS_typeKind_2E_generic & inSource) :
mProperty_parameters (inSource.mProperty_parameters),
mProperty_whereClause (inSource.mProperty_whereClause),
mProperty_llvmNativeTypeNameExpression (inSource.mProperty_llvmNativeTypeNameExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic & GGS_typeKind_2E_generic::operator = (const GGS_typeKind_2E_generic & inSource) {
  mProperty_parameters = inSource.mProperty_parameters ;
  mProperty_whereClause = inSource.mProperty_whereClause ;
  mProperty_llvmNativeTypeNameExpression = inSource.mProperty_llvmNativeTypeNameExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_generic GGS_typeKind_2E_generic::init_21__21__21_ (const GGS_genericFormalParameterList & in_parameters,
                                                                   const GGS_ctExpressionAST & in_whereClause,
                                                                   const GGS_llvmStringDefinition & in_llvmNativeTypeNameExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_generic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_parameters = in_parameters ;
  result.mProperty_whereClause = in_whereClause ;
  result.mProperty_llvmNativeTypeNameExpression = in_llvmNativeTypeNameExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic::GGS_typeKind_2E_generic (const GGS_genericFormalParameterList & inOperand0,
                                                  const GGS_ctExpressionAST & inOperand1,
                                                  const GGS_llvmStringDefinition & inOperand2) :
mProperty_parameters (inOperand0),
mProperty_whereClause (inOperand1),
mProperty_llvmNativeTypeNameExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic GGS_typeKind_2E_generic::class_func_new (const GGS_genericFormalParameterList & in_parameters,
                                                                 const GGS_ctExpressionAST & in_whereClause,
                                                                 const GGS_llvmStringDefinition & in_llvmNativeTypeNameExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_generic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_parameters = in_parameters ;
  result.mProperty_whereClause = in_whereClause ;
  result.mProperty_llvmNativeTypeNameExpression = in_llvmNativeTypeNameExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_generic::objectCompare (const GGS_typeKind_2E_generic & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_parameters.objectCompare (inOperand.mProperty_parameters) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_whereClause.objectCompare (inOperand.mProperty_whereClause) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_llvmNativeTypeNameExpression.objectCompare (inOperand.mProperty_llvmNativeTypeNameExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_generic::isValid (void) const {
  return mProperty_parameters.isValid () && mProperty_whereClause.isValid () && mProperty_llvmNativeTypeNameExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic::drop (void) {
  mProperty_parameters.drop () ;
  mProperty_whereClause.drop () ;
  mProperty_llvmNativeTypeNameExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.generic:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_parameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_whereClause.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_llvmNativeTypeNameExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.generic generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_generic ("typeKind.generic",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_generic::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_generic ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_generic::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_generic (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic GGS_typeKind_2E_generic::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_generic result ;
  const GGS_typeKind_2E_generic * p = (const GGS_typeKind_2E_generic *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_generic *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.generic", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_generic_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_::GGS_typeKind_2E_generic_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_::GGS_typeKind_2E_generic_3F_ (const GGS_typeKind_2E_generic & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_ GGS_typeKind_2E_generic_3F_::init_nil (void) {
  GGS_typeKind_2E_generic_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_generic_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_generic_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_generic_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_generic () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_generic_3F_::objectCompare (const GGS_typeKind_2E_generic_3F_ & inOperand) const {
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

void GGS_typeKind_2E_generic_3F_::description (String & ioString,
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
//     @typeKind.generic? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_generic_3F_ ("typeKind.generic?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_generic_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_generic_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_generic_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_generic_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_ GGS_typeKind_2E_generic_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_generic_3F_ result ;
  const GGS_typeKind_2E_generic_3F_ * p = (const GGS_typeKind_2E_generic_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_generic_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.generic?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque::GGS_typeKind_2E_opaque (void) :
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque::GGS_typeKind_2E_opaque (const GGS_typeKind_2E_opaque & inSource) :
mProperty_bitCount (inSource.mProperty_bitCount) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque & GGS_typeKind_2E_opaque::operator = (const GGS_typeKind_2E_opaque & inSource) {
  mProperty_bitCount = inSource.mProperty_bitCount ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_opaque GGS_typeKind_2E_opaque::init_21_ (const GGS_bigint & in_bitCount,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_opaque result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque::GGS_typeKind_2E_opaque (const GGS_bigint & inOperand0) :
mProperty_bitCount (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque GGS_typeKind_2E_opaque::class_func_new (const GGS_bigint & in_bitCount,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_opaque result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_opaque::objectCompare (const GGS_typeKind_2E_opaque & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitCount.objectCompare (inOperand.mProperty_bitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_opaque::isValid (void) const {
  return mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque::drop (void) {
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.opaque:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.opaque generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_opaque ("typeKind.opaque",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_opaque::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_opaque ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_opaque::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_opaque (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque GGS_typeKind_2E_opaque::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_opaque result ;
  const GGS_typeKind_2E_opaque * p = (const GGS_typeKind_2E_opaque *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_opaque *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.opaque", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_opaque_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_::GGS_typeKind_2E_opaque_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_::GGS_typeKind_2E_opaque_3F_ (const GGS_typeKind_2E_opaque & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_ GGS_typeKind_2E_opaque_3F_::init_nil (void) {
  GGS_typeKind_2E_opaque_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_opaque_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_opaque_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_opaque_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_opaque () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_opaque_3F_::objectCompare (const GGS_typeKind_2E_opaque_3F_ & inOperand) const {
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

void GGS_typeKind_2E_opaque_3F_::description (String & ioString,
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
//     @typeKind.opaque? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_opaque_3F_ ("typeKind.opaque?",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_opaque_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_opaque_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_opaque_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_opaque_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_ GGS_typeKind_2E_opaque_3F_::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_opaque_3F_ result ;
  const GGS_typeKind_2E_opaque_3F_ * p = (const GGS_typeKind_2E_opaque_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_opaque_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.opaque?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function::GGS_typeKind_2E_function (void) :
mProperty_mode (),
mProperty_signature (),
mProperty_returnTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function::GGS_typeKind_2E_function (const GGS_typeKind_2E_function & inSource) :
mProperty_mode (inSource.mProperty_mode),
mProperty_signature (inSource.mProperty_signature),
mProperty_returnTypeProxy (inSource.mProperty_returnTypeProxy) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function & GGS_typeKind_2E_function::operator = (const GGS_typeKind_2E_function & inSource) {
  mProperty_mode = inSource.mProperty_mode ;
  mProperty_signature = inSource.mProperty_signature ;
  mProperty_returnTypeProxy = inSource.mProperty_returnTypeProxy ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_function GGS_typeKind_2E_function::init_21__21__21_ (const GGS_mode & in_mode,
                                                                     const GGS_routineTypedSignature & in_signature,
                                                                     const GGS_unifiedTypeMapEntry & in_returnTypeProxy,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_signature = in_signature ;
  result.mProperty_returnTypeProxy = in_returnTypeProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function::GGS_typeKind_2E_function (const GGS_mode & inOperand0,
                                                    const GGS_routineTypedSignature & inOperand1,
                                                    const GGS_unifiedTypeMapEntry & inOperand2) :
mProperty_mode (inOperand0),
mProperty_signature (inOperand1),
mProperty_returnTypeProxy (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function GGS_typeKind_2E_function::class_func_new (const GGS_mode & in_mode,
                                                                   const GGS_routineTypedSignature & in_signature,
                                                                   const GGS_unifiedTypeMapEntry & in_returnTypeProxy,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_signature = in_signature ;
  result.mProperty_returnTypeProxy = in_returnTypeProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_function::objectCompare (const GGS_typeKind_2E_function & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mode.objectCompare (inOperand.mProperty_mode) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_signature.objectCompare (inOperand.mProperty_signature) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_returnTypeProxy.objectCompare (inOperand.mProperty_returnTypeProxy) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_function::isValid (void) const {
  return mProperty_mode.isValid () && mProperty_signature.isValid () && mProperty_returnTypeProxy.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function::drop (void) {
  mProperty_mode.drop () ;
  mProperty_signature.drop () ;
  mProperty_returnTypeProxy.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.function:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_signature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_returnTypeProxy.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.function generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_function ("typeKind.function",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_function ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_function::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_function (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function GGS_typeKind_2E_function::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_function result ;
  const GGS_typeKind_2E_function * p = (const GGS_typeKind_2E_function *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_function_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_::GGS_typeKind_2E_function_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_::GGS_typeKind_2E_function_3F_ (const GGS_typeKind_2E_function & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_ GGS_typeKind_2E_function_3F_::init_nil (void) {
  GGS_typeKind_2E_function_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_function_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_function_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_function_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_function () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_function_3F_::objectCompare (const GGS_typeKind_2E_function_3F_ & inOperand) const {
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

void GGS_typeKind_2E_function_3F_::description (String & ioString,
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
//     @typeKind.function? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_function_3F_ ("typeKind.function?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_function_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_function_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_function_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_function_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_ GGS_typeKind_2E_function_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_function_3F_ result ;
  const GGS_typeKind_2E_function_3F_ * p = (const GGS_typeKind_2E_function_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_function_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.function?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element::GGS_userLLVMTypeDefinitionListIR_2E_element (void) :
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element::GGS_userLLVMTypeDefinitionListIR_2E_element (const GGS_userLLVMTypeDefinitionListIR_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element & GGS_userLLVMTypeDefinitionListIR_2E_element::operator = (const GGS_userLLVMTypeDefinitionListIR_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element GGS_userLLVMTypeDefinitionListIR_2E_element::init_21_ (const GGS_userLLVMTypeDefinitionIR & in_mType,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element::GGS_userLLVMTypeDefinitionListIR_2E_element (const GGS_userLLVMTypeDefinitionIR & inOperand0) :
mProperty_mType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element GGS_userLLVMTypeDefinitionListIR_2E_element::class_func_new (const GGS_userLLVMTypeDefinitionIR & in_mType,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_userLLVMTypeDefinitionListIR_2E_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR_2E_element::drop (void) {
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @userLLVMTypeDefinitionListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @userLLVMTypeDefinitionListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2E_element ("userLLVMTypeDefinitionListIR.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMTypeDefinitionListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMTypeDefinitionListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMTypeDefinitionListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element GGS_userLLVMTypeDefinitionListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR_2E_element result ;
  const GGS_userLLVMTypeDefinitionListIR_2E_element * p = (const GGS_userLLVMTypeDefinitionListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMTypeDefinitionListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_controlRegisterKind_2E_registerArray::GGS_controlRegisterKind_2E_registerArray (void) :
mProperty_arraySize (),
mProperty_arraySizeLocation (),
mProperty_arrayElementSize (),
mProperty_arrayElementSizeLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray::GGS_controlRegisterKind_2E_registerArray (const GGS_controlRegisterKind_2E_registerArray & inSource) :
mProperty_arraySize (inSource.mProperty_arraySize),
mProperty_arraySizeLocation (inSource.mProperty_arraySizeLocation),
mProperty_arrayElementSize (inSource.mProperty_arrayElementSize),
mProperty_arrayElementSizeLocation (inSource.mProperty_arrayElementSizeLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray & GGS_controlRegisterKind_2E_registerArray::operator = (const GGS_controlRegisterKind_2E_registerArray & inSource) {
  mProperty_arraySize = inSource.mProperty_arraySize ;
  mProperty_arraySizeLocation = inSource.mProperty_arraySizeLocation ;
  mProperty_arrayElementSize = inSource.mProperty_arrayElementSize ;
  mProperty_arrayElementSizeLocation = inSource.mProperty_arrayElementSizeLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray GGS_controlRegisterKind_2E_registerArray::init_21__21__21__21_ (const GGS_expressionAST & in_arraySize,
                                                                                                         const GGS_location & in_arraySizeLocation,
                                                                                                         const GGS_expressionAST & in_arrayElementSize,
                                                                                                         const GGS_location & in_arrayElementSizeLocation,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterKind_2E_registerArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_arraySizeLocation = in_arraySizeLocation ;
  result.mProperty_arrayElementSize = in_arrayElementSize ;
  result.mProperty_arrayElementSizeLocation = in_arrayElementSizeLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray::GGS_controlRegisterKind_2E_registerArray (const GGS_expressionAST & inOperand0,
                                                                                    const GGS_location & inOperand1,
                                                                                    const GGS_expressionAST & inOperand2,
                                                                                    const GGS_location & inOperand3) :
mProperty_arraySize (inOperand0),
mProperty_arraySizeLocation (inOperand1),
mProperty_arrayElementSize (inOperand2),
mProperty_arrayElementSizeLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray GGS_controlRegisterKind_2E_registerArray::class_func_new (const GGS_expressionAST & in_arraySize,
                                                                                                   const GGS_location & in_arraySizeLocation,
                                                                                                   const GGS_expressionAST & in_arrayElementSize,
                                                                                                   const GGS_location & in_arrayElementSizeLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterKind_2E_registerArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_arraySize = in_arraySize ;
  result.mProperty_arraySizeLocation = in_arraySizeLocation ;
  result.mProperty_arrayElementSize = in_arrayElementSize ;
  result.mProperty_arrayElementSizeLocation = in_arrayElementSizeLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterKind_2E_registerArray::isValid (void) const {
  return mProperty_arraySize.isValid () && mProperty_arraySizeLocation.isValid () && mProperty_arrayElementSize.isValid () && mProperty_arrayElementSizeLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray::drop (void) {
  mProperty_arraySize.drop () ;
  mProperty_arraySizeLocation.drop () ;
  mProperty_arrayElementSize.drop () ;
  mProperty_arrayElementSizeLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterKind.registerArray:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_arraySize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arraySizeLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arrayElementSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_arrayElementSizeLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterKind.registerArray generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray ("controlRegisterKind.registerArray",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterKind_2E_registerArray::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterKind_2E_registerArray::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterKind_2E_registerArray (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray GGS_controlRegisterKind_2E_registerArray::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_controlRegisterKind_2E_registerArray result ;
  const GGS_controlRegisterKind_2E_registerArray * p = (const GGS_controlRegisterKind_2E_registerArray *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterKind_2E_registerArray *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterKind.registerArray", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterKind_2E_registerArray_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_::GGS_controlRegisterKind_2E_registerArray_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_::GGS_controlRegisterKind_2E_registerArray_3F_ (const GGS_controlRegisterKind_2E_registerArray & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_ GGS_controlRegisterKind_2E_registerArray_3F_::init_nil (void) {
  GGS_controlRegisterKind_2E_registerArray_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterKind_2E_registerArray_3F_::isValid (void) const {
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

bool GGS_controlRegisterKind_2E_registerArray_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterKind_2E_registerArray () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind_2E_registerArray_3F_::description (String & ioString,
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
//     @controlRegisterKind.registerArray? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray_3F_ ("controlRegisterKind.registerArray?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterKind_2E_registerArray_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterKind_2E_registerArray_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterKind_2E_registerArray_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_ GGS_controlRegisterKind_2E_registerArray_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterKind_2E_registerArray_3F_ result ;
  const GGS_controlRegisterKind_2E_registerArray_3F_ * p = (const GGS_controlRegisterKind_2E_registerArray_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterKind_2E_registerArray_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterKind.registerArray?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element::GGS_controlRegisterBitSliceList_2E_element (void) :
mProperty_mRegisterBitSlice () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element::GGS_controlRegisterBitSliceList_2E_element (const GGS_controlRegisterBitSliceList_2E_element & inSource) :
mProperty_mRegisterBitSlice (inSource.mProperty_mRegisterBitSlice) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element & GGS_controlRegisterBitSliceList_2E_element::operator = (const GGS_controlRegisterBitSliceList_2E_element & inSource) {
  mProperty_mRegisterBitSlice = inSource.mProperty_mRegisterBitSlice ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element GGS_controlRegisterBitSliceList_2E_element::init_21_ (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterBitSlice = in_mRegisterBitSlice ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element::GGS_controlRegisterBitSliceList_2E_element (const GGS_controlRegisterBitSlice & inOperand0) :
mProperty_mRegisterBitSlice (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element GGS_controlRegisterBitSliceList_2E_element::class_func_new (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterBitSlice = in_mRegisterBitSlice ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterBitSliceList_2E_element::isValid (void) const {
  return mProperty_mRegisterBitSlice.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList_2E_element::drop (void) {
  mProperty_mRegisterBitSlice.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterBitSliceList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterBitSlice.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterBitSliceList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2E_element ("controlRegisterBitSliceList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterBitSliceList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSliceList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSliceList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element GGS_controlRegisterBitSliceList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList_2E_element result ;
  const GGS_controlRegisterBitSliceList_2E_element * p = (const GGS_controlRegisterBitSliceList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSliceList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray::GGS_controlRegisterGroupKindAST_2E_groupArray (void) :
mProperty_groupSizeExp (),
mProperty_groupSizeExpLocation (),
mProperty_baseAddresses () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray::GGS_controlRegisterGroupKindAST_2E_groupArray (const GGS_controlRegisterGroupKindAST_2E_groupArray & inSource) :
mProperty_groupSizeExp (inSource.mProperty_groupSizeExp),
mProperty_groupSizeExpLocation (inSource.mProperty_groupSizeExpLocation),
mProperty_baseAddresses (inSource.mProperty_baseAddresses) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray & GGS_controlRegisterGroupKindAST_2E_groupArray::operator = (const GGS_controlRegisterGroupKindAST_2E_groupArray & inSource) {
  mProperty_groupSizeExp = inSource.mProperty_groupSizeExp ;
  mProperty_groupSizeExpLocation = inSource.mProperty_groupSizeExpLocation ;
  mProperty_baseAddresses = inSource.mProperty_baseAddresses ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray GGS_controlRegisterGroupKindAST_2E_groupArray::init_21__21__21_ (const GGS_expressionAST & in_groupSizeExp,
                                                                                                               const GGS_location & in_groupSizeExpLocation,
                                                                                                               const GGS_lbigintlist & in_baseAddresses,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_groupArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_groupSizeExp = in_groupSizeExp ;
  result.mProperty_groupSizeExpLocation = in_groupSizeExpLocation ;
  result.mProperty_baseAddresses = in_baseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray::GGS_controlRegisterGroupKindAST_2E_groupArray (const GGS_expressionAST & inOperand0,
                                                                                              const GGS_location & inOperand1,
                                                                                              const GGS_lbigintlist & inOperand2) :
mProperty_groupSizeExp (inOperand0),
mProperty_groupSizeExpLocation (inOperand1),
mProperty_baseAddresses (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray GGS_controlRegisterGroupKindAST_2E_groupArray::class_func_new (const GGS_expressionAST & in_groupSizeExp,
                                                                                                             const GGS_location & in_groupSizeExpLocation,
                                                                                                             const GGS_lbigintlist & in_baseAddresses,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_groupArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_groupSizeExp = in_groupSizeExp ;
  result.mProperty_groupSizeExpLocation = in_groupSizeExpLocation ;
  result.mProperty_baseAddresses = in_baseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupKindAST_2E_groupArray::isValid (void) const {
  return mProperty_groupSizeExp.isValid () && mProperty_groupSizeExpLocation.isValid () && mProperty_baseAddresses.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray::drop (void) {
  mProperty_groupSizeExp.drop () ;
  mProperty_groupSizeExpLocation.drop () ;
  mProperty_baseAddresses.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupKindAST.groupArray:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_groupSizeExp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_groupSizeExpLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_baseAddresses.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterGroupKindAST.groupArray generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray ("controlRegisterGroupKindAST.groupArray",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupKindAST_2E_groupArray::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupKindAST_2E_groupArray::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupKindAST_2E_groupArray (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray GGS_controlRegisterGroupKindAST_2E_groupArray::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_groupArray result ;
  const GGS_controlRegisterGroupKindAST_2E_groupArray * p = (const GGS_controlRegisterGroupKindAST_2E_groupArray *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupKindAST_2E_groupArray *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST.groupArray", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterGroupKindAST_2E_groupArray_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ (const GGS_controlRegisterGroupKindAST_2E_groupArray & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::init_nil (void) {
  GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::isValid (void) const {
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

bool GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterGroupKindAST_2E_groupArray () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::description (String & ioString,
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
//     @controlRegisterGroupKindAST.groupArray? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray_3F_ ("controlRegisterGroupKindAST.groupArray?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ GGS_controlRegisterGroupKindAST_2E_groupArray_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ result ;
  const GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ * p = (const GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST.groupArray?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element::GGS_controlRegisterFieldList_2E_element (void) :
mProperty_mFieldBitCount (),
mProperty_mFieldName () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element::GGS_controlRegisterFieldList_2E_element (const GGS_controlRegisterFieldList_2E_element & inSource) :
mProperty_mFieldBitCount (inSource.mProperty_mFieldBitCount),
mProperty_mFieldName (inSource.mProperty_mFieldName) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element & GGS_controlRegisterFieldList_2E_element::operator = (const GGS_controlRegisterFieldList_2E_element & inSource) {
  mProperty_mFieldBitCount = inSource.mProperty_mFieldBitCount ;
  mProperty_mFieldName = inSource.mProperty_mFieldName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element GGS_controlRegisterFieldList_2E_element::init_21__21_ (const GGS_uint & in_mFieldBitCount,
                                                                                               const GGS_string & in_mFieldName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFieldBitCount = in_mFieldBitCount ;
  result.mProperty_mFieldName = in_mFieldName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element::GGS_controlRegisterFieldList_2E_element (const GGS_uint & inOperand0,
                                                                                  const GGS_string & inOperand1) :
mProperty_mFieldBitCount (inOperand0),
mProperty_mFieldName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element GGS_controlRegisterFieldList_2E_element::class_func_new (const GGS_uint & in_mFieldBitCount,
                                                                                                 const GGS_string & in_mFieldName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFieldBitCount = in_mFieldBitCount ;
  result.mProperty_mFieldName = in_mFieldName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterFieldList_2E_element::isValid (void) const {
  return mProperty_mFieldBitCount.isValid () && mProperty_mFieldName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList_2E_element::drop (void) {
  mProperty_mFieldBitCount.drop () ;
  mProperty_mFieldName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterFieldList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFieldBitCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFieldName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterFieldList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldList_2E_element ("controlRegisterFieldList.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterFieldList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterFieldList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterFieldList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element GGS_controlRegisterFieldList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldList_2E_element result ;
  const GGS_controlRegisterFieldList_2E_element * p = (const GGS_controlRegisterFieldList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterFieldList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single::GGS_registerGroupKind_2E_single (void) :
mProperty_baseAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single::GGS_registerGroupKind_2E_single (const GGS_registerGroupKind_2E_single & inSource) :
mProperty_baseAddress (inSource.mProperty_baseAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single & GGS_registerGroupKind_2E_single::operator = (const GGS_registerGroupKind_2E_single & inSource) {
  mProperty_baseAddress = inSource.mProperty_baseAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerGroupKind_2E_single GGS_registerGroupKind_2E_single::init_21_ (const GGS_bigint & in_baseAddress,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseAddress = in_baseAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single::GGS_registerGroupKind_2E_single (const GGS_bigint & inOperand0) :
mProperty_baseAddress (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single GGS_registerGroupKind_2E_single::class_func_new (const GGS_bigint & in_baseAddress,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseAddress = in_baseAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_single::isValid (void) const {
  return mProperty_baseAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single::drop (void) {
  mProperty_baseAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupKind.single:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_baseAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @registerGroupKind.single generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_single ("registerGroupKind.single",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupKind_2E_single::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind_2E_single ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind_2E_single::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind_2E_single (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single GGS_registerGroupKind_2E_single::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_single result ;
  const GGS_registerGroupKind_2E_single * p = (const GGS_registerGroupKind_2E_single *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind_2E_single *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind.single", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @registerGroupKind_2E_single_3F_
//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_::GGS_registerGroupKind_2E_single_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_::GGS_registerGroupKind_2E_single_3F_ (const GGS_registerGroupKind_2E_single & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_ GGS_registerGroupKind_2E_single_3F_::init_nil (void) {
  GGS_registerGroupKind_2E_single_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_single_3F_::isValid (void) const {
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

bool GGS_registerGroupKind_2E_single_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_registerGroupKind_2E_single () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_single_3F_::description (String & ioString,
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
//     @registerGroupKind.single? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_single_3F_ ("registerGroupKind.single?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupKind_2E_single_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind_2E_single_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind_2E_single_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind_2E_single_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_ GGS_registerGroupKind_2E_single_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_single_3F_ result ;
  const GGS_registerGroupKind_2E_single_3F_ * p = (const GGS_registerGroupKind_2E_single_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind_2E_single_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind.single?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup::GGS_registerGroupKind_2E_arrayGroup (void) :
mProperty_baseAddresses () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup::GGS_registerGroupKind_2E_arrayGroup (const GGS_registerGroupKind_2E_arrayGroup & inSource) :
mProperty_baseAddresses (inSource.mProperty_baseAddresses) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup & GGS_registerGroupKind_2E_arrayGroup::operator = (const GGS_registerGroupKind_2E_arrayGroup & inSource) {
  mProperty_baseAddresses = inSource.mProperty_baseAddresses ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup GGS_registerGroupKind_2E_arrayGroup::init_21_ (const GGS_lbigintlist & in_baseAddresses,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_arrayGroup result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseAddresses = in_baseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup::GGS_registerGroupKind_2E_arrayGroup (const GGS_lbigintlist & inOperand0) :
mProperty_baseAddresses (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup GGS_registerGroupKind_2E_arrayGroup::class_func_new (const GGS_lbigintlist & in_baseAddresses,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_arrayGroup result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseAddresses = in_baseAddresses ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_arrayGroup::isValid (void) const {
  return mProperty_baseAddresses.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup::drop (void) {
  mProperty_baseAddresses.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupKind.arrayGroup:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_baseAddresses.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @registerGroupKind.arrayGroup generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup ("registerGroupKind.arrayGroup",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupKind_2E_arrayGroup::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind_2E_arrayGroup::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind_2E_arrayGroup (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup GGS_registerGroupKind_2E_arrayGroup::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_arrayGroup result ;
  const GGS_registerGroupKind_2E_arrayGroup * p = (const GGS_registerGroupKind_2E_arrayGroup *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind_2E_arrayGroup *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind.arrayGroup", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @registerGroupKind_2E_arrayGroup_3F_
//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_::GGS_registerGroupKind_2E_arrayGroup_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_::GGS_registerGroupKind_2E_arrayGroup_3F_ (const GGS_registerGroupKind_2E_arrayGroup & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_ GGS_registerGroupKind_2E_arrayGroup_3F_::init_nil (void) {
  GGS_registerGroupKind_2E_arrayGroup_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupKind_2E_arrayGroup_3F_::isValid (void) const {
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

bool GGS_registerGroupKind_2E_arrayGroup_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_registerGroupKind_2E_arrayGroup () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind_2E_arrayGroup_3F_::description (String & ioString,
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
//     @registerGroupKind.arrayGroup? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup_3F_ ("registerGroupKind.arrayGroup?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupKind_2E_arrayGroup_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind_2E_arrayGroup_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind_2E_arrayGroup_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_ GGS_registerGroupKind_2E_arrayGroup_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind_2E_arrayGroup_3F_ result ;
  const GGS_registerGroupKind_2E_arrayGroup_3F_ * p = (const GGS_registerGroupKind_2E_arrayGroup_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind_2E_arrayGroup_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind.arrayGroup?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element::GGS_controlRegisterByAddress_2E_element (void) :
mProperty_mAddress (),
mProperty_mHTML () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element::GGS_controlRegisterByAddress_2E_element (const GGS_controlRegisterByAddress_2E_element & inSource) :
mProperty_mAddress (inSource.mProperty_mAddress),
mProperty_mHTML (inSource.mProperty_mHTML) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element & GGS_controlRegisterByAddress_2E_element::operator = (const GGS_controlRegisterByAddress_2E_element & inSource) {
  mProperty_mAddress = inSource.mProperty_mAddress ;
  mProperty_mHTML = inSource.mProperty_mHTML ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element GGS_controlRegisterByAddress_2E_element::init_21__21_ (const GGS_bigint & in_mAddress,
                                                                                               const GGS_string & in_mHTML,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByAddress_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mHTML = in_mHTML ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element::GGS_controlRegisterByAddress_2E_element (const GGS_bigint & inOperand0,
                                                                                  const GGS_string & inOperand1) :
mProperty_mAddress (inOperand0),
mProperty_mHTML (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element GGS_controlRegisterByAddress_2E_element::class_func_new (const GGS_bigint & in_mAddress,
                                                                                                 const GGS_string & in_mHTML,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByAddress_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mHTML = in_mHTML ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterByAddress_2E_element::isValid (void) const {
  return mProperty_mAddress.isValid () && mProperty_mHTML.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress_2E_element::drop (void) {
  mProperty_mAddress.drop () ;
  mProperty_mHTML.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterByAddress.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHTML.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterByAddress.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByAddress_2E_element ("controlRegisterByAddress.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterByAddress_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByAddress_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterByAddress_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterByAddress_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element GGS_controlRegisterByAddress_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByAddress_2E_element result ;
  const GGS_controlRegisterByAddress_2E_element * p = (const GGS_controlRegisterByAddress_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterByAddress_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByAddress.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element::GGS_controlRegisterByName_2E_element (void) :
mProperty_mAddress (),
mProperty_mHTML (),
mProperty_mName () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element::GGS_controlRegisterByName_2E_element (const GGS_controlRegisterByName_2E_element & inSource) :
mProperty_mAddress (inSource.mProperty_mAddress),
mProperty_mHTML (inSource.mProperty_mHTML),
mProperty_mName (inSource.mProperty_mName) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element & GGS_controlRegisterByName_2E_element::operator = (const GGS_controlRegisterByName_2E_element & inSource) {
  mProperty_mAddress = inSource.mProperty_mAddress ;
  mProperty_mHTML = inSource.mProperty_mHTML ;
  mProperty_mName = inSource.mProperty_mName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterByName_2E_element GGS_controlRegisterByName_2E_element::init_21__21__21_ (const GGS_bigint & in_mAddress,
                                                                                             const GGS_string & in_mHTML,
                                                                                             const GGS_string & in_mName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByName_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mHTML = in_mHTML ;
  result.mProperty_mName = in_mName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element::GGS_controlRegisterByName_2E_element (const GGS_bigint & inOperand0,
                                                                            const GGS_string & inOperand1,
                                                                            const GGS_string & inOperand2) :
mProperty_mAddress (inOperand0),
mProperty_mHTML (inOperand1),
mProperty_mName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element GGS_controlRegisterByName_2E_element::class_func_new (const GGS_bigint & in_mAddress,
                                                                                           const GGS_string & in_mHTML,
                                                                                           const GGS_string & in_mName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByName_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mHTML = in_mHTML ;
  result.mProperty_mName = in_mName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterByName_2E_element::isValid (void) const {
  return mProperty_mAddress.isValid () && mProperty_mHTML.isValid () && mProperty_mName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName_2E_element::drop (void) {
  mProperty_mAddress.drop () ;
  mProperty_mHTML.drop () ;
  mProperty_mName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterByName.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHTML.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterByName.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByName_2E_element ("controlRegisterByName.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterByName_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByName_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterByName_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterByName_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element GGS_controlRegisterByName_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByName_2E_element result ;
  const GGS_controlRegisterByName_2E_element * p = (const GGS_controlRegisterByName_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterByName_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByName.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element::GGS_staticListValueListAST_2E_element (void) :
mProperty_mElement (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element::GGS_staticListValueListAST_2E_element (const GGS_staticListValueListAST_2E_element & inSource) :
mProperty_mElement (inSource.mProperty_mElement),
mProperty_mLocation (inSource.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element & GGS_staticListValueListAST_2E_element::operator = (const GGS_staticListValueListAST_2E_element & inSource) {
  mProperty_mElement = inSource.mProperty_mElement ;
  mProperty_mLocation = inSource.mProperty_mLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticListValueListAST_2E_element GGS_staticListValueListAST_2E_element::init_21__21_ (const GGS_extendStaticListElementAST & in_mElement,
                                                                                           const GGS_location & in_mLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListValueListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element::GGS_staticListValueListAST_2E_element (const GGS_extendStaticListElementAST & inOperand0,
                                                                              const GGS_location & inOperand1) :
mProperty_mElement (inOperand0),
mProperty_mLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element GGS_staticListValueListAST_2E_element::class_func_new (const GGS_extendStaticListElementAST & in_mElement,
                                                                                             const GGS_location & in_mLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListValueListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListValueListAST_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST_2E_element::drop (void) {
  mProperty_mElement.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticListValueListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @staticListValueListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListValueListAST_2E_element ("staticListValueListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListValueListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListValueListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListValueListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListValueListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element GGS_staticListValueListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_staticListValueListAST_2E_element result ;
  const GGS_staticListValueListAST_2E_element * p = (const GGS_staticListValueListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListValueListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListValueListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression::GGS_extendStaticListExpressionAST_2E_expression (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression::GGS_extendStaticListExpressionAST_2E_expression (const GGS_extendStaticListExpressionAST_2E_expression & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression & GGS_extendStaticListExpressionAST_2E_expression::operator = (const GGS_extendStaticListExpressionAST_2E_expression & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression GGS_extendStaticListExpressionAST_2E_expression::init_21_ (const GGS_expressionAST & in_exp,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_expression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression::GGS_extendStaticListExpressionAST_2E_expression (const GGS_expressionAST & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression GGS_extendStaticListExpressionAST_2E_expression::class_func_new (const GGS_expressionAST & in_exp,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_expression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListExpressionAST_2E_expression::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extendStaticListExpressionAST.expression:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extendStaticListExpressionAST.expression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression ("extendStaticListExpressionAST.expression",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticListExpressionAST_2E_expression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListExpressionAST_2E_expression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListExpressionAST_2E_expression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression GGS_extendStaticListExpressionAST_2E_expression::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_expression result ;
  const GGS_extendStaticListExpressionAST_2E_expression * p = (const GGS_extendStaticListExpressionAST_2E_expression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListExpressionAST_2E_expression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST.expression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extendStaticListExpressionAST_2E_expression_3F_
//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_::GGS_extendStaticListExpressionAST_2E_expression_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_::GGS_extendStaticListExpressionAST_2E_expression_3F_ (const GGS_extendStaticListExpressionAST_2E_expression & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_ GGS_extendStaticListExpressionAST_2E_expression_3F_::init_nil (void) {
  GGS_extendStaticListExpressionAST_2E_expression_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListExpressionAST_2E_expression_3F_::isValid (void) const {
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

bool GGS_extendStaticListExpressionAST_2E_expression_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extendStaticListExpressionAST_2E_expression () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST_2E_expression_3F_::description (String & ioString,
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
//     @extendStaticListExpressionAST.expression? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression_3F_ ("extendStaticListExpressionAST.expression?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticListExpressionAST_2E_expression_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListExpressionAST_2E_expression_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListExpressionAST_2E_expression_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_ GGS_extendStaticListExpressionAST_2E_expression_3F_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST_2E_expression_3F_ result ;
  const GGS_extendStaticListExpressionAST_2E_expression_3F_ * p = (const GGS_extendStaticListExpressionAST_2E_expression_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListExpressionAST_2E_expression_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST.expression?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element::GGS_extendStaticListElementAST_2E_element (void) :
mProperty_mExpression (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element::GGS_extendStaticListElementAST_2E_element (const GGS_extendStaticListElementAST_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mEndOfExpression (inSource.mProperty_mEndOfExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element & GGS_extendStaticListElementAST_2E_element::operator = (const GGS_extendStaticListElementAST_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mEndOfExpression = inSource.mProperty_mEndOfExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element GGS_extendStaticListElementAST_2E_element::init_21__21_ (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                                                                   const GGS_location & in_mEndOfExpression,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListElementAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mEndOfExpression = in_mEndOfExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element::GGS_extendStaticListElementAST_2E_element (const GGS_extendStaticListExpressionAST & inOperand0,
                                                                                      const GGS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mEndOfExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element GGS_extendStaticListElementAST_2E_element::class_func_new (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                                                                     const GGS_location & in_mEndOfExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListElementAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mEndOfExpression = in_mEndOfExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticListElementAST_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mEndOfExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extendStaticListElementAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extendStaticListElementAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListElementAST_2E_element ("extendStaticListElementAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticListElementAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListElementAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListElementAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListElementAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element GGS_extendStaticListElementAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extendStaticListElementAST_2E_element result ;
  const GGS_extendStaticListElementAST_2E_element * p = (const GGS_extendStaticListElementAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListElementAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListElementAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element::GGS_extendStaticArrayDeclarationDictAST_2E_element (void) :
mProperty_key (),
mProperty_mStaticList () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element::GGS_extendStaticArrayDeclarationDictAST_2E_element (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_mStaticList (inSource.mProperty_mStaticList) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element & GGS_extendStaticArrayDeclarationDictAST_2E_element::operator = (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_mStaticList = inSource.mProperty_mStaticList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element GGS_extendStaticArrayDeclarationDictAST_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                                     const GGS_staticListValueListAST & in_mStaticList,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mStaticList = in_mStaticList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element::GGS_extendStaticArrayDeclarationDictAST_2E_element (const GGS_string & inOperand0,
                                                                                                        const GGS_staticListValueListAST & inOperand1) :
mProperty_key (inOperand0),
mProperty_mStaticList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element GGS_extendStaticArrayDeclarationDictAST_2E_element::class_func_new (const GGS_string & in_key,
                                                                                                                       const GGS_staticListValueListAST & in_mStaticList,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mStaticList = in_mStaticList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticArrayDeclarationDictAST_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mStaticList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mStaticList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extendStaticArrayDeclarationDictAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extendStaticArrayDeclarationDictAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element ("extendStaticArrayDeclarationDictAST.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticArrayDeclarationDictAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticArrayDeclarationDictAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticArrayDeclarationDictAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element GGS_extendStaticArrayDeclarationDictAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element result ;
  const GGS_extendStaticArrayDeclarationDictAST_2E_element * p = (const GGS_extendStaticArrayDeclarationDictAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticArrayDeclarationDictAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationDictAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extendStaticArrayDeclarationDictAST_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::init_nil (void) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::isValid (void) const {
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

bool GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extendStaticArrayDeclarationDictAST_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::description (String & ioString,
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
//     @extendStaticArrayDeclarationDictAST.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element_3F_ ("extendStaticArrayDeclarationDictAST.element?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ result ;
  const GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ * p = (const GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationDictAST.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element::GGS_taskSortedListIR_2E_element (void) :
mProperty_mTaskName (),
mProperty_mPriority (),
mProperty_mStackSize (),
mProperty_mSetupOrderedList (),
mProperty_mActivateOrderedList (),
mProperty_mDeactivateOrderedList (),
mProperty_mTaskNameStringIndex (),
mProperty_mActivate () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element::GGS_taskSortedListIR_2E_element (const GGS_taskSortedListIR_2E_element & inSource) :
mProperty_mTaskName (inSource.mProperty_mTaskName),
mProperty_mPriority (inSource.mProperty_mPriority),
mProperty_mStackSize (inSource.mProperty_mStackSize),
mProperty_mSetupOrderedList (inSource.mProperty_mSetupOrderedList),
mProperty_mActivateOrderedList (inSource.mProperty_mActivateOrderedList),
mProperty_mDeactivateOrderedList (inSource.mProperty_mDeactivateOrderedList),
mProperty_mTaskNameStringIndex (inSource.mProperty_mTaskNameStringIndex),
mProperty_mActivate (inSource.mProperty_mActivate) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element & GGS_taskSortedListIR_2E_element::operator = (const GGS_taskSortedListIR_2E_element & inSource) {
  mProperty_mTaskName = inSource.mProperty_mTaskName ;
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

GGS_taskSortedListIR_2E_element GGS_taskSortedListIR_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_string & in_mTaskName,
                                                                                                       const GGS_uint & in_mPriority,
                                                                                                       const GGS_bigint & in_mStackSize,
                                                                                                       const GGS_stringlist & in_mSetupOrderedList,
                                                                                                       const GGS_stringlist & in_mActivateOrderedList,
                                                                                                       const GGS_stringlist & in_mDeactivateOrderedList,
                                                                                                       const GGS_uint & in_mTaskNameStringIndex,
                                                                                                       const GGS_bool & in_mActivate,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSortedListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
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

void GGS_taskSortedListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element::GGS_taskSortedListIR_2E_element (const GGS_string & inOperand0,
                                                                  const GGS_uint & inOperand1,
                                                                  const GGS_bigint & inOperand2,
                                                                  const GGS_stringlist & inOperand3,
                                                                  const GGS_stringlist & inOperand4,
                                                                  const GGS_stringlist & inOperand5,
                                                                  const GGS_uint & inOperand6,
                                                                  const GGS_bool & inOperand7) :
mProperty_mTaskName (inOperand0),
mProperty_mPriority (inOperand1),
mProperty_mStackSize (inOperand2),
mProperty_mSetupOrderedList (inOperand3),
mProperty_mActivateOrderedList (inOperand4),
mProperty_mDeactivateOrderedList (inOperand5),
mProperty_mTaskNameStringIndex (inOperand6),
mProperty_mActivate (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element GGS_taskSortedListIR_2E_element::class_func_new (const GGS_string & in_mTaskName,
                                                                                 const GGS_uint & in_mPriority,
                                                                                 const GGS_bigint & in_mStackSize,
                                                                                 const GGS_stringlist & in_mSetupOrderedList,
                                                                                 const GGS_stringlist & in_mActivateOrderedList,
                                                                                 const GGS_stringlist & in_mDeactivateOrderedList,
                                                                                 const GGS_uint & in_mTaskNameStringIndex,
                                                                                 const GGS_bool & in_mActivate,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSortedListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
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

bool GGS_taskSortedListIR_2E_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mSetupOrderedList.isValid () && mProperty_mActivateOrderedList.isValid () && mProperty_mDeactivateOrderedList.isValid () && mProperty_mTaskNameStringIndex.isValid () && mProperty_mActivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR_2E_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mSetupOrderedList.drop () ;
  mProperty_mActivateOrderedList.drop () ;
  mProperty_mDeactivateOrderedList.drop () ;
  mProperty_mTaskNameStringIndex.drop () ;
  mProperty_mActivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @taskSortedListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
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
//     @taskSortedListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSortedListIR_2E_element ("taskSortedListIR.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskSortedListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSortedListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSortedListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element GGS_taskSortedListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR_2E_element result ;
  const GGS_taskSortedListIR_2E_element * p = (const GGS_taskSortedListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSortedListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element::GGS_globalTaskVariableList_2E_element (void) :
mProperty_mTaskName (),
mProperty_mTaskTypeName (),
mProperty_mInitialValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element::GGS_globalTaskVariableList_2E_element (const GGS_globalTaskVariableList_2E_element & inSource) :
mProperty_mTaskName (inSource.mProperty_mTaskName),
mProperty_mTaskTypeName (inSource.mProperty_mTaskTypeName),
mProperty_mInitialValue (inSource.mProperty_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element & GGS_globalTaskVariableList_2E_element::operator = (const GGS_globalTaskVariableList_2E_element & inSource) {
  mProperty_mTaskName = inSource.mProperty_mTaskName ;
  mProperty_mTaskTypeName = inSource.mProperty_mTaskTypeName ;
  mProperty_mInitialValue = inSource.mProperty_mInitialValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element GGS_globalTaskVariableList_2E_element::init_21__21__21_ (const GGS_string & in_mTaskName,
                                                                                               const GGS_string & in_mTaskTypeName,
                                                                                               const GGS_objectIR & in_mInitialValue,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalTaskVariableList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mTaskTypeName = in_mTaskTypeName ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element::GGS_globalTaskVariableList_2E_element (const GGS_string & inOperand0,
                                                                              const GGS_string & inOperand1,
                                                                              const GGS_objectIR & inOperand2) :
mProperty_mTaskName (inOperand0),
mProperty_mTaskTypeName (inOperand1),
mProperty_mInitialValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element GGS_globalTaskVariableList_2E_element::class_func_new (const GGS_string & in_mTaskName,
                                                                                             const GGS_string & in_mTaskTypeName,
                                                                                             const GGS_objectIR & in_mInitialValue,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalTaskVariableList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mTaskTypeName = in_mTaskTypeName ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalTaskVariableList_2E_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mTaskTypeName.isValid () && mProperty_mInitialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList_2E_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mTaskTypeName.drop () ;
  mProperty_mInitialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalTaskVariableList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @globalTaskVariableList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalTaskVariableList_2E_element ("globalTaskVariableList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalTaskVariableList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalTaskVariableList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalTaskVariableList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element GGS_globalTaskVariableList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_globalTaskVariableList_2E_element result ;
  const GGS_globalTaskVariableList_2E_element * p = (const GGS_globalTaskVariableList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalTaskVariableList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_sectionIRlist_2E_element::GGS_sectionIRlist_2E_element (void) :
mProperty_mSectionCallName (),
mProperty_mSectionImplementationName (),
mProperty_invocationFromAnyMode () {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element::GGS_sectionIRlist_2E_element (const GGS_sectionIRlist_2E_element & inSource) :
mProperty_mSectionCallName (inSource.mProperty_mSectionCallName),
mProperty_mSectionImplementationName (inSource.mProperty_mSectionImplementationName),
mProperty_invocationFromAnyMode (inSource.mProperty_invocationFromAnyMode) {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element & GGS_sectionIRlist_2E_element::operator = (const GGS_sectionIRlist_2E_element & inSource) {
  mProperty_mSectionCallName = inSource.mProperty_mSectionCallName ;
  mProperty_mSectionImplementationName = inSource.mProperty_mSectionImplementationName ;
  mProperty_invocationFromAnyMode = inSource.mProperty_invocationFromAnyMode ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sectionIRlist_2E_element GGS_sectionIRlist_2E_element::init_21__21__21_invocationFromAnyMode (const GGS_string & in_mSectionCallName,
                                                                                                  const GGS_string & in_mSectionImplementationName,
                                                                                                  const GGS_bool & in_invocationFromAnyMode,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sectionIRlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSectionCallName = in_mSectionCallName ;
  result.mProperty_mSectionImplementationName = in_mSectionImplementationName ;
  result.mProperty_invocationFromAnyMode = in_invocationFromAnyMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element::GGS_sectionIRlist_2E_element (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_bool & inOperand2) :
mProperty_mSectionCallName (inOperand0),
mProperty_mSectionImplementationName (inOperand1),
mProperty_invocationFromAnyMode (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element GGS_sectionIRlist_2E_element::class_func_new (const GGS_string & in_mSectionCallName,
                                                                           const GGS_string & in_mSectionImplementationName,
                                                                           const GGS_bool & in_invocationFromAnyMode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sectionIRlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSectionCallName = in_mSectionCallName ;
  result.mProperty_mSectionImplementationName = in_mSectionImplementationName ;
  result.mProperty_invocationFromAnyMode = in_invocationFromAnyMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sectionIRlist_2E_element::isValid (void) const {
  return mProperty_mSectionCallName.isValid () && mProperty_mSectionImplementationName.isValid () && mProperty_invocationFromAnyMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist_2E_element::drop (void) {
  mProperty_mSectionCallName.drop () ;
  mProperty_mSectionImplementationName.drop () ;
  mProperty_invocationFromAnyMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sectionIRlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSectionCallName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionImplementationName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_invocationFromAnyMode.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sectionIRlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionIRlist_2E_element ("sectionIRlist.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sectionIRlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionIRlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sectionIRlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sectionIRlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element GGS_sectionIRlist_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_sectionIRlist_2E_element result ;
  const GGS_sectionIRlist_2E_element * p = (const GGS_sectionIRlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sectionIRlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionIRlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element::GGS_primitiveAndServiceIRlist_2E_element (void) :
mProperty_mCallName (),
mProperty_mImplementationName (),
mProperty_mHasReturnValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element::GGS_primitiveAndServiceIRlist_2E_element (const GGS_primitiveAndServiceIRlist_2E_element & inSource) :
mProperty_mCallName (inSource.mProperty_mCallName),
mProperty_mImplementationName (inSource.mProperty_mImplementationName),
mProperty_mHasReturnValue (inSource.mProperty_mHasReturnValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element & GGS_primitiveAndServiceIRlist_2E_element::operator = (const GGS_primitiveAndServiceIRlist_2E_element & inSource) {
  mProperty_mCallName = inSource.mProperty_mCallName ;
  mProperty_mImplementationName = inSource.mProperty_mImplementationName ;
  mProperty_mHasReturnValue = inSource.mProperty_mHasReturnValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element GGS_primitiveAndServiceIRlist_2E_element::init_21__21__21_ (const GGS_string & in_mCallName,
                                                                                                     const GGS_string & in_mImplementationName,
                                                                                                     const GGS_bool & in_mHasReturnValue,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCallName = in_mCallName ;
  result.mProperty_mImplementationName = in_mImplementationName ;
  result.mProperty_mHasReturnValue = in_mHasReturnValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element::GGS_primitiveAndServiceIRlist_2E_element (const GGS_string & inOperand0,
                                                                                    const GGS_string & inOperand1,
                                                                                    const GGS_bool & inOperand2) :
mProperty_mCallName (inOperand0),
mProperty_mImplementationName (inOperand1),
mProperty_mHasReturnValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element GGS_primitiveAndServiceIRlist_2E_element::class_func_new (const GGS_string & in_mCallName,
                                                                                                   const GGS_string & in_mImplementationName,
                                                                                                   const GGS_bool & in_mHasReturnValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCallName = in_mCallName ;
  result.mProperty_mImplementationName = in_mImplementationName ;
  result.mProperty_mHasReturnValue = in_mHasReturnValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primitiveAndServiceIRlist_2E_element::isValid (void) const {
  return mProperty_mCallName.isValid () && mProperty_mImplementationName.isValid () && mProperty_mHasReturnValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist_2E_element::drop (void) {
  mProperty_mCallName.drop () ;
  mProperty_mImplementationName.drop () ;
  mProperty_mHasReturnValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primitiveAndServiceIRlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCallName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImplementationName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasReturnValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @primitiveAndServiceIRlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist_2E_element ("primitiveAndServiceIRlist.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primitiveAndServiceIRlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveAndServiceIRlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primitiveAndServiceIRlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primitiveAndServiceIRlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element GGS_primitiveAndServiceIRlist_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist_2E_element result ;
  const GGS_primitiveAndServiceIRlist_2E_element * p = (const GGS_primitiveAndServiceIRlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primitiveAndServiceIRlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveAndServiceIRlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard::GGS_guardKindGenerationIR_2E_convenienceGuard (void) :
mProperty_baseGuardAllocaList (),
mProperty_baseGuardInstructionGenerationList (),
mProperty_baseGuardMangledName (),
mProperty_baseGuardEffectiveParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard::GGS_guardKindGenerationIR_2E_convenienceGuard (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) :
mProperty_baseGuardAllocaList (inSource.mProperty_baseGuardAllocaList),
mProperty_baseGuardInstructionGenerationList (inSource.mProperty_baseGuardInstructionGenerationList),
mProperty_baseGuardMangledName (inSource.mProperty_baseGuardMangledName),
mProperty_baseGuardEffectiveParameterList (inSource.mProperty_baseGuardEffectiveParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard & GGS_guardKindGenerationIR_2E_convenienceGuard::operator = (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) {
  mProperty_baseGuardAllocaList = inSource.mProperty_baseGuardAllocaList ;
  mProperty_baseGuardInstructionGenerationList = inSource.mProperty_baseGuardInstructionGenerationList ;
  mProperty_baseGuardMangledName = inSource.mProperty_baseGuardMangledName ;
  mProperty_baseGuardEffectiveParameterList = inSource.mProperty_baseGuardEffectiveParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard GGS_guardKindGenerationIR_2E_convenienceGuard::init_21__21__21__21_ (const GGS_allocaList & in_baseGuardAllocaList,
                                                                                                                   const GGS_instructionListIR & in_baseGuardInstructionGenerationList,
                                                                                                                   const GGS_string & in_baseGuardMangledName,
                                                                                                                   const GGS_procCallEffectiveParameterListIR & in_baseGuardEffectiveParameterList,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardKindGenerationIR_2E_convenienceGuard result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseGuardAllocaList = in_baseGuardAllocaList ;
  result.mProperty_baseGuardInstructionGenerationList = in_baseGuardInstructionGenerationList ;
  result.mProperty_baseGuardMangledName = in_baseGuardMangledName ;
  result.mProperty_baseGuardEffectiveParameterList = in_baseGuardEffectiveParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR_2E_convenienceGuard::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard::GGS_guardKindGenerationIR_2E_convenienceGuard (const GGS_allocaList & inOperand0,
                                                                                              const GGS_instructionListIR & inOperand1,
                                                                                              const GGS_string & inOperand2,
                                                                                              const GGS_procCallEffectiveParameterListIR & inOperand3) :
mProperty_baseGuardAllocaList (inOperand0),
mProperty_baseGuardInstructionGenerationList (inOperand1),
mProperty_baseGuardMangledName (inOperand2),
mProperty_baseGuardEffectiveParameterList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard GGS_guardKindGenerationIR_2E_convenienceGuard::class_func_new (const GGS_allocaList & in_baseGuardAllocaList,
                                                                                                             const GGS_instructionListIR & in_baseGuardInstructionGenerationList,
                                                                                                             const GGS_string & in_baseGuardMangledName,
                                                                                                             const GGS_procCallEffectiveParameterListIR & in_baseGuardEffectiveParameterList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardKindGenerationIR_2E_convenienceGuard result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_baseGuardAllocaList = in_baseGuardAllocaList ;
  result.mProperty_baseGuardInstructionGenerationList = in_baseGuardInstructionGenerationList ;
  result.mProperty_baseGuardMangledName = in_baseGuardMangledName ;
  result.mProperty_baseGuardEffectiveParameterList = in_baseGuardEffectiveParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardKindGenerationIR_2E_convenienceGuard::isValid (void) const {
  return mProperty_baseGuardAllocaList.isValid () && mProperty_baseGuardInstructionGenerationList.isValid () && mProperty_baseGuardMangledName.isValid () && mProperty_baseGuardEffectiveParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR_2E_convenienceGuard::drop (void) {
  mProperty_baseGuardAllocaList.drop () ;
  mProperty_baseGuardInstructionGenerationList.drop () ;
  mProperty_baseGuardMangledName.drop () ;
  mProperty_baseGuardEffectiveParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR_2E_convenienceGuard::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guardKindGenerationIR.convenienceGuard:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_baseGuardAllocaList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_baseGuardInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_baseGuardMangledName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_baseGuardEffectiveParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guardKindGenerationIR.convenienceGuard generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard ("guardKindGenerationIR.convenienceGuard",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardKindGenerationIR_2E_convenienceGuard::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardKindGenerationIR_2E_convenienceGuard::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardKindGenerationIR_2E_convenienceGuard (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard GGS_guardKindGenerationIR_2E_convenienceGuard::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_guardKindGenerationIR_2E_convenienceGuard result ;
  const GGS_guardKindGenerationIR_2E_convenienceGuard * p = (const GGS_guardKindGenerationIR_2E_convenienceGuard *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardKindGenerationIR_2E_convenienceGuard *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKindGenerationIR.convenienceGuard", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @guardKindGenerationIR_2E_convenienceGuard_3F_
//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::init_nil (void) {
  GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::isValid (void) const {
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

bool GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_guardKindGenerationIR_2E_convenienceGuard () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::description (String & ioString,
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
//     @guardKindGenerationIR.convenienceGuard? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard_3F_ ("guardKindGenerationIR.convenienceGuard?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ GGS_guardKindGenerationIR_2E_convenienceGuard_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ result ;
  const GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ * p = (const GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKindGenerationIR.convenienceGuard?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR_2E_element::GGS_panicSortedListIR_2E_element (void) :
mProperty_mPriority () {
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR_2E_element::GGS_panicSortedListIR_2E_element (const GGS_panicSortedListIR_2E_element & inSource) :
mProperty_mPriority (inSource.mProperty_mPriority) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR_2E_element & GGS_panicSortedListIR_2E_element::operator = (const GGS_panicSortedListIR_2E_element & inSource) {
  mProperty_mPriority = inSource.mProperty_mPriority ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_panicSortedListIR_2E_element GGS_panicSortedListIR_2E_element::init_21_ (const GGS_bigint & in_mPriority,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_panicSortedListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPriority = in_mPriority ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR_2E_element::GGS_panicSortedListIR_2E_element (const GGS_bigint & inOperand0) :
mProperty_mPriority (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR_2E_element GGS_panicSortedListIR_2E_element::class_func_new (const GGS_bigint & in_mPriority,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_panicSortedListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPriority = in_mPriority ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_panicSortedListIR_2E_element::isValid (void) const {
  return mProperty_mPriority.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR_2E_element::drop (void) {
  mProperty_mPriority.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @panicSortedListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPriority.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @panicSortedListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicSortedListIR_2E_element ("panicSortedListIR.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicSortedListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicSortedListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicSortedListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicSortedListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR_2E_element GGS_panicSortedListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_panicSortedListIR_2E_element result ;
  const GGS_panicSortedListIR_2E_element * p = (const GGS_panicSortedListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicSortedListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicSortedListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime::GGS_implicitBooleanConversionResult_2E_compileTime (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime::GGS_implicitBooleanConversionResult_2E_compileTime (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) :
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime & GGS_implicitBooleanConversionResult_2E_compileTime::operator = (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) {
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime GGS_implicitBooleanConversionResult_2E_compileTime::init_21_ (const GGS_bool & in_value,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult_2E_compileTime result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_compileTime::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime::GGS_implicitBooleanConversionResult_2E_compileTime (const GGS_bool & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime GGS_implicitBooleanConversionResult_2E_compileTime::class_func_new (const GGS_bool & in_value,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult_2E_compileTime result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitBooleanConversionResult_2E_compileTime::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_compileTime::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_compileTime::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @implicitBooleanConversionResult.compileTime:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @implicitBooleanConversionResult.compileTime generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime ("implicitBooleanConversionResult.compileTime",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitBooleanConversionResult_2E_compileTime::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitBooleanConversionResult_2E_compileTime::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitBooleanConversionResult_2E_compileTime (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime GGS_implicitBooleanConversionResult_2E_compileTime::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult_2E_compileTime result ;
  const GGS_implicitBooleanConversionResult_2E_compileTime * p = (const GGS_implicitBooleanConversionResult_2E_compileTime *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitBooleanConversionResult_2E_compileTime *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitBooleanConversionResult.compileTime", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @implicitBooleanConversionResult_2E_compileTime_3F_
//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime_3F_::GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime_3F_::GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime_3F_ GGS_implicitBooleanConversionResult_2E_compileTime_3F_::init_nil (void) {
  GGS_implicitBooleanConversionResult_2E_compileTime_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitBooleanConversionResult_2E_compileTime_3F_::isValid (void) const {
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

bool GGS_implicitBooleanConversionResult_2E_compileTime_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_compileTime_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_implicitBooleanConversionResult_2E_compileTime () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_compileTime_3F_::description (String & ioString,
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
//     @implicitBooleanConversionResult.compileTime? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime_3F_ ("implicitBooleanConversionResult.compileTime?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitBooleanConversionResult_2E_compileTime_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitBooleanConversionResult_2E_compileTime_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime_3F_ GGS_implicitBooleanConversionResult_2E_compileTime_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult_2E_compileTime_3F_ result ;
  const GGS_implicitBooleanConversionResult_2E_compileTime_3F_ * p = (const GGS_implicitBooleanConversionResult_2E_compileTime_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitBooleanConversionResult_2E_compileTime_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitBooleanConversionResult.compileTime?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable::GGS_implicitBooleanConversionResult_2E_llvmVariable (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable::GGS_implicitBooleanConversionResult_2E_llvmVariable (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable & GGS_implicitBooleanConversionResult_2E_llvmVariable::operator = (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable GGS_implicitBooleanConversionResult_2E_llvmVariable::init_21_ (const GGS_string & in_name,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult_2E_llvmVariable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_llvmVariable::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable::GGS_implicitBooleanConversionResult_2E_llvmVariable (const GGS_string & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable GGS_implicitBooleanConversionResult_2E_llvmVariable::class_func_new (const GGS_string & in_name,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult_2E_llvmVariable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitBooleanConversionResult_2E_llvmVariable::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_llvmVariable::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_llvmVariable::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @implicitBooleanConversionResult.llvmVariable:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @implicitBooleanConversionResult.llvmVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable ("implicitBooleanConversionResult.llvmVariable",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitBooleanConversionResult_2E_llvmVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitBooleanConversionResult_2E_llvmVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitBooleanConversionResult_2E_llvmVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable GGS_implicitBooleanConversionResult_2E_llvmVariable::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult_2E_llvmVariable result ;
  const GGS_implicitBooleanConversionResult_2E_llvmVariable * p = (const GGS_implicitBooleanConversionResult_2E_llvmVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitBooleanConversionResult_2E_llvmVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitBooleanConversionResult.llvmVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @implicitBooleanConversionResult_2E_llvmVariable_3F_
//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::init_nil (void) {
  GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::isValid (void) const {
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

bool GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_implicitBooleanConversionResult_2E_llvmVariable () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::description (String & ioString,
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
//     @implicitBooleanConversionResult.llvmVariable? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable_3F_ ("implicitBooleanConversionResult.llvmVariable?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ result ;
  const GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ * p = (const GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitBooleanConversionResult.llvmVariable?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess::GGS_primaryInExpressionAccessAST_2E_arrayAccess (void) :
mProperty_index (),
mProperty_endOfIndex (),
mProperty_checkIndexExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess::GGS_primaryInExpressionAccessAST_2E_arrayAccess (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) :
mProperty_index (inSource.mProperty_index),
mProperty_endOfIndex (inSource.mProperty_endOfIndex),
mProperty_checkIndexExpression (inSource.mProperty_checkIndexExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess & GGS_primaryInExpressionAccessAST_2E_arrayAccess::operator = (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) {
  mProperty_index = inSource.mProperty_index ;
  mProperty_endOfIndex = inSource.mProperty_endOfIndex ;
  mProperty_checkIndexExpression = inSource.mProperty_checkIndexExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess GGS_primaryInExpressionAccessAST_2E_arrayAccess::init_21__21__21_ (const GGS_expressionAST & in_index,
                                                                                                                   const GGS_location & in_endOfIndex,
                                                                                                                   const GGS_bool & in_checkIndexExpression,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_arrayAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_index = in_index ;
  result.mProperty_endOfIndex = in_endOfIndex ;
  result.mProperty_checkIndexExpression = in_checkIndexExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_arrayAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess::GGS_primaryInExpressionAccessAST_2E_arrayAccess (const GGS_expressionAST & inOperand0,
                                                                                                  const GGS_location & inOperand1,
                                                                                                  const GGS_bool & inOperand2) :
mProperty_index (inOperand0),
mProperty_endOfIndex (inOperand1),
mProperty_checkIndexExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess GGS_primaryInExpressionAccessAST_2E_arrayAccess::class_func_new (const GGS_expressionAST & in_index,
                                                                                                                 const GGS_location & in_endOfIndex,
                                                                                                                 const GGS_bool & in_checkIndexExpression,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_arrayAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_index = in_index ;
  result.mProperty_endOfIndex = in_endOfIndex ;
  result.mProperty_checkIndexExpression = in_checkIndexExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessAST_2E_arrayAccess::isValid (void) const {
  return mProperty_index.isValid () && mProperty_endOfIndex.isValid () && mProperty_checkIndexExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_arrayAccess::drop (void) {
  mProperty_index.drop () ;
  mProperty_endOfIndex.drop () ;
  mProperty_checkIndexExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_arrayAccess::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primaryInExpressionAccessAST.arrayAccess:") ;
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
//     @primaryInExpressionAccessAST.arrayAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess ("primaryInExpressionAccessAST.arrayAccess",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST_2E_arrayAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST_2E_arrayAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST_2E_arrayAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess GGS_primaryInExpressionAccessAST_2E_arrayAccess::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_arrayAccess result ;
  const GGS_primaryInExpressionAccessAST_2E_arrayAccess * p = (const GGS_primaryInExpressionAccessAST_2E_arrayAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST_2E_arrayAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST.arrayAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @primaryInExpressionAccessAST_2E_arrayAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::init_nil (void) {
  GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::isValid (void) const {
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

bool GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_primaryInExpressionAccessAST_2E_arrayAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::description (String & ioString,
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
//     @primaryInExpressionAccessAST.arrayAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ ("primaryInExpressionAccessAST.arrayAccess?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ result ;
  const GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ * p = (const GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST.arrayAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element::GGS_primaryInExpressionAccessListAST_2E_element (void) :
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element::GGS_primaryInExpressionAccessListAST_2E_element (const GGS_primaryInExpressionAccessListAST_2E_element & inSource) :
mProperty_mAccess (inSource.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element & GGS_primaryInExpressionAccessListAST_2E_element::operator = (const GGS_primaryInExpressionAccessListAST_2E_element & inSource) {
  mProperty_mAccess = inSource.mProperty_mAccess ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element GGS_primaryInExpressionAccessListAST_2E_element::init_21_ (const GGS_primaryInExpressionAccessAST & in_mAccess,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element::GGS_primaryInExpressionAccessListAST_2E_element (const GGS_primaryInExpressionAccessAST & inOperand0) :
mProperty_mAccess (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element GGS_primaryInExpressionAccessListAST_2E_element::class_func_new (const GGS_primaryInExpressionAccessAST & in_mAccess,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_primaryInExpressionAccessListAST_2E_element::isValid (void) const {
  return mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST_2E_element::drop (void) {
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @primaryInExpressionAccessListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @primaryInExpressionAccessListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2E_element ("primaryInExpressionAccessListAST.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element GGS_primaryInExpressionAccessListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessListAST_2E_element result ;
  const GGS_primaryInExpressionAccessListAST_2E_element * p = (const GGS_primaryInExpressionAccessListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST_2E_element::GGS_instructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST_2E_element::GGS_instructionListAST_2E_element (const GGS_instructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST_2E_element & GGS_instructionListAST_2E_element::operator = (const GGS_instructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_instructionListAST_2E_element GGS_instructionListAST_2E_element::init_21_ (const GGS_instructionAST & in_mInstruction,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST_2E_element::GGS_instructionListAST_2E_element (const GGS_instructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST_2E_element GGS_instructionListAST_2E_element::class_func_new (const GGS_instructionAST & in_mInstruction,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @instructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @instructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListAST_2E_element ("instructionListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST_2E_element GGS_instructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_instructionListAST_2E_element result ;
  const GGS_instructionListAST_2E_element * p = (const GGS_instructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (void) :
mProperty_infixOperator (),
mProperty_operatorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & inSource) :
mProperty_infixOperator (inSource.mProperty_infixOperator),
mProperty_operatorLocation (inSource.mProperty_operatorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::operator = (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & inSource) {
  mProperty_infixOperator = inSource.mProperty_infixOperator ;
  mProperty_operatorLocation = inSource.mProperty_operatorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::init_21__21_ (const GGS_omnibusInfixOperator & in_infixOperator,
                                                                                                                                                       const GGS_location & in_operatorLocation,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_infixOperator = in_infixOperator ;
  result.mProperty_operatorLocation = in_operatorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (const GGS_omnibusInfixOperator & inOperand0,
                                                                                                                                          const GGS_location & inOperand1) :
mProperty_infixOperator (inOperand0),
mProperty_operatorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::class_func_new (const GGS_omnibusInfixOperator & in_infixOperator,
                                                                                                                                                         const GGS_location & in_operatorLocation,
                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_infixOperator = in_infixOperator ;
  result.mProperty_operatorLocation = in_operatorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::isValid (void) const {
  return mProperty_infixOperator.isValid () && mProperty_operatorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::drop (void) {
  mProperty_infixOperator.drop () ;
  mProperty_operatorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::description (String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterAssignmentOperatorKind.assignmentWithOperator:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_infixOperator.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_operatorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterAssignmentOperatorKind.assignmentWithOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator ("controlRegisterAssignmentOperatorKind.assignmentWithOperator",
                                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator::extractObject (const GGS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator result ;
  const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator * p = (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentOperatorKind.assignmentWithOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::init_nil (void) {
  GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::isValid (void) const {
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

bool GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::description (String & ioString,
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
//     @controlRegisterAssignmentOperatorKind.assignmentWithOperator? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ ("controlRegisterAssignmentOperatorKind.assignmentWithOperator?",
                                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ result ;
  const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ * p = (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentOperatorKind.assignmentWithOperator?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

