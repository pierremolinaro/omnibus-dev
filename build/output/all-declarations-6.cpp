#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntBitWiseAndOperator_2E_weak::objectCompare (const GGS_compileTimeIntBitWiseAndOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntBitWiseAndOperator_2E_weak::GGS_compileTimeIntBitWiseAndOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator_2E_weak & GGS_compileTimeIntBitWiseAndOperator_2E_weak::operator = (const GGS_compileTimeIntBitWiseAndOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator_2E_weak::GGS_compileTimeIntBitWiseAndOperator_2E_weak (const GGS_compileTimeIntBitWiseAndOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator_2E_weak GGS_compileTimeIntBitWiseAndOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseAndOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator GGS_compileTimeIntBitWiseAndOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntBitWiseAndOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntBitWiseAndOperator * p = (cPtr_compileTimeIntBitWiseAndOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntBitWiseAndOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator GGS_compileTimeIntBitWiseAndOperator_2E_weak::bang_compileTimeIntBitWiseAndOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntBitWiseAndOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntBitWiseAndOperator) ;
      result = GGS_compileTimeIntBitWiseAndOperator ((cPtr_compileTimeIntBitWiseAndOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntBitWiseAndOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2E_weak ("compileTimeIntBitWiseAndOperator.weak",
                                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntBitWiseAndOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntBitWiseAndOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntBitWiseAndOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator_2E_weak GGS_compileTimeIntBitWiseAndOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseAndOperator_2E_weak result ;
  const GGS_compileTimeIntBitWiseAndOperator_2E_weak * p = (const GGS_compileTimeIntBitWiseAndOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntBitWiseAndOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseAndOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntShiftLeftOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntShiftLeftOperator::objectCompare (const GGS_compileTimeIntShiftLeftOperator & inOperand) const {
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

GGS_compileTimeIntShiftLeftOperator::GGS_compileTimeIntShiftLeftOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntShiftLeftOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntShiftLeftOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntShiftLeftOperator_init (inCompiler) ;
  const GGS_compileTimeIntShiftLeftOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftLeftOperator::
compileTimeIntShiftLeftOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator::GGS_compileTimeIntShiftLeftOperator (const cPtr_compileTimeIntShiftLeftOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntShiftLeftOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntShiftLeftOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntShiftLeftOperator::cPtr_compileTimeIntShiftLeftOperator (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntShiftLeftOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;
}

void cPtr_compileTimeIntShiftLeftOperator::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntShiftLeftOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntShiftLeftOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntShiftLeftOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntShiftLeftOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntShiftLeftOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ("compileTimeIntShiftLeftOperator",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntShiftLeftOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntShiftLeftOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntShiftLeftOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftLeftOperator result ;
  const GGS_compileTimeIntShiftLeftOperator * p = (const GGS_compileTimeIntShiftLeftOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntShiftLeftOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftLeftOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntShiftLeftOperator_2E_weak::objectCompare (const GGS_compileTimeIntShiftLeftOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntShiftLeftOperator_2E_weak::GGS_compileTimeIntShiftLeftOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator_2E_weak & GGS_compileTimeIntShiftLeftOperator_2E_weak::operator = (const GGS_compileTimeIntShiftLeftOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator_2E_weak::GGS_compileTimeIntShiftLeftOperator_2E_weak (const GGS_compileTimeIntShiftLeftOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator_2E_weak GGS_compileTimeIntShiftLeftOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntShiftLeftOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntShiftLeftOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntShiftLeftOperator * p = (cPtr_compileTimeIntShiftLeftOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntShiftLeftOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator_2E_weak::bang_compileTimeIntShiftLeftOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntShiftLeftOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntShiftLeftOperator) ;
      result = GGS_compileTimeIntShiftLeftOperator ((cPtr_compileTimeIntShiftLeftOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntShiftLeftOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2E_weak ("compileTimeIntShiftLeftOperator.weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntShiftLeftOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntShiftLeftOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntShiftLeftOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator_2E_weak GGS_compileTimeIntShiftLeftOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftLeftOperator_2E_weak result ;
  const GGS_compileTimeIntShiftLeftOperator_2E_weak * p = (const GGS_compileTimeIntShiftLeftOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntShiftLeftOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftLeftOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntShiftRightOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntShiftRightOperator::objectCompare (const GGS_compileTimeIntShiftRightOperator & inOperand) const {
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

GGS_compileTimeIntShiftRightOperator::GGS_compileTimeIntShiftRightOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntShiftRightOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntShiftRightOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntShiftRightOperator_init (inCompiler) ;
  const GGS_compileTimeIntShiftRightOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftRightOperator::
compileTimeIntShiftRightOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator::GGS_compileTimeIntShiftRightOperator (const cPtr_compileTimeIntShiftRightOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntShiftRightOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntShiftRightOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntShiftRightOperator::cPtr_compileTimeIntShiftRightOperator (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntShiftRightOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;
}

void cPtr_compileTimeIntShiftRightOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntShiftRightOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntShiftRightOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntShiftRightOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntShiftRightOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntShiftRightOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ("compileTimeIntShiftRightOperator",
                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntShiftRightOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntShiftRightOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntShiftRightOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftRightOperator result ;
  const GGS_compileTimeIntShiftRightOperator * p = (const GGS_compileTimeIntShiftRightOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntShiftRightOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftRightOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntShiftRightOperator_2E_weak::objectCompare (const GGS_compileTimeIntShiftRightOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntShiftRightOperator_2E_weak::GGS_compileTimeIntShiftRightOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator_2E_weak & GGS_compileTimeIntShiftRightOperator_2E_weak::operator = (const GGS_compileTimeIntShiftRightOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator_2E_weak::GGS_compileTimeIntShiftRightOperator_2E_weak (const GGS_compileTimeIntShiftRightOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator_2E_weak GGS_compileTimeIntShiftRightOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntShiftRightOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntShiftRightOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntShiftRightOperator * p = (cPtr_compileTimeIntShiftRightOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntShiftRightOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator_2E_weak::bang_compileTimeIntShiftRightOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntShiftRightOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntShiftRightOperator) ;
      result = GGS_compileTimeIntShiftRightOperator ((cPtr_compileTimeIntShiftRightOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntShiftRightOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2E_weak ("compileTimeIntShiftRightOperator.weak",
                                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntShiftRightOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntShiftRightOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntShiftRightOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator_2E_weak GGS_compileTimeIntShiftRightOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftRightOperator_2E_weak result ;
  const GGS_compileTimeIntShiftRightOperator_2E_weak * p = (const GGS_compileTimeIntShiftRightOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntShiftRightOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftRightOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntLessThanOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntLessThanOperator::objectCompare (const GGS_compileTimeIntLessThanOperator & inOperand) const {
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

GGS_compileTimeIntLessThanOperator::GGS_compileTimeIntLessThanOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntLessThanOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntLessThanOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntLessThanOperator_init (inCompiler) ;
  const GGS_compileTimeIntLessThanOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLessThanOperator::
compileTimeIntLessThanOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator::GGS_compileTimeIntLessThanOperator (const cPtr_compileTimeIntLessThanOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntLessThanOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntLessThanOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntLessThanOperator::cPtr_compileTimeIntLessThanOperator (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntLessThanOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;
}

void cPtr_compileTimeIntLessThanOperator::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntLessThanOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntLessThanOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntLessThanOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntLessThanOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntLessThanOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ("compileTimeIntLessThanOperator",
                                                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntLessThanOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntLessThanOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntLessThanOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLessThanOperator result ;
  const GGS_compileTimeIntLessThanOperator * p = (const GGS_compileTimeIntLessThanOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntLessThanOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLessThanOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntLessThanOperator_2E_weak::objectCompare (const GGS_compileTimeIntLessThanOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntLessThanOperator_2E_weak::GGS_compileTimeIntLessThanOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator_2E_weak & GGS_compileTimeIntLessThanOperator_2E_weak::operator = (const GGS_compileTimeIntLessThanOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator_2E_weak::GGS_compileTimeIntLessThanOperator_2E_weak (const GGS_compileTimeIntLessThanOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator_2E_weak GGS_compileTimeIntLessThanOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntLessThanOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntLessThanOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntLessThanOperator * p = (cPtr_compileTimeIntLessThanOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntLessThanOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator_2E_weak::bang_compileTimeIntLessThanOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntLessThanOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntLessThanOperator) ;
      result = GGS_compileTimeIntLessThanOperator ((cPtr_compileTimeIntLessThanOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntLessThanOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2E_weak ("compileTimeIntLessThanOperator.weak",
                                                                                           & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntLessThanOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntLessThanOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntLessThanOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator_2E_weak GGS_compileTimeIntLessThanOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLessThanOperator_2E_weak result ;
  const GGS_compileTimeIntLessThanOperator_2E_weak * p = (const GGS_compileTimeIntLessThanOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntLessThanOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLessThanOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntLowerOrEqualOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntLowerOrEqualOperator::objectCompare (const GGS_compileTimeIntLowerOrEqualOperator & inOperand) const {
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

GGS_compileTimeIntLowerOrEqualOperator::GGS_compileTimeIntLowerOrEqualOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntLowerOrEqualOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntLowerOrEqualOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntLowerOrEqualOperator_init (inCompiler) ;
  const GGS_compileTimeIntLowerOrEqualOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLowerOrEqualOperator::
compileTimeIntLowerOrEqualOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator::GGS_compileTimeIntLowerOrEqualOperator (const cPtr_compileTimeIntLowerOrEqualOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntLowerOrEqualOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntLowerOrEqualOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntLowerOrEqualOperator::cPtr_compileTimeIntLowerOrEqualOperator (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntLowerOrEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;
}

void cPtr_compileTimeIntLowerOrEqualOperator::description (String & ioString,
                                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntLowerOrEqualOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntLowerOrEqualOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntLowerOrEqualOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntLowerOrEqualOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntLowerOrEqualOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ("compileTimeIntLowerOrEqualOperator",
                                                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntLowerOrEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntLowerOrEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntLowerOrEqualOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLowerOrEqualOperator result ;
  const GGS_compileTimeIntLowerOrEqualOperator * p = (const GGS_compileTimeIntLowerOrEqualOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntLowerOrEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLowerOrEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntLowerOrEqualOperator_2E_weak::objectCompare (const GGS_compileTimeIntLowerOrEqualOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntLowerOrEqualOperator_2E_weak::GGS_compileTimeIntLowerOrEqualOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator_2E_weak & GGS_compileTimeIntLowerOrEqualOperator_2E_weak::operator = (const GGS_compileTimeIntLowerOrEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator_2E_weak::GGS_compileTimeIntLowerOrEqualOperator_2E_weak (const GGS_compileTimeIntLowerOrEqualOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator_2E_weak GGS_compileTimeIntLowerOrEqualOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntLowerOrEqualOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntLowerOrEqualOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntLowerOrEqualOperator * p = (cPtr_compileTimeIntLowerOrEqualOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntLowerOrEqualOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator_2E_weak::bang_compileTimeIntLowerOrEqualOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntLowerOrEqualOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntLowerOrEqualOperator) ;
      result = GGS_compileTimeIntLowerOrEqualOperator ((cPtr_compileTimeIntLowerOrEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntLowerOrEqualOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2E_weak ("compileTimeIntLowerOrEqualOperator.weak",
                                                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntLowerOrEqualOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntLowerOrEqualOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntLowerOrEqualOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator_2E_weak GGS_compileTimeIntLowerOrEqualOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLowerOrEqualOperator_2E_weak result ;
  const GGS_compileTimeIntLowerOrEqualOperator_2E_weak * p = (const GGS_compileTimeIntLowerOrEqualOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntLowerOrEqualOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLowerOrEqualOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntXorOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntXorOperator::objectCompare (const GGS_compileTimeIntXorOperator & inOperand) const {
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

GGS_compileTimeIntXorOperator::GGS_compileTimeIntXorOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntXorOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntXorOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntXorOperator_init (inCompiler) ;
  const GGS_compileTimeIntXorOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntXorOperator::
compileTimeIntXorOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator::GGS_compileTimeIntXorOperator (const cPtr_compileTimeIntXorOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntXorOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntXorOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntXorOperator::cPtr_compileTimeIntXorOperator (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntXorOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;
}

void cPtr_compileTimeIntXorOperator::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntXorOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntXorOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntXorOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntXorOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntXorOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator ("compileTimeIntXorOperator",
                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntXorOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntXorOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntXorOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntXorOperator result ;
  const GGS_compileTimeIntXorOperator * p = (const GGS_compileTimeIntXorOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntXorOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntXorOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntXorOperator_2E_weak::objectCompare (const GGS_compileTimeIntXorOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntXorOperator_2E_weak::GGS_compileTimeIntXorOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator_2E_weak & GGS_compileTimeIntXorOperator_2E_weak::operator = (const GGS_compileTimeIntXorOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator_2E_weak::GGS_compileTimeIntXorOperator_2E_weak (const GGS_compileTimeIntXorOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator_2E_weak GGS_compileTimeIntXorOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntXorOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntXorOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntXorOperator * p = (cPtr_compileTimeIntXorOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntXorOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator_2E_weak::bang_compileTimeIntXorOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntXorOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntXorOperator) ;
      result = GGS_compileTimeIntXorOperator ((cPtr_compileTimeIntXorOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntXorOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2E_weak ("compileTimeIntXorOperator.weak",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntXorOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntXorOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntXorOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator_2E_weak GGS_compileTimeIntXorOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntXorOperator_2E_weak result ;
  const GGS_compileTimeIntXorOperator_2E_weak * p = (const GGS_compileTimeIntXorOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntXorOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntXorOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntBitWiseOrOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntBitWiseOrOperator::objectCompare (const GGS_compileTimeIntBitWiseOrOperator & inOperand) const {
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

GGS_compileTimeIntBitWiseOrOperator::GGS_compileTimeIntBitWiseOrOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntBitWiseOrOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntBitWiseOrOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntBitWiseOrOperator_init (inCompiler) ;
  const GGS_compileTimeIntBitWiseOrOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseOrOperator::
compileTimeIntBitWiseOrOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator::GGS_compileTimeIntBitWiseOrOperator (const cPtr_compileTimeIntBitWiseOrOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntBitWiseOrOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntBitWiseOrOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntBitWiseOrOperator::cPtr_compileTimeIntBitWiseOrOperator (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntBitWiseOrOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;
}

void cPtr_compileTimeIntBitWiseOrOperator::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntBitWiseOrOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntBitWiseOrOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntBitWiseOrOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntBitWiseOrOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntBitWiseOrOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ("compileTimeIntBitWiseOrOperator",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntBitWiseOrOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntBitWiseOrOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntBitWiseOrOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseOrOperator result ;
  const GGS_compileTimeIntBitWiseOrOperator * p = (const GGS_compileTimeIntBitWiseOrOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntBitWiseOrOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseOrOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntBitWiseOrOperator_2E_weak::objectCompare (const GGS_compileTimeIntBitWiseOrOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntBitWiseOrOperator_2E_weak::GGS_compileTimeIntBitWiseOrOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator_2E_weak & GGS_compileTimeIntBitWiseOrOperator_2E_weak::operator = (const GGS_compileTimeIntBitWiseOrOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator_2E_weak::GGS_compileTimeIntBitWiseOrOperator_2E_weak (const GGS_compileTimeIntBitWiseOrOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator_2E_weak GGS_compileTimeIntBitWiseOrOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseOrOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntBitWiseOrOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntBitWiseOrOperator * p = (cPtr_compileTimeIntBitWiseOrOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntBitWiseOrOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator_2E_weak::bang_compileTimeIntBitWiseOrOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntBitWiseOrOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntBitWiseOrOperator) ;
      result = GGS_compileTimeIntBitWiseOrOperator ((cPtr_compileTimeIntBitWiseOrOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntBitWiseOrOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2E_weak ("compileTimeIntBitWiseOrOperator.weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntBitWiseOrOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntBitWiseOrOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntBitWiseOrOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator_2E_weak GGS_compileTimeIntBitWiseOrOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseOrOperator_2E_weak result ;
  const GGS_compileTimeIntBitWiseOrOperator_2E_weak * p = (const GGS_compileTimeIntBitWiseOrOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntBitWiseOrOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseOrOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntMinusOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntMinusOperator::objectCompare (const GGS_compileTimeIntMinusOperator & inOperand) const {
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

GGS_compileTimeIntMinusOperator::GGS_compileTimeIntMinusOperator (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntMinusOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntMinusOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntMinusOperator_init (inCompiler) ;
  const GGS_compileTimeIntMinusOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMinusOperator::
compileTimeIntMinusOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator::GGS_compileTimeIntMinusOperator (const cPtr_compileTimeIntMinusOperator * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntMinusOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntMinusOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntMinusOperator::cPtr_compileTimeIntMinusOperator (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntMinusOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;
}

void cPtr_compileTimeIntMinusOperator::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntMinusOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntMinusOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntMinusOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntMinusOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntMinusOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ("compileTimeIntMinusOperator",
                                                                                & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntMinusOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntMinusOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntMinusOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMinusOperator result ;
  const GGS_compileTimeIntMinusOperator * p = (const GGS_compileTimeIntMinusOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntMinusOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntMinusOperator_2E_weak::objectCompare (const GGS_compileTimeIntMinusOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntMinusOperator_2E_weak::GGS_compileTimeIntMinusOperator_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator_2E_weak & GGS_compileTimeIntMinusOperator_2E_weak::operator = (const GGS_compileTimeIntMinusOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator_2E_weak::GGS_compileTimeIntMinusOperator_2E_weak (const GGS_compileTimeIntMinusOperator & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator_2E_weak GGS_compileTimeIntMinusOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntMinusOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntMinusOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntMinusOperator * p = (cPtr_compileTimeIntMinusOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntMinusOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator_2E_weak::bang_compileTimeIntMinusOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntMinusOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntMinusOperator) ;
      result = GGS_compileTimeIntMinusOperator ((cPtr_compileTimeIntMinusOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntMinusOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2E_weak ("compileTimeIntMinusOperator.weak",
                                                                                        & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntMinusOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntMinusOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntMinusOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator_2E_weak GGS_compileTimeIntMinusOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMinusOperator_2E_weak result ;
  const GGS_compileTimeIntMinusOperator_2E_weak * p = (const GGS_compileTimeIntMinusOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntMinusOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntComplementOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntComplementOperator::objectCompare (const GGS_compileTimeIntComplementOperator & inOperand) const {
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

GGS_compileTimeIntComplementOperator::GGS_compileTimeIntComplementOperator (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntComplementOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntComplementOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntComplementOperator_init (inCompiler) ;
  const GGS_compileTimeIntComplementOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntComplementOperator::
compileTimeIntComplementOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator::GGS_compileTimeIntComplementOperator (const cPtr_compileTimeIntComplementOperator * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntComplementOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntComplementOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntComplementOperator::cPtr_compileTimeIntComplementOperator (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntComplementOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

void cPtr_compileTimeIntComplementOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntComplementOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntComplementOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntComplementOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntComplementOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntComplementOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ("compileTimeIntComplementOperator",
                                                                                     & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntComplementOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntComplementOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntComplementOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntComplementOperator result ;
  const GGS_compileTimeIntComplementOperator * p = (const GGS_compileTimeIntComplementOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntComplementOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntComplementOperator_2E_weak::objectCompare (const GGS_compileTimeIntComplementOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntComplementOperator_2E_weak::GGS_compileTimeIntComplementOperator_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator_2E_weak & GGS_compileTimeIntComplementOperator_2E_weak::operator = (const GGS_compileTimeIntComplementOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator_2E_weak::GGS_compileTimeIntComplementOperator_2E_weak (const GGS_compileTimeIntComplementOperator & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator_2E_weak GGS_compileTimeIntComplementOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntComplementOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntComplementOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntComplementOperator * p = (cPtr_compileTimeIntComplementOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntComplementOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator_2E_weak::bang_compileTimeIntComplementOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntComplementOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntComplementOperator) ;
      result = GGS_compileTimeIntComplementOperator ((cPtr_compileTimeIntComplementOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntComplementOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2E_weak ("compileTimeIntComplementOperator.weak",
                                                                                             & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntComplementOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntComplementOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntComplementOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator_2E_weak GGS_compileTimeIntComplementOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntComplementOperator_2E_weak result ;
  const GGS_compileTimeIntComplementOperator_2E_weak * p = (const GGS_compileTimeIntComplementOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntComplementOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (GGS_instructionListIR & ioObject,
                                                       const GGS_objectIR constinArgument_inReceiverIR,
                                                       const GGS_string constinArgument_inLLVMSetterName,
                                                       const GGS_objectIR constinArgument_inValueIR,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_storeComputedPropertyValueIR::init_21__21__21_ (constinArgument_inReceiverIR, constinArgument_inLLVMSetterName, constinArgument_inValueIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 7)) ;
}


//--------------------------------------------------------------------------------------------------
// @storeComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeComputedPropertyValueIR::objectCompare (const GGS_storeComputedPropertyValueIR & inOperand) const {
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

GGS_storeComputedPropertyValueIR::GGS_storeComputedPropertyValueIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR::
init_21__21__21_ (const GGS_objectIR & in_mReceiverIR,
                  const GGS_string & in_mLLVMSetterName,
                  const GGS_objectIR & in_mValueIR,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeComputedPropertyValueIR * object = nullptr ;
  macroMyNew (object, cPtr_storeComputedPropertyValueIR (inCompiler COMMA_THERE)) ;
  object->storeComputedPropertyValueIR_init_21__21__21_ (in_mReceiverIR, in_mLLVMSetterName, in_mValueIR, inCompiler) ;
  const GGS_storeComputedPropertyValueIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeComputedPropertyValueIR::
storeComputedPropertyValueIR_init_21__21__21_ (const GGS_objectIR & in_mReceiverIR,
                                               const GGS_string & in_mLLVMSetterName,
                                               const GGS_objectIR & in_mValueIR,
                                               Compiler * /* inCompiler */) {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMSetterName = in_mLLVMSetterName ;
  mProperty_mValueIR = in_mValueIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR::GGS_storeComputedPropertyValueIR (const cPtr_storeComputedPropertyValueIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeComputedPropertyValueIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeComputedPropertyValueIR::readProperty_mReceiverIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mReceiverIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeComputedPropertyValueIR::setProperty_mReceiverIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mReceiverIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_storeComputedPropertyValueIR::readProperty_mLLVMSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mLLVMSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeComputedPropertyValueIR::setProperty_mLLVMSetterName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mLLVMSetterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeComputedPropertyValueIR::readProperty_mValueIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mValueIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeComputedPropertyValueIR::setProperty_mValueIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mValueIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeComputedPropertyValueIR::cPtr_storeComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMSetterName (),
mProperty_mValueIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_storeComputedPropertyValueIR::cPtr_storeComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                                                      const GGS_string & in_mLLVMSetterName,
                                                                      const GGS_objectIR & in_mValueIR,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMSetterName (),
mProperty_mValueIR () {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMSetterName = in_mLLVMSetterName ;
  mProperty_mValueIR = in_mValueIR ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_storeComputedPropertyValueIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;
}

void cPtr_storeComputedPropertyValueIR::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@storeComputedPropertyValueIR:") ;
  mProperty_mReceiverIR.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValueIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeComputedPropertyValueIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMSetterName, mProperty_mValueIR, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeComputedPropertyValueIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverIR.printNonNullClassInstanceProperties ("mReceiverIR") ;
    mProperty_mLLVMSetterName.printNonNullClassInstanceProperties ("mLLVMSetterName") ;
    mProperty_mValueIR.printNonNullClassInstanceProperties ("mValueIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @storeComputedPropertyValueIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ("storeComputedPropertyValueIR",
                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeComputedPropertyValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeComputedPropertyValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeComputedPropertyValueIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_storeComputedPropertyValueIR result ;
  const GGS_storeComputedPropertyValueIR * p = (const GGS_storeComputedPropertyValueIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeComputedPropertyValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeComputedPropertyValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeComputedPropertyValueIR_2E_weak::objectCompare (const GGS_storeComputedPropertyValueIR_2E_weak & inOperand) const {
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

GGS_storeComputedPropertyValueIR_2E_weak::GGS_storeComputedPropertyValueIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak & GGS_storeComputedPropertyValueIR_2E_weak::operator = (const GGS_storeComputedPropertyValueIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak::GGS_storeComputedPropertyValueIR_2E_weak (const GGS_storeComputedPropertyValueIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak GGS_storeComputedPropertyValueIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_storeComputedPropertyValueIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR_2E_weak::unwrappedValue (void) const {
  GGS_storeComputedPropertyValueIR result ;
  if (isValid ()) {
    const cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_storeComputedPropertyValueIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR_2E_weak::bang_storeComputedPropertyValueIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_storeComputedPropertyValueIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeComputedPropertyValueIR) ;
      result = GGS_storeComputedPropertyValueIR ((cPtr_storeComputedPropertyValueIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @storeComputedPropertyValueIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2E_weak ("storeComputedPropertyValueIR.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeComputedPropertyValueIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeComputedPropertyValueIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeComputedPropertyValueIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak GGS_storeComputedPropertyValueIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_storeComputedPropertyValueIR_2E_weak result ;
  const GGS_storeComputedPropertyValueIR_2E_weak * p = (const GGS_storeComputedPropertyValueIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeComputedPropertyValueIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeComputedPropertyValueIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendShiftLeft'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShiftLeft (GGS_instructionListIR & ioObject,
                                      const GGS_objectIR constinArgument_inResult,
                                      const GGS_objectIR constinArgument_inSource,
                                      const GGS_uint constinArgument_inShiftAmount,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_leftShiftIR::init_21__21__21_ (constinArgument_inResult, constinArgument_inSource, constinArgument_inShiftAmount, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 7)) ;
}


//--------------------------------------------------------------------------------------------------
// @leftShiftIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_leftShiftIR::objectCompare (const GGS_leftShiftIR & inOperand) const {
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

GGS_leftShiftIR::GGS_leftShiftIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_leftShiftIR GGS_leftShiftIR::
init_21__21__21_ (const GGS_objectIR & in_mResult,
                  const GGS_objectIR & in_mSource,
                  const GGS_uint & in_mShiftAmount,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_leftShiftIR * object = nullptr ;
  macroMyNew (object, cPtr_leftShiftIR (inCompiler COMMA_THERE)) ;
  object->leftShiftIR_init_21__21__21_ (in_mResult, in_mSource, in_mShiftAmount, inCompiler) ;
  const GGS_leftShiftIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftIR::
leftShiftIR_init_21__21__21_ (const GGS_objectIR & in_mResult,
                              const GGS_objectIR & in_mSource,
                              const GGS_uint & in_mShiftAmount,
                              Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftIR::GGS_leftShiftIR (const cPtr_leftShiftIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_leftShiftIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_leftShiftIR::setProperty_mResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_leftShiftIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_leftShiftIR::setProperty_mSource (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_leftShiftIR::readProperty_mShiftAmount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mShiftAmount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_leftShiftIR::setProperty_mShiftAmount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mShiftAmount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @leftShiftIR class
//--------------------------------------------------------------------------------------------------

cPtr_leftShiftIR::cPtr_leftShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
}

//--------------------------------------------------------------------------------------------------

cPtr_leftShiftIR::cPtr_leftShiftIR (const GGS_objectIR & in_mResult,
                                    const GGS_objectIR & in_mSource,
                                    const GGS_uint & in_mShiftAmount,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_leftShiftIR::classDescriptor (void) const {
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

acPtr_class * cPtr_leftShiftIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_leftShiftIR (mProperty_mResult, mProperty_mSource, mProperty_mShiftAmount, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @leftShiftIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftIR ("leftShiftIR",
                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_leftShiftIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_leftShiftIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_leftShiftIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftIR GGS_leftShiftIR::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_leftShiftIR result ;
  const GGS_leftShiftIR * p = (const GGS_leftShiftIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_leftShiftIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_leftShiftIR_2E_weak::objectCompare (const GGS_leftShiftIR_2E_weak & inOperand) const {
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

GGS_leftShiftIR_2E_weak::GGS_leftShiftIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftIR_2E_weak & GGS_leftShiftIR_2E_weak::operator = (const GGS_leftShiftIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftIR_2E_weak::GGS_leftShiftIR_2E_weak (const GGS_leftShiftIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_leftShiftIR_2E_weak GGS_leftShiftIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_leftShiftIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftIR GGS_leftShiftIR_2E_weak::unwrappedValue (void) const {
  GGS_leftShiftIR result ;
  if (isValid ()) {
    const cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_leftShiftIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftIR GGS_leftShiftIR_2E_weak::bang_leftShiftIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_leftShiftIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_leftShiftIR) ;
      result = GGS_leftShiftIR ((cPtr_leftShiftIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @leftShiftIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftIR_2E_weak ("leftShiftIR.weak",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_leftShiftIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_leftShiftIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_leftShiftIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftIR_2E_weak GGS_leftShiftIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_leftShiftIR_2E_weak result ;
  const GGS_leftShiftIR_2E_weak * p = (const GGS_leftShiftIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_leftShiftIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLogicalShiftRight'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLogicalShiftRight (GGS_instructionListIR & ioObject,
                                              GGS_objectIR & ioArgument_ioResult,
                                              const GGS_uint constinArgument_inShiftAmount,
                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioResult.getter_isLiteralInteger (SOURCE_FILE ("intermediate-logical-shift-right.galgas", 7)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_omnibusType var_type_245 ;
      GGS_bigint var_value_269 ;
      ioArgument_ioResult.method_extractLiteralInteger (var_type_245, var_value_269, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 8)) ;
      ioArgument_ioResult = GGS_objectIR::class_func_literalInteger (var_type_245, var_value_269.right_shift_operation (constinArgument_inShiftAmount, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 9))  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 9)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    extensionSetter_appendLoadWhenReference (ioObject, ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 11)) ;
    }
    GGS_objectIR var_source_429 = ioArgument_ioResult ;
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_source_429, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 13)), ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 13)) ;
    }
    ioObject.addAssignOperation (GGS_logicalRightShiftIR::init_21__21__21_ (ioArgument_ioResult, var_source_429, constinArgument_inShiftAmount, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 14)) ;
  }
}


//--------------------------------------------------------------------------------------------------
// @logicalRightShiftIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logicalRightShiftIR::objectCompare (const GGS_logicalRightShiftIR & inOperand) const {
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

GGS_logicalRightShiftIR::GGS_logicalRightShiftIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_logicalRightShiftIR GGS_logicalRightShiftIR::
init_21__21__21_ (const GGS_objectIR & in_mResult,
                  const GGS_objectIR & in_mSource,
                  const GGS_uint & in_mShiftAmount,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_logicalRightShiftIR * object = nullptr ;
  macroMyNew (object, cPtr_logicalRightShiftIR (inCompiler COMMA_THERE)) ;
  object->logicalRightShiftIR_init_21__21__21_ (in_mResult, in_mSource, in_mShiftAmount, inCompiler) ;
  const GGS_logicalRightShiftIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_logicalRightShiftIR::
logicalRightShiftIR_init_21__21__21_ (const GGS_objectIR & in_mResult,
                                      const GGS_objectIR & in_mSource,
                                      const GGS_uint & in_mShiftAmount,
                                      Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR::GGS_logicalRightShiftIR (const cPtr_logicalRightShiftIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalRightShiftIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_logicalRightShiftIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logicalRightShiftIR::setProperty_mResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_logicalRightShiftIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logicalRightShiftIR::setProperty_mSource (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_logicalRightShiftIR::readProperty_mShiftAmount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mShiftAmount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logicalRightShiftIR::setProperty_mShiftAmount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mShiftAmount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logicalRightShiftIR class
//--------------------------------------------------------------------------------------------------

cPtr_logicalRightShiftIR::cPtr_logicalRightShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
}

//--------------------------------------------------------------------------------------------------

cPtr_logicalRightShiftIR::cPtr_logicalRightShiftIR (const GGS_objectIR & in_mResult,
                                                    const GGS_objectIR & in_mSource,
                                                    const GGS_uint & in_mShiftAmount,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_logicalRightShiftIR::classDescriptor (void) const {
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

acPtr_class * cPtr_logicalRightShiftIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logicalRightShiftIR (mProperty_mResult, mProperty_mSource, mProperty_mShiftAmount, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @logicalRightShiftIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logicalRightShiftIR ("logicalRightShiftIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logicalRightShiftIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logicalRightShiftIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logicalRightShiftIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR GGS_logicalRightShiftIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_logicalRightShiftIR result ;
  const GGS_logicalRightShiftIR * p = (const GGS_logicalRightShiftIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logicalRightShiftIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalRightShiftIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logicalRightShiftIR_2E_weak::objectCompare (const GGS_logicalRightShiftIR_2E_weak & inOperand) const {
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

GGS_logicalRightShiftIR_2E_weak::GGS_logicalRightShiftIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR_2E_weak & GGS_logicalRightShiftIR_2E_weak::operator = (const GGS_logicalRightShiftIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR_2E_weak::GGS_logicalRightShiftIR_2E_weak (const GGS_logicalRightShiftIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR_2E_weak GGS_logicalRightShiftIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_logicalRightShiftIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR GGS_logicalRightShiftIR_2E_weak::unwrappedValue (void) const {
  GGS_logicalRightShiftIR result ;
  if (isValid ()) {
    const cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_logicalRightShiftIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR GGS_logicalRightShiftIR_2E_weak::bang_logicalRightShiftIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_logicalRightShiftIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logicalRightShiftIR) ;
      result = GGS_logicalRightShiftIR ((cPtr_logicalRightShiftIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @logicalRightShiftIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logicalRightShiftIR_2E_weak ("logicalRightShiftIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logicalRightShiftIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logicalRightShiftIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logicalRightShiftIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR_2E_weak GGS_logicalRightShiftIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_logicalRightShiftIR_2E_weak result ;
  const GGS_logicalRightShiftIR_2E_weak * p = (const GGS_logicalRightShiftIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logicalRightShiftIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalRightShiftIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalBooleanInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBooleanInExpressionAST::objectCompare (const GGS_literalBooleanInExpressionAST & inOperand) const {
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

GGS_literalBooleanInExpressionAST::GGS_literalBooleanInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST::
init_21_ (const GGS_bool & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalBooleanInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalBooleanInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalBooleanInExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalBooleanInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::
literalBooleanInExpressionAST_init_21_ (const GGS_bool & in_mValue,
                                        Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST::GGS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBooleanInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literalBooleanInExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalBooleanInExpressionAST::setProperty_mValue (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBooleanInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (const GGS_bool & in_mValue,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBooleanInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

void cPtr_literalBooleanInExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBooleanInExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalBooleanInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBooleanInExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBooleanInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBooleanInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ("literalBooleanInExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBooleanInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBooleanInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBooleanInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST result ;
  const GGS_literalBooleanInExpressionAST * p = (const GGS_literalBooleanInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBooleanInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBooleanInExpressionAST_2E_weak::objectCompare (const GGS_literalBooleanInExpressionAST_2E_weak & inOperand) const {
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

GGS_literalBooleanInExpressionAST_2E_weak::GGS_literalBooleanInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak & GGS_literalBooleanInExpressionAST_2E_weak::operator = (const GGS_literalBooleanInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak::GGS_literalBooleanInExpressionAST_2E_weak (const GGS_literalBooleanInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak GGS_literalBooleanInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalBooleanInExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalBooleanInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST_2E_weak::bang_literalBooleanInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalBooleanInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBooleanInExpressionAST) ;
      result = GGS_literalBooleanInExpressionAST ((cPtr_literalBooleanInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalBooleanInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ("literalBooleanInExpressionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBooleanInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBooleanInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBooleanInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak GGS_literalBooleanInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST_2E_weak result ;
  const GGS_literalBooleanInExpressionAST_2E_weak * p = (const GGS_literalBooleanInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBooleanInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum procFormalArgumentPassingMode
//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode::GGS_procFormalArgumentPassingMode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_procFormalArgumentPassingMode::class_func_input (UNUSED_LOCATION_ARGS) {
  GGS_procFormalArgumentPassingMode result ;
  result.mEnum = Enumeration::enum_input ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_procFormalArgumentPassingMode::class_func_output (UNUSED_LOCATION_ARGS) {
  GGS_procFormalArgumentPassingMode result ;
  result.mEnum = Enumeration::enum_output ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_procFormalArgumentPassingMode::class_func_inputOutput (UNUSED_LOCATION_ARGS) {
  GGS_procFormalArgumentPassingMode result ;
  result.mEnum = Enumeration::enum_inputOutput ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_procFormalArgumentPassingMode [4] = {
  "(not built)",
  "input",
  "output",
  "inputOutput"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procFormalArgumentPassingMode::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_input == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procFormalArgumentPassingMode::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_output == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procFormalArgumentPassingMode::getter_isInputOutput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_inputOutput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procFormalArgumentPassingMode::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @procFormalArgumentPassingMode: ") ;
  ioString.appendCString (gEnumNameArrayFor_procFormalArgumentPassingMode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procFormalArgumentPassingMode::objectCompare (const GGS_procFormalArgumentPassingMode & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @procFormalArgumentPassingMode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ("procFormalArgumentPassingMode",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procFormalArgumentPassingMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procFormalArgumentPassingMode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procFormalArgumentPassingMode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_procFormalArgumentPassingMode::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_procFormalArgumentPassingMode result ;
  const GGS_procFormalArgumentPassingMode * p = (const GGS_procFormalArgumentPassingMode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procFormalArgumentPassingMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentPassingMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@procFormalArgumentPassingMode formalPassingModeString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_formalPassingModeString (const GGS_procFormalArgumentPassingMode & inObject,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
    {
      result_result = GGS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_requiredActualPassingModeForSelector (const GGS_procFormalArgumentPassingMode & inObject,
                                                                 const GGS_string & constinArgument_inSelector,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
    {
      result_result = GGS_string ("!\?") ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inSelector.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result.plusAssignOperation(constinArgument_inSelector.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 39)) ;
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineTypedSignature typedString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typedString (const GGS_routineTypedSignature & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  const GGS_routineTypedSignature temp_0 = inObject ;
  UpEnumerator_routineTypedSignature enumerator_4990 (temp_0) ;
  while (enumerator_4990.hasCurrentObject ()) {
    result_result.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_4990.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (enumerator_4990.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (extensionGetter_key (enumerator_4990.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)) ;
    enumerator_4990.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 140)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineTypedSignature mangledName'
//--------------------------------------------------------------------------------------------------

GGS_lstring extensionGetter_mangledName (const GGS_routineTypedSignature & inObject,
                                         const GGS_string & constinArgument_inReceiverTypeName,
                                         const GGS_lstring & constinArgument_inFunctionName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_5418 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_5418.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)) ;
    }
  }
  var_s_5418.plusAssignOperation(constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 153)) ;
  const GGS_routineTypedSignature temp_1 = inObject ;
  UpEnumerator_routineTypedSignature enumerator_5579 (temp_1) ;
  while (enumerator_5579.hasCurrentObject ()) {
    var_s_5418.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_5579.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)).add_operation (enumerator_5579.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)) ;
    enumerator_5579.gotoNextObject () ;
  }
  var_s_5418.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 157)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_5418, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineFormalArgumentListAST routineSignature'
//--------------------------------------------------------------------------------------------------

GGS_lstring extensionGetter_routineSignature (const GGS_routineFormalArgumentListAST & inObject,
                                              const GGS_location & constinArgument_inRoutineNameLocation,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_key_7974 = GGS_string ("(") ;
  const GGS_routineFormalArgumentListAST temp_0 = inObject ;
  UpEnumerator_routineFormalArgumentListAST enumerator_8028 (temp_0) ;
  while (enumerator_8028.hasCurrentObject ()) {
    var_key_7974.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_8028.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)).add_operation (enumerator_8028.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)) ;
    enumerator_8028.gotoNextObject () ;
  }
  var_key_7974.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 208)) ;
  result_result = GGS_lstring::init_21__21_ (var_key_7974, constinArgument_inRoutineNameLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@effectiveArgumentListAST routineSignature'
//--------------------------------------------------------------------------------------------------

GGS_lstring extensionGetter_routineSignature (const GGS_effectiveArgumentListAST & inObject,
                                              const GGS_location & constinArgument_inRoutineNameLocation,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_key_8416 = GGS_string ("(") ;
  const GGS_effectiveArgumentListAST temp_0 = inObject ;
  UpEnumerator_effectiveArgumentListAST enumerator_8445 (temp_0) ;
  while (enumerator_8445.hasCurrentObject ()) {
    var_key_8416.plusAssignOperation(extensionGetter_matchingFormalArgument (enumerator_8445.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)).add_operation (enumerator_8445.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)) ;
    enumerator_8445.gotoNextObject () ;
  }
  var_key_8416.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 219)) ;
  result_result = GGS_lstring::init_21__21_ (var_key_8416, constinArgument_inRoutineNameLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum guardedCommandAST
//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST::GGS_guardedCommandAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST GGS_guardedCommandAST::class_func_boolean (const GGS_bool & inAssociatedValue0,
                                                                 const GGS_expressionAST & inAssociatedValue1,
                                                                 const GGS_location & inAssociatedValue2
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandAST result ;
  result.mEnum = Enumeration::enum_boolean ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardedCommandAST_2E_boolean (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST GGS_guardedCommandAST::class_func_boolAndSync (const GGS_bool & inAssociatedValue0,
                                                                     const GGS_expressionAST & inAssociatedValue1,
                                                                     const GGS_bool & inAssociatedValue2,
                                                                     const GGS_location & inAssociatedValue3,
                                                                     const GGS_lbool & inAssociatedValue4,
                                                                     const GGS_lstringlist & inAssociatedValue5,
                                                                     const GGS_effectiveArgumentListAST & inAssociatedValue6
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandAST result ;
  result.mEnum = Enumeration::enum_boolAndSync ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardedCommandAST_2E_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5, inAssociatedValue6)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST::method_extractBoolean (GGS_bool & outAssociatedValue_isExitCommand,
                                                   GGS_expressionAST & outAssociatedValue_expression,
                                                   GGS_location & outAssociatedValue_endOfExpression,
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
    const auto ptr = (GGS_guardedCommandAST_2E_boolean *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_expression = ptr->mProperty_expression ;
    outAssociatedValue_endOfExpression = ptr->mProperty_endOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST::method_extractBoolAndSync (GGS_bool & outAssociatedValue_isExitCommand,
                                                       GGS_expressionAST & outAssociatedValue_expression,
                                                       GGS_bool & outAssociatedValue_warnsOnStaticExpression,
                                                       GGS_location & outAssociatedValue_endOfExpression,
                                                       GGS_lbool & outAssociatedValue_usesSelf,
                                                       GGS_lstringlist & outAssociatedValue_nameList,
                                                       GGS_effectiveArgumentListAST & outAssociatedValue_effectiveParameterListAST,
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
    const auto ptr = (GGS_guardedCommandAST_2E_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
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

GGS_guardedCommandAST_2E_boolean_3F_ GGS_guardedCommandAST::getter_getBoolean (UNUSED_LOCATION_ARGS) const {
  GGS_guardedCommandAST_2E_boolean_3F_ result ;
  if (mEnum == Enumeration::enum_boolean) {
    const auto ptr = (const GGS_guardedCommandAST_2E_boolean *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardedCommandAST_2E_boolean (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST::getAssociatedValuesFor_boolean (GGS_bool & out_isExitCommand,
                                                            GGS_expressionAST & out_expression,
                                                            GGS_location & out_endOfExpression) const {
  const auto ptr = (const GGS_guardedCommandAST_2E_boolean *) mAssociatedValues.associatedValuesPointer () ;
  out_isExitCommand = ptr->mProperty_isExitCommand ;
  out_expression = ptr->mProperty_expression ;
  out_endOfExpression = ptr->mProperty_endOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST_2E_boolAndSync_3F_ GGS_guardedCommandAST::getter_getBoolAndSync (UNUSED_LOCATION_ARGS) const {
  GGS_guardedCommandAST_2E_boolAndSync_3F_ result ;
  if (mEnum == Enumeration::enum_boolAndSync) {
    const auto ptr = (const GGS_guardedCommandAST_2E_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardedCommandAST_2E_boolAndSync (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST::getAssociatedValuesFor_boolAndSync (GGS_bool & out_isExitCommand,
                                                                GGS_expressionAST & out_expression,
                                                                GGS_bool & out_warnsOnStaticExpression,
                                                                GGS_location & out_endOfExpression,
                                                                GGS_lbool & out_usesSelf,
                                                                GGS_lstringlist & out_nameList,
                                                                GGS_effectiveArgumentListAST & out_effectiveParameterListAST) const {
  const auto ptr = (const GGS_guardedCommandAST_2E_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
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

GGS_bool GGS_guardedCommandAST::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolean == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardedCommandAST::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolAndSync == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardedCommandAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardedCommandAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @guardedCommandAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST ("guardedCommandAST",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST GGS_guardedCommandAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_guardedCommandAST result ;
  const GGS_guardedCommandAST * p = (const GGS_guardedCommandAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandAST *> (p)) {
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

ComparisonResult GGS_syncInstructionAST::objectCompare (const GGS_syncInstructionAST & inOperand) const {
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

GGS_syncInstructionAST::GGS_syncInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syncInstructionAST GGS_syncInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_syncInstructionBranchListAST & in_mBranchList,
                  const GGS_location & in_mEndOf_5F_on_5F_instruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_syncInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_syncInstructionAST (inCompiler COMMA_THERE)) ;
  object->syncInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mBranchList, in_mEndOf_5F_on_5F_instruction, inCompiler) ;
  const GGS_syncInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::
syncInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                     const GGS_syncInstructionBranchListAST & in_mBranchList,
                                     const GGS_location & in_mEndOf_5F_on_5F_instruction,
                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBranchList = in_mBranchList ;
  mProperty_mEndOf_5F_on_5F_instruction = in_mEndOf_5F_on_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionAST::GGS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionAST::readProperty_mBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syncInstructionBranchListAST () ;
  }else{
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    return p->mProperty_mBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionAST::setProperty_mBranchList (const GGS_syncInstructionBranchListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    p->mProperty_mBranchList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_syncInstructionAST::readProperty_mEndOf_5F_on_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    return p->mProperty_mEndOf_5F_on_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionAST::setProperty_mEndOf_5F_on_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionAST) ;
    p->mProperty_mEndOf_5F_on_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionAST::cPtr_syncInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mBranchList (),
mProperty_mEndOf_5F_on_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionAST::cPtr_syncInstructionAST (const GGS_location & in_mInstructionLocation,
                                                  const GGS_syncInstructionBranchListAST & in_mBranchList,
                                                  const GGS_location & in_mEndOf_5F_on_5F_instruction,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBranchList (),
mProperty_mEndOf_5F_on_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBranchList = in_mBranchList ;
  mProperty_mEndOf_5F_on_5F_instruction = in_mEndOf_5F_on_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syncInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_syncInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncInstructionAST (mProperty_mInstructionLocation, mProperty_mBranchList, mProperty_mEndOf_5F_on_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @syncInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionAST ("syncInstructionAST",
                                                                       & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionAST GGS_syncInstructionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_syncInstructionAST result ;
  const GGS_syncInstructionAST * p = (const GGS_syncInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncInstructionAST_2E_weak::objectCompare (const GGS_syncInstructionAST_2E_weak & inOperand) const {
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

GGS_syncInstructionAST_2E_weak::GGS_syncInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionAST_2E_weak & GGS_syncInstructionAST_2E_weak::operator = (const GGS_syncInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionAST_2E_weak::GGS_syncInstructionAST_2E_weak (const GGS_syncInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syncInstructionAST_2E_weak GGS_syncInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syncInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionAST GGS_syncInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_syncInstructionAST result ;
  if (isValid ()) {
    const cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_syncInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionAST GGS_syncInstructionAST_2E_weak::bang_syncInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncInstructionAST) ;
      result = GGS_syncInstructionAST ((cPtr_syncInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syncInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionAST_2E_weak ("syncInstructionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionAST_2E_weak GGS_syncInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_syncInstructionAST_2E_weak result ;
  const GGS_syncInstructionAST_2E_weak * p = (const GGS_syncInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum guardedCommandIR
//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR::GGS_guardedCommandIR (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR GGS_guardedCommandIR::class_func_booleanGuard (const GGS_bool & inAssociatedValue0,
                                                                    const GGS_instructionListIR & inAssociatedValue1,
                                                                    const GGS_string & inAssociatedValue2
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR result ;
  result.mEnum = Enumeration::enum_booleanGuard ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardedCommandIR_2E_booleanGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR GGS_guardedCommandIR::class_func_sync (const GGS_bool & inAssociatedValue0,
                                                            const GGS_string & inAssociatedValue1,
                                                            const GGS_instructionListIR & inAssociatedValue2,
                                                            const GGS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR result ;
  result.mEnum = Enumeration::enum_sync ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardedCommandIR_2E_sync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR GGS_guardedCommandIR::class_func_boolAndSync (const GGS_bool & inAssociatedValue0,
                                                                   const GGS_instructionListIR & inAssociatedValue1,
                                                                   const GGS_string & inAssociatedValue2,
                                                                   const GGS_string & inAssociatedValue3,
                                                                   const GGS_instructionListIR & inAssociatedValue4,
                                                                   const GGS_procCallEffectiveParameterListIR & inAssociatedValue5
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIR result ;
  result.mEnum = Enumeration::enum_boolAndSync ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardedCommandIR_2E_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR::method_extractBooleanGuard (GGS_bool & outAssociatedValue_isExitCommand,
                                                       GGS_instructionListIR & outAssociatedValue_instructionGenerationList,
                                                       GGS_string & outAssociatedValue_boolGuardBoolLLVMName,
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
    const auto ptr = (GGS_guardedCommandIR_2E_booleanGuard *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_instructionGenerationList = ptr->mProperty_instructionGenerationList ;
    outAssociatedValue_boolGuardBoolLLVMName = ptr->mProperty_boolGuardBoolLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR::method_extractSync (GGS_bool & outAssociatedValue_isExitCommand,
                                               GGS_string & outAssociatedValue_guardMangledName,
                                               GGS_instructionListIR & outAssociatedValue_guardInstructionGenerationList,
                                               GGS_procCallEffectiveParameterListIR & outAssociatedValue_effectiveParameterListIR,
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
    const auto ptr = (GGS_guardedCommandIR_2E_sync *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_guardMangledName = ptr->mProperty_guardMangledName ;
    outAssociatedValue_guardInstructionGenerationList = ptr->mProperty_guardInstructionGenerationList ;
    outAssociatedValue_effectiveParameterListIR = ptr->mProperty_effectiveParameterListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR::method_extractBoolAndSync (GGS_bool & outAssociatedValue_isExitCommand,
                                                      GGS_instructionListIR & outAssociatedValue_boolExpInstructionGenerationList,
                                                      GGS_string & outAssociatedValue_boolGuardBoolLLVMName,
                                                      GGS_string & outAssociatedValue_guardMangledName,
                                                      GGS_instructionListIR & outAssociatedValue_guardInstructionGenerationList,
                                                      GGS_procCallEffectiveParameterListIR & outAssociatedValue_effectiveParameterListIR,
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
    const auto ptr = (GGS_guardedCommandIR_2E_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isExitCommand = ptr->mProperty_isExitCommand ;
    outAssociatedValue_boolExpInstructionGenerationList = ptr->mProperty_boolExpInstructionGenerationList ;
    outAssociatedValue_boolGuardBoolLLVMName = ptr->mProperty_boolGuardBoolLLVMName ;
    outAssociatedValue_guardMangledName = ptr->mProperty_guardMangledName ;
    outAssociatedValue_guardInstructionGenerationList = ptr->mProperty_guardInstructionGenerationList ;
    outAssociatedValue_effectiveParameterListIR = ptr->mProperty_effectiveParameterListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_booleanGuard_3F_ GGS_guardedCommandIR::getter_getBooleanGuard (UNUSED_LOCATION_ARGS) const {
  GGS_guardedCommandIR_2E_booleanGuard_3F_ result ;
  if (mEnum == Enumeration::enum_booleanGuard) {
    const auto ptr = (const GGS_guardedCommandIR_2E_booleanGuard *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardedCommandIR_2E_booleanGuard (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR::getAssociatedValuesFor_booleanGuard (GGS_bool & out_isExitCommand,
                                                                GGS_instructionListIR & out_instructionGenerationList,
                                                                GGS_string & out_boolGuardBoolLLVMName) const {
  const auto ptr = (const GGS_guardedCommandIR_2E_booleanGuard *) mAssociatedValues.associatedValuesPointer () ;
  out_isExitCommand = ptr->mProperty_isExitCommand ;
  out_instructionGenerationList = ptr->mProperty_instructionGenerationList ;
  out_boolGuardBoolLLVMName = ptr->mProperty_boolGuardBoolLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_sync_3F_ GGS_guardedCommandIR::getter_getSync (UNUSED_LOCATION_ARGS) const {
  GGS_guardedCommandIR_2E_sync_3F_ result ;
  if (mEnum == Enumeration::enum_sync) {
    const auto ptr = (const GGS_guardedCommandIR_2E_sync *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardedCommandIR_2E_sync (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR::getAssociatedValuesFor_sync (GGS_bool & out_isExitCommand,
                                                        GGS_string & out_guardMangledName,
                                                        GGS_instructionListIR & out_guardInstructionGenerationList,
                                                        GGS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const {
  const auto ptr = (const GGS_guardedCommandIR_2E_sync *) mAssociatedValues.associatedValuesPointer () ;
  out_isExitCommand = ptr->mProperty_isExitCommand ;
  out_guardMangledName = ptr->mProperty_guardMangledName ;
  out_guardInstructionGenerationList = ptr->mProperty_guardInstructionGenerationList ;
  out_effectiveParameterListIR = ptr->mProperty_effectiveParameterListIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR_2E_boolAndSync_3F_ GGS_guardedCommandIR::getter_getBoolAndSync (UNUSED_LOCATION_ARGS) const {
  GGS_guardedCommandIR_2E_boolAndSync_3F_ result ;
  if (mEnum == Enumeration::enum_boolAndSync) {
    const auto ptr = (const GGS_guardedCommandIR_2E_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardedCommandIR_2E_boolAndSync (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR::getAssociatedValuesFor_boolAndSync (GGS_bool & out_isExitCommand,
                                                               GGS_instructionListIR & out_boolExpInstructionGenerationList,
                                                               GGS_string & out_boolGuardBoolLLVMName,
                                                               GGS_string & out_guardMangledName,
                                                               GGS_instructionListIR & out_guardInstructionGenerationList,
                                                               GGS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const {
  const auto ptr = (const GGS_guardedCommandIR_2E_boolAndSync *) mAssociatedValues.associatedValuesPointer () ;
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

GGS_bool GGS_guardedCommandIR::getter_isBooleanGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_booleanGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardedCommandIR::getter_isSync (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sync == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardedCommandIR::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolAndSync == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIR::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardedCommandIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardedCommandIR [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @guardedCommandIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR ("guardedCommandIR",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR GGS_guardedCommandIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIR result ;
  const GGS_guardedCommandIR * p = (const GGS_guardedCommandIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syncInstructionBranchListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syncInstructionBranchListIR : public cCollectionElement {
  public: GGS_syncInstructionBranchListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_syncInstructionBranchListIR (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                          const GGS_instructionListIR & in_mInstructionGenerationList
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListIR::cCollectionElement_syncInstructionBranchListIR (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                                                                const GGS_instructionListIR & in_mInstructionGenerationList
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionGenerationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListIR::cCollectionElement_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @syncInstructionBranchListIR
//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR::GGS_syncInstructionBranchListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR::GGS_syncInstructionBranchListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    const GGS_syncInstructionBranchListIR_2E_element element (p->mObject.mProperty_mGuardedCommand, p->mObject.mProperty_mInstructionGenerationList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_guardedCommandIR & in_mGuardedCommand,
                                                                 const GGS_instructionListIR & in_mInstructionGenerationList
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (in_mGuardedCommand, in_mInstructionGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syncInstructionBranchListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syncInstructionBranchListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::description (String & ioString,
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
      ioString.appendString ("mGuardedCommand:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGuardedCommand.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionGenerationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionGenerationList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syncInstructionBranchListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::plusPlusAssignOperation (const GGS_syncInstructionBranchListIR_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::class_func_listWithValue (const GGS_guardedCommandIR & inOperand0,
                                                                                           const GGS_instructionListIR & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_syncInstructionBranchListIR_2E_element element (inOperand0, inOperand1) ;
  GGS_syncInstructionBranchListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::addAssignOperation (const GGS_guardedCommandIR & inOperand0,
                                                          const GGS_instructionListIR & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  const GGS_syncInstructionBranchListIR_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::setter_append (const GGS_guardedCommandIR inOperand0,
                                                     const GGS_instructionListIR inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_syncInstructionBranchListIR_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::setter_insertAtIndex (const GGS_guardedCommandIR inOperand0,
                                                            const GGS_instructionListIR inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_syncInstructionBranchListIR_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_syncInstructionBranchListIR::setter_removeAtIndex (GGS_guardedCommandIR & outOperand0,
                                                            GGS_instructionListIR & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInstructionGenerationList ;
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
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::setter_popFirst (GGS_guardedCommandIR & outOperand0,
                                                       GGS_instructionListIR & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionGenerationList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::setter_popLast (GGS_guardedCommandIR & outOperand0,
                                                      GGS_instructionListIR & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionGenerationList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::method_first (GGS_guardedCommandIR & outOperand0,
                                                    GGS_instructionListIR & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionGenerationList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::method_last (GGS_guardedCommandIR & outOperand0,
                                                   GGS_instructionListIR & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionGenerationList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::add_operation (const GGS_syncInstructionBranchListIR & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result ;
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

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result ;
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

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::plusAssignOperation (const GGS_syncInstructionBranchListIR inList,
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

void GGS_syncInstructionBranchListIR::setter_setMGuardedCommandAtIndex (GGS_guardedCommandIR inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGuardedCommand = inOperand ;
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
  
GGS_guardedCommandIR GGS_syncInstructionBranchListIR::getter_mGuardedCommandAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGuardedCommand ;
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

void GGS_syncInstructionBranchListIR::setter_setMInstructionGenerationListAtIndex (GGS_instructionListIR inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionGenerationList = inOperand ;
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
  
GGS_instructionListIR GGS_syncInstructionBranchListIR::getter_mInstructionGenerationListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionGenerationList ;
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
// Down Enumerator for @syncInstructionBranchListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_syncInstructionBranchListIR::DownEnumerator_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element DownEnumerator_syncInstructionBranchListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR DownEnumerator_syncInstructionBranchListIR::current_mGuardedCommand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR DownEnumerator_syncInstructionBranchListIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionGenerationList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syncInstructionBranchListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_syncInstructionBranchListIR::UpEnumerator_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element UpEnumerator_syncInstructionBranchListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR UpEnumerator_syncInstructionBranchListIR::current_mGuardedCommand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR UpEnumerator_syncInstructionBranchListIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionGenerationList ;
}




//--------------------------------------------------------------------------------------------------
//     @syncInstructionBranchListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR ("syncInstructionBranchListIR",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncInstructionBranchListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionBranchListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionBranchListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_syncInstructionBranchListIR result ;
  const GGS_syncInstructionBranchListIR * p = (const GGS_syncInstructionBranchListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionBranchListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guardedCommandIRList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guardedCommandIRList : public cCollectionElement {
  public: GGS_guardedCommandIRList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_guardedCommandIRList (const GGS_guardedCommandIR & in_mGuardedCommand
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guardedCommandIRList (const GGS_guardedCommandIRList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guardedCommandIRList::cCollectionElement_guardedCommandIRList (const GGS_guardedCommandIR & in_mGuardedCommand
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guardedCommandIRList::cCollectionElement_guardedCommandIRList (const GGS_guardedCommandIRList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @guardedCommandIRList
//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList::GGS_guardedCommandIRList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList::GGS_guardedCommandIRList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    const GGS_guardedCommandIRList_2E_element element (p->mObject.mProperty_mGuardedCommand) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_guardedCommandIR & in_mGuardedCommand
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_guardedCommandIRList * p = nullptr ;
  macroMyNew (p, cCollectionElement_guardedCommandIRList (in_mGuardedCommand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guardedCommandIRList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_guardedCommandIRList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::description (String & ioString,
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
      ioString.appendString ("mGuardedCommand:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGuardedCommand.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIRList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::plusPlusAssignOperation (const GGS_guardedCommandIRList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::class_func_listWithValue (const GGS_guardedCommandIR & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_guardedCommandIRList_2E_element element (inOperand0) ;
  GGS_guardedCommandIRList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::addAssignOperation (const GGS_guardedCommandIR & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  const GGS_guardedCommandIRList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::setter_append (const GGS_guardedCommandIR inOperand0,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_guardedCommandIRList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::setter_insertAtIndex (const GGS_guardedCommandIR inOperand0,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_guardedCommandIRList_2E_element newElement (inOperand0) ;
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

void GGS_guardedCommandIRList::setter_removeAtIndex (GGS_guardedCommandIR & outOperand0,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGuardedCommand ;
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

void GGS_guardedCommandIRList::setter_popFirst (GGS_guardedCommandIR & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGuardedCommand ;
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

void GGS_guardedCommandIRList::setter_popLast (GGS_guardedCommandIR & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGuardedCommand ;
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

void GGS_guardedCommandIRList::method_first (GGS_guardedCommandIR & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGuardedCommand ;
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

void GGS_guardedCommandIRList::method_last (GGS_guardedCommandIR & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGuardedCommand ;
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

GGS_guardedCommandIRList GGS_guardedCommandIRList::add_operation (const GGS_guardedCommandIRList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result ;
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

GGS_guardedCommandIRList GGS_guardedCommandIRList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result ;
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

GGS_guardedCommandIRList GGS_guardedCommandIRList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::plusAssignOperation (const GGS_guardedCommandIRList inList,
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

void GGS_guardedCommandIRList::setter_setMGuardedCommandAtIndex (GGS_guardedCommandIR inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGuardedCommand = inOperand ;
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
  
GGS_guardedCommandIR GGS_guardedCommandIRList::getter_mGuardedCommandAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGuardedCommand ;
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
// Down Enumerator for @guardedCommandIRList
//--------------------------------------------------------------------------------------------------

DownEnumerator_guardedCommandIRList::DownEnumerator_guardedCommandIRList (const GGS_guardedCommandIRList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element DownEnumerator_guardedCommandIRList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR DownEnumerator_guardedCommandIRList::current_mGuardedCommand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGuardedCommand ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guardedCommandIRList
//--------------------------------------------------------------------------------------------------

UpEnumerator_guardedCommandIRList::UpEnumerator_guardedCommandIRList (const GGS_guardedCommandIRList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element UpEnumerator_guardedCommandIRList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR UpEnumerator_guardedCommandIRList::current_mGuardedCommand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGuardedCommand ;
}




//--------------------------------------------------------------------------------------------------
//     @guardedCommandIRList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIRList ("guardedCommandIRList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardedCommandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIRList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardedCommandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardedCommandIRList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIRList result ;
  const GGS_guardedCommandIRList * p = (const GGS_guardedCommandIRList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardedCommandIRList *> (p)) {
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

ComparisonResult GGS_syncInstructionIR::objectCompare (const GGS_syncInstructionIR & inOperand) const {
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

GGS_syncInstructionIR::GGS_syncInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syncInstructionIR GGS_syncInstructionIR::
init_21__21_ (const GGS_location & in_mSelectInstructionLocation,
              const GGS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syncInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_syncInstructionIR (inCompiler COMMA_THERE)) ;
  object->syncInstructionIR_init_21__21_ (in_mSelectInstructionLocation, in_mOnInstructionBranchListIR, inCompiler) ;
  const GGS_syncInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::
syncInstructionIR_init_21__21_ (const GGS_location & in_mSelectInstructionLocation,
                                const GGS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
                                Compiler * /* inCompiler */) {
  mProperty_mSelectInstructionLocation = in_mSelectInstructionLocation ;
  mProperty_mOnInstructionBranchListIR = in_mOnInstructionBranchListIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionIR::GGS_syncInstructionIR (const cPtr_syncInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_syncInstructionIR::readProperty_mSelectInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    return p->mProperty_mSelectInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionIR::setProperty_mSelectInstructionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    p->mProperty_mSelectInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionIR::readProperty_mOnInstructionBranchListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syncInstructionBranchListIR () ;
  }else{
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    return p->mProperty_mOnInstructionBranchListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionIR::setProperty_mOnInstructionBranchListIR (const GGS_syncInstructionBranchListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    p->mProperty_mOnInstructionBranchListIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionIR::cPtr_syncInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mSelectInstructionLocation (),
mProperty_mOnInstructionBranchListIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GGS_location & in_mSelectInstructionLocation,
                                                const GGS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mSelectInstructionLocation (),
mProperty_mOnInstructionBranchListIR () {
  mProperty_mSelectInstructionLocation = in_mSelectInstructionLocation ;
  mProperty_mOnInstructionBranchListIR = in_mOnInstructionBranchListIR ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syncInstructionIR::classDescriptor (void) const {
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

acPtr_class * cPtr_syncInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncInstructionIR (mProperty_mSelectInstructionLocation, mProperty_mOnInstructionBranchListIR, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @syncInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionIR ("syncInstructionIR",
                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionIR GGS_syncInstructionIR::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_syncInstructionIR result ;
  const GGS_syncInstructionIR * p = (const GGS_syncInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncInstructionIR_2E_weak::objectCompare (const GGS_syncInstructionIR_2E_weak & inOperand) const {
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

GGS_syncInstructionIR_2E_weak::GGS_syncInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionIR_2E_weak & GGS_syncInstructionIR_2E_weak::operator = (const GGS_syncInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionIR_2E_weak::GGS_syncInstructionIR_2E_weak (const GGS_syncInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syncInstructionIR_2E_weak GGS_syncInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syncInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionIR GGS_syncInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_syncInstructionIR result ;
  if (isValid ()) {
    const cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_syncInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionIR GGS_syncInstructionIR_2E_weak::bang_syncInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncInstructionIR) ;
      result = GGS_syncInstructionIR ((cPtr_syncInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syncInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionIR_2E_weak ("syncInstructionIR.weak",
                                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionIR_2E_weak GGS_syncInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_syncInstructionIR_2E_weak result ;
  const GGS_syncInstructionIR_2E_weak * p = (const GGS_syncInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncToolInstanceDeclarationAST_2E_weak::objectCompare (const GGS_syncToolInstanceDeclarationAST_2E_weak & inOperand) const {
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

GGS_syncToolInstanceDeclarationAST_2E_weak::GGS_syncToolInstanceDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST_2E_weak & GGS_syncToolInstanceDeclarationAST_2E_weak::operator = (const GGS_syncToolInstanceDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST_2E_weak::GGS_syncToolInstanceDeclarationAST_2E_weak (const GGS_syncToolInstanceDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST_2E_weak GGS_syncToolInstanceDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syncToolInstanceDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_syncToolInstanceDeclarationAST result ;
  if (isValid ()) {
    const cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_syncToolInstanceDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST_2E_weak::bang_syncToolInstanceDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syncToolInstanceDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncToolInstanceDeclarationAST) ;
      result = GGS_syncToolInstanceDeclarationAST ((cPtr_syncToolInstanceDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syncToolInstanceDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2E_weak ("syncToolInstanceDeclarationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncToolInstanceDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncToolInstanceDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncToolInstanceDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST_2E_weak GGS_syncToolInstanceDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syncToolInstanceDeclarationAST_2E_weak result ;
  const GGS_syncToolInstanceDeclarationAST_2E_weak * p = (const GGS_syncToolInstanceDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncToolInstanceDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncToolInstanceDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @globalSyncInstanceMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap::GGS_globalSyncInstanceMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap::~ GGS_globalSyncInstanceMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap::GGS_globalSyncInstanceMap (const GGS_globalSyncInstanceMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap & GGS_globalSyncInstanceMap::operator = (const GGS_globalSyncInstanceMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_globalSyncInstanceMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_globalSyncInstanceMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalSyncInstanceMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalSyncInstanceMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_globalSyncInstanceMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_globalSyncInstanceMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalSyncInstanceMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::performInsert (const GGS_globalSyncInstanceMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_globalSyncInstanceMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element>
GGS_globalSyncInstanceMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_globalSyncInstanceMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element>>
GGS_globalSyncInstanceMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_globalSyncInstanceMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element_3F_ GGS_globalSyncInstanceMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_globalSyncInstanceMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_globalSyncInstanceMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_type = info->mProperty_type ;
      element.mProperty_initialValue = info->mProperty_initialValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::class_func_mapWithMapToOverride (const GGS_globalSyncInstanceMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_omnibusType inArgument0,
                                                  GGS_objectIR inArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_globalSyncInstanceMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' global variable is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::method_searchKey (GGS_lstring inLKey,
                                                  GGS_omnibusType & outArgument0,
                                                  GGS_objectIR & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' global variable" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_type ;
    outArgument1 = info->mProperty_initialValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_globalSyncInstanceMap::getter_typeForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_type ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_globalSyncInstanceMap::getter_initialValueForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_initialValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::setter_setTypeForKey (GGS_omnibusType inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_globalSyncInstanceMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_type = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::setter_setInitialValueForKey (GGS_objectIR inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_globalSyncInstanceMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_initialValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_globalSyncInstanceMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element>> & inArray,
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
    ioString.appendString ("type:") ;
    inArray (i COMMA_HERE)->mProperty_type.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("initialValue:") ;
    inArray (i COMMA_HERE)->mProperty_initialValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element>> array = sortedInfoArray () ;
    GGS_globalSyncInstanceMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_globalSyncInstanceMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @globalSyncInstanceMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_globalSyncInstanceMap::DownEnumerator_globalSyncInstanceMap (const GGS_globalSyncInstanceMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element DownEnumerator_globalSyncInstanceMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_globalSyncInstanceMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_globalSyncInstanceMap::current_type (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_globalSyncInstanceMap::current_initialValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_initialValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @globalSyncInstanceMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_globalSyncInstanceMap::UpEnumerator_globalSyncInstanceMap (const GGS_globalSyncInstanceMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element UpEnumerator_globalSyncInstanceMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_globalSyncInstanceMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_globalSyncInstanceMap::current_type (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_globalSyncInstanceMap::current_initialValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_initialValue ;
}


//--------------------------------------------------------------------------------------------------
//     @globalSyncInstanceMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap ("globalSyncInstanceMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalSyncInstanceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap result ;
  const GGS_globalSyncInstanceMap * p = (const GGS_globalSyncInstanceMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedSyncInstance_2E_weak::objectCompare (const GGS_decoratedSyncInstance_2E_weak & inOperand) const {
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

GGS_decoratedSyncInstance_2E_weak::GGS_decoratedSyncInstance_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance_2E_weak & GGS_decoratedSyncInstance_2E_weak::operator = (const GGS_decoratedSyncInstance & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance_2E_weak::GGS_decoratedSyncInstance_2E_weak (const GGS_decoratedSyncInstance & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance_2E_weak GGS_decoratedSyncInstance_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedSyncInstance_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance_2E_weak::unwrappedValue (void) const {
  GGS_decoratedSyncInstance result ;
  if (isValid ()) {
    const cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedSyncInstance (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance_2E_weak::bang_decoratedSyncInstance_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedSyncInstance result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedSyncInstance) ;
      result = GGS_decoratedSyncInstance ((cPtr_decoratedSyncInstance *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedSyncInstance.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance_2E_weak ("decoratedSyncInstance.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedSyncInstance_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedSyncInstance_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedSyncInstance_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance_2E_weak GGS_decoratedSyncInstance_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedSyncInstance_2E_weak result ;
  const GGS_decoratedSyncInstance_2E_weak * p = (const GGS_decoratedSyncInstance_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedSyncInstance_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedSyncInstance.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @globalSyncInstanceMapIR
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR::GGS_globalSyncInstanceMapIR (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR::~ GGS_globalSyncInstanceMapIR (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR::GGS_globalSyncInstanceMapIR (const GGS_globalSyncInstanceMapIR & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR & GGS_globalSyncInstanceMapIR::operator = (const GGS_globalSyncInstanceMapIR & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_globalSyncInstanceMapIR::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_globalSyncInstanceMapIR::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalSyncInstanceMapIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalSyncInstanceMapIR::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_globalSyncInstanceMapIR::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_globalSyncInstanceMapIR::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalSyncInstanceMapIR::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMapIR_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::performInsert (const GGS_globalSyncInstanceMapIR_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_globalSyncInstanceMapIR_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>
GGS_globalSyncInstanceMapIR::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_globalSyncInstanceMapIR::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>>
GGS_globalSyncInstanceMapIR::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_globalSyncInstanceMapIR::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element_3F_ GGS_globalSyncInstanceMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_globalSyncInstanceMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_globalSyncInstanceMapIR_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInitialValue = info->mProperty_mInitialValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::class_func_mapWithMapToOverride (const GGS_globalSyncInstanceMapIR & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMapIR_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMapIR result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_objectIR inArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_globalSyncInstanceMapIR_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_globalSyncInstanceMapIR::getter_mInitialValueForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInitialValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::setter_setMInitialValueForKey (GGS_objectIR inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_globalSyncInstanceMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInitialValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_globalSyncInstanceMapIR_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>> & inArray,
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
    ioString.appendString ("mInitialValue:") ;
    inArray (i COMMA_HERE)->mProperty_mInitialValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>> array = sortedInfoArray () ;
    GGS_globalSyncInstanceMapIR_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMapIR_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_globalSyncInstanceMapIR_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @globalSyncInstanceMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_globalSyncInstanceMapIR::DownEnumerator_globalSyncInstanceMapIR (const GGS_globalSyncInstanceMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element DownEnumerator_globalSyncInstanceMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_globalSyncInstanceMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_globalSyncInstanceMapIR::current_mInitialValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitialValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @globalSyncInstanceMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_globalSyncInstanceMapIR::UpEnumerator_globalSyncInstanceMapIR (const GGS_globalSyncInstanceMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element UpEnumerator_globalSyncInstanceMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_globalSyncInstanceMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_globalSyncInstanceMapIR::current_mInitialValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitialValue ;
}


//--------------------------------------------------------------------------------------------------
//     @globalSyncInstanceMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ("globalSyncInstanceMapIR",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalSyncInstanceMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR result ;
  const GGS_globalSyncInstanceMapIR * p = (const GGS_globalSyncInstanceMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @routineMapForContext
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext::GGS_routineMapForContext (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext::~ GGS_routineMapForContext (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext::GGS_routineMapForContext (const GGS_routineMapForContext & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext & GGS_routineMapForContext::operator = (const GGS_routineMapForContext & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineMapForContext result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMapForContext::getter_hasKey (const GGS_string & inKey
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMapForContext::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineMapForContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineMapForContext::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_routineMapForContext::getter_locationForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_routineMapForContext::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMapForContext::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineMapForContext_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::performInsert (const GGS_routineMapForContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_routineMapForContext_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element>
GGS_routineMapForContext::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_routineMapForContext::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element>>
GGS_routineMapForContext::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineMapForContext::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element_3F_ GGS_routineMapForContext
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineMapForContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_routineMapForContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineMapForContext_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIsPublic = info->mProperty_mIsPublic ;
      element.mProperty_mSignature = info->mProperty_mSignature ;
      element.mProperty_mReturnTypeProxy = info->mProperty_mReturnTypeProxy ;
      element.mProperty_mModeDictionary = info->mProperty_mModeDictionary ;
      element.mProperty_mIsExported = info->mProperty_mIsExported ;
      element.mProperty_mFunctionMode = info->mProperty_mFunctionMode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::class_func_mapWithMapToOverride (const GGS_routineMapForContext & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineMapForContext result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineMapForContext_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_routineMapForContext result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_insertKey (GGS_lstring inLKey,
                                                 GGS_bool inArgument0,
                                                 GGS_routineTypedSignature inArgument1,
                                                 GGS_unifiedTypeMapEntry inArgument2,
                                                 GGS_routineLLVMNameDict inArgument3,
                                                 GGS_bool inArgument4,
                                                 GGS_mode inArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_routineMapForContext_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::method_searchKey (GGS_lstring inLKey,
                                                 GGS_bool & outArgument0,
                                                 GGS_routineTypedSignature & outArgument1,
                                                 GGS_unifiedTypeMapEntry & outArgument2,
                                                 GGS_routineLLVMNameDict & outArgument3,
                                                 GGS_bool & outArgument4,
                                                 GGS_mode & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' function" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    outArgument0 = info->mProperty_mIsPublic ;
    outArgument1 = info->mProperty_mSignature ;
    outArgument2 = info->mProperty_mReturnTypeProxy ;
    outArgument3 = info->mProperty_mModeDictionary ;
    outArgument4 = info->mProperty_mIsExported ;
    outArgument5 = info->mProperty_mFunctionMode ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMapForContext::getter_mIsPublicForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsPublic ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineMapForContext::getter_mSignatureForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_routineMapForContext::getter_mReturnTypeProxyForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReturnTypeProxy ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineMapForContext::getter_mModeDictionaryForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineLLVMNameDict result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mModeDictionary ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMapForContext::getter_mIsExportedForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsExported ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_mode GGS_routineMapForContext::getter_mFunctionModeForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_mode result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFunctionMode ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMIsPublicForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsPublic = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMSignatureForKey (GGS_routineTypedSignature inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMReturnTypeProxyForKey (GGS_unifiedTypeMapEntry inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReturnTypeProxy = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMModeDictionaryForKey (GGS_routineLLVMNameDict inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mModeDictionary = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMIsExportedForKey (GGS_bool inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsExported = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMFunctionModeForKey (GGS_mode inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFunctionMode = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_routineMapForContext_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element>> & inArray,
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
    ioString.appendString ("mIsPublic:") ;
    inArray (i COMMA_HERE)->mProperty_mIsPublic.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mReturnTypeProxy:") ;
    inArray (i COMMA_HERE)->mProperty_mReturnTypeProxy.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mModeDictionary:") ;
    inArray (i COMMA_HERE)->mProperty_mModeDictionary.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsExported:") ;
    inArray (i COMMA_HERE)->mProperty_mIsExported.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFunctionMode:") ;
    inArray (i COMMA_HERE)->mProperty_mFunctionMode.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element>> array = sortedInfoArray () ;
    GGS_routineMapForContext_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_routineMapForContext_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_routineMapForContext_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineMapForContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineMapForContext::DownEnumerator_routineMapForContext (const GGS_routineMapForContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element DownEnumerator_routineMapForContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineMapForContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsPublic ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature DownEnumerator_routineMapForContext::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_routineMapForContext::current_mReturnTypeProxy (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict DownEnumerator_routineMapForContext::current_mModeDictionary (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mModeDictionary ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineMapForContext::current_mIsExported (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsExported ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_routineMapForContext::current_mFunctionMode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFunctionMode ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineMapForContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineMapForContext::UpEnumerator_routineMapForContext (const GGS_routineMapForContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element UpEnumerator_routineMapForContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineMapForContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsPublic ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature UpEnumerator_routineMapForContext::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_routineMapForContext::current_mReturnTypeProxy (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict UpEnumerator_routineMapForContext::current_mModeDictionary (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mModeDictionary ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineMapForContext::current_mIsExported (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsExported ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_routineMapForContext::current_mFunctionMode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFunctionMode ;
}


//--------------------------------------------------------------------------------------------------
//     @routineMapForContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMapForContext ("routineMapForContext",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMapForContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_routineMapForContext result ;
  const GGS_routineMapForContext * p = (const GGS_routineMapForContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @globalConstantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap::GGS_globalConstantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap::~ GGS_globalConstantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap::GGS_globalConstantMap (const GGS_globalConstantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap & GGS_globalConstantMap::operator = (const GGS_globalConstantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_globalConstantMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_globalConstantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalConstantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalConstantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_globalConstantMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_globalConstantMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalConstantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_globalConstantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::performInsert (const GGS_globalConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_globalConstantMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element>
GGS_globalConstantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_globalConstantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element>>
GGS_globalConstantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_globalConstantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_ GGS_globalConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_globalConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_globalConstantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mValue = info->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::class_func_mapWithMapToOverride (const GGS_globalConstantMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_globalConstantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_globalConstantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_objectIR inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_globalConstantMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_objectIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' constant" ;
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

GGS_objectIR GGS_globalConstantMap::getter_mValueForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element> info = infoForKey (key) ;
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

void GGS_globalConstantMap::setter_setMValueForKey (GGS_objectIR inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_globalConstantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_globalConstantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element>> & inArray,
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

void GGS_globalConstantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element>> array = sortedInfoArray () ;
    GGS_globalConstantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_globalConstantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_globalConstantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @globalConstantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_globalConstantMap::DownEnumerator_globalConstantMap (const GGS_globalConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element DownEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @globalConstantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_globalConstantMap::UpEnumerator_globalConstantMap (const GGS_globalConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element UpEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}


//--------------------------------------------------------------------------------------------------
//     @globalConstantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap ("globalConstantMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap result ;
  const GGS_globalConstantMap * p = (const GGS_globalConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @typeConstantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap::GGS_typeConstantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap::~ GGS_typeConstantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap::GGS_typeConstantMap (const GGS_typeConstantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap & GGS_typeConstantMap::operator = (const GGS_typeConstantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeConstantMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeConstantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typeConstantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typeConstantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_typeConstantMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_typeConstantMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typeConstantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::performInsert (const GGS_typeConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_typeConstantMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element>
GGS_typeConstantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_typeConstantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element>>
GGS_typeConstantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_typeConstantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_ GGS_typeConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_typeConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typeConstantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mConstantMap = info->mProperty_mConstantMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::class_func_mapWithMapToOverride (const GGS_typeConstantMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typeConstantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_typeConstantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::setter_insertKey (GGS_lstring inLKey,
                                            GGS_constantMap inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_typeConstantMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::method_searchKey (GGS_lstring inLKey,
                                            GGS_constantMap & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no $%K type" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mConstantMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_typeConstantMap::getter_mConstantMapForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_constantMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mConstantMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::setter_setMConstantMapForKey (GGS_constantMap inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_typeConstantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mConstantMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_typeConstantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element>> & inArray,
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
    ioString.appendString ("mConstantMap:") ;
    inArray (i COMMA_HERE)->mProperty_mConstantMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element>> array = sortedInfoArray () ;
    GGS_typeConstantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_typeConstantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_typeConstantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @typeConstantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_typeConstantMap::DownEnumerator_typeConstantMap (const GGS_typeConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element DownEnumerator_typeConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_typeConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap DownEnumerator_typeConstantMap::current_mConstantMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConstantMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @typeConstantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_typeConstantMap::UpEnumerator_typeConstantMap (const GGS_typeConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element UpEnumerator_typeConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_typeConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap UpEnumerator_typeConstantMap::current_mConstantMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConstantMap ;
}


//--------------------------------------------------------------------------------------------------
//     @typeConstantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstantMap ("typeConstantMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap result ;
  const GGS_typeConstantMap * p = (const GGS_typeConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @typeConstructorMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap::GGS_typeConstructorMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap::~ GGS_typeConstructorMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap::GGS_typeConstructorMap (const GGS_typeConstructorMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap & GGS_typeConstructorMap::operator = (const GGS_typeConstructorMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeConstructorMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeConstructorMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typeConstructorMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typeConstructorMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_typeConstructorMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_typeConstructorMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstructorMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typeConstructorMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::performInsert (const GGS_typeConstructorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_typeConstructorMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element>
GGS_typeConstructorMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_typeConstructorMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element>>
GGS_typeConstructorMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_typeConstructorMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_ GGS_typeConstructorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeConstructorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_typeConstructorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typeConstructorMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mConstructorMap = info->mProperty_mConstructorMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::class_func_mapWithMapToOverride (const GGS_typeConstructorMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typeConstructorMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_typeConstructorMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_constructorMap inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_typeConstructorMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_constructorMap & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no $%K type" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mConstructorMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_typeConstructorMap::getter_mConstructorMapForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_constructorMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mConstructorMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::setter_setMConstructorMapForKey (GGS_constructorMap inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_typeConstructorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mConstructorMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_typeConstructorMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element>> & inArray,
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
    ioString.appendString ("mConstructorMap:") ;
    inArray (i COMMA_HERE)->mProperty_mConstructorMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element>> array = sortedInfoArray () ;
    GGS_typeConstructorMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_typeConstructorMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_typeConstructorMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @typeConstructorMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_typeConstructorMap::DownEnumerator_typeConstructorMap (const GGS_typeConstructorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element DownEnumerator_typeConstructorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_typeConstructorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap DownEnumerator_typeConstructorMap::current_mConstructorMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConstructorMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @typeConstructorMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_typeConstructorMap::UpEnumerator_typeConstructorMap (const GGS_typeConstructorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element UpEnumerator_typeConstructorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_typeConstructorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap UpEnumerator_typeConstructorMap::current_mConstructorMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConstructorMap ;
}


//--------------------------------------------------------------------------------------------------
//     @typeConstructorMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstructorMap ("typeConstructorMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeConstructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstructorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap result ;
  const GGS_typeConstructorMap * p = (const GGS_typeConstructorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @typePropertySetterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap::GGS_typePropertySetterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap::~ GGS_typePropertySetterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap::GGS_typePropertySetterMap (const GGS_typePropertySetterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap & GGS_typePropertySetterMap::operator = (const GGS_typePropertySetterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typePropertySetterMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typePropertySetterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typePropertySetterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typePropertySetterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_typePropertySetterMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_typePropertySetterMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertySetterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typePropertySetterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::performInsert (const GGS_typePropertySetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_typePropertySetterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>
GGS_typePropertySetterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_typePropertySetterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>>
GGS_typePropertySetterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_typePropertySetterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_ GGS_typePropertySetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typePropertySetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_typePropertySetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typePropertySetterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSetterMap = info->mProperty_mSetterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::class_func_mapWithMapToOverride (const GGS_typePropertySetterMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typePropertySetterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_typePropertySetterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_propertySetterMap inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_typePropertySetterMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::method_searchKey (GGS_lstring inLKey,
                                                  GGS_propertySetterMap & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no $%K type" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mSetterMap ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::setter_replaceKey (GGS_typePropertySetterMap_2E_element inElement,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "there is no '%K' property" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_typePropertySetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::setter_insertOrReplace (GGS_lstring inLKey,
                                                        GGS_propertySetterMap inArgument0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_typePropertySetterMap_2E_element element (inLKey, inArgument0) ;
  OptionalSharedRef <GenericMapNode <GGS_typePropertySetterMap_2E_element>> unusedExistingNode ;
  const bool allowReplacing = true ;
  mSharedRoot.insulate (THERE) ;
  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_typePropertySetterMap::getter_mSetterMapForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertySetterMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSetterMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::setter_setMSetterMapForKey (GGS_propertySetterMap inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_typePropertySetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSetterMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_typePropertySetterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>> & inArray,
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
    ioString.appendString ("mSetterMap:") ;
    inArray (i COMMA_HERE)->mProperty_mSetterMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>> array = sortedInfoArray () ;
    GGS_typePropertySetterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_typePropertySetterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_typePropertySetterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @typePropertySetterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_typePropertySetterMap::DownEnumerator_typePropertySetterMap (const GGS_typePropertySetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element DownEnumerator_typePropertySetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_typePropertySetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap DownEnumerator_typePropertySetterMap::current_mSetterMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSetterMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @typePropertySetterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_typePropertySetterMap::UpEnumerator_typePropertySetterMap (const GGS_typePropertySetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element UpEnumerator_typePropertySetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_typePropertySetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap UpEnumerator_typePropertySetterMap::current_mSetterMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSetterMap ;
}


//--------------------------------------------------------------------------------------------------
//     @typePropertySetterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertySetterMap ("typePropertySetterMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePropertySetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertySetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertySetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap result ;
  const GGS_typePropertySetterMap * p = (const GGS_typePropertySetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertySetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @typePropertyGetterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap::GGS_typePropertyGetterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap::~ GGS_typePropertyGetterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap::GGS_typePropertyGetterMap (const GGS_typePropertyGetterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap & GGS_typePropertyGetterMap::operator = (const GGS_typePropertyGetterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typePropertyGetterMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typePropertyGetterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typePropertyGetterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typePropertyGetterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_typePropertyGetterMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_typePropertyGetterMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertyGetterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typePropertyGetterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::performInsert (const GGS_typePropertyGetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_typePropertyGetterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>
GGS_typePropertyGetterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_typePropertyGetterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>>
GGS_typePropertyGetterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_typePropertyGetterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_ GGS_typePropertyGetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typePropertyGetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_typePropertyGetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typePropertyGetterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mGetterMap = info->mProperty_mGetterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::class_func_mapWithMapToOverride (const GGS_typePropertyGetterMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typePropertyGetterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_typePropertyGetterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_propertyGetterMap inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_typePropertyGetterMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::method_searchKey (GGS_lstring inLKey,
                                                  GGS_propertyGetterMap & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no $%K type" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mGetterMap ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_replaceKey (GGS_typePropertyGetterMap_2E_element inElement,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "there is no $%K type" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_typePropertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_insertOrReplace (GGS_lstring inLKey,
                                                        GGS_propertyGetterMap inArgument0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_typePropertyGetterMap_2E_element element (inLKey, inArgument0) ;
  OptionalSharedRef <GenericMapNode <GGS_typePropertyGetterMap_2E_element>> unusedExistingNode ;
  const bool allowReplacing = true ;
  mSharedRoot.insulate (THERE) ;
  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_typePropertyGetterMap::getter_mGetterMapForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyGetterMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mGetterMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_setMGetterMapForKey (GGS_propertyGetterMap inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_typePropertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mGetterMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_typePropertyGetterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>> & inArray,
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
    ioString.appendString ("mGetterMap:") ;
    inArray (i COMMA_HERE)->mProperty_mGetterMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>> array = sortedInfoArray () ;
    GGS_typePropertyGetterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_typePropertyGetterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_typePropertyGetterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @typePropertyGetterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_typePropertyGetterMap::DownEnumerator_typePropertyGetterMap (const GGS_typePropertyGetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element DownEnumerator_typePropertyGetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_typePropertyGetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap DownEnumerator_typePropertyGetterMap::current_mGetterMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGetterMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @typePropertyGetterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_typePropertyGetterMap::UpEnumerator_typePropertyGetterMap (const GGS_typePropertyGetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element UpEnumerator_typePropertyGetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_typePropertyGetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap UpEnumerator_typePropertyGetterMap::current_mGetterMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGetterMap ;
}


//--------------------------------------------------------------------------------------------------
//     @typePropertyGetterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertyGetterMap ("typePropertyGetterMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePropertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertyGetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  const GGS_typePropertyGetterMap * p = (const GGS_typePropertyGetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@declarationDecorationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationDecorationList : public cCollectionElement {
  public: GGS_declarationDecorationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationDecorationList (const GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationDecorationList (const GGS_declarationDecorationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GGS_declarationDecorationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationDecorationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationDecorationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_declarationDecorationList (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @declarationDecorationList
//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList::GGS_declarationDecorationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList::GGS_declarationDecorationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    const GGS_declarationDecorationList_2E_element element (p->mObject.mProperty_mDeclaration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationDecorationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationDecorationList (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declarationDecorationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_declarationDecorationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::description (String & ioString,
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
      ioString.appendString ("mDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDeclaration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationDecorationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::plusPlusAssignOperation (const GGS_declarationDecorationList_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::class_func_listWithValue (const GGS_abstractDecoratedDeclaration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_declarationDecorationList_2E_element element (inOperand0) ;
  GGS_declarationDecorationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::addAssignOperation (const GGS_abstractDecoratedDeclaration & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_declarationDecorationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::setter_append (const GGS_abstractDecoratedDeclaration inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_declarationDecorationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::setter_insertAtIndex (const GGS_abstractDecoratedDeclaration inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_declarationDecorationList_2E_element newElement (inOperand0) ;
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

void GGS_declarationDecorationList::setter_removeAtIndex (GGS_abstractDecoratedDeclaration & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDeclaration ;
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

void GGS_declarationDecorationList::setter_popFirst (GGS_abstractDecoratedDeclaration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
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

void GGS_declarationDecorationList::setter_popLast (GGS_abstractDecoratedDeclaration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclaration ;
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

void GGS_declarationDecorationList::method_first (GGS_abstractDecoratedDeclaration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
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

void GGS_declarationDecorationList::method_last (GGS_abstractDecoratedDeclaration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclaration ;
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

GGS_declarationDecorationList GGS_declarationDecorationList::add_operation (const GGS_declarationDecorationList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
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

GGS_declarationDecorationList GGS_declarationDecorationList::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
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

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::plusAssignOperation (const GGS_declarationDecorationList inList,
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

void GGS_declarationDecorationList::setter_setMDeclarationAtIndex (GGS_abstractDecoratedDeclaration inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration = inOperand ;
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
  
GGS_abstractDecoratedDeclaration GGS_declarationDecorationList::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_abstractDecoratedDeclaration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration ;
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
// Down Enumerator for @declarationDecorationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_declarationDecorationList::DownEnumerator_declarationDecorationList (const GGS_declarationDecorationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element DownEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration DownEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @declarationDecorationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_declarationDecorationList::UpEnumerator_declarationDecorationList (const GGS_declarationDecorationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element UpEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration UpEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @declarationDecorationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationDecorationList ("declarationDecorationList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationDecorationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationDecorationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationDecorationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_declarationDecorationList result ;
  const GGS_declarationDecorationList * p = (const GGS_declarationDecorationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationDecorationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @constantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::~ GGS_constantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (const GGS_constantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap & GGS_constantMap::operator = (const GGS_constantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constantMap::getter_hasKey (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                const GGS_uint & inLevel
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_constantMap::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_constantMap::getter_keyList (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::performInsert (const GGS_constantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_constantMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>
GGS_constantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_constantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>>
GGS_constantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_constantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_constantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      element.mProperty_mClassTypeName = info->mProperty_mClassTypeName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::class_func_mapWithMapToOverride (const GGS_constantMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_constantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_insertKey (GGS_lstring inLKey,
                                        GGS_bigint inArgument0,
                                        GGS_lstring inArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_constantMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::method_searchKey (GGS_lstring inLKey,
                                        GGS_bigint & outArgument0,
                                        GGS_lstring & outArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' constant" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
    outArgument1 = info->mProperty_mClassTypeName ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_constantMap::getter_mIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_constantMap::getter_mClassTypeNameForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mClassTypeName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_setMIndexForKey (GGS_bigint inValue,
                                              GGS_string inKey,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_setMClassTypeNameForKey (GGS_lstring inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mClassTypeName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_constantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> & inArray,
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
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mClassTypeName:") ;
    inArray (i COMMA_HERE)->mProperty_mClassTypeName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> array = sortedInfoArray () ;
    GGS_constantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_constantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @constantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_constantMap::DownEnumerator_constantMap (const GGS_constantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element DownEnumerator_constantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_constantMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantMap::current_mClassTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mClassTypeName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @constantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_constantMap::UpEnumerator_constantMap (const GGS_constantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element UpEnumerator_constantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_constantMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantMap::current_mClassTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mClassTypeName ;
}


//--------------------------------------------------------------------------------------------------
//     @constantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  const GGS_constantMap * p = (const GGS_constantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @constructorMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_constructorMap::GGS_constructorMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap::~ GGS_constructorMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap::GGS_constructorMap (const GGS_constructorMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap & GGS_constructorMap::operator = (const GGS_constructorMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constructorMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constructorMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constructorMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_constructorMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_constructorMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constructorMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::performInsert (const GGS_constructorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_constructorMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>
GGS_constructorMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_constructorMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>>
GGS_constructorMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_constructorMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_ GGS_constructorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constructorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_constructorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constructorMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSignature = info->mProperty_mSignature ;
      element.mProperty_mInitValue = info->mProperty_mInitValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::class_func_mapWithMapToOverride (const GGS_constructorMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_constructorMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constructorMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_constructorMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_constructorSignature inArgument0,
                                           GGS_constructorValue inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_constructorMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_constructorSignature & outArgument0,
                                           GGS_constructorValue & outArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "constructor is not defined" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mSignature ;
    outArgument1 = info->mProperty_mInitValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorMap::getter_mSignatureForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorMap::getter_mInitValueForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_constructorValue result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInitValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::setter_setMSignatureForKey (GGS_constructorSignature inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constructorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::setter_setMInitValueForKey (GGS_constructorValue inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constructorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInitValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_constructorMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> & inArray,
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
    ioString.appendString ("mSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInitValue:") ;
    inArray (i COMMA_HERE)->mProperty_mInitValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> array = sortedInfoArray () ;
    GGS_constructorMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_constructorMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_constructorMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @constructorMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_constructorMap::DownEnumerator_constructorMap (const GGS_constructorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element DownEnumerator_constructorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature DownEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue DownEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @constructorMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_constructorMap::UpEnumerator_constructorMap (const GGS_constructorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element UpEnumerator_constructorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature UpEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue UpEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitValue ;
}


//--------------------------------------------------------------------------------------------------
//     @constructorMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_constructorMap result ;
  const GGS_constructorMap * p = (const GGS_constructorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum constructorValue
//--------------------------------------------------------------------------------------------------

GGS_constructorValue::GGS_constructorValue (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::class_func_null (UNUSED_LOCATION_ARGS) {
  GGS_constructorValue result ;
  result.mEnum = Enumeration::enum_null ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::class_func_simple (const GGS_bigint & inAssociatedValue0
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue result ;
  result.mEnum = Enumeration::enum_simple ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_constructorValue_2E_simple (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::class_func_structure (const GGS_sortedOperandIRList & inAssociatedValue0
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue result ;
  result.mEnum = Enumeration::enum_structure ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_constructorValue_2E_structure (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::class_func_arrayValue (const GGS_omnibusType & inAssociatedValue0,
                                                                  const GGS_uint & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue result ;
  result.mEnum = Enumeration::enum_arrayValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_constructorValue_2E_arrayValue (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::method_extractSimple (GGS_bigint & outAssociatedValue_value,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_simple) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @constructorValue.simple invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_constructorValue_2E_simple *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::method_extractStructure (GGS_sortedOperandIRList & outAssociatedValue_sortedOperandList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_structure) {
    outAssociatedValue_sortedOperandList.drop () ;
    String s ;
    s.appendCString ("method @constructorValue.structure invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_constructorValue_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_sortedOperandList = ptr->mProperty_sortedOperandList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::method_extractArrayValue (GGS_omnibusType & outAssociatedValue_elementType,
                                                     GGS_uint & outAssociatedValue_size,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayValue) {
    outAssociatedValue_elementType.drop () ;
    outAssociatedValue_size.drop () ;
    String s ;
    s.appendCString ("method @constructorValue.arrayValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_constructorValue_2E_arrayValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_elementType = ptr->mProperty_elementType ;
    outAssociatedValue_size = ptr->mProperty_size ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_ GGS_constructorValue::getter_getSimple (UNUSED_LOCATION_ARGS) const {
  GGS_constructorValue_2E_simple_3F_ result ;
  if (mEnum == Enumeration::enum_simple) {
    const auto ptr = (const GGS_constructorValue_2E_simple *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_constructorValue_2E_simple (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::getAssociatedValuesFor_simple (GGS_bigint & out_value) const {
  const auto ptr = (const GGS_constructorValue_2E_simple *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_ GGS_constructorValue::getter_getStructure (UNUSED_LOCATION_ARGS) const {
  GGS_constructorValue_2E_structure_3F_ result ;
  if (mEnum == Enumeration::enum_structure) {
    const auto ptr = (const GGS_constructorValue_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_constructorValue_2E_structure (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::getAssociatedValuesFor_structure (GGS_sortedOperandIRList & out_sortedOperandList) const {
  const auto ptr = (const GGS_constructorValue_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
  out_sortedOperandList = ptr->mProperty_sortedOperandList ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_ GGS_constructorValue::getter_getArrayValue (UNUSED_LOCATION_ARGS) const {
  GGS_constructorValue_2E_arrayValue_3F_ result ;
  if (mEnum == Enumeration::enum_arrayValue) {
    const auto ptr = (const GGS_constructorValue_2E_arrayValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_constructorValue_2E_arrayValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::getAssociatedValuesFor_arrayValue (GGS_omnibusType & out_elementType,
                                                              GGS_uint & out_size) const {
  const auto ptr = (const GGS_constructorValue_2E_arrayValue *) mAssociatedValues.associatedValuesPointer () ;
  out_elementType = ptr->mProperty_elementType ;
  out_size = ptr->mProperty_size ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_constructorValue [5] = {
  "(not built)",
  "null",
  "simple",
  "structure",
  "arrayValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorValue::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_null == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorValue::getter_isSimple (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_simple == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorValue::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_structure == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorValue::getter_isArrayValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @constructorValue: ") ;
  ioString.appendCString (gEnumNameArrayFor_constructorValue [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @constructorValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue ("constructorValue",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_constructorValue result ;
  const GGS_constructorValue * p = (const GGS_constructorValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@constructorSignature' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_constructorSignature : public cCollectionElement {
  public: GGS_constructorSignature_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_constructorSignature (const GGS_string & in_mSelector,
                                                   const GGS_omnibusType & in_mType,
                                                   const GGS_uint & in_mFieldIndex
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_constructorSignature (const GGS_constructorSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GGS_string & in_mSelector,
                                                                                  const GGS_omnibusType & in_mType,
                                                                                  const GGS_uint & in_mFieldIndex
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mType, in_mFieldIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GGS_constructorSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mType, inElement.mProperty_mFieldIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_constructorSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_constructorSignature::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_constructorSignature (mObject.mProperty_mSelector, mObject.mProperty_mType, mObject.mProperty_mFieldIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @constructorSignature
//--------------------------------------------------------------------------------------------------

GGS_constructorSignature::GGS_constructorSignature (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature::GGS_constructorSignature (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    const GGS_constructorSignature_2E_element element (p->mObject.mProperty_mSelector, p->mObject.mProperty_mType, p->mObject.mProperty_mFieldIndex) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_string & in_mSelector,
                                                          const GGS_omnibusType & in_mType,
                                                          const GGS_uint & in_mFieldIndex
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_constructorSignature (in_mSelector, in_mType, in_mFieldIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constructorSignature::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_constructorSignature::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::description (String & ioString,
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
      ioString.appendString ("mSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFieldIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFieldIndex.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorSignature result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::plusPlusAssignOperation (const GGS_constructorSignature_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::class_func_listWithValue (const GGS_string & inOperand0,
                                                                             const GGS_omnibusType & inOperand1,
                                                                             const GGS_uint & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_constructorSignature_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_constructorSignature result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::addAssignOperation (const GGS_string & inOperand0,
                                                   const GGS_omnibusType & inOperand1,
                                                   const GGS_uint & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_constructorSignature_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_append (const GGS_string inOperand0,
                                              const GGS_omnibusType inOperand1,
                                              const GGS_uint inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_constructorSignature_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_insertAtIndex (const GGS_string inOperand0,
                                                     const GGS_omnibusType inOperand1,
                                                     const GGS_uint inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_constructorSignature_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_constructorSignature::setter_removeAtIndex (GGS_string & outOperand0,
                                                     GGS_omnibusType & outOperand1,
                                                     GGS_uint & outOperand2,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFieldIndex ;
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
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_popFirst (GGS_string & outOperand0,
                                                GGS_omnibusType & outOperand1,
                                                GGS_uint & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFieldIndex ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_popLast (GGS_string & outOperand0,
                                               GGS_omnibusType & outOperand1,
                                               GGS_uint & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFieldIndex ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::method_first (GGS_string & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             GGS_uint & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFieldIndex ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::method_last (GGS_string & outOperand0,
                                            GGS_omnibusType & outOperand1,
                                            GGS_uint & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFieldIndex ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::add_operation (const GGS_constructorSignature & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
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

GGS_constructorSignature GGS_constructorSignature::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
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

GGS_constructorSignature GGS_constructorSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::plusAssignOperation (const GGS_constructorSignature inList,
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

void GGS_constructorSignature::setter_setMSelectorAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelector = inOperand ;
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
  
GGS_string GGS_constructorSignature::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelector ;
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

void GGS_constructorSignature::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
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
  
GGS_omnibusType GGS_constructorSignature::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
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

void GGS_constructorSignature::setter_setMFieldIndexAtIndex (GGS_uint inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldIndex = inOperand ;
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
  
GGS_uint GGS_constructorSignature::getter_mFieldIndexAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldIndex ;
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
// Down Enumerator for @constructorSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_constructorSignature::DownEnumerator_constructorSignature (const GGS_constructorSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element DownEnumerator_constructorSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_constructorSignature::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldIndex ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @constructorSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_constructorSignature::UpEnumerator_constructorSignature (const GGS_constructorSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element UpEnumerator_constructorSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_constructorSignature::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldIndex ;
}




//--------------------------------------------------------------------------------------------------
//     @constructorSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorSignature ("constructorSignature",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_constructorSignature result ;
  const GGS_constructorSignature * p = (const GGS_constructorSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @propertyGetterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap::GGS_propertyGetterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap::~ GGS_propertyGetterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap::GGS_propertyGetterMap (const GGS_propertyGetterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap & GGS_propertyGetterMap::operator = (const GGS_propertyGetterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyGetterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyGetterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertyGetterMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_propertyGetterMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyGetterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::performInsert (const GGS_propertyGetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_propertyGetterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>
GGS_propertyGetterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertyGetterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>>
GGS_propertyGetterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertyGetterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_ GGS_propertyGetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertyGetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyGetterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mVisibility = info->mProperty_mVisibility ;
      element.mProperty_mAccess = info->mProperty_mAccess ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::class_func_mapWithMapToOverride (const GGS_propertyGetterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyGetterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_propertyGetterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_propertyVisibility inArgument0,
                                              GGS_propertyGetterKind inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_propertyGetterMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_propertyVisibility & outArgument0,
                                              GGS_propertyGetterKind & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' property" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mVisibility ;
    outArgument1 = info->mProperty_mAccess ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_replaceKey (GGS_propertyGetterMap_2E_element inElement,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "there is no '%K' property" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertyGetterMap::getter_mVisibilityForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_propertyVisibility result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mVisibility ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterMap::getter_mAccessForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_propertyGetterKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAccess ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_setMVisibilityForKey (GGS_propertyVisibility inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mVisibility = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_setMAccessForKey (GGS_propertyGetterKind inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAccess = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertyGetterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> & inArray,
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
    ioString.appendString ("mVisibility:") ;
    inArray (i COMMA_HERE)->mProperty_mVisibility.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAccess:") ;
    inArray (i COMMA_HERE)->mProperty_mAccess.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertyGetterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_propertyGetterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertyGetterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyGetterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyGetterMap::DownEnumerator_propertyGetterMap (const GGS_propertyGetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element DownEnumerator_propertyGetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyGetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility DownEnumerator_propertyGetterMap::current_mVisibility (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind DownEnumerator_propertyGetterMap::current_mAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccess ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyGetterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyGetterMap::UpEnumerator_propertyGetterMap (const GGS_propertyGetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element UpEnumerator_propertyGetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyGetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility UpEnumerator_propertyGetterMap::current_mVisibility (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind UpEnumerator_propertyGetterMap::current_mAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccess ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyGetterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterMap ("propertyGetterMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  const GGS_propertyGetterMap * p = (const GGS_propertyGetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyGetterKind
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind::GGS_propertyGetterKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterKind::class_func_storedProperty (const GGS_omnibusType & inAssociatedValue0,
                                                                          const GGS_uint & inAssociatedValue1
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind result ;
  result.mEnum = Enumeration::enum_storedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyGetterKind_2E_storedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterKind::class_func_computedProperty (const GGS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                            const GGS_routineLLVMNameDict & inAssociatedValue1
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind result ;
  result.mEnum = Enumeration::enum_computedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyGetterKind_2E_computedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterKind::class_func_constantProperty (const GGS_objectIR & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind result ;
  result.mEnum = Enumeration::enum_constantProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyGetterKind_2E_constantProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::method_extractStoredProperty (GGS_omnibusType & outAssociatedValue_type,
                                                           GGS_uint & outAssociatedValue_index,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_storedProperty) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_index.drop () ;
    String s ;
    s.appendCString ("method @propertyGetterKind.storedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyGetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_index = ptr->mProperty_index ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::method_extractComputedProperty (GGS_unifiedTypeMapEntry & outAssociatedValue_typeProxy,
                                                             GGS_routineLLVMNameDict & outAssociatedValue_modeDictionary,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_computedProperty) {
    outAssociatedValue_typeProxy.drop () ;
    outAssociatedValue_modeDictionary.drop () ;
    String s ;
    s.appendCString ("method @propertyGetterKind.computedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyGetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeProxy = ptr->mProperty_typeProxy ;
    outAssociatedValue_modeDictionary = ptr->mProperty_modeDictionary ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::method_extractConstantProperty (GGS_objectIR & outAssociatedValue_value,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_constantProperty) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @propertyGetterKind.constantProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyGetterKind_2E_constantProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_ GGS_propertyGetterKind::getter_getStoredProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterKind_2E_storedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_storedProperty) {
    const auto ptr = (const GGS_propertyGetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyGetterKind_2E_storedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::getAssociatedValuesFor_storedProperty (GGS_omnibusType & out_type,
                                                                    GGS_uint & out_index) const {
  const auto ptr = (const GGS_propertyGetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_index = ptr->mProperty_index ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_ GGS_propertyGetterKind::getter_getComputedProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterKind_2E_computedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_computedProperty) {
    const auto ptr = (const GGS_propertyGetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyGetterKind_2E_computedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::getAssociatedValuesFor_computedProperty (GGS_unifiedTypeMapEntry & out_typeProxy,
                                                                      GGS_routineLLVMNameDict & out_modeDictionary) const {
  const auto ptr = (const GGS_propertyGetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_typeProxy = ptr->mProperty_typeProxy ;
  out_modeDictionary = ptr->mProperty_modeDictionary ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_ GGS_propertyGetterKind::getter_getConstantProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterKind_2E_constantProperty_3F_ result ;
  if (mEnum == Enumeration::enum_constantProperty) {
    const auto ptr = (const GGS_propertyGetterKind_2E_constantProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyGetterKind_2E_constantProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::getAssociatedValuesFor_constantProperty (GGS_objectIR & out_value) const {
  const auto ptr = (const GGS_propertyGetterKind_2E_constantProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyGetterKind [4] = {
  "(not built)",
  "storedProperty",
  "computedProperty",
  "constantProperty"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterKind::getter_isStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_storedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterKind::getter_isComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_computedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterKind::getter_isConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_constantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyGetterKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyGetterKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyGetterKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind ("propertyGetterKind",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterKind::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind result ;
  const GGS_propertyGetterKind * p = (const GGS_propertyGetterKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyVisibility
//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility::GGS_propertyVisibility (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertyVisibility::class_func_isPublic (UNUSED_LOCATION_ARGS) {
  GGS_propertyVisibility result ;
  result.mEnum = Enumeration::enum_isPublic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertyVisibility::class_func_isPrivate (UNUSED_LOCATION_ARGS) {
  GGS_propertyVisibility result ;
  result.mEnum = Enumeration::enum_isPrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyVisibility [3] = {
  "(not built)",
  "isPublic",
  "isPrivate"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyVisibility::getter_isIsPublic (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isPublic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyVisibility::getter_isIsPrivate (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isPrivate == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyVisibility::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @propertyVisibility: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyVisibility [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyVisibility::objectCompare (const GGS_propertyVisibility & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyVisibility generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyVisibility ("propertyVisibility",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyVisibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyVisibility ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyVisibility::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyVisibility (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertyVisibility::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyVisibility result ;
  const GGS_propertyVisibility * p = (const GGS_propertyVisibility *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyVisibility *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyVisibility", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @propertySetterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap::GGS_propertySetterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap::~ GGS_propertySetterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap::GGS_propertySetterMap (const GGS_propertySetterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap & GGS_propertySetterMap::operator = (const GGS_propertySetterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertySetterMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertySetterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertySetterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertySetterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertySetterMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_propertySetterMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertySetterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::performInsert (const GGS_propertySetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_propertySetterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>
GGS_propertySetterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertySetterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>>
GGS_propertySetterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertySetterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_ GGS_propertySetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertySetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertySetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertySetterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mVisibility = info->mProperty_mVisibility ;
      element.mProperty_mAccess = info->mProperty_mAccess ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::class_func_mapWithMapToOverride (const GGS_propertySetterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertySetterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_propertySetterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_propertyVisibility inArgument0,
                                              GGS_propertySetterKind inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_propertySetterMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_propertyVisibility & outArgument0,
                                              GGS_propertySetterKind & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' property" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mVisibility ;
    outArgument1 = info->mProperty_mAccess ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertySetterMap::getter_mVisibilityForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_propertyVisibility result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mVisibility ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterMap::getter_mAccessForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_propertySetterKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAccess ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::setter_setMVisibilityForKey (GGS_propertyVisibility inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertySetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mVisibility = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::setter_setMAccessForKey (GGS_propertySetterKind inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertySetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAccess = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertySetterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> & inArray,
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
    ioString.appendString ("mVisibility:") ;
    inArray (i COMMA_HERE)->mProperty_mVisibility.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAccess:") ;
    inArray (i COMMA_HERE)->mProperty_mAccess.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertySetterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_propertySetterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertySetterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertySetterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertySetterMap::DownEnumerator_propertySetterMap (const GGS_propertySetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element DownEnumerator_propertySetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertySetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility DownEnumerator_propertySetterMap::current_mVisibility (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind DownEnumerator_propertySetterMap::current_mAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccess ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertySetterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertySetterMap::UpEnumerator_propertySetterMap (const GGS_propertySetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element UpEnumerator_propertySetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertySetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility UpEnumerator_propertySetterMap::current_mVisibility (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind UpEnumerator_propertySetterMap::current_mAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccess ;
}


//--------------------------------------------------------------------------------------------------
//     @propertySetterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterMap ("propertySetterMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  const GGS_propertySetterMap * p = (const GGS_propertySetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertySetterKind
//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind::GGS_propertySetterKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterKind::class_func_storedProperty (const GGS_omnibusType & inAssociatedValue0,
                                                                          const GGS_uint & inAssociatedValue1
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind result ;
  result.mEnum = Enumeration::enum_storedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertySetterKind_2E_storedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterKind::class_func_computedProperty (const GGS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                            const GGS_routineLLVMNameDict & inAssociatedValue1,
                                                                            const GGS_routineLLVMNameDict & inAssociatedValue2
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind result ;
  result.mEnum = Enumeration::enum_computedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertySetterKind_2E_computedProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::method_extractStoredProperty (GGS_omnibusType & outAssociatedValue_type,
                                                           GGS_uint & outAssociatedValue_index,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_storedProperty) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_index.drop () ;
    String s ;
    s.appendCString ("method @propertySetterKind.storedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertySetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_index = ptr->mProperty_index ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::method_extractComputedProperty (GGS_unifiedTypeMapEntry & outAssociatedValue_typeProxy,
                                                             GGS_routineLLVMNameDict & outAssociatedValue_getterModeDictionary,
                                                             GGS_routineLLVMNameDict & outAssociatedValue_setterModeDictionary,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_computedProperty) {
    outAssociatedValue_typeProxy.drop () ;
    outAssociatedValue_getterModeDictionary.drop () ;
    outAssociatedValue_setterModeDictionary.drop () ;
    String s ;
    s.appendCString ("method @propertySetterKind.computedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertySetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeProxy = ptr->mProperty_typeProxy ;
    outAssociatedValue_getterModeDictionary = ptr->mProperty_getterModeDictionary ;
    outAssociatedValue_setterModeDictionary = ptr->mProperty_setterModeDictionary ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_ GGS_propertySetterKind::getter_getStoredProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertySetterKind_2E_storedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_storedProperty) {
    const auto ptr = (const GGS_propertySetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertySetterKind_2E_storedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::getAssociatedValuesFor_storedProperty (GGS_omnibusType & out_type,
                                                                    GGS_uint & out_index) const {
  const auto ptr = (const GGS_propertySetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_index = ptr->mProperty_index ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_ GGS_propertySetterKind::getter_getComputedProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertySetterKind_2E_computedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_computedProperty) {
    const auto ptr = (const GGS_propertySetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertySetterKind_2E_computedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::getAssociatedValuesFor_computedProperty (GGS_unifiedTypeMapEntry & out_typeProxy,
                                                                      GGS_routineLLVMNameDict & out_getterModeDictionary,
                                                                      GGS_routineLLVMNameDict & out_setterModeDictionary) const {
  const auto ptr = (const GGS_propertySetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_typeProxy = ptr->mProperty_typeProxy ;
  out_getterModeDictionary = ptr->mProperty_getterModeDictionary ;
  out_setterModeDictionary = ptr->mProperty_setterModeDictionary ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertySetterKind [3] = {
  "(not built)",
  "storedProperty",
  "computedProperty"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertySetterKind::getter_isStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_storedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertySetterKind::getter_isComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_computedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertySetterKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertySetterKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertySetterKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind ("propertySetterKind",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterKind::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind result ;
  const GGS_propertySetterKind * p = (const GGS_propertySetterKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @staticStringMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap::GGS_staticStringMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap::~ GGS_staticStringMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap::GGS_staticStringMap (const GGS_staticStringMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap & GGS_staticStringMap::operator = (const GGS_staticStringMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticStringMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticStringMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticStringMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticStringMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticStringMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_staticStringMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_staticStringMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticStringMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticStringMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::performInsert (const GGS_staticStringMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_staticStringMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>
GGS_staticStringMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_staticStringMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>>
GGS_staticStringMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_staticStringMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_ GGS_staticStringMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticStringMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_staticStringMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticStringMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::class_func_mapWithMapToOverride (const GGS_staticStringMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_staticStringMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticStringMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_staticStringMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::setter_insertKey (GGS_lstring inLKey,
                                            GGS_uint inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_staticStringMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::method_searchKey (GGS_lstring inLKey,
                                            GGS_uint & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "-- internal error --" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticStringMap::getter_mIndexForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::setter_setMIndexForKey (GGS_uint inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_staticStringMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_staticStringMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>> & inArray,
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
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>> array = sortedInfoArray () ;
    GGS_staticStringMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_staticStringMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_staticStringMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @staticStringMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticStringMap::DownEnumerator_staticStringMap (const GGS_staticStringMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element DownEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @staticStringMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticStringMap::UpEnumerator_staticStringMap (const GGS_staticStringMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element UpEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @staticStringMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticStringMap ("staticStringMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticStringMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticStringMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticStringMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_staticStringMap result ;
  const GGS_staticStringMap * p = (const GGS_staticStringMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticStringMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@globalStructuredConstantList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_globalStructuredConstantList : public cCollectionElement {
  public: GGS_globalStructuredConstantList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_globalStructuredConstantList (const GGS_omnibusType & in_mType,
                                                           const GGS_operandIRList & in_mOperandIRList
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_globalStructuredConstantList (const GGS_globalStructuredConstantList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GGS_omnibusType & in_mType,
                                                                                                  const GGS_operandIRList & in_mOperandIRList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mOperandIRList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GGS_globalStructuredConstantList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mOperandIRList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_globalStructuredConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_globalStructuredConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_globalStructuredConstantList (mObject.mProperty_mType, mObject.mProperty_mOperandIRList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @globalStructuredConstantList
//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList::GGS_globalStructuredConstantList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList::GGS_globalStructuredConstantList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    const GGS_globalStructuredConstantList_2E_element element (p->mObject.mProperty_mType, p->mObject.mProperty_mOperandIRList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_omnibusType & in_mType,
                                                                  const GGS_operandIRList & in_mOperandIRList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalStructuredConstantList (in_mType, in_mOperandIRList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalStructuredConstantList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_globalStructuredConstantList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::description (String & ioString,
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
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOperandIRList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOperandIRList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalStructuredConstantList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::plusPlusAssignOperation (const GGS_globalStructuredConstantList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::class_func_listWithValue (const GGS_omnibusType & inOperand0,
                                                                                             const GGS_operandIRList & inOperand1
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_globalStructuredConstantList_2E_element element (inOperand0, inOperand1) ;
  GGS_globalStructuredConstantList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::addAssignOperation (const GGS_omnibusType & inOperand0,
                                                           const GGS_operandIRList & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  const GGS_globalStructuredConstantList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_append (const GGS_omnibusType inOperand0,
                                                      const GGS_operandIRList inOperand1,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_globalStructuredConstantList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_insertAtIndex (const GGS_omnibusType inOperand0,
                                                             const GGS_operandIRList inOperand1,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_globalStructuredConstantList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_globalStructuredConstantList::setter_removeAtIndex (GGS_omnibusType & outOperand0,
                                                             GGS_operandIRList & outOperand1,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOperandIRList ;
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
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_popFirst (GGS_omnibusType & outOperand0,
                                                        GGS_operandIRList & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOperandIRList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_popLast (GGS_omnibusType & outOperand0,
                                                       GGS_operandIRList & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOperandIRList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::method_first (GGS_omnibusType & outOperand0,
                                                     GGS_operandIRList & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOperandIRList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::method_last (GGS_omnibusType & outOperand0,
                                                    GGS_operandIRList & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOperandIRList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::add_operation (const GGS_globalStructuredConstantList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
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

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
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

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::plusAssignOperation (const GGS_globalStructuredConstantList inList,
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

void GGS_globalStructuredConstantList::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
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
  
GGS_omnibusType GGS_globalStructuredConstantList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
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

void GGS_globalStructuredConstantList::setter_setMOperandIRListAtIndex (GGS_operandIRList inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOperandIRList = inOperand ;
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
  
GGS_operandIRList GGS_globalStructuredConstantList::getter_mOperandIRListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOperandIRList ;
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
// Down Enumerator for @globalStructuredConstantList
//--------------------------------------------------------------------------------------------------

DownEnumerator_globalStructuredConstantList::DownEnumerator_globalStructuredConstantList (const GGS_globalStructuredConstantList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element DownEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList DownEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOperandIRList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @globalStructuredConstantList
//--------------------------------------------------------------------------------------------------

UpEnumerator_globalStructuredConstantList::UpEnumerator_globalStructuredConstantList (const GGS_globalStructuredConstantList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element UpEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList UpEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOperandIRList ;
}




//--------------------------------------------------------------------------------------------------
//     @globalStructuredConstantList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalStructuredConstantList ("globalStructuredConstantList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalStructuredConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalStructuredConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalStructuredConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_globalStructuredConstantList result ;
  const GGS_globalStructuredConstantList * p = (const GGS_globalStructuredConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalStructuredConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInContext (cPtr_abstractDeclarationAST * inObject,
                                         GGS_semanticContext & io_ioContext,
                                         GGS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         GGS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                         GGS_routineListIR & io_ioRoutineListIR,
                                         GGS_staticListInitializationMap & io_ioStaticListValueMap,
                                         GGS_staticEntityMap & io_ioStaticEntityMap,
                                         GGS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         GGS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInContext (io_ioContext, io_ioDecoratedDeclarationList, io_ioDecoratedRoutineList, io_ioRoutineListIR, io_ioStaticListValueMap, io_ioStaticEntityMap, io_ioControlRegisterUserAccesMapAST, io_ioUserLLVMTypeDefinitionListIR, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@routineListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineListIR : public cCollectionElement {
  public: GGS_routineListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineListIR (const GGS_abstractRoutineIR & in_mRoutine
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineListIR (const GGS_routineListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineListIR::cCollectionElement_routineListIR (const GGS_abstractRoutineIR & in_mRoutine
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutine) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineListIR::cCollectionElement_routineListIR (const GGS_routineListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @routineListIR
//--------------------------------------------------------------------------------------------------

GGS_routineListIR::GGS_routineListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR::GGS_routineListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    const GGS_routineListIR_2E_element element (p->mObject.mProperty_mRoutine) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GGS_abstractRoutineIR & in_mRoutine
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_routineListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineListIR (in_mRoutine COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_routineListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::description (String & ioString,
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
      ioString.appendString ("mRoutine:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRoutine.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::plusPlusAssignOperation (const GGS_routineListIR_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::class_func_listWithValue (const GGS_abstractRoutineIR & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  const GGS_routineListIR_2E_element element (inOperand0) ;
  GGS_routineListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::addAssignOperation (const GGS_abstractRoutineIR & inOperand0
                                            COMMA_LOCATION_ARGS) {
  const GGS_routineListIR_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::setter_append (const GGS_abstractRoutineIR inOperand0,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_routineListIR_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::setter_insertAtIndex (const GGS_abstractRoutineIR inOperand0,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_routineListIR_2E_element newElement (inOperand0) ;
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

void GGS_routineListIR::setter_removeAtIndex (GGS_abstractRoutineIR & outOperand0,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRoutine ;
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

void GGS_routineListIR::setter_popFirst (GGS_abstractRoutineIR & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutine ;
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

void GGS_routineListIR::setter_popLast (GGS_abstractRoutineIR & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutine ;
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

void GGS_routineListIR::method_first (GGS_abstractRoutineIR & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutine ;
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

void GGS_routineListIR::method_last (GGS_abstractRoutineIR & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutine ;
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

GGS_routineListIR GGS_routineListIR::add_operation (const GGS_routineListIR & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineListIR result ;
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

GGS_routineListIR GGS_routineListIR::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_routineListIR result ;
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

GGS_routineListIR GGS_routineListIR::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::plusAssignOperation (const GGS_routineListIR inList,
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

void GGS_routineListIR::setter_setMRoutineAtIndex (GGS_abstractRoutineIR inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutine = inOperand ;
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
  
GGS_abstractRoutineIR GGS_routineListIR::getter_mRoutineAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_abstractRoutineIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutine ;
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
// Down Enumerator for @routineListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineListIR::DownEnumerator_routineListIR (const GGS_routineListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element DownEnumerator_routineListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR DownEnumerator_routineListIR::current_mRoutine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutine ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineListIR::UpEnumerator_routineListIR (const GGS_routineListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element UpEnumerator_routineListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR UpEnumerator_routineListIR::current_mRoutine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutine ;
}




//--------------------------------------------------------------------------------------------------
//     @routineListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineListIR ("routineListIR",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_routineListIR result ;
  const GGS_routineListIR * p = (const GGS_routineListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineListIR *> (p)) {
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

void extensionMethod_llvmRoutineGeneration (const GGS_routineListIR inObject,
                                            GGS_string & ioArgument_ioLLVMcode,
                                            const GGS_generationContext constinArgument_inGenerationContext,
                                            GGS_generationAdds & ioArgument_ioGenerationAdds,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_routineListIR temp_0 = inObject ;
  UpEnumerator_routineListIR enumerator_3760 (temp_0) ;
  while (enumerator_3760.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Routine ").add_operation (enumerator_3760.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex = GGS_uint (uint32_t (0U)) ;
    callExtensionMethod_llvmCodeGeneration ((cPtr_abstractRoutineIR *) enumerator_3760.current (HERE).readProperty_mRoutine ().ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 111)) ;
    enumerator_3760.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR generateRelease'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_generateRelease (GGS_instructionListIR & ioObject,
                                      const GGS_omnibusType constinArgument_inType,
                                      const GGS_lstring constinArgument_in_5F_omnibusName,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_releaseIR::init_21__21_ (constinArgument_inType, constinArgument_in_5F_omnibusName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-release.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_releaseIR_2E_weak::objectCompare (const GGS_releaseIR_2E_weak & inOperand) const {
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

GGS_releaseIR_2E_weak::GGS_releaseIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR_2E_weak & GGS_releaseIR_2E_weak::operator = (const GGS_releaseIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR_2E_weak::GGS_releaseIR_2E_weak (const GGS_releaseIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_releaseIR_2E_weak GGS_releaseIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_releaseIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR GGS_releaseIR_2E_weak::unwrappedValue (void) const {
  GGS_releaseIR result ;
  if (isValid ()) {
    const cPtr_releaseIR * p = (cPtr_releaseIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_releaseIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR GGS_releaseIR_2E_weak::bang_releaseIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_releaseIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_releaseIR) ;
      result = GGS_releaseIR ((cPtr_releaseIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @releaseIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_releaseIR_2E_weak ("releaseIR.weak",
                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_releaseIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_releaseIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_releaseIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR_2E_weak GGS_releaseIR_2E_weak::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_releaseIR_2E_weak result ;
  const GGS_releaseIR_2E_weak * p = (const GGS_releaseIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_releaseIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("releaseIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mode string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_mode & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_userMode:
    {
      result_result = GGS_string ("user") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeUserMode:
    {
      result_result = GGS_string ("safe user") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
    {
      result_result = GGS_string ("section") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      result_result = GGS_string ("safe section") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
    {
      result_result = GGS_string ("service") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      result_result = GGS_string ("safe service") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_primitiveMode:
    {
      result_result = GGS_string ("primitive") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      result_result = GGS_string ("safe primitive") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_guardMode:
    {
      result_result = GGS_string ("guard") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeGuardMode:
    {
      result_result = GGS_string ("safe guard") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_panicMode:
    {
      result_result = GGS_string ("panic") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_bootMode:
    {
      result_result = GGS_string ("boot") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_startupMode:
    {
      result_result = GGS_string ("startup") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anyMode:
    {
      result_result = GGS_string ("any") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anySafeMode:
    {
      result_result = GGS_string ("any safe") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mode isSafe'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isSafe (const GGS_mode & inObject,
                                 Compiler *
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_userMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeUserMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_primitiveMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_guardMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeGuardMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_panicMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_bootMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_startupMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anyMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anySafeMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mode routineLLVMDictionaryForFunction'
//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const GGS_mode & inObject,
                                                                          const GGS_string & constinArgument_inRoutineNameForGeneration,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict result_result ; // Returned variable
  GGS_routineLLVMNameDict temp_0 = GGS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 72)) ;
  const GGS_mode temp_1 = inObject ;
  temp_0.plusPlusAssignOperation (GGS_routineLLVMNameDict_2E_element::init_21__21_ (temp_1, constinArgument_inRoutineNameForGeneration, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("logical-modes.galgas", 72)) ;
  result_result = temp_0 ;
  const GGS_mode temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 75)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 75)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 76)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 76)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 78)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 78)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 79)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 79)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 80)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 80)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 81)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 81)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 82)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 82)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 84)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 84)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 85)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 85)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 86)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 86)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 88)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 88)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 89)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 89)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 90)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 90)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 91)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 91)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 92)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 92)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 93)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 93)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 94)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 94)) ;
      result_result.addAssignOperation (GGS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 95)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 95)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_guardMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 97)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 97)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeGuardMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 99)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 99)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 100)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 100)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 101)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 101)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 103)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 103)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeUserMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 105)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 105)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anySafeMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_anyMode (SOURCE_FILE ("logical-modes.galgas", 107)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 107)) ;
      result_result.addAssignOperation (GGS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 108)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 108)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeSectionMode (SOURCE_FILE ("logical-modes.galgas", 109)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 109)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 110)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 110)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 111)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 111)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 112)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 112)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 113)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 113)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 114)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 114)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 115)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 115)) ;
      result_result.addAssignOperation (GGS_mode::class_func_panicMode (SOURCE_FILE ("logical-modes.galgas", 116)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 116)) ;
      result_result.addAssignOperation (GGS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 117)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 117)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeUserMode (SOURCE_FILE ("logical-modes.galgas", 118)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 118)) ;
      result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 119)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 119)) ;
      result_result.addAssignOperation (GGS_mode::class_func_bootMode (SOURCE_FILE ("logical-modes.galgas", 120)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 120)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anyMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 122)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 122)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 123)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 123)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 124)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 124)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 125)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 125)) ;
      result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 126)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 126)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_userMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_anyMode (SOURCE_FILE ("logical-modes.galgas", 128)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 128)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_bootMode:
  case GGS_mode::Enumeration::enum_panicMode:
  case GGS_mode::Enumeration::enum_primitiveMode:
  case GGS_mode::Enumeration::enum_startupMode:
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mode routineLLVMDictionaryForSystemRoutine'
//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForSystemRoutine (const GGS_mode & inObject,
                                                                               const GGS_string & constinArgument_inUserRoutineNameForGeneration,
                                                                               const GGS_string & constinArgument_inImplementationRoutineNameForGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict result_result ; // Returned variable
  GGS_routineLLVMNameDict temp_0 = GGS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 140)) ;
  const GGS_mode temp_1 = inObject ;
  temp_0.plusPlusAssignOperation (GGS_routineLLVMNameDict_2E_element::init_21__21_ (temp_1, constinArgument_inImplementationRoutineNameForGeneration, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("logical-modes.galgas", 140)) ;
  result_result = temp_0 ;
  result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 141)), constinArgument_inUserRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 141)) ;
  const GGS_mode temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 144)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 144)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 145)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 145)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 147)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 147)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 148)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 148)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 149)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 149)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 150)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 150)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 151)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 151)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 153)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 153)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 154)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 154)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 155)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 155)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 157)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 157)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 158)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 158)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 159)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 159)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 160)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 160)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 161)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 161)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 162)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 162)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 163)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 163)) ;
      result_result.addAssignOperation (GGS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 164)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 164)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_guardMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 166)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 166)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeGuardMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 168)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 168)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 169)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 169)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 170)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 170)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 172)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 172)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeUserMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 174)), constinArgument_inUserRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 174)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anyMode:
  case GGS_mode::Enumeration::enum_anySafeMode:
  case GGS_mode::Enumeration::enum_bootMode:
  case GGS_mode::Enumeration::enum_panicMode:
  case GGS_mode::Enumeration::enum_primitiveMode:
  case GGS_mode::Enumeration::enum_startupMode:
  case GGS_mode::Enumeration::enum_userMode:
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionDeclarationAST_2E_weak::objectCompare (const GGS_functionDeclarationAST_2E_weak & inOperand) const {
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

GGS_functionDeclarationAST_2E_weak::GGS_functionDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak & GGS_functionDeclarationAST_2E_weak::operator = (const GGS_functionDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak::GGS_functionDeclarationAST_2E_weak (const GGS_functionDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak GGS_functionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_functionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST_2E_weak::bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionDeclarationAST) ;
      result = GGS_functionDeclarationAST ((cPtr_functionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ("functionDeclarationAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak GGS_functionDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST_2E_weak result ;
  const GGS_functionDeclarationAST_2E_weak * p = (const GGS_functionDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::builtDictionary (LOCATION_ARGS) {
  GGS_routineLLVMNameDict result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_routineLLVMNameDict::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineLLVMNameDict::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element_3F_ GGS_routineLLVMNameDict::
readSubscript__3F_ (const class GGS_mode & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_routineLLVMNameDict_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_routineLLVMNameDict_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_routineLLVMNameDict_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::plusPlusAssignOperation (const GGS_routineLLVMNameDict_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::addAssignOperation (const GGS_mode & inKey,
                                                  const GGS_string & inArgument0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::setter_insert (const GGS_mode inKey,
                                             const GGS_string inArgument0,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineLLVMNameDict::getter_hasKey (const GGS_mode & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::method_searchKey (GGS_mode inKey,
                                                GGS_string & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_llvmName ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::setter_removeKey (GGS_mode inKey,
                                                GGS_string & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_llvmName ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_routineLLVMNameDict::getter_llvmNameForKey (const GGS_mode & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get llvmName ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_llvmName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::setter_setLlvmNameForKey (GGS_string inPropertyValue,
                                                        GGS_mode inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_mode, GGS_routineLLVMNameDict_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setLlvmNameForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_llvmName = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineLLVMNameDict
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineLLVMNameDict::UpEnumerator_routineLLVMNameDict (const GGS_routineLLVMNameDict & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_routineLLVMNameDict::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_routineLLVMNameDict::current_llvmName (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_llvmName ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element UpEnumerator_routineLLVMNameDict::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineLLVMNameDict
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineLLVMNameDict::DownEnumerator_routineLLVMNameDict (const GGS_routineLLVMNameDict & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_routineLLVMNameDict::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_routineLLVMNameDict::current_llvmName (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_llvmName ;
}


//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element DownEnumerator_routineLLVMNameDict::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @routineLLVMNameDict generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ("routineLLVMNameDict",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineLLVMNameDict::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineLLVMNameDict ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineLLVMNameDict::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineLLVMNameDict (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_routineLLVMNameDict result ;
  const GGS_routineLLVMNameDict * p = (const GGS_routineLLVMNameDict *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineLLVMNameDict *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineLLVMNameDict", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

