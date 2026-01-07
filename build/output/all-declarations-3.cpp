#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
// @compileTimeIntSubtractOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntSubtractOperator::objectCompare (const GGS_compileTimeIntSubtractOperator & inOperand) const {
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

GGS_compileTimeIntSubtractOperator::GGS_compileTimeIntSubtractOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator GGS_compileTimeIntSubtractOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntSubtractOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntSubtractOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntSubtractOperator_init (inCompiler) ;
  const GGS_compileTimeIntSubtractOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntSubtractOperator::
compileTimeIntSubtractOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator::GGS_compileTimeIntSubtractOperator (const cPtr_compileTimeIntSubtractOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntSubtractOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator GGS_compileTimeIntSubtractOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntSubtractOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntSubtractOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntSubtractOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntSubtractOperator::cPtr_compileTimeIntSubtractOperator (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntSubtractOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ;
}

void cPtr_compileTimeIntSubtractOperator::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntSubtractOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntSubtractOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntSubtractOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntSubtractOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntSubtractOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ("compileTimeIntSubtractOperator",
                                                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntSubtractOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntSubtractOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntSubtractOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator GGS_compileTimeIntSubtractOperator::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntSubtractOperator result ;
  const GGS_compileTimeIntSubtractOperator * p = (const GGS_compileTimeIntSubtractOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntSubtractOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntSubtractOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntSubtractOperator_2E_weak::objectCompare (const GGS_compileTimeIntSubtractOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntSubtractOperator_2E_weak::GGS_compileTimeIntSubtractOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator_2E_weak & GGS_compileTimeIntSubtractOperator_2E_weak::operator = (const GGS_compileTimeIntSubtractOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator_2E_weak::GGS_compileTimeIntSubtractOperator_2E_weak (const GGS_compileTimeIntSubtractOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator_2E_weak GGS_compileTimeIntSubtractOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntSubtractOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator GGS_compileTimeIntSubtractOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntSubtractOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntSubtractOperator * p = (cPtr_compileTimeIntSubtractOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntSubtractOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator GGS_compileTimeIntSubtractOperator_2E_weak::bang_compileTimeIntSubtractOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntSubtractOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntSubtractOperator) ;
      result = GGS_compileTimeIntSubtractOperator ((cPtr_compileTimeIntSubtractOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntSubtractOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2E_weak ("compileTimeIntSubtractOperator.weak",
                                                                                           & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntSubtractOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntSubtractOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntSubtractOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntSubtractOperator_2E_weak GGS_compileTimeIntSubtractOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntSubtractOperator_2E_weak result ;
  const GGS_compileTimeIntSubtractOperator_2E_weak * p = (const GGS_compileTimeIntSubtractOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntSubtractOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntSubtractOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntEqualOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntEqualOperator::objectCompare (const GGS_compileTimeIntEqualOperator & inOperand) const {
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

GGS_compileTimeIntEqualOperator::GGS_compileTimeIntEqualOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntEqualOperator GGS_compileTimeIntEqualOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntEqualOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntEqualOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntEqualOperator_init (inCompiler) ;
  const GGS_compileTimeIntEqualOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntEqualOperator::
compileTimeIntEqualOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator::GGS_compileTimeIntEqualOperator (const cPtr_compileTimeIntEqualOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntEqualOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator GGS_compileTimeIntEqualOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntEqualOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntEqualOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntEqualOperator::cPtr_compileTimeIntEqualOperator (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ;
}

void cPtr_compileTimeIntEqualOperator::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntEqualOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntEqualOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntEqualOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntEqualOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntEqualOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ("compileTimeIntEqualOperator",
                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntEqualOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator GGS_compileTimeIntEqualOperator::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntEqualOperator result ;
  const GGS_compileTimeIntEqualOperator * p = (const GGS_compileTimeIntEqualOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntEqualOperator_2E_weak::objectCompare (const GGS_compileTimeIntEqualOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntEqualOperator_2E_weak::GGS_compileTimeIntEqualOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator_2E_weak & GGS_compileTimeIntEqualOperator_2E_weak::operator = (const GGS_compileTimeIntEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator_2E_weak::GGS_compileTimeIntEqualOperator_2E_weak (const GGS_compileTimeIntEqualOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator_2E_weak GGS_compileTimeIntEqualOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntEqualOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator GGS_compileTimeIntEqualOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntEqualOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntEqualOperator * p = (cPtr_compileTimeIntEqualOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntEqualOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator GGS_compileTimeIntEqualOperator_2E_weak::bang_compileTimeIntEqualOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntEqualOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntEqualOperator) ;
      result = GGS_compileTimeIntEqualOperator ((cPtr_compileTimeIntEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntEqualOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2E_weak ("compileTimeIntEqualOperator.weak",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntEqualOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntEqualOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntEqualOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntEqualOperator_2E_weak GGS_compileTimeIntEqualOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntEqualOperator_2E_weak result ;
  const GGS_compileTimeIntEqualOperator_2E_weak * p = (const GGS_compileTimeIntEqualOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntEqualOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntEqualOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntAddOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntAddOperator::objectCompare (const GGS_compileTimeIntAddOperator & inOperand) const {
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

GGS_compileTimeIntAddOperator::GGS_compileTimeIntAddOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntAddOperator GGS_compileTimeIntAddOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntAddOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntAddOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntAddOperator_init (inCompiler) ;
  const GGS_compileTimeIntAddOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAddOperator::
compileTimeIntAddOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator::GGS_compileTimeIntAddOperator (const cPtr_compileTimeIntAddOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntAddOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator GGS_compileTimeIntAddOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntAddOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntAddOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntAddOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntAddOperator::cPtr_compileTimeIntAddOperator (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntAddOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator ;
}

void cPtr_compileTimeIntAddOperator::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntAddOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntAddOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntAddOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntAddOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntAddOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator ("compileTimeIntAddOperator",
                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntAddOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntAddOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntAddOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator GGS_compileTimeIntAddOperator::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntAddOperator result ;
  const GGS_compileTimeIntAddOperator * p = (const GGS_compileTimeIntAddOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntAddOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAddOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntAddOperator_2E_weak::objectCompare (const GGS_compileTimeIntAddOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntAddOperator_2E_weak::GGS_compileTimeIntAddOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator_2E_weak & GGS_compileTimeIntAddOperator_2E_weak::operator = (const GGS_compileTimeIntAddOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator_2E_weak::GGS_compileTimeIntAddOperator_2E_weak (const GGS_compileTimeIntAddOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator_2E_weak GGS_compileTimeIntAddOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntAddOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator GGS_compileTimeIntAddOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntAddOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntAddOperator * p = (cPtr_compileTimeIntAddOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntAddOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator GGS_compileTimeIntAddOperator_2E_weak::bang_compileTimeIntAddOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntAddOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntAddOperator) ;
      result = GGS_compileTimeIntAddOperator ((cPtr_compileTimeIntAddOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntAddOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2E_weak ("compileTimeIntAddOperator.weak",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntAddOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntAddOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntAddOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAddOperator_2E_weak GGS_compileTimeIntAddOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntAddOperator_2E_weak result ;
  const GGS_compileTimeIntAddOperator_2E_weak * p = (const GGS_compileTimeIntAddOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntAddOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAddOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntBitWiseAndOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntBitWiseAndOperator::objectCompare (const GGS_compileTimeIntBitWiseAndOperator & inOperand) const {
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

GGS_compileTimeIntBitWiseAndOperator::GGS_compileTimeIntBitWiseAndOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator GGS_compileTimeIntBitWiseAndOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntBitWiseAndOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntBitWiseAndOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntBitWiseAndOperator_init (inCompiler) ;
  const GGS_compileTimeIntBitWiseAndOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseAndOperator::
compileTimeIntBitWiseAndOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator::GGS_compileTimeIntBitWiseAndOperator (const cPtr_compileTimeIntBitWiseAndOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntBitWiseAndOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator GGS_compileTimeIntBitWiseAndOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseAndOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntBitWiseAndOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntBitWiseAndOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntBitWiseAndOperator::cPtr_compileTimeIntBitWiseAndOperator (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntBitWiseAndOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ;
}

void cPtr_compileTimeIntBitWiseAndOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntBitWiseAndOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntBitWiseAndOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntBitWiseAndOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntBitWiseAndOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntBitWiseAndOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ("compileTimeIntBitWiseAndOperator",
                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntBitWiseAndOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntBitWiseAndOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntBitWiseAndOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator GGS_compileTimeIntBitWiseAndOperator::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseAndOperator result ;
  const GGS_compileTimeIntBitWiseAndOperator * p = (const GGS_compileTimeIntBitWiseAndOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntBitWiseAndOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseAndOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftLeftOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntShiftLeftOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftRightOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntShiftRightOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLessThanOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntLessThanOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLowerOrEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntLowerOrEqualOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntXorOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntXorOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseOrOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntBitWiseOrOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMinusOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntMinusOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntComplementOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntComplementOperator (inCompiler COMMA_THERE)) ;
  return result ;
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
// @boolTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolTypeAST::objectCompare (const GGS_boolTypeAST & inOperand) const {
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

GGS_boolTypeAST::GGS_boolTypeAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_boolTypeAST (inCompiler COMMA_THERE)) ;
  object->boolTypeAST_init (inCompiler) ;
  const GGS_boolTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::
boolTypeAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST::GGS_boolTypeAST (const cPtr_boolTypeAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_boolTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_boolTypeAST (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolTypeAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_boolTypeAST::cPtr_boolTypeAST (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

void cPtr_boolTypeAST::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@boolTypeAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolTypeAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolTypeAST ("boolTypeAST",
                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_boolTypeAST result ;
  const GGS_boolTypeAST * p = (const GGS_boolTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolTypeAST_2E_weak::objectCompare (const GGS_boolTypeAST_2E_weak & inOperand) const {
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

GGS_boolTypeAST_2E_weak::GGS_boolTypeAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak & GGS_boolTypeAST_2E_weak::operator = (const GGS_boolTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak::GGS_boolTypeAST_2E_weak (const GGS_boolTypeAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak GGS_boolTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_boolTypeAST result ;
  if (isValid ()) {
    const cPtr_boolTypeAST * p = (cPtr_boolTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_boolTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST_2E_weak::bang_boolTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolTypeAST) ;
      result = GGS_boolTypeAST ((cPtr_boolTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @boolTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ("boolTypeAST.weak",
                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak GGS_boolTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_boolTypeAST_2E_weak result ;
  const GGS_boolTypeAST_2E_weak * p = (const GGS_boolTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_typeAliasDeclarationAST_2E_weak::objectCompare (const GGS_typeAliasDeclarationAST_2E_weak & inOperand) const {
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

GGS_typeAliasDeclarationAST_2E_weak::GGS_typeAliasDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST_2E_weak & GGS_typeAliasDeclarationAST_2E_weak::operator = (const GGS_typeAliasDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST_2E_weak::GGS_typeAliasDeclarationAST_2E_weak (const GGS_typeAliasDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST_2E_weak GGS_typeAliasDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeAliasDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST GGS_typeAliasDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_typeAliasDeclarationAST result ;
  if (isValid ()) {
    const cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typeAliasDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST GGS_typeAliasDeclarationAST_2E_weak::bang_typeAliasDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeAliasDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeAliasDeclarationAST) ;
      result = GGS_typeAliasDeclarationAST ((cPtr_typeAliasDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeAliasDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2E_weak ("typeAliasDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeAliasDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeAliasDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeAliasDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST_2E_weak GGS_typeAliasDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeAliasDeclarationAST_2E_weak result ;
  const GGS_typeAliasDeclarationAST_2E_weak * p = (const GGS_typeAliasDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeAliasDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @expressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionAST::objectCompare (const GGS_expressionAST & inOperand) const {
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

GGS_expressionAST::GGS_expressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_expressionAST::
expressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST::GGS_expressionAST (const cPtr_expressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @expressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_expressionAST::cPtr_expressionAST (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @expressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionAST ("expressionAST",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_expressionAST::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_expressionAST result ;
  const GGS_expressionAST * p = (const GGS_expressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::objectCompare (const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak & inOperand) const {
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

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak & GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::operator = (const GGS_fixedSizeArrayTypeDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (const GGS_fixedSizeArrayTypeDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_fixedSizeArrayTypeDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_fixedSizeArrayTypeDeclarationAST result ;
  if (isValid ()) {
    const cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_fixedSizeArrayTypeDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::bang_fixedSizeArrayTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_fixedSizeArrayTypeDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
      result = GGS_fixedSizeArrayTypeDeclarationAST ((cPtr_fixedSizeArrayTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @fixedSizeArrayTypeDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2E_weak ("fixedSizeArrayTypeDeclarationAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayTypeDeclarationAST_2E_weak result ;
  const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak * p = (const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayTypeDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::objectCompare (const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak & inOperand) const {
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

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (void) :
GGS_userLLVMTypeDefinitionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak & GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::operator = (const GGS_userLLVMStaticArrayTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (const GGS_userLLVMStaticArrayTypeDefinitionIR & inSource) :
GGS_userLLVMTypeDefinitionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::unwrappedValue (void) const {
  GGS_userLLVMStaticArrayTypeDefinitionIR result ;
  if (isValid ()) {
    const cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_userLLVMStaticArrayTypeDefinitionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::bang_userLLVMStaticArrayTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_userLLVMStaticArrayTypeDefinitionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
      result = GGS_userLLVMStaticArrayTypeDefinitionIR ((cPtr_userLLVMStaticArrayTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @userLLVMStaticArrayTypeDefinitionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2E_weak ("userLLVMStaticArrayTypeDefinitionIR.weak",
                                                                                                & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak result ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak * p = (const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMStaticArrayTypeDefinitionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractAssignmentOperatorUsage::objectCompare (const GGS_abstractAssignmentOperatorUsage & inOperand) const {
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

GGS_abstractAssignmentOperatorUsage::GGS_abstractAssignmentOperatorUsage (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractAssignmentOperatorUsage::
abstractAssignmentOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage::GGS_abstractAssignmentOperatorUsage (const cPtr_abstractAssignmentOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractAssignmentOperatorUsage::cPtr_abstractAssignmentOperatorUsage (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractAssignmentOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ("abstractAssignmentOperatorUsage",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_abstractAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractAssignmentOperatorUsage result ;
  const GGS_abstractAssignmentOperatorUsage * p = (const GGS_abstractAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_abstractAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_abstractAssignmentOperatorUsage_2E_weak::GGS_abstractAssignmentOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak & GGS_abstractAssignmentOperatorUsage_2E_weak::operator = (const GGS_abstractAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak::GGS_abstractAssignmentOperatorUsage_2E_weak (const GGS_abstractAssignmentOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak GGS_abstractAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_abstractAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_abstractAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_abstractAssignmentOperatorUsage * p = (cPtr_abstractAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_abstractAssignmentOperatorUsage_2E_weak::bang_abstractAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractAssignmentOperatorUsage) ;
      result = GGS_abstractAssignmentOperatorUsage ((cPtr_abstractAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak ("abstractAssignmentOperatorUsage.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak GGS_abstractAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractAssignmentOperatorUsage_2E_weak result ;
  const GGS_abstractAssignmentOperatorUsage_2E_weak * p = (const GGS_abstractAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractRoutineIR_2E_weak::objectCompare (const GGS_abstractRoutineIR_2E_weak & inOperand) const {
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

GGS_abstractRoutineIR_2E_weak::GGS_abstractRoutineIR_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR_2E_weak & GGS_abstractRoutineIR_2E_weak::operator = (const GGS_abstractRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR_2E_weak::GGS_abstractRoutineIR_2E_weak (const GGS_abstractRoutineIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR_2E_weak GGS_abstractRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR GGS_abstractRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_abstractRoutineIR result ;
  if (isValid ()) {
    const cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR GGS_abstractRoutineIR_2E_weak::bang_abstractRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractRoutineIR) ;
      result = GGS_abstractRoutineIR ((cPtr_abstractRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak ("abstractRoutineIR.weak",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR_2E_weak GGS_abstractRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractRoutineIR_2E_weak result ;
  const GGS_abstractRoutineIR_2E_weak * p = (const GGS_abstractRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticArrayTypeAssignFunctionIR_2E_weak::objectCompare (const GGS_staticArrayTypeAssignFunctionIR_2E_weak & inOperand) const {
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

GGS_staticArrayTypeAssignFunctionIR_2E_weak::GGS_staticArrayTypeAssignFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak & GGS_staticArrayTypeAssignFunctionIR_2E_weak::operator = (const GGS_staticArrayTypeAssignFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak::GGS_staticArrayTypeAssignFunctionIR_2E_weak (const GGS_staticArrayTypeAssignFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak GGS_staticArrayTypeAssignFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_staticArrayTypeAssignFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_staticArrayTypeAssignFunctionIR result ;
  if (isValid ()) {
    const cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_staticArrayTypeAssignFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR_2E_weak::bang_staticArrayTypeAssignFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_staticArrayTypeAssignFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticArrayTypeAssignFunctionIR) ;
      result = GGS_staticArrayTypeAssignFunctionIR ((cPtr_staticArrayTypeAssignFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @staticArrayTypeAssignFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2E_weak ("staticArrayTypeAssignFunctionIR.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticArrayTypeAssignFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticArrayTypeAssignFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticArrayTypeAssignFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak GGS_staticArrayTypeAssignFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_staticArrayTypeAssignFunctionIR_2E_weak result ;
  const GGS_staticArrayTypeAssignFunctionIR_2E_weak * p = (const GGS_staticArrayTypeAssignFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticArrayTypeAssignFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeDynamicArrayDeclarationAST_2E_weak::objectCompare (const GGS_typeDynamicArrayDeclarationAST_2E_weak & inOperand) const {
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

GGS_typeDynamicArrayDeclarationAST_2E_weak::GGS_typeDynamicArrayDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak & GGS_typeDynamicArrayDeclarationAST_2E_weak::operator = (const GGS_typeDynamicArrayDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak::GGS_typeDynamicArrayDeclarationAST_2E_weak (const GGS_typeDynamicArrayDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak GGS_typeDynamicArrayDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_typeDynamicArrayDeclarationAST result ;
  if (isValid ()) {
    const cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typeDynamicArrayDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST_2E_weak::bang_typeDynamicArrayDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeDynamicArrayDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeDynamicArrayDeclarationAST) ;
      result = GGS_typeDynamicArrayDeclarationAST ((cPtr_typeDynamicArrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeDynamicArrayDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ("typeDynamicArrayDeclarationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDynamicArrayDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDynamicArrayDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDynamicArrayDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak GGS_typeDynamicArrayDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST_2E_weak result ;
  const GGS_typeDynamicArrayDeclarationAST_2E_weak * p = (const GGS_typeDynamicArrayDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDynamicArrayDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayRemoveAllFunctionIR_2E_weak::objectCompare (const GGS_dynArrayRemoveAllFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayRemoveAllFunctionIR_2E_weak::GGS_dynArrayRemoveAllFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak & GGS_dynArrayRemoveAllFunctionIR_2E_weak::operator = (const GGS_dynArrayRemoveAllFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak::GGS_dynArrayRemoveAllFunctionIR_2E_weak (const GGS_dynArrayRemoveAllFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak GGS_dynArrayRemoveAllFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynArrayRemoveAllFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynArrayRemoveAllFunctionIR * p = (cPtr_dynArrayRemoveAllFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynArrayRemoveAllFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR_2E_weak::bang_dynArrayRemoveAllFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayRemoveAllFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayRemoveAllFunctionIR) ;
      result = GGS_dynArrayRemoveAllFunctionIR ((cPtr_dynArrayRemoveAllFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynArrayRemoveAllFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ("dynArrayRemoveAllFunctionIR.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayRemoveAllFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayRemoveAllFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayRemoveAllFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak GGS_dynArrayRemoveAllFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR_2E_weak result ;
  const GGS_dynArrayRemoveAllFunctionIR_2E_weak * p = (const GGS_dynArrayRemoveAllFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayRemoveAllFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayLengthFunctionIR_2E_weak::objectCompare (const GGS_dynArrayLengthFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayLengthFunctionIR_2E_weak::GGS_dynArrayLengthFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak & GGS_dynArrayLengthFunctionIR_2E_weak::operator = (const GGS_dynArrayLengthFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak::GGS_dynArrayLengthFunctionIR_2E_weak (const GGS_dynArrayLengthFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak GGS_dynArrayLengthFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynArrayLengthFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynArrayLengthFunctionIR * p = (cPtr_dynArrayLengthFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynArrayLengthFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR_2E_weak::bang_dynArrayLengthFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayLengthFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayLengthFunctionIR) ;
      result = GGS_dynArrayLengthFunctionIR ((cPtr_dynArrayLengthFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynArrayLengthFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ("dynArrayLengthFunctionIR.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayLengthFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayLengthFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayLengthFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak GGS_dynArrayLengthFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR_2E_weak result ;
  const GGS_dynArrayLengthFunctionIR_2E_weak * p = (const GGS_dynArrayLengthFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayLengthFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayAppendFunctionIR_2E_weak::objectCompare (const GGS_dynArrayAppendFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayAppendFunctionIR_2E_weak::GGS_dynArrayAppendFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak & GGS_dynArrayAppendFunctionIR_2E_weak::operator = (const GGS_dynArrayAppendFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak::GGS_dynArrayAppendFunctionIR_2E_weak (const GGS_dynArrayAppendFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak GGS_dynArrayAppendFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynArrayAppendFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynArrayAppendFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR_2E_weak::bang_dynArrayAppendFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayAppendFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayAppendFunctionIR) ;
      result = GGS_dynArrayAppendFunctionIR ((cPtr_dynArrayAppendFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynArrayAppendFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2E_weak ("dynArrayAppendFunctionIR.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayAppendFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayAppendFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayAppendFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak GGS_dynArrayAppendFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR_2E_weak result ;
  const GGS_dynArrayAppendFunctionIR_2E_weak * p = (const GGS_dynArrayAppendFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayAppendFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayInsertFunctionIR_2E_weak::objectCompare (const GGS_dynArrayInsertFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayInsertFunctionIR_2E_weak::GGS_dynArrayInsertFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak & GGS_dynArrayInsertFunctionIR_2E_weak::operator = (const GGS_dynArrayInsertFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak::GGS_dynArrayInsertFunctionIR_2E_weak (const GGS_dynArrayInsertFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak GGS_dynArrayInsertFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynArrayInsertFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynArrayInsertFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR_2E_weak::bang_dynArrayInsertFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayInsertFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayInsertFunctionIR) ;
      result = GGS_dynArrayInsertFunctionIR ((cPtr_dynArrayInsertFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynArrayInsertFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2E_weak ("dynArrayInsertFunctionIR.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayInsertFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayInsertFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayInsertFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak GGS_dynArrayInsertFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR_2E_weak result ;
  const GGS_dynArrayInsertFunctionIR_2E_weak * p = (const GGS_dynArrayInsertFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayInsertFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & inOperand) const {
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

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::operator = (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  if (isValid ()) {
    const cPtr_dynamicArrayTypeAssignGenericFunctionIR * p = (cPtr_dynamicArrayTypeAssignGenericFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_dynamicArrayTypeAssignGenericFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::bang_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
      result = GGS_dynamicArrayTypeAssignGenericFunctionIR ((cPtr_dynamicArrayTypeAssignGenericFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dynamicArrayTypeAssignGenericFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak ("dynamicArrayTypeAssignGenericFunctionIR.weak",
                                                                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak result ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak * p = (const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@enumerationConstantList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_enumerationConstantList : public cCollectionElement {
  public: GGS_enumerationConstantList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_enumerationConstantList (const GGS_lstring & in_mConstantName,
                                                      const GGS_bigint & in_mConstantValue
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumerationConstantList (const GGS_enumerationConstantList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GGS_lstring & in_mConstantName,
                                                                                        const GGS_bigint & in_mConstantValue
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mConstantValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GGS_enumerationConstantList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mConstantValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_enumerationConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumerationConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_enumerationConstantList (mObject.mProperty_mConstantName, mObject.mProperty_mConstantValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @enumerationConstantList
//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList::GGS_enumerationConstantList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList::GGS_enumerationConstantList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    const GGS_enumerationConstantList_2E_element element (p->mObject.mProperty_mConstantName, p->mObject.mProperty_mConstantValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_lstring & in_mConstantName,
                                                             const GGS_bigint & in_mConstantValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumerationConstantList (in_mConstantName, in_mConstantValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumerationConstantList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_enumerationConstantList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList::description (String & ioString,
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
      ioString.appendString ("mConstantName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mConstantName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mConstantValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mConstantValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList GGS_enumerationConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_enumerationConstantList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList GGS_enumerationConstantList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationConstantList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList::plusPlusAssignOperation (const GGS_enumerationConstantList_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList GGS_enumerationConstantList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                   const GGS_bigint & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_enumerationConstantList_2E_element element (inOperand0, inOperand1) ;
  GGS_enumerationConstantList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList::addAssignOperation (const GGS_lstring & inOperand0,
                                                      const GGS_bigint & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  const GGS_enumerationConstantList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList::setter_append (const GGS_lstring inOperand0,
                                                 const GGS_bigint inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_enumerationConstantList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_bigint inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_enumerationConstantList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_enumerationConstantList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        GGS_bigint & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mConstantName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mConstantValue ;
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

void GGS_enumerationConstantList::setter_popFirst (GGS_lstring & outOperand0,
                                                   GGS_bigint & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mConstantName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mConstantValue ;
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

void GGS_enumerationConstantList::setter_popLast (GGS_lstring & outOperand0,
                                                  GGS_bigint & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mConstantName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mConstantValue ;
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

void GGS_enumerationConstantList::method_first (GGS_lstring & outOperand0,
                                                GGS_bigint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mConstantName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mConstantValue ;
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

void GGS_enumerationConstantList::method_last (GGS_lstring & outOperand0,
                                               GGS_bigint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mConstantName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mConstantValue ;
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

GGS_enumerationConstantList GGS_enumerationConstantList::add_operation (const GGS_enumerationConstantList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumerationConstantList result ;
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

GGS_enumerationConstantList GGS_enumerationConstantList::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_enumerationConstantList result ;
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

GGS_enumerationConstantList GGS_enumerationConstantList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_enumerationConstantList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList GGS_enumerationConstantList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_enumerationConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList GGS_enumerationConstantList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_enumerationConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList::plusAssignOperation (const GGS_enumerationConstantList inList,
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

void GGS_enumerationConstantList::setter_setMConstantNameAtIndex (GGS_lstring inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mConstantName = inOperand ;
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
  
GGS_lstring GGS_enumerationConstantList::getter_mConstantNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mConstantName ;
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

void GGS_enumerationConstantList::setter_setMConstantValueAtIndex (GGS_bigint inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mConstantValue = inOperand ;
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
  
GGS_bigint GGS_enumerationConstantList::getter_mConstantValueAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mConstantValue ;
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
// Down Enumerator for @enumerationConstantList
//--------------------------------------------------------------------------------------------------

DownEnumerator_enumerationConstantList::DownEnumerator_enumerationConstantList (const GGS_enumerationConstantList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element DownEnumerator_enumerationConstantList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_enumerationConstantList::current_mConstantName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_enumerationConstantList::current_mConstantValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mConstantValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @enumerationConstantList
//--------------------------------------------------------------------------------------------------

UpEnumerator_enumerationConstantList::UpEnumerator_enumerationConstantList (const GGS_enumerationConstantList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element UpEnumerator_enumerationConstantList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_enumerationConstantList::current_mConstantName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_enumerationConstantList::current_mConstantValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mConstantValue ;
}




//--------------------------------------------------------------------------------------------------
//     @enumerationConstantList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationConstantList ("enumerationConstantList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList GGS_enumerationConstantList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumerationConstantList result ;
  const GGS_enumerationConstantList * p = (const GGS_enumerationConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumerationDeclarationAST_2E_weak::objectCompare (const GGS_enumerationDeclarationAST_2E_weak & inOperand) const {
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

GGS_enumerationDeclarationAST_2E_weak::GGS_enumerationDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak & GGS_enumerationDeclarationAST_2E_weak::operator = (const GGS_enumerationDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak::GGS_enumerationDeclarationAST_2E_weak (const GGS_enumerationDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak GGS_enumerationDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumerationDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_enumerationDeclarationAST result ;
  if (isValid ()) {
    const cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumerationDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST_2E_weak::bang_enumerationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumerationDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumerationDeclarationAST) ;
      result = GGS_enumerationDeclarationAST ((cPtr_enumerationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumerationDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ("enumerationDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak GGS_enumerationDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST_2E_weak result ;
  const GGS_enumerationDeclarationAST_2E_weak * p = (const GGS_enumerationDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumToUintRoutineIR_2E_weak::objectCompare (const GGS_enumToUintRoutineIR_2E_weak & inOperand) const {
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

GGS_enumToUintRoutineIR_2E_weak::GGS_enumToUintRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR_2E_weak & GGS_enumToUintRoutineIR_2E_weak::operator = (const GGS_enumToUintRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR_2E_weak::GGS_enumToUintRoutineIR_2E_weak (const GGS_enumToUintRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR_2E_weak GGS_enumToUintRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumToUintRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR GGS_enumToUintRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_enumToUintRoutineIR result ;
  if (isValid ()) {
    const cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumToUintRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR GGS_enumToUintRoutineIR_2E_weak::bang_enumToUintRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumToUintRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumToUintRoutineIR) ;
      result = GGS_enumToUintRoutineIR ((cPtr_enumToUintRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumToUintRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR_2E_weak ("enumToUintRoutineIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumToUintRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumToUintRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumToUintRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR_2E_weak GGS_enumToUintRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumToUintRoutineIR_2E_weak result ;
  const GGS_enumToUintRoutineIR_2E_weak * p = (const GGS_enumToUintRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumToUintRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumToUintRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@structurePropertyListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_structurePropertyListAST : public cCollectionElement {
  public: GGS_structurePropertyListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_structurePropertyListAST (const GGS_lstring & in_mPropertyName,
                                                       const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                       const GGS_propertyVisibility & in_mVisibility,
                                                       const GGS_lstring & in_mPropertyTypeName,
                                                       const GGS_propertyKindAST & in_mPropertyKind
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_structurePropertyListAST (const GGS_structurePropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GGS_lstring & in_mPropertyName,
                                                                                          const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                          const GGS_propertyVisibility & in_mVisibility,
                                                                                          const GGS_lstring & in_mPropertyTypeName,
                                                                                          const GGS_propertyKindAST & in_mPropertyKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyAttributeList, in_mVisibility, in_mPropertyTypeName, in_mPropertyKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GGS_structurePropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyAttributeList, inElement.mProperty_mVisibility, inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_structurePropertyListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_structurePropertyListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyAttributeList, mObject.mProperty_mVisibility, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @structurePropertyListAST
//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST::GGS_structurePropertyListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST::GGS_structurePropertyListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    const GGS_structurePropertyListAST_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mPropertyAttributeList, p->mObject.mProperty_mVisibility, p->mObject.mProperty_mPropertyTypeName, p->mObject.mProperty_mPropertyKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mPropertyName,
                                                              const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                              const GGS_propertyVisibility & in_mVisibility,
                                                              const GGS_lstring & in_mPropertyTypeName,
                                                              const GGS_propertyKindAST & in_mPropertyKind
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_structurePropertyListAST (in_mPropertyName, in_mPropertyAttributeList, in_mVisibility, in_mPropertyTypeName, in_mPropertyKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_structurePropertyListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_structurePropertyListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::description (String & ioString,
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
      ioString.appendString ("mPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyAttributeList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyAttributeList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mVisibility:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mVisibility.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyKind.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_structurePropertyListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_structurePropertyListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_structurePropertyListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_structurePropertyListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::plusPlusAssignOperation (const GGS_structurePropertyListAST_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_structurePropertyListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_propertyAttributeList & inOperand1,
                                                                                     const GGS_propertyVisibility & inOperand2,
                                                                                     const GGS_lstring & inOperand3,
                                                                                     const GGS_propertyKindAST & inOperand4
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_structurePropertyListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_structurePropertyListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_propertyAttributeList & inOperand1,
                                                       const GGS_propertyVisibility & inOperand2,
                                                       const GGS_lstring & inOperand3,
                                                       const GGS_propertyKindAST & inOperand4
                                                       COMMA_LOCATION_ARGS) {
  const GGS_structurePropertyListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_propertyAttributeList inOperand1,
                                                  const GGS_propertyVisibility inOperand2,
                                                  const GGS_lstring inOperand3,
                                                  const GGS_propertyKindAST inOperand4,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_structurePropertyListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_propertyAttributeList inOperand1,
                                                         const GGS_propertyVisibility inOperand2,
                                                         const GGS_lstring inOperand3,
                                                         const GGS_propertyKindAST inOperand4,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_structurePropertyListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GGS_structurePropertyListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_propertyAttributeList & outOperand1,
                                                         GGS_propertyVisibility & outOperand2,
                                                         GGS_lstring & outOperand3,
                                                         GGS_propertyKindAST & outOperand4,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mPropertyName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mPropertyAttributeList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mVisibility ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mPropertyTypeName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mPropertyKind ;
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
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_propertyAttributeList & outOperand1,
                                                    GGS_propertyVisibility & outOperand2,
                                                    GGS_lstring & outOperand3,
                                                    GGS_propertyKindAST & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyAttributeList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mVisibility ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mPropertyTypeName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mPropertyKind ;
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
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_propertyAttributeList & outOperand1,
                                                   GGS_propertyVisibility & outOperand2,
                                                   GGS_lstring & outOperand3,
                                                   GGS_propertyKindAST & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyAttributeList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mVisibility ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mPropertyTypeName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mPropertyKind ;
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
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::method_first (GGS_lstring & outOperand0,
                                                 GGS_propertyAttributeList & outOperand1,
                                                 GGS_propertyVisibility & outOperand2,
                                                 GGS_lstring & outOperand3,
                                                 GGS_propertyKindAST & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyAttributeList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mVisibility ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mPropertyTypeName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mPropertyKind ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::method_last (GGS_lstring & outOperand0,
                                                GGS_propertyAttributeList & outOperand1,
                                                GGS_propertyVisibility & outOperand2,
                                                GGS_lstring & outOperand3,
                                                GGS_propertyKindAST & outOperand4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyAttributeList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mVisibility ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mPropertyTypeName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mPropertyKind ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_structurePropertyListAST::add_operation (const GGS_structurePropertyListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_structurePropertyListAST result ;
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

GGS_structurePropertyListAST GGS_structurePropertyListAST::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_structurePropertyListAST result ;
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

GGS_structurePropertyListAST GGS_structurePropertyListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_structurePropertyListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_structurePropertyListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_structurePropertyListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_structurePropertyListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_structurePropertyListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::plusAssignOperation (const GGS_structurePropertyListAST inList,
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

void GGS_structurePropertyListAST::setter_setMPropertyNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName = inOperand ;
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
  
GGS_lstring GGS_structurePropertyListAST::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName ;
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

void GGS_structurePropertyListAST::setter_setMPropertyAttributeListAtIndex (GGS_propertyAttributeList inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyAttributeList = inOperand ;
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
  
GGS_propertyAttributeList GGS_structurePropertyListAST::getter_mPropertyAttributeListAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyAttributeList ;
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

void GGS_structurePropertyListAST::setter_setMVisibilityAtIndex (GGS_propertyVisibility inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mVisibility = inOperand ;
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
  
GGS_propertyVisibility GGS_structurePropertyListAST::getter_mVisibilityAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_propertyVisibility result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mVisibility ;
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

void GGS_structurePropertyListAST::setter_setMPropertyTypeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyTypeName = inOperand ;
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
  
GGS_lstring GGS_structurePropertyListAST::getter_mPropertyTypeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyTypeName ;
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

void GGS_structurePropertyListAST::setter_setMPropertyKindAtIndex (GGS_propertyKindAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyKind = inOperand ;
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
  
GGS_propertyKindAST GGS_structurePropertyListAST::getter_mPropertyKindAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_propertyKindAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyKind ;
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
// Down Enumerator for @structurePropertyListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_structurePropertyListAST::DownEnumerator_structurePropertyListAST (const GGS_structurePropertyListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST_2E_element DownEnumerator_structurePropertyListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_structurePropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList DownEnumerator_structurePropertyListAST::current_mPropertyAttributeList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility DownEnumerator_structurePropertyListAST::current_mVisibility (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_structurePropertyListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST DownEnumerator_structurePropertyListAST::current_mPropertyKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyKind ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @structurePropertyListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_structurePropertyListAST::UpEnumerator_structurePropertyListAST (const GGS_structurePropertyListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST_2E_element UpEnumerator_structurePropertyListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_structurePropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList UpEnumerator_structurePropertyListAST::current_mPropertyAttributeList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility UpEnumerator_structurePropertyListAST::current_mVisibility (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_structurePropertyListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST UpEnumerator_structurePropertyListAST::current_mPropertyKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyKind ;
}




//--------------------------------------------------------------------------------------------------
//     @structurePropertyListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structurePropertyListAST ("structurePropertyListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structurePropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structurePropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structurePropertyListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_structurePropertyListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_structurePropertyListAST result ;
  const GGS_structurePropertyListAST * p = (const GGS_structurePropertyListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structurePropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structureDeclarationAST_2E_weak::objectCompare (const GGS_structureDeclarationAST_2E_weak & inOperand) const {
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

GGS_structureDeclarationAST_2E_weak::GGS_structureDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST_2E_weak & GGS_structureDeclarationAST_2E_weak::operator = (const GGS_structureDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST_2E_weak::GGS_structureDeclarationAST_2E_weak (const GGS_structureDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST_2E_weak GGS_structureDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structureDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST GGS_structureDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_structureDeclarationAST result ;
  if (isValid ()) {
    const cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_structureDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST GGS_structureDeclarationAST_2E_weak::bang_structureDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structureDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureDeclarationAST) ;
      result = GGS_structureDeclarationAST ((cPtr_structureDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structureDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureDeclarationAST_2E_weak ("structureDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structureDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structureDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structureDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST_2E_weak GGS_structureDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_structureDeclarationAST_2E_weak result ;
  const GGS_structureDeclarationAST_2E_weak * p = (const GGS_structureDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structureDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@propertyAttributeList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_propertyAttributeList : public cCollectionElement {
  public: GGS_propertyAttributeList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_propertyAttributeList (const GGS_lstring & in_mAttributeName,
                                                    const GGS_lbigint & in_mAttributeValue
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyAttributeList (const GGS_propertyAttributeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyAttributeList::cCollectionElement_propertyAttributeList (const GGS_lstring & in_mAttributeName,
                                                                                    const GGS_lbigint & in_mAttributeValue
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyAttributeList::cCollectionElement_propertyAttributeList (const GGS_propertyAttributeList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyAttributeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyAttributeList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyAttributeList (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @propertyAttributeList
//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList::GGS_propertyAttributeList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList::GGS_propertyAttributeList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    const GGS_propertyAttributeList_2E_element element (p->mObject.mProperty_mAttributeName, p->mObject.mProperty_mAttributeValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_lstring & in_mAttributeName,
                                                           const GGS_lbigint & in_mAttributeValue
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyAttributeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyAttributeList (in_mAttributeName, in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyAttributeList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_propertyAttributeList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::description (String & ioString,
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
      ioString.appendString ("mAttributeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAttributeValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_propertyAttributeList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAttributeList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::plusPlusAssignOperation (const GGS_propertyAttributeList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_lbigint & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_propertyAttributeList_2E_element element (inOperand0, inOperand1) ;
  GGS_propertyAttributeList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::addAssignOperation (const GGS_lstring & inOperand0,
                                                    const GGS_lbigint & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  const GGS_propertyAttributeList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_lbigint inOperand1,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_propertyAttributeList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_lbigint inOperand1,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_propertyAttributeList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_propertyAttributeList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_lbigint & outOperand1,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAttributeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mAttributeValue ;
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

void GGS_propertyAttributeList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_lbigint & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeValue ;
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

void GGS_propertyAttributeList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_lbigint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeValue ;
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

void GGS_propertyAttributeList::method_first (GGS_lstring & outOperand0,
                                              GGS_lbigint & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeValue ;
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

void GGS_propertyAttributeList::method_last (GGS_lstring & outOperand0,
                                             GGS_lbigint & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeValue ;
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

GGS_propertyAttributeList GGS_propertyAttributeList::add_operation (const GGS_propertyAttributeList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
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

GGS_propertyAttributeList GGS_propertyAttributeList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
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

GGS_propertyAttributeList GGS_propertyAttributeList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::plusAssignOperation (const GGS_propertyAttributeList inList,
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

void GGS_propertyAttributeList::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName = inOperand ;
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
  
GGS_lstring GGS_propertyAttributeList::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName ;
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

void GGS_propertyAttributeList::setter_setMAttributeValueAtIndex (GGS_lbigint inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeValue = inOperand ;
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
  
GGS_lbigint GGS_propertyAttributeList::getter_mAttributeValueAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lbigint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeValue ;
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
// Down Enumerator for @propertyAttributeList
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyAttributeList::DownEnumerator_propertyAttributeList (const GGS_propertyAttributeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element DownEnumerator_propertyAttributeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyAttributeList::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint DownEnumerator_propertyAttributeList::current_mAttributeValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @propertyAttributeList
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyAttributeList::UpEnumerator_propertyAttributeList (const GGS_propertyAttributeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element UpEnumerator_propertyAttributeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyAttributeList::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint UpEnumerator_propertyAttributeList::current_mAttributeValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeValue ;
}




//--------------------------------------------------------------------------------------------------
//     @propertyAttributeList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAttributeList ("propertyAttributeList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAttributeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAttributeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAttributeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAttributeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyAttributeList result ;
  const GGS_propertyAttributeList * p = (const GGS_propertyAttributeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAttributeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAttributeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyKindAST
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST::GGS_propertyKindAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_initializedStoredProperty (const GGS_expressionAST & inAssociatedValue0
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_initializedStoredProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKindAST_2E_initializedStoredProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_uninitializedStoredProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_uninitializedStoredProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_initializedConstantProperty (const GGS_expressionAST & inAssociatedValue0
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_initializedConstantProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKindAST_2E_initializedConstantProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_uninitializedConstantProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_uninitializedConstantProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_readOnlyComputedProperty (const GGS_instructionListAST & inAssociatedValue0,
                                                                              const GGS_location & inAssociatedValue1
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_readOnlyComputedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKindAST_2E_readOnlyComputedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_writeComputedProperty (const GGS_instructionListAST & inAssociatedValue0,
                                                                           const GGS_location & inAssociatedValue1
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_writeComputedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKindAST_2E_writeComputedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::method_extractInitializedStoredProperty (GGS_expressionAST & outAssociatedValue_initExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_initializedStoredProperty) {
    outAssociatedValue_initExpression.drop () ;
    String s ;
    s.appendCString ("method @propertyKindAST.initializedStoredProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKindAST_2E_initializedStoredProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_initExpression = ptr->mProperty_initExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::method_extractInitializedConstantProperty (GGS_expressionAST & outAssociatedValue_initExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_initializedConstantProperty) {
    outAssociatedValue_initExpression.drop () ;
    String s ;
    s.appendCString ("method @propertyKindAST.initializedConstantProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKindAST_2E_initializedConstantProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_initExpression = ptr->mProperty_initExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::method_extractReadOnlyComputedProperty (GGS_instructionListAST & outAssociatedValue_instructionList,
                                                                  GGS_location & outAssociatedValue_endOfInstructionList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_readOnlyComputedProperty) {
    outAssociatedValue_instructionList.drop () ;
    outAssociatedValue_endOfInstructionList.drop () ;
    String s ;
    s.appendCString ("method @propertyKindAST.readOnlyComputedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKindAST_2E_readOnlyComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_instructionList = ptr->mProperty_instructionList ;
    outAssociatedValue_endOfInstructionList = ptr->mProperty_endOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::method_extractWriteComputedProperty (GGS_instructionListAST & outAssociatedValue_instructionList,
                                                               GGS_location & outAssociatedValue_endOfInstructionList,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_writeComputedProperty) {
    outAssociatedValue_instructionList.drop () ;
    outAssociatedValue_endOfInstructionList.drop () ;
    String s ;
    s.appendCString ("method @propertyKindAST.writeComputedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKindAST_2E_writeComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_instructionList = ptr->mProperty_instructionList ;
    outAssociatedValue_endOfInstructionList = ptr->mProperty_endOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_ GGS_propertyKindAST::getter_getInitializedStoredProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKindAST_2E_initializedStoredProperty_3F_ result ;
  if (mEnum == Enumeration::enum_initializedStoredProperty) {
    const auto ptr = (const GGS_propertyKindAST_2E_initializedStoredProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKindAST_2E_initializedStoredProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::getAssociatedValuesFor_initializedStoredProperty (GGS_expressionAST & out_initExpression) const {
  const auto ptr = (const GGS_propertyKindAST_2E_initializedStoredProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_initExpression = ptr->mProperty_initExpression ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_ GGS_propertyKindAST::getter_getInitializedConstantProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKindAST_2E_initializedConstantProperty_3F_ result ;
  if (mEnum == Enumeration::enum_initializedConstantProperty) {
    const auto ptr = (const GGS_propertyKindAST_2E_initializedConstantProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKindAST_2E_initializedConstantProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::getAssociatedValuesFor_initializedConstantProperty (GGS_expressionAST & out_initExpression) const {
  const auto ptr = (const GGS_propertyKindAST_2E_initializedConstantProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_initExpression = ptr->mProperty_initExpression ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ GGS_propertyKindAST::getter_getReadOnlyComputedProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_readOnlyComputedProperty) {
    const auto ptr = (const GGS_propertyKindAST_2E_readOnlyComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKindAST_2E_readOnlyComputedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::getAssociatedValuesFor_readOnlyComputedProperty (GGS_instructionListAST & out_instructionList,
                                                                           GGS_location & out_endOfInstructionList) const {
  const auto ptr = (const GGS_propertyKindAST_2E_readOnlyComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_instructionList = ptr->mProperty_instructionList ;
  out_endOfInstructionList = ptr->mProperty_endOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_ GGS_propertyKindAST::getter_getWriteComputedProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKindAST_2E_writeComputedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_writeComputedProperty) {
    const auto ptr = (const GGS_propertyKindAST_2E_writeComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKindAST_2E_writeComputedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::getAssociatedValuesFor_writeComputedProperty (GGS_instructionListAST & out_instructionList,
                                                                        GGS_location & out_endOfInstructionList) const {
  const auto ptr = (const GGS_propertyKindAST_2E_writeComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_instructionList = ptr->mProperty_instructionList ;
  out_endOfInstructionList = ptr->mProperty_endOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyKindAST [7] = {
  "(not built)",
  "initializedStoredProperty",
  "uninitializedStoredProperty",
  "initializedConstantProperty",
  "uninitializedConstantProperty",
  "readOnlyComputedProperty",
  "writeComputedProperty"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isInitializedStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_initializedStoredProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isUninitializedStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uninitializedStoredProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isInitializedConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_initializedConstantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isUninitializedConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uninitializedConstantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isReadOnlyComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_readOnlyComputedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isWriteComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_writeComputedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyKindAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyKindAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyKindAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST ("propertyKindAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  const GGS_propertyKindAST * p = (const GGS_propertyKindAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@propertyList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_propertyList : public cCollectionElement {
  public: GGS_propertyList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_propertyList (const GGS_string & in_mPropertyName,
                                           const GGS_omnibusType & in_mType
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyList (const GGS_propertyList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyList::cCollectionElement_propertyList (const GGS_string & in_mPropertyName,
                                                                  const GGS_omnibusType & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyList::cCollectionElement_propertyList (const GGS_propertyList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyList (mObject.mProperty_mPropertyName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @propertyList
//--------------------------------------------------------------------------------------------------

GGS_propertyList::GGS_propertyList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList::GGS_propertyList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    const GGS_propertyList_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_string & in_mPropertyName,
                                                  const GGS_omnibusType & in_mType
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyList (in_mPropertyName, in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_propertyList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::description (String & ioString,
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
      ioString.appendString ("mPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_propertyList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::plusPlusAssignOperation (const GGS_propertyList_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::class_func_listWithValue (const GGS_string & inOperand0,
                                                             const GGS_omnibusType & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  const GGS_propertyList_2E_element element (inOperand0, inOperand1) ;
  GGS_propertyList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::addAssignOperation (const GGS_string & inOperand0,
                                           const GGS_omnibusType & inOperand1
                                           COMMA_LOCATION_ARGS) {
  const GGS_propertyList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::setter_append (const GGS_string inOperand0,
                                      const GGS_omnibusType inOperand1,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_propertyList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::setter_insertAtIndex (const GGS_string inOperand0,
                                             const GGS_omnibusType inOperand1,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_propertyList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_propertyList::setter_removeAtIndex (GGS_string & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mPropertyName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mType ;
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

void GGS_propertyList::setter_popFirst (GGS_string & outOperand0,
                                        GGS_omnibusType & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
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

void GGS_propertyList::setter_popLast (GGS_string & outOperand0,
                                       GGS_omnibusType & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
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

void GGS_propertyList::method_first (GGS_string & outOperand0,
                                     GGS_omnibusType & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
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

void GGS_propertyList::method_last (GGS_string & outOperand0,
                                    GGS_omnibusType & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
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

GGS_propertyList GGS_propertyList::add_operation (const GGS_propertyList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyList result ;
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

GGS_propertyList GGS_propertyList::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
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

GGS_propertyList GGS_propertyList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::plusAssignOperation (const GGS_propertyList inList,
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

void GGS_propertyList::setter_setMPropertyNameAtIndex (GGS_string inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName = inOperand ;
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
  
GGS_string GGS_propertyList::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName ;
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

void GGS_propertyList::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
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
  
GGS_omnibusType GGS_propertyList::getter_mTypeAtIndex (const GGS_uint & inIndex,
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

ComparisonResult GGS_propertyList::objectCompare (const GGS_propertyList & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_propertyList_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_propertyList_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @propertyList
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyList::DownEnumerator_propertyList (const GGS_propertyList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element DownEnumerator_propertyList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_propertyList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @propertyList
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyList::UpEnumerator_propertyList (const GGS_propertyList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element UpEnumerator_propertyList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_propertyList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//     @propertyList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyList ("propertyList",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyList result ;
  const GGS_propertyList * p = (const GGS_propertyList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@sortedOperandIRList' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_sortedOperandIRList (const GGS_sortedOperandIRList_2E_element & inLeft,
                                                      const GGS_sortedOperandIRList_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mIndex.objectCompare (inRight.mProperty_mIndex) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList::GGS_sortedOperandIRList (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedOperandIRList::objectCompare (const GGS_sortedOperandIRList & inOperand) const {
    ComparisonResult result = ComparisonResult::invalid ;
    if (isValid () && inOperand.isValid ()) {
      if (count () < inOperand.count ()) {
        result = ComparisonResult::firstOperandLowerThanSecond ;
      }else if (count () > inOperand.count ()) {
        result = ComparisonResult::firstOperandGreaterThanSecond ;
      }else{
        result = ComparisonResult::operandEqual ;
        for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
          const GGS_sortedOperandIRList_2E_element left = mSharedArray (i COMMA_HERE) ;
          const GGS_sortedOperandIRList_2E_element right = inOperand.mSharedArray (i COMMA_HERE) ;
          result = left.objectCompare (right) ;
        }
      }
    }
    return result ;
  }

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sortedOperandIRList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::plusPlusAssignOperation (const GGS_sortedOperandIRList_2E_element & inElement
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_sortedOperandIRList) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList GGS_sortedOperandIRList::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_sortedOperandIRList result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList GGS_sortedOperandIRList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedOperandIRList result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList GGS_sortedOperandIRList::class_func_sortedListWithValue (const GGS_objectIR & inOperand0,
                                                                                 const GGS_uint & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_sortedOperandIRList result = class_func_emptySortedList (THERE) ;
  const GGS_sortedOperandIRList_2E_element newElement (inOperand0, inOperand1) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::addAssignOperation (const GGS_objectIR & inOperand0,
                                                  const GGS_uint & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  const GGS_sortedOperandIRList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::setter_insert (const GGS_objectIR inOperand0,
                                             const GGS_uint inOperand1,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  const GGS_sortedOperandIRList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::plusAssignOperation (const GGS_sortedOperandIRList inSortedList,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_sortedOperandIRList) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::setter_popSmallest (GGS_objectIR & outOperand0,
                                                  GGS_uint & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mOperand ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mIndex ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::setter_popGreatest (GGS_objectIR & outOperand0,
                                                  GGS_uint & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mOperand ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mIndex ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::method_smallest (GGS_objectIR & outOperand0,
                                               GGS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mOperand ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mIndex ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::method_greatest (GGS_objectIR & outOperand0,
                                               GGS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mOperand ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mIndex ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedOperandIRList::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @sortedOperandIRList
//--------------------------------------------------------------------------------------------------

DownEnumerator_sortedOperandIRList::DownEnumerator_sortedOperandIRList (const GGS_sortedOperandIRList & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element DownEnumerator_sortedOperandIRList::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_sortedOperandIRList::current_mOperand (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_sortedOperandIRList::current_mIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sortedOperandIRList
//--------------------------------------------------------------------------------------------------

UpEnumerator_sortedOperandIRList::UpEnumerator_sortedOperandIRList (const GGS_sortedOperandIRList & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList_2E_element UpEnumerator_sortedOperandIRList::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_sortedOperandIRList::current_mOperand (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_sortedOperandIRList::current_mIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mIndex ;
}



//--------------------------------------------------------------------------------------------------
//     @sortedOperandIRList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedOperandIRList ("sortedOperandIRList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedOperandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedOperandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedOperandIRList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedOperandIRList GGS_sortedOperandIRList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_sortedOperandIRList result ;
  const GGS_sortedOperandIRList * p = (const GGS_sortedOperandIRList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedOperandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @userLLVMSructureTypeDefinitionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMSructureTypeDefinitionIR::objectCompare (const GGS_userLLVMSructureTypeDefinitionIR & inOperand) const {
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

GGS_userLLVMSructureTypeDefinitionIR::GGS_userLLVMSructureTypeDefinitionIR (void) :
GGS_userLLVMTypeDefinitionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR GGS_userLLVMSructureTypeDefinitionIR::
init_21__21_ (const GGS_string & in_mLLVMDefinedTypeName,
              const GGS_propertyList & in_mPropertyList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_userLLVMSructureTypeDefinitionIR * object = nullptr ;
  macroMyNew (object, cPtr_userLLVMSructureTypeDefinitionIR (inCompiler COMMA_THERE)) ;
  object->userLLVMSructureTypeDefinitionIR_init_21__21_ (in_mLLVMDefinedTypeName, in_mPropertyList, inCompiler) ;
  const GGS_userLLVMSructureTypeDefinitionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMSructureTypeDefinitionIR::
userLLVMSructureTypeDefinitionIR_init_21__21_ (const GGS_string & in_mLLVMDefinedTypeName,
                                               const GGS_propertyList & in_mPropertyList,
                                               Compiler * /* inCompiler */) {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR::GGS_userLLVMSructureTypeDefinitionIR (const cPtr_userLLVMSructureTypeDefinitionIR * inSourcePtr) :
GGS_userLLVMTypeDefinitionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMSructureTypeDefinitionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR GGS_userLLVMSructureTypeDefinitionIR::class_func_new (const GGS_string & in_mLLVMDefinedTypeName,
                                                                                           const GGS_propertyList & in_mPropertyList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_userLLVMSructureTypeDefinitionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_userLLVMSructureTypeDefinitionIR (in_mLLVMDefinedTypeName, in_mPropertyList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_userLLVMSructureTypeDefinitionIR::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyList () ;
  }else{
    cPtr_userLLVMSructureTypeDefinitionIR * p = (cPtr_userLLVMSructureTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMSructureTypeDefinitionIR) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMSructureTypeDefinitionIR::setProperty_mPropertyList (const GGS_propertyList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMSructureTypeDefinitionIR * p = (cPtr_userLLVMSructureTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMSructureTypeDefinitionIR) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMSructureTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

cPtr_userLLVMSructureTypeDefinitionIR::cPtr_userLLVMSructureTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (inCompiler COMMA_THERE),
mProperty_mPropertyList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_userLLVMSructureTypeDefinitionIR::cPtr_userLLVMSructureTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                                                              const GGS_propertyList & in_mPropertyList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (in_mLLVMDefinedTypeName, inCompiler COMMA_THERE),
mProperty_mPropertyList () {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_userLLVMSructureTypeDefinitionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;
}

void cPtr_userLLVMSructureTypeDefinitionIR::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@userLLVMSructureTypeDefinitionIR:") ;
  mProperty_mLLVMDefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_userLLVMSructureTypeDefinitionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_userLLVMSructureTypeDefinitionIR (mProperty_mLLVMDefinedTypeName, mProperty_mPropertyList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_userLLVMSructureTypeDefinitionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_userLLVMTypeDefinitionIR::printNonNullClassInstanceProperties () ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @userLLVMSructureTypeDefinitionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ("userLLVMSructureTypeDefinitionIR",
                                                                                     & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMSructureTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMSructureTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMSructureTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR GGS_userLLVMSructureTypeDefinitionIR::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_userLLVMSructureTypeDefinitionIR result ;
  const GGS_userLLVMSructureTypeDefinitionIR * p = (const GGS_userLLVMSructureTypeDefinitionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMSructureTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMSructureTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMSructureTypeDefinitionIR_2E_weak::objectCompare (const GGS_userLLVMSructureTypeDefinitionIR_2E_weak & inOperand) const {
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

GGS_userLLVMSructureTypeDefinitionIR_2E_weak::GGS_userLLVMSructureTypeDefinitionIR_2E_weak (void) :
GGS_userLLVMTypeDefinitionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR_2E_weak & GGS_userLLVMSructureTypeDefinitionIR_2E_weak::operator = (const GGS_userLLVMSructureTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR_2E_weak::GGS_userLLVMSructureTypeDefinitionIR_2E_weak (const GGS_userLLVMSructureTypeDefinitionIR & inSource) :
GGS_userLLVMTypeDefinitionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR_2E_weak GGS_userLLVMSructureTypeDefinitionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_userLLVMSructureTypeDefinitionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR GGS_userLLVMSructureTypeDefinitionIR_2E_weak::unwrappedValue (void) const {
  GGS_userLLVMSructureTypeDefinitionIR result ;
  if (isValid ()) {
    const cPtr_userLLVMSructureTypeDefinitionIR * p = (cPtr_userLLVMSructureTypeDefinitionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_userLLVMSructureTypeDefinitionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR GGS_userLLVMSructureTypeDefinitionIR_2E_weak::bang_userLLVMSructureTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_userLLVMSructureTypeDefinitionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMSructureTypeDefinitionIR) ;
      result = GGS_userLLVMSructureTypeDefinitionIR ((cPtr_userLLVMSructureTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @userLLVMSructureTypeDefinitionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR_2E_weak ("userLLVMSructureTypeDefinitionIR.weak",
                                                                                             & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMSructureTypeDefinitionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMSructureTypeDefinitionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMSructureTypeDefinitionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMSructureTypeDefinitionIR_2E_weak GGS_userLLVMSructureTypeDefinitionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_userLLVMSructureTypeDefinitionIR_2E_weak result ;
  const GGS_userLLVMSructureTypeDefinitionIR_2E_weak * p = (const GGS_userLLVMSructureTypeDefinitionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMSructureTypeDefinitionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMSructureTypeDefinitionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structureAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_structureAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_structureAssignmentOperatorUsage_2E_weak::GGS_structureAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage_2E_weak & GGS_structureAssignmentOperatorUsage_2E_weak::operator = (const GGS_structureAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage_2E_weak::GGS_structureAssignmentOperatorUsage_2E_weak (const GGS_structureAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage_2E_weak GGS_structureAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structureAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage GGS_structureAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_structureAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_structureAssignmentOperatorUsage * p = (cPtr_structureAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_structureAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage GGS_structureAssignmentOperatorUsage_2E_weak::bang_structureAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structureAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureAssignmentOperatorUsage) ;
      result = GGS_structureAssignmentOperatorUsage ((cPtr_structureAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structureAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage_2E_weak ("structureAssignmentOperatorUsage.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structureAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structureAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structureAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage_2E_weak GGS_structureAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_structureAssignmentOperatorUsage_2E_weak result ;
  const GGS_structureAssignmentOperatorUsage_2E_weak * p = (const GGS_structureAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structureAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structureTypeAssignFunctionIR_2E_weak::objectCompare (const GGS_structureTypeAssignFunctionIR_2E_weak & inOperand) const {
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

GGS_structureTypeAssignFunctionIR_2E_weak::GGS_structureTypeAssignFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR_2E_weak & GGS_structureTypeAssignFunctionIR_2E_weak::operator = (const GGS_structureTypeAssignFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR_2E_weak::GGS_structureTypeAssignFunctionIR_2E_weak (const GGS_structureTypeAssignFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR_2E_weak GGS_structureTypeAssignFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structureTypeAssignFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR GGS_structureTypeAssignFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_structureTypeAssignFunctionIR result ;
  if (isValid ()) {
    const cPtr_structureTypeAssignFunctionIR * p = (cPtr_structureTypeAssignFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_structureTypeAssignFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR GGS_structureTypeAssignFunctionIR_2E_weak::bang_structureTypeAssignFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structureTypeAssignFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureTypeAssignFunctionIR) ;
      result = GGS_structureTypeAssignFunctionIR ((cPtr_structureTypeAssignFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structureTypeAssignFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR_2E_weak ("structureTypeAssignFunctionIR.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structureTypeAssignFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structureTypeAssignFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structureTypeAssignFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR_2E_weak GGS_structureTypeAssignFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_structureTypeAssignFunctionIR_2E_weak result ;
  const GGS_structureTypeAssignFunctionIR_2E_weak * p = (const GGS_structureTypeAssignFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structureTypeAssignFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureTypeAssignFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @integerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerDeclarationAST::objectCompare (const GGS_integerDeclarationAST & inOperand) const {
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

GGS_integerDeclarationAST::GGS_integerDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_integerDeclarationAST GGS_integerDeclarationAST::
init_21__21_ (const GGS_bool & in_mIsSigned,
              const GGS_uint & in_mSize,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_integerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_integerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->integerDeclarationAST_init_21__21_ (in_mIsSigned, in_mSize, inCompiler) ;
  const GGS_integerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::
integerDeclarationAST_init_21__21_ (const GGS_bool & in_mIsSigned,
                                    const GGS_uint & in_mSize,
                                    Compiler * /* inCompiler */) {
  mProperty_mIsSigned = in_mIsSigned ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST::GGS_integerDeclarationAST (const cPtr_integerDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST GGS_integerDeclarationAST::class_func_new (const GGS_bool & in_mIsSigned,
                                                                     const GGS_uint & in_mSize,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_integerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_integerDeclarationAST (in_mIsSigned, in_mSize,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_integerDeclarationAST::readProperty_mIsSigned (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    return p->mProperty_mIsSigned ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerDeclarationAST::setProperty_mIsSigned (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    p->mProperty_mIsSigned = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_integerDeclarationAST::readProperty_mSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    return p->mProperty_mSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerDeclarationAST::setProperty_mSize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    p->mProperty_mSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_integerDeclarationAST::cPtr_integerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsSigned (),
mProperty_mSize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_integerDeclarationAST::cPtr_integerDeclarationAST (const GGS_bool & in_mIsSigned,
                                                        const GGS_uint & in_mSize,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsSigned (),
mProperty_mSize () {
  mProperty_mIsSigned = in_mIsSigned ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_integerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST ;
}

void cPtr_integerDeclarationAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@integerDeclarationAST:") ;
  mProperty_mIsSigned.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_integerDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerDeclarationAST (mProperty_mIsSigned, mProperty_mSize, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_integerDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsSigned.printNonNullClassInstanceProperties ("mIsSigned") ;
    mProperty_mSize.printNonNullClassInstanceProperties ("mSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @integerDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerDeclarationAST ("integerDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST GGS_integerDeclarationAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_integerDeclarationAST result ;
  const GGS_integerDeclarationAST * p = (const GGS_integerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerDeclarationAST_2E_weak::objectCompare (const GGS_integerDeclarationAST_2E_weak & inOperand) const {
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

GGS_integerDeclarationAST_2E_weak::GGS_integerDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST_2E_weak & GGS_integerDeclarationAST_2E_weak::operator = (const GGS_integerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST_2E_weak::GGS_integerDeclarationAST_2E_weak (const GGS_integerDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST_2E_weak GGS_integerDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_integerDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST GGS_integerDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_integerDeclarationAST result ;
  if (isValid ()) {
    const cPtr_integerDeclarationAST * p = (cPtr_integerDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_integerDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST GGS_integerDeclarationAST_2E_weak::bang_integerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_integerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerDeclarationAST) ;
      result = GGS_integerDeclarationAST ((cPtr_integerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @integerDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerDeclarationAST_2E_weak ("integerDeclarationAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerDeclarationAST_2E_weak GGS_integerDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_integerDeclarationAST_2E_weak result ;
  const GGS_integerDeclarationAST_2E_weak * p = (const GGS_integerDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@integerDeclarationAST typeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_integerDeclarationAST::getter_typeName (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outName ; // Returned variable
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_string temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_string ("i") ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_string ("u") ;
  }
  const GGS_integerDeclarationAST temp_3 = this ;
  result_outName = temp_1.add_operation (temp_3.readProperty_mSize ().getter_string (SOURCE_FILE ("type-integer.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 19)) ;
//---
  return result_outName ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_typeName (const cPtr_integerDeclarationAST * inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_typeName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::objectCompare (const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inOperand) const {
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

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::
init_21_ (const GGS_string & in_mLLVMOperation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (inCompiler COMMA_THERE)) ;
  object->inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_init_21_ (in_mLLVMOperation, inCompiler) ;
  const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::
inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_init_21_ (const GGS_string & in_mLLVMOperation,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::class_func_new (const GGS_string & in_mLLVMOperation,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (in_mLLVMOperation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::readProperty_mLLVMOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * p = (cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
    return p->mProperty_mLLVMOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::setProperty_mLLVMOperation (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * p = (cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
    p->mProperty_mLLVMOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inlineInfix_integer_compileTimeInt_operatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const GGS_string & in_mLLVMOperation,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ;
}

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@inlineInfix_integer_compileTimeInt_operatorUsage:") ;
  mProperty_mLLVMOperation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (mProperty_mLLVMOperation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMOperation.printNonNullClassInstanceProperties ("mLLVMOperation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inlineInfix_integer_compileTimeInt_operatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ("inlineInfix_integer_compileTimeInt_operatorUsage",
                                                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage result ;
  const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * p = (const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfix_integer_compileTimeInt_operatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::objectCompare (const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak & inOperand) const {
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

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak & GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::operator = (const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak (const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage result ;
  if (isValid ()) {
    const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * p = (cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::bang_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
      result = GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ((cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inlineInfix_integer_compileTimeInt_operatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak ("inlineInfix_integer_compileTimeInt_operatorUsage.weak",
                                                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak result ;
  const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak * p = (const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfix_integer_compileTimeInt_operatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::objectCompare (const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inOperand) const {
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

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::
init_21_ (const GGS_string & in_mLLVMOperation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (inCompiler COMMA_THERE)) ;
  object->inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_init_21_ (in_mLLVMOperation, inCompiler) ;
  const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::
inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_init_21_ (const GGS_string & in_mLLVMOperation,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::class_func_new (const GGS_string & in_mLLVMOperation,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (in_mLLVMOperation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::readProperty_mLLVMOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * p = (cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
    return p->mProperty_mLLVMOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::setProperty_mLLVMOperation (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * p = (cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
    p->mProperty_mLLVMOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inlineInfix_compileTimeInt_integer_operatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const GGS_string & in_mLLVMOperation,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ;
}

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@inlineInfix_compileTimeInt_integer_operatorUsage:") ;
  mProperty_mLLVMOperation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (mProperty_mLLVMOperation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMOperation.printNonNullClassInstanceProperties ("mLLVMOperation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inlineInfix_compileTimeInt_integer_operatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ("inlineInfix_compileTimeInt_integer_operatorUsage",
                                                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage result ;
  const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * p = (const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfix_compileTimeInt_integer_operatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::objectCompare (const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak & inOperand) const {
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

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak & GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::operator = (const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak (const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage result ;
  if (isValid ()) {
    const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * p = (cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::bang_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
      result = GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ((cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inlineInfix_compileTimeInt_integer_operatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak ("inlineInfix_compileTimeInt_integer_operatorUsage.weak",
                                                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak result ;
  const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak * p = (const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfix_compileTimeInt_integer_operatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerBuiltinFunctionIR_2E_weak::objectCompare (const GGS_integerBuiltinFunctionIR_2E_weak & inOperand) const {
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

GGS_integerBuiltinFunctionIR_2E_weak::GGS_integerBuiltinFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR_2E_weak & GGS_integerBuiltinFunctionIR_2E_weak::operator = (const GGS_integerBuiltinFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR_2E_weak::GGS_integerBuiltinFunctionIR_2E_weak (const GGS_integerBuiltinFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR_2E_weak GGS_integerBuiltinFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_integerBuiltinFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR GGS_integerBuiltinFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_integerBuiltinFunctionIR result ;
  if (isValid ()) {
    const cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_integerBuiltinFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR GGS_integerBuiltinFunctionIR_2E_weak::bang_integerBuiltinFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_integerBuiltinFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerBuiltinFunctionIR) ;
      result = GGS_integerBuiltinFunctionIR ((cPtr_integerBuiltinFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @integerBuiltinFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR_2E_weak ("integerBuiltinFunctionIR.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerBuiltinFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerBuiltinFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerBuiltinFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR_2E_weak GGS_integerBuiltinFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_integerBuiltinFunctionIR_2E_weak result ;
  const GGS_integerBuiltinFunctionIR_2E_weak * p = (const GGS_integerBuiltinFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerBuiltinFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerBuiltinFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringDeclarationAST::objectCompare (const GGS_literalStringDeclarationAST & inOperand) const {
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

GGS_literalStringDeclarationAST::GGS_literalStringDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalStringDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_literalStringDeclarationAST (inCompiler COMMA_THERE)) ;
  object->literalStringDeclarationAST_init (inCompiler) ;
  const GGS_literalStringDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringDeclarationAST::
literalStringDeclarationAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST::GGS_literalStringDeclarationAST (const cPtr_literalStringDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_literalStringDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalStringDeclarationAST (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringDeclarationAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_literalStringDeclarationAST::cPtr_literalStringDeclarationAST (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalStringDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

void cPtr_literalStringDeclarationAST::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@literalStringDeclarationAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringDeclarationAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalStringDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST ("literalStringDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_literalStringDeclarationAST result ;
  const GGS_literalStringDeclarationAST * p = (const GGS_literalStringDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringDeclarationAST_2E_weak::objectCompare (const GGS_literalStringDeclarationAST_2E_weak & inOperand) const {
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

GGS_literalStringDeclarationAST_2E_weak::GGS_literalStringDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST_2E_weak & GGS_literalStringDeclarationAST_2E_weak::operator = (const GGS_literalStringDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST_2E_weak::GGS_literalStringDeclarationAST_2E_weak (const GGS_literalStringDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST_2E_weak GGS_literalStringDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalStringDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_literalStringDeclarationAST result ;
  if (isValid ()) {
    const cPtr_literalStringDeclarationAST * p = (cPtr_literalStringDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalStringDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST GGS_literalStringDeclarationAST_2E_weak::bang_literalStringDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalStringDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringDeclarationAST) ;
      result = GGS_literalStringDeclarationAST ((cPtr_literalStringDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalStringDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST_2E_weak ("literalStringDeclarationAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringDeclarationAST_2E_weak GGS_literalStringDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_literalStringDeclarationAST_2E_weak result ;
  const GGS_literalStringDeclarationAST_2E_weak * p = (const GGS_literalStringDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeOpaqueDeclarationAST_2E_weak::objectCompare (const GGS_typeOpaqueDeclarationAST_2E_weak & inOperand) const {
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

GGS_typeOpaqueDeclarationAST_2E_weak::GGS_typeOpaqueDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST_2E_weak & GGS_typeOpaqueDeclarationAST_2E_weak::operator = (const GGS_typeOpaqueDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST_2E_weak::GGS_typeOpaqueDeclarationAST_2E_weak (const GGS_typeOpaqueDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST_2E_weak GGS_typeOpaqueDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeOpaqueDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST GGS_typeOpaqueDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_typeOpaqueDeclarationAST result ;
  if (isValid ()) {
    const cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typeOpaqueDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST GGS_typeOpaqueDeclarationAST_2E_weak::bang_typeOpaqueDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeOpaqueDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeOpaqueDeclarationAST) ;
      result = GGS_typeOpaqueDeclarationAST ((cPtr_typeOpaqueDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeOpaqueDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST_2E_weak ("typeOpaqueDeclarationAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeOpaqueDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeOpaqueDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeOpaqueDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST_2E_weak GGS_typeOpaqueDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeOpaqueDeclarationAST_2E_weak result ;
  const GGS_typeOpaqueDeclarationAST_2E_weak * p = (const GGS_typeOpaqueDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeOpaqueDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeOpaqueDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum controlRegisterKind
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind::GGS_controlRegisterKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind GGS_controlRegisterKind::class_func_scalar (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterKind result ;
  result.mEnum = Enumeration::enum_scalar ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind GGS_controlRegisterKind::class_func_registerArray (const GGS_expressionAST & inAssociatedValue0,
                                                                           const GGS_location & inAssociatedValue1,
                                                                           const GGS_expressionAST & inAssociatedValue2,
                                                                           const GGS_location & inAssociatedValue3
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterKind result ;
  result.mEnum = Enumeration::enum_registerArray ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_controlRegisterKind_2E_registerArray (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind::method_extractRegisterArray (GGS_expressionAST & outAssociatedValue_arraySize,
                                                           GGS_location & outAssociatedValue_arraySizeLocation,
                                                           GGS_expressionAST & outAssociatedValue_arrayElementSize,
                                                           GGS_location & outAssociatedValue_arrayElementSizeLocation,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_registerArray) {
    outAssociatedValue_arraySize.drop () ;
    outAssociatedValue_arraySizeLocation.drop () ;
    outAssociatedValue_arrayElementSize.drop () ;
    outAssociatedValue_arrayElementSizeLocation.drop () ;
    String s ;
    s.appendCString ("method @controlRegisterKind.registerArray invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_controlRegisterKind_2E_registerArray *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_arraySize = ptr->mProperty_arraySize ;
    outAssociatedValue_arraySizeLocation = ptr->mProperty_arraySizeLocation ;
    outAssociatedValue_arrayElementSize = ptr->mProperty_arrayElementSize ;
    outAssociatedValue_arrayElementSizeLocation = ptr->mProperty_arrayElementSizeLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind_2E_registerArray_3F_ GGS_controlRegisterKind::getter_getRegisterArray (UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterKind_2E_registerArray_3F_ result ;
  if (mEnum == Enumeration::enum_registerArray) {
    const auto ptr = (const GGS_controlRegisterKind_2E_registerArray *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_controlRegisterKind_2E_registerArray (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind::getAssociatedValuesFor_registerArray (GGS_expressionAST & out_arraySize,
                                                                    GGS_location & out_arraySizeLocation,
                                                                    GGS_expressionAST & out_arrayElementSize,
                                                                    GGS_location & out_arrayElementSizeLocation) const {
  const auto ptr = (const GGS_controlRegisterKind_2E_registerArray *) mAssociatedValues.associatedValuesPointer () ;
  out_arraySize = ptr->mProperty_arraySize ;
  out_arraySizeLocation = ptr->mProperty_arraySizeLocation ;
  out_arrayElementSize = ptr->mProperty_arrayElementSize ;
  out_arrayElementSizeLocation = ptr->mProperty_arrayElementSizeLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterKind [3] = {
  "(not built)",
  "scalar",
  "registerArray"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterKind::getter_isScalar (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_scalar == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterKind::getter_isRegisterArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_registerArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterKind::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @controlRegisterKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_controlRegisterKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @controlRegisterKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterKind ("controlRegisterKind",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind GGS_controlRegisterKind::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterKind result ;
  const GGS_controlRegisterKind * p = (const GGS_controlRegisterKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@controlRegisterNameListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterNameListAST : public cCollectionElement {
  public: GGS_controlRegisterNameListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_controlRegisterNameListAST (const GGS_lstring & in_mRegisterName,
                                                         const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                         const GGS_bool & in_mIsReadOnly,
                                                         const GGS_expressionAST & in_mRegisterOffset,
                                                         const GGS_location & in_mRegisterOffsetLocation
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterNameListAST (const GGS_controlRegisterNameListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterNameListAST::cCollectionElement_controlRegisterNameListAST (const GGS_lstring & in_mRegisterName,
                                                                                              const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                                                              const GGS_bool & in_mIsReadOnly,
                                                                                              const GGS_expressionAST & in_mRegisterOffset,
                                                                                              const GGS_location & in_mRegisterOffsetLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterName, in_mControlRegisterKind, in_mIsReadOnly, in_mRegisterOffset, in_mRegisterOffsetLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterNameListAST::cCollectionElement_controlRegisterNameListAST (const GGS_controlRegisterNameListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterName, inElement.mProperty_mControlRegisterKind, inElement.mProperty_mIsReadOnly, inElement.mProperty_mRegisterOffset, inElement.mProperty_mRegisterOffsetLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterNameListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterNameListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterNameListAST (mObject.mProperty_mRegisterName, mObject.mProperty_mControlRegisterKind, mObject.mProperty_mIsReadOnly, mObject.mProperty_mRegisterOffset, mObject.mProperty_mRegisterOffsetLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterNameListAST
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST::GGS_controlRegisterNameListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST::GGS_controlRegisterNameListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    const GGS_controlRegisterNameListAST_2E_element element (p->mObject.mProperty_mRegisterName, p->mObject.mProperty_mControlRegisterKind, p->mObject.mProperty_mIsReadOnly, p->mObject.mProperty_mRegisterOffset, p->mObject.mProperty_mRegisterOffsetLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lstring & in_mRegisterName,
                                                                const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                                const GGS_bool & in_mIsReadOnly,
                                                                const GGS_expressionAST & in_mRegisterOffset,
                                                                const GGS_location & in_mRegisterOffsetLocation
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterNameListAST (in_mRegisterName, in_mControlRegisterKind, in_mIsReadOnly, in_mRegisterOffset, in_mRegisterOffsetLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterNameListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_controlRegisterNameListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::description (String & ioString,
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
      ioString.appendString ("mRegisterName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mControlRegisterKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mControlRegisterKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsReadOnly:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsReadOnly.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRegisterOffset:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterOffset.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRegisterOffsetLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterOffsetLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::plusPlusAssignOperation (const GGS_controlRegisterNameListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_controlRegisterKind & inOperand1,
                                                                                         const GGS_bool & inOperand2,
                                                                                         const GGS_expressionAST & inOperand3,
                                                                                         const GGS_location & inOperand4
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterNameListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_controlRegisterNameListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_controlRegisterKind & inOperand1,
                                                         const GGS_bool & inOperand2,
                                                         const GGS_expressionAST & inOperand3,
                                                         const GGS_location & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterNameListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_controlRegisterKind inOperand1,
                                                    const GGS_bool inOperand2,
                                                    const GGS_expressionAST inOperand3,
                                                    const GGS_location inOperand4,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterNameListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_controlRegisterKind inOperand1,
                                                           const GGS_bool inOperand2,
                                                           const GGS_expressionAST inOperand3,
                                                           const GGS_location inOperand4,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterNameListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GGS_controlRegisterNameListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_controlRegisterKind & outOperand1,
                                                           GGS_bool & outOperand2,
                                                           GGS_expressionAST & outOperand3,
                                                           GGS_location & outOperand4,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRegisterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mControlRegisterKind ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mIsReadOnly ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mRegisterOffset ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mRegisterOffsetLocation ;
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
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_controlRegisterKind & outOperand1,
                                                      GGS_bool & outOperand2,
                                                      GGS_expressionAST & outOperand3,
                                                      GGS_location & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRegisterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mControlRegisterKind ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mIsReadOnly ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRegisterOffset ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mRegisterOffsetLocation ;
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
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_controlRegisterKind & outOperand1,
                                                     GGS_bool & outOperand2,
                                                     GGS_expressionAST & outOperand3,
                                                     GGS_location & outOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRegisterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mControlRegisterKind ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mIsReadOnly ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRegisterOffset ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mRegisterOffsetLocation ;
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
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_controlRegisterKind & outOperand1,
                                                   GGS_bool & outOperand2,
                                                   GGS_expressionAST & outOperand3,
                                                   GGS_location & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRegisterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mControlRegisterKind ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mIsReadOnly ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRegisterOffset ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mRegisterOffsetLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_controlRegisterKind & outOperand1,
                                                  GGS_bool & outOperand2,
                                                  GGS_expressionAST & outOperand3,
                                                  GGS_location & outOperand4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRegisterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mControlRegisterKind ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mIsReadOnly ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRegisterOffset ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mRegisterOffsetLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::add_operation (const GGS_controlRegisterNameListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterNameListAST result ;
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

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterNameListAST result ;
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

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterNameListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterNameListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterNameListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::plusAssignOperation (const GGS_controlRegisterNameListAST inList,
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

void GGS_controlRegisterNameListAST::setter_setMRegisterNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterName = inOperand ;
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
  
GGS_lstring GGS_controlRegisterNameListAST::getter_mRegisterNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterName ;
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

void GGS_controlRegisterNameListAST::setter_setMControlRegisterKindAtIndex (GGS_controlRegisterKind inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mControlRegisterKind = inOperand ;
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
  
GGS_controlRegisterKind GGS_controlRegisterNameListAST::getter_mControlRegisterKindAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mControlRegisterKind ;
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

void GGS_controlRegisterNameListAST::setter_setMIsReadOnlyAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsReadOnly = inOperand ;
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
  
GGS_bool GGS_controlRegisterNameListAST::getter_mIsReadOnlyAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsReadOnly ;
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

void GGS_controlRegisterNameListAST::setter_setMRegisterOffsetAtIndex (GGS_expressionAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterOffset = inOperand ;
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
  
GGS_expressionAST GGS_controlRegisterNameListAST::getter_mRegisterOffsetAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_expressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterOffset ;
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

void GGS_controlRegisterNameListAST::setter_setMRegisterOffsetLocationAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterOffsetLocation = inOperand ;
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
  
GGS_location GGS_controlRegisterNameListAST::getter_mRegisterOffsetLocationAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterOffsetLocation ;
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
// Down Enumerator for @controlRegisterNameListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterNameListAST::DownEnumerator_controlRegisterNameListAST (const GGS_controlRegisterNameListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element DownEnumerator_controlRegisterNameListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controlRegisterNameListAST::current_mRegisterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind DownEnumerator_controlRegisterNameListAST::current_mControlRegisterKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mControlRegisterKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_controlRegisterNameListAST::current_mIsReadOnly (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsReadOnly ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_controlRegisterNameListAST::current_mRegisterOffset (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterOffset ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_controlRegisterNameListAST::current_mRegisterOffsetLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterOffsetLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterNameListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterNameListAST::UpEnumerator_controlRegisterNameListAST (const GGS_controlRegisterNameListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element UpEnumerator_controlRegisterNameListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controlRegisterNameListAST::current_mRegisterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterKind UpEnumerator_controlRegisterNameListAST::current_mControlRegisterKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mControlRegisterKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_controlRegisterNameListAST::current_mIsReadOnly (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsReadOnly ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_controlRegisterNameListAST::current_mRegisterOffset (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterOffset ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_controlRegisterNameListAST::current_mRegisterOffsetLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterOffsetLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @controlRegisterNameListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST ("controlRegisterNameListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterNameListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterNameListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterNameListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST GGS_controlRegisterNameListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST result ;
  const GGS_controlRegisterNameListAST * p = (const GGS_controlRegisterNameListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterNameListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@controlRegisterDeclarationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterDeclarationList : public cCollectionElement {
  public: GGS_controlRegisterDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_controlRegisterDeclarationList (const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                             const GGS_lstring & in_mRegisterTypeName,
                                                             const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                             const GGS_location & in_mRegisterBitSliceListLocation
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterDeclarationList (const GGS_controlRegisterDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterDeclarationList::cCollectionElement_controlRegisterDeclarationList (const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                      const GGS_lstring & in_mRegisterTypeName,
                                                                                                      const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                      const GGS_location & in_mRegisterBitSliceListLocation
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterArrayList, in_mRegisterTypeName, in_mRegisterBitSliceList, in_mRegisterBitSliceListLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterDeclarationList::cCollectionElement_controlRegisterDeclarationList (const GGS_controlRegisterDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterArrayList, inElement.mProperty_mRegisterTypeName, inElement.mProperty_mRegisterBitSliceList, inElement.mProperty_mRegisterBitSliceListLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterDeclarationList (mObject.mProperty_mRegisterArrayList, mObject.mProperty_mRegisterTypeName, mObject.mProperty_mRegisterBitSliceList, mObject.mProperty_mRegisterBitSliceListLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList::GGS_controlRegisterDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList::GGS_controlRegisterDeclarationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    const GGS_controlRegisterDeclarationList_2E_element element (p->mObject.mProperty_mRegisterArrayList, p->mObject.mProperty_mRegisterTypeName, p->mObject.mProperty_mRegisterBitSliceList, p->mObject.mProperty_mRegisterBitSliceListLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                    const GGS_lstring & in_mRegisterTypeName,
                                                                    const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                    const GGS_location & in_mRegisterBitSliceListLocation
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (in_mRegisterArrayList, in_mRegisterTypeName, in_mRegisterBitSliceList, in_mRegisterBitSliceListLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterDeclarationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_controlRegisterDeclarationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::description (String & ioString,
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
      ioString.appendString ("mRegisterArrayList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterArrayList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRegisterTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRegisterBitSliceList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterBitSliceList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRegisterBitSliceListLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterBitSliceListLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::plusPlusAssignOperation (const GGS_controlRegisterDeclarationList_2E_element & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::class_func_listWithValue (const GGS_controlRegisterNameListAST & inOperand0,
                                                                                                 const GGS_lstring & inOperand1,
                                                                                                 const GGS_controlRegisterBitSliceList & inOperand2,
                                                                                                 const GGS_location & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterDeclarationList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_controlRegisterDeclarationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::addAssignOperation (const GGS_controlRegisterNameListAST & inOperand0,
                                                             const GGS_lstring & inOperand1,
                                                             const GGS_controlRegisterBitSliceList & inOperand2,
                                                             const GGS_location & inOperand3
                                                             COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::setter_append (const GGS_controlRegisterNameListAST inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        const GGS_controlRegisterBitSliceList inOperand2,
                                                        const GGS_location inOperand3,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::setter_insertAtIndex (const GGS_controlRegisterNameListAST inOperand0,
                                                               const GGS_lstring inOperand1,
                                                               const GGS_controlRegisterBitSliceList inOperand2,
                                                               const GGS_location inOperand3,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_controlRegisterDeclarationList::setter_removeAtIndex (GGS_controlRegisterNameListAST & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               GGS_controlRegisterBitSliceList & outOperand2,
                                                               GGS_location & outOperand3,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRegisterArrayList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mRegisterTypeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mRegisterBitSliceList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mRegisterBitSliceListLocation ;
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
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::setter_popFirst (GGS_controlRegisterNameListAST & outOperand0,
                                                          GGS_lstring & outOperand1,
                                                          GGS_controlRegisterBitSliceList & outOperand2,
                                                          GGS_location & outOperand3,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRegisterArrayList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mRegisterTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mRegisterBitSliceList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRegisterBitSliceListLocation ;
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
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::setter_popLast (GGS_controlRegisterNameListAST & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         GGS_controlRegisterBitSliceList & outOperand2,
                                                         GGS_location & outOperand3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRegisterArrayList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mRegisterTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mRegisterBitSliceList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRegisterBitSliceListLocation ;
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
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::method_first (GGS_controlRegisterNameListAST & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_controlRegisterBitSliceList & outOperand2,
                                                       GGS_location & outOperand3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRegisterArrayList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mRegisterTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mRegisterBitSliceList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRegisterBitSliceListLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::method_last (GGS_controlRegisterNameListAST & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_controlRegisterBitSliceList & outOperand2,
                                                      GGS_location & outOperand3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRegisterArrayList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mRegisterTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mRegisterBitSliceList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRegisterBitSliceListLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::add_operation (const GGS_controlRegisterDeclarationList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterDeclarationList result ;
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

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::subList (const int32_t inStart,
                                                                                const int32_t inLength,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterDeclarationList result ;
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

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterDeclarationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::plusAssignOperation (const GGS_controlRegisterDeclarationList inList,
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

void GGS_controlRegisterDeclarationList::setter_setMRegisterArrayListAtIndex (GGS_controlRegisterNameListAST inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterArrayList = inOperand ;
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
  
GGS_controlRegisterNameListAST GGS_controlRegisterDeclarationList::getter_mRegisterArrayListAtIndex (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterNameListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterArrayList ;
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

void GGS_controlRegisterDeclarationList::setter_setMRegisterTypeNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterTypeName = inOperand ;
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
  
GGS_lstring GGS_controlRegisterDeclarationList::getter_mRegisterTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterTypeName ;
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

void GGS_controlRegisterDeclarationList::setter_setMRegisterBitSliceListAtIndex (GGS_controlRegisterBitSliceList inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterBitSliceList = inOperand ;
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
  
GGS_controlRegisterBitSliceList GGS_controlRegisterDeclarationList::getter_mRegisterBitSliceListAtIndex (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterBitSliceList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterBitSliceList ;
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

void GGS_controlRegisterDeclarationList::setter_setMRegisterBitSliceListLocationAtIndex (GGS_location inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterBitSliceListLocation = inOperand ;
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
  
GGS_location GGS_controlRegisterDeclarationList::getter_mRegisterBitSliceListLocationAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterBitSliceListLocation ;
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
// Down Enumerator for @controlRegisterDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterDeclarationList::DownEnumerator_controlRegisterDeclarationList (const GGS_controlRegisterDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element DownEnumerator_controlRegisterDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST DownEnumerator_controlRegisterDeclarationList::current_mRegisterArrayList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterArrayList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controlRegisterDeclarationList::current_mRegisterTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList DownEnumerator_controlRegisterDeclarationList::current_mRegisterBitSliceList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterBitSliceList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_controlRegisterDeclarationList::current_mRegisterBitSliceListLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterBitSliceListLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterDeclarationList::UpEnumerator_controlRegisterDeclarationList (const GGS_controlRegisterDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element UpEnumerator_controlRegisterDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST UpEnumerator_controlRegisterDeclarationList::current_mRegisterArrayList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterArrayList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controlRegisterDeclarationList::current_mRegisterTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList UpEnumerator_controlRegisterDeclarationList::current_mRegisterBitSliceList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterBitSliceList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_controlRegisterDeclarationList::current_mRegisterBitSliceListLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterBitSliceListLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @controlRegisterDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList ("controlRegisterDeclarationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList GGS_controlRegisterDeclarationList::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_controlRegisterDeclarationList result ;
  const GGS_controlRegisterDeclarationList * p = (const GGS_controlRegisterDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@controlRegisterBitSliceList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterBitSliceList : public cCollectionElement {
  public: GGS_controlRegisterBitSliceList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_controlRegisterBitSliceList (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterBitSliceList (const GGS_controlRegisterBitSliceList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterBitSliceList::cCollectionElement_controlRegisterBitSliceList (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterBitSlice) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterBitSliceList::cCollectionElement_controlRegisterBitSliceList (const GGS_controlRegisterBitSliceList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterBitSlice) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterBitSliceList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterBitSliceList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterBitSliceList (mObject.mProperty_mRegisterBitSlice COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterBitSliceList
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList::GGS_controlRegisterBitSliceList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList::GGS_controlRegisterBitSliceList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    const GGS_controlRegisterBitSliceList_2E_element element (p->mObject.mProperty_mRegisterBitSlice) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterBitSliceList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (in_mRegisterBitSlice COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterBitSliceList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_controlRegisterBitSliceList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList::description (String & ioString,
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
      ioString.appendString ("mRegisterBitSlice:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterBitSlice.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList::plusPlusAssignOperation (const GGS_controlRegisterBitSliceList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::class_func_listWithValue (const GGS_controlRegisterBitSlice & inOperand0
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterBitSliceList_2E_element element (inOperand0) ;
  GGS_controlRegisterBitSliceList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList::addAssignOperation (const GGS_controlRegisterBitSlice & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterBitSliceList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList::setter_append (const GGS_controlRegisterBitSlice inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterBitSliceList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList::setter_insertAtIndex (const GGS_controlRegisterBitSlice inOperand0,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterBitSliceList_2E_element newElement (inOperand0) ;
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

void GGS_controlRegisterBitSliceList::setter_removeAtIndex (GGS_controlRegisterBitSlice & outOperand0,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRegisterBitSlice ;
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

void GGS_controlRegisterBitSliceList::setter_popFirst (GGS_controlRegisterBitSlice & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRegisterBitSlice ;
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

void GGS_controlRegisterBitSliceList::setter_popLast (GGS_controlRegisterBitSlice & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRegisterBitSlice ;
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

void GGS_controlRegisterBitSliceList::method_first (GGS_controlRegisterBitSlice & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRegisterBitSlice ;
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

void GGS_controlRegisterBitSliceList::method_last (GGS_controlRegisterBitSlice & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRegisterBitSlice ;
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

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::add_operation (const GGS_controlRegisterBitSliceList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterBitSliceList result ;
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

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterBitSliceList result ;
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

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterBitSliceList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterBitSliceList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterBitSliceList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList::plusAssignOperation (const GGS_controlRegisterBitSliceList inList,
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

void GGS_controlRegisterBitSliceList::setter_setMRegisterBitSliceAtIndex (GGS_controlRegisterBitSlice inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterBitSlice = inOperand ;
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
  
GGS_controlRegisterBitSlice GGS_controlRegisterBitSliceList::getter_mRegisterBitSliceAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterBitSlice result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterBitSlice ;
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
// Down Enumerator for @controlRegisterBitSliceList
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterBitSliceList::DownEnumerator_controlRegisterBitSliceList (const GGS_controlRegisterBitSliceList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element DownEnumerator_controlRegisterBitSliceList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice DownEnumerator_controlRegisterBitSliceList::current_mRegisterBitSlice (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterBitSlice ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterBitSliceList
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterBitSliceList::UpEnumerator_controlRegisterBitSliceList (const GGS_controlRegisterBitSliceList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList_2E_element UpEnumerator_controlRegisterBitSliceList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice UpEnumerator_controlRegisterBitSliceList::current_mRegisterBitSlice (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterBitSlice ;
}




//--------------------------------------------------------------------------------------------------
//     @controlRegisterBitSliceList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList ("controlRegisterBitSliceList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterBitSliceList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSliceList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSliceList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList GGS_controlRegisterBitSliceList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSliceList result ;
  const GGS_controlRegisterBitSliceList * p = (const GGS_controlRegisterBitSliceList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSliceList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum controlRegisterBitSlice
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice::GGS_controlRegisterBitSlice (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice GGS_controlRegisterBitSlice::class_func_unusedBits (const GGS_lbigint & inAssociatedValue0
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice result ;
  result.mEnum = Enumeration::enum_unusedBits ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_controlRegisterBitSlice_2E_unusedBits (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice GGS_controlRegisterBitSlice::class_func_namedBit (const GGS_lstring & inAssociatedValue0,
                                                                              const GGS_lbigint & inAssociatedValue1
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice result ;
  result.mEnum = Enumeration::enum_namedBit ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_controlRegisterBitSlice_2E_namedBit (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice::method_extractUnusedBits (GGS_lbigint & outAssociatedValue_count,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_unusedBits) {
    outAssociatedValue_count.drop () ;
    String s ;
    s.appendCString ("method @controlRegisterBitSlice.unusedBits invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_controlRegisterBitSlice_2E_unusedBits *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_count = ptr->mProperty_count ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice::method_extractNamedBit (GGS_lstring & outAssociatedValue_name,
                                                          GGS_lbigint & outAssociatedValue_count,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_namedBit) {
    outAssociatedValue_name.drop () ;
    outAssociatedValue_count.drop () ;
    String s ;
    s.appendCString ("method @controlRegisterBitSlice.namedBit invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_controlRegisterBitSlice_2E_namedBit *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
    outAssociatedValue_count = ptr->mProperty_count ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits_3F_ GGS_controlRegisterBitSlice::getter_getUnusedBits (UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterBitSlice_2E_unusedBits_3F_ result ;
  if (mEnum == Enumeration::enum_unusedBits) {
    const auto ptr = (const GGS_controlRegisterBitSlice_2E_unusedBits *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_controlRegisterBitSlice_2E_unusedBits (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice::getAssociatedValuesFor_unusedBits (GGS_lbigint & out_count) const {
  const auto ptr = (const GGS_controlRegisterBitSlice_2E_unusedBits *) mAssociatedValues.associatedValuesPointer () ;
  out_count = ptr->mProperty_count ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_ GGS_controlRegisterBitSlice::getter_getNamedBit (UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterBitSlice_2E_namedBit_3F_ result ;
  if (mEnum == Enumeration::enum_namedBit) {
    const auto ptr = (const GGS_controlRegisterBitSlice_2E_namedBit *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_controlRegisterBitSlice_2E_namedBit (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice::getAssociatedValuesFor_namedBit (GGS_lstring & out_name,
                                                                   GGS_lbigint & out_count) const {
  const auto ptr = (const GGS_controlRegisterBitSlice_2E_namedBit *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
  out_count = ptr->mProperty_count ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterBitSlice [3] = {
  "(not built)",
  "unusedBits",
  "namedBit"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterBitSlice::getter_isUnusedBits (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_unusedBits == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterBitSlice::getter_isNamedBit (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_namedBit == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<enum @controlRegisterBitSlice: ") ;
  ioString.appendCString (gEnumNameArrayFor_controlRegisterBitSlice [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @controlRegisterBitSlice generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice ("controlRegisterBitSlice",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterBitSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSlice::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSlice (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice GGS_controlRegisterBitSlice::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice result ;
  const GGS_controlRegisterBitSlice * p = (const GGS_controlRegisterBitSlice *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum controlRegisterGroupKindAST
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST::GGS_controlRegisterGroupKindAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST GGS_controlRegisterGroupKindAST::class_func_single (const GGS_lbigint & inAssociatedValue0
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST result ;
  result.mEnum = Enumeration::enum_single ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_controlRegisterGroupKindAST_2E_single (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST GGS_controlRegisterGroupKindAST::class_func_groupArray (const GGS_expressionAST & inAssociatedValue0,
                                                                                        const GGS_location & inAssociatedValue1,
                                                                                        const GGS_lbigintlist & inAssociatedValue2
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST result ;
  result.mEnum = Enumeration::enum_groupArray ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_controlRegisterGroupKindAST_2E_groupArray (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST::method_extractSingle (GGS_lbigint & outAssociatedValue_registerGroupBaseAddress,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_single) {
    outAssociatedValue_registerGroupBaseAddress.drop () ;
    String s ;
    s.appendCString ("method @controlRegisterGroupKindAST.single invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_controlRegisterGroupKindAST_2E_single *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_registerGroupBaseAddress = ptr->mProperty_registerGroupBaseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST::method_extractGroupArray (GGS_expressionAST & outAssociatedValue_groupSizeExp,
                                                                GGS_location & outAssociatedValue_groupSizeExpLocation,
                                                                GGS_lbigintlist & outAssociatedValue_baseAddresses,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_groupArray) {
    outAssociatedValue_groupSizeExp.drop () ;
    outAssociatedValue_groupSizeExpLocation.drop () ;
    outAssociatedValue_baseAddresses.drop () ;
    String s ;
    s.appendCString ("method @controlRegisterGroupKindAST.groupArray invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_controlRegisterGroupKindAST_2E_groupArray *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_groupSizeExp = ptr->mProperty_groupSizeExp ;
    outAssociatedValue_groupSizeExpLocation = ptr->mProperty_groupSizeExpLocation ;
    outAssociatedValue_baseAddresses = ptr->mProperty_baseAddresses ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single_3F_ GGS_controlRegisterGroupKindAST::getter_getSingle (UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterGroupKindAST_2E_single_3F_ result ;
  if (mEnum == Enumeration::enum_single) {
    const auto ptr = (const GGS_controlRegisterGroupKindAST_2E_single *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_controlRegisterGroupKindAST_2E_single (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST::getAssociatedValuesFor_single (GGS_lbigint & out_registerGroupBaseAddress) const {
  const auto ptr = (const GGS_controlRegisterGroupKindAST_2E_single *) mAssociatedValues.associatedValuesPointer () ;
  out_registerGroupBaseAddress = ptr->mProperty_registerGroupBaseAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ GGS_controlRegisterGroupKindAST::getter_getGroupArray (UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ result ;
  if (mEnum == Enumeration::enum_groupArray) {
    const auto ptr = (const GGS_controlRegisterGroupKindAST_2E_groupArray *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_controlRegisterGroupKindAST_2E_groupArray (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST::getAssociatedValuesFor_groupArray (GGS_expressionAST & out_groupSizeExp,
                                                                         GGS_location & out_groupSizeExpLocation,
                                                                         GGS_lbigintlist & out_baseAddresses) const {
  const auto ptr = (const GGS_controlRegisterGroupKindAST_2E_groupArray *) mAssociatedValues.associatedValuesPointer () ;
  out_groupSizeExp = ptr->mProperty_groupSizeExp ;
  out_groupSizeExpLocation = ptr->mProperty_groupSizeExpLocation ;
  out_baseAddresses = ptr->mProperty_baseAddresses ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterGroupKindAST [3] = {
  "(not built)",
  "single",
  "groupArray"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterGroupKindAST::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_single == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterGroupKindAST::getter_isGroupArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_groupArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupKindAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<enum @controlRegisterGroupKindAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_controlRegisterGroupKindAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @controlRegisterGroupKindAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST ("controlRegisterGroupKindAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupKindAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupKindAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupKindAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST GGS_controlRegisterGroupKindAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST result ;
  const GGS_controlRegisterGroupKindAST * p = (const GGS_controlRegisterGroupKindAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupKindAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@registerGroupListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_registerGroupListAST : public cCollectionElement {
  public: GGS_registerGroupListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_registerGroupListAST (const GGS_lstring & in_mRegisterGroupName,
                                                   const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_registerGroupListAST (const GGS_registerGroupListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_registerGroupListAST::cCollectionElement_registerGroupListAST (const GGS_lstring & in_mRegisterGroupName,
                                                                                  const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterGroupName, in_mControlRegisterGroupKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_registerGroupListAST::cCollectionElement_registerGroupListAST (const GGS_registerGroupListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterGroupName, inElement.mProperty_mControlRegisterGroupKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_registerGroupListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_registerGroupListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_registerGroupListAST (mObject.mProperty_mRegisterGroupName, mObject.mProperty_mControlRegisterGroupKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @registerGroupListAST
//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST::GGS_registerGroupListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST::GGS_registerGroupListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    const GGS_registerGroupListAST_2E_element element (p->mObject.mProperty_mRegisterGroupName, p->mObject.mProperty_mControlRegisterGroupKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_lstring & in_mRegisterGroupName,
                                                          const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_registerGroupListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_registerGroupListAST (in_mRegisterGroupName, in_mControlRegisterGroupKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerGroupListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_registerGroupListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST::description (String & ioString,
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
      ioString.appendString ("mRegisterGroupName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegisterGroupName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mControlRegisterGroupKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mControlRegisterGroupKind.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST GGS_registerGroupListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_registerGroupListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST GGS_registerGroupListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST::plusPlusAssignOperation (const GGS_registerGroupListAST_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST GGS_registerGroupListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_controlRegisterGroupKindAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_registerGroupListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_registerGroupListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_controlRegisterGroupKindAST & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  const GGS_registerGroupListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST::setter_append (const GGS_lstring inOperand0,
                                              const GGS_controlRegisterGroupKindAST inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_registerGroupListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_controlRegisterGroupKindAST inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_registerGroupListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_registerGroupListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                     GGS_controlRegisterGroupKindAST & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRegisterGroupName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mControlRegisterGroupKind ;
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

void GGS_registerGroupListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_controlRegisterGroupKindAST & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRegisterGroupName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mControlRegisterGroupKind ;
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

void GGS_registerGroupListAST::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_controlRegisterGroupKindAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRegisterGroupName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mControlRegisterGroupKind ;
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

void GGS_registerGroupListAST::method_first (GGS_lstring & outOperand0,
                                             GGS_controlRegisterGroupKindAST & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRegisterGroupName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mControlRegisterGroupKind ;
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

void GGS_registerGroupListAST::method_last (GGS_lstring & outOperand0,
                                            GGS_controlRegisterGroupKindAST & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRegisterGroupName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mControlRegisterGroupKind ;
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

GGS_registerGroupListAST GGS_registerGroupListAST::add_operation (const GGS_registerGroupListAST & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_registerGroupListAST result ;
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

GGS_registerGroupListAST GGS_registerGroupListAST::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_registerGroupListAST result ;
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

GGS_registerGroupListAST GGS_registerGroupListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_registerGroupListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST GGS_registerGroupListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_registerGroupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST GGS_registerGroupListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_registerGroupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST::plusAssignOperation (const GGS_registerGroupListAST inList,
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

void GGS_registerGroupListAST::setter_setMRegisterGroupNameAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterGroupName = inOperand ;
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
  
GGS_lstring GGS_registerGroupListAST::getter_mRegisterGroupNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegisterGroupName ;
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

void GGS_registerGroupListAST::setter_setMControlRegisterGroupKindAtIndex (GGS_controlRegisterGroupKindAST inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mControlRegisterGroupKind = inOperand ;
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
  
GGS_controlRegisterGroupKindAST GGS_registerGroupListAST::getter_mControlRegisterGroupKindAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupKindAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mControlRegisterGroupKind ;
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
// Down Enumerator for @registerGroupListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_registerGroupListAST::DownEnumerator_registerGroupListAST (const GGS_registerGroupListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element DownEnumerator_registerGroupListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_registerGroupListAST::current_mRegisterGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST DownEnumerator_registerGroupListAST::current_mControlRegisterGroupKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mControlRegisterGroupKind ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @registerGroupListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_registerGroupListAST::UpEnumerator_registerGroupListAST (const GGS_registerGroupListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element UpEnumerator_registerGroupListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_registerGroupListAST::current_mRegisterGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegisterGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST UpEnumerator_registerGroupListAST::current_mControlRegisterGroupKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mControlRegisterGroupKind ;
}




//--------------------------------------------------------------------------------------------------
//     @registerGroupListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupListAST ("registerGroupListAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST GGS_registerGroupListAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_registerGroupListAST result ;
  const GGS_registerGroupListAST * p = (const GGS_registerGroupListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @controlRegisterGroupDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_controlRegisterGroupDeclarationAST::objectCompare (const GGS_controlRegisterGroupDeclarationAST & inOperand) const {
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

GGS_controlRegisterGroupDeclarationAST::GGS_controlRegisterGroupDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST GGS_controlRegisterGroupDeclarationAST::
init_21__21_ (const GGS_registerGroupListAST & in_mRegisterGroupList,
              const GGS_controlRegisterDeclarationList & in_mRegisters,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_controlRegisterGroupDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_controlRegisterGroupDeclarationAST (inCompiler COMMA_THERE)) ;
  object->controlRegisterGroupDeclarationAST_init_21__21_ (in_mRegisterGroupList, in_mRegisters, inCompiler) ;
  const GGS_controlRegisterGroupDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::
controlRegisterGroupDeclarationAST_init_21__21_ (const GGS_registerGroupListAST & in_mRegisterGroupList,
                                                 const GGS_controlRegisterDeclarationList & in_mRegisters,
                                                 Compiler * /* inCompiler */) {
  mProperty_mRegisterGroupList = in_mRegisterGroupList ;
  mProperty_mRegisters = in_mRegisters ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST::GGS_controlRegisterGroupDeclarationAST (const cPtr_controlRegisterGroupDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterGroupDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST GGS_controlRegisterGroupDeclarationAST::class_func_new (const GGS_registerGroupListAST & in_mRegisterGroupList,
                                                                                               const GGS_controlRegisterDeclarationList & in_mRegisters,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_controlRegisterGroupDeclarationAST (in_mRegisterGroupList, in_mRegisters,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST GGS_controlRegisterGroupDeclarationAST::readProperty_mRegisterGroupList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerGroupListAST () ;
  }else{
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    return p->mProperty_mRegisterGroupList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupDeclarationAST::setProperty_mRegisterGroupList (const GGS_registerGroupListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    p->mProperty_mRegisterGroupList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList GGS_controlRegisterGroupDeclarationAST::readProperty_mRegisters (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterDeclarationList () ;
  }else{
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    return p->mProperty_mRegisters ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupDeclarationAST::setProperty_mRegisters (const GGS_controlRegisterDeclarationList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    p->mProperty_mRegisters = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterGroupDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterGroupDeclarationAST::cPtr_controlRegisterGroupDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRegisterGroupList (),
mProperty_mRegisters () {
}

//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterGroupDeclarationAST::cPtr_controlRegisterGroupDeclarationAST (const GGS_registerGroupListAST & in_mRegisterGroupList,
                                                                                  const GGS_controlRegisterDeclarationList & in_mRegisters,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRegisterGroupList (),
mProperty_mRegisters () {
  mProperty_mRegisterGroupList = in_mRegisterGroupList ;
  mProperty_mRegisters = in_mRegisters ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_controlRegisterGroupDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;
}

void cPtr_controlRegisterGroupDeclarationAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@controlRegisterGroupDeclarationAST:") ;
  mProperty_mRegisterGroupList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisters.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_controlRegisterGroupDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_controlRegisterGroupDeclarationAST (mProperty_mRegisterGroupList, mProperty_mRegisters, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_controlRegisterGroupDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterGroupList.printNonNullClassInstanceProperties ("mRegisterGroupList") ;
    mProperty_mRegisters.printNonNullClassInstanceProperties ("mRegisters") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @controlRegisterGroupDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ("controlRegisterGroupDeclarationAST",
                                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST GGS_controlRegisterGroupDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupDeclarationAST result ;
  const GGS_controlRegisterGroupDeclarationAST * p = (const GGS_controlRegisterGroupDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_controlRegisterGroupDeclarationAST_2E_weak::objectCompare (const GGS_controlRegisterGroupDeclarationAST_2E_weak & inOperand) const {
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

GGS_controlRegisterGroupDeclarationAST_2E_weak::GGS_controlRegisterGroupDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST_2E_weak & GGS_controlRegisterGroupDeclarationAST_2E_weak::operator = (const GGS_controlRegisterGroupDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST_2E_weak::GGS_controlRegisterGroupDeclarationAST_2E_weak (const GGS_controlRegisterGroupDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST_2E_weak GGS_controlRegisterGroupDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_controlRegisterGroupDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST GGS_controlRegisterGroupDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_controlRegisterGroupDeclarationAST result ;
  if (isValid ()) {
    const cPtr_controlRegisterGroupDeclarationAST * p = (cPtr_controlRegisterGroupDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_controlRegisterGroupDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST GGS_controlRegisterGroupDeclarationAST_2E_weak::bang_controlRegisterGroupDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_controlRegisterGroupDeclarationAST) ;
      result = GGS_controlRegisterGroupDeclarationAST ((cPtr_controlRegisterGroupDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterGroupDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST_2E_weak ("controlRegisterGroupDeclarationAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST_2E_weak GGS_controlRegisterGroupDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupDeclarationAST_2E_weak result ;
  const GGS_controlRegisterGroupDeclarationAST_2E_weak * p = (const GGS_controlRegisterGroupDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@controlRegisterFieldList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterFieldList : public cCollectionElement {
  public: GGS_controlRegisterFieldList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_controlRegisterFieldList (const GGS_uint & in_mFieldBitCount,
                                                       const GGS_string & in_mFieldName
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterFieldList (const GGS_controlRegisterFieldList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GGS_uint & in_mFieldBitCount,
                                                                                          const GGS_string & in_mFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldBitCount, in_mFieldName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GGS_controlRegisterFieldList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFieldBitCount, inElement.mProperty_mFieldName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterFieldList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterFieldList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterFieldList (mObject.mProperty_mFieldBitCount, mObject.mProperty_mFieldName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterFieldList
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList::GGS_controlRegisterFieldList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList::GGS_controlRegisterFieldList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    const GGS_controlRegisterFieldList_2E_element element (p->mObject.mProperty_mFieldBitCount, p->mObject.mProperty_mFieldName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_uint & in_mFieldBitCount,
                                                              const GGS_string & in_mFieldName
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterFieldList (in_mFieldBitCount, in_mFieldName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterFieldList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_controlRegisterFieldList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList::description (String & ioString,
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
      ioString.appendString ("mFieldBitCount:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFieldBitCount.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFieldName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFieldName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList::plusPlusAssignOperation (const GGS_controlRegisterFieldList_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::class_func_listWithValue (const GGS_uint & inOperand0,
                                                                                     const GGS_string & inOperand1
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterFieldList_2E_element element (inOperand0, inOperand1) ;
  GGS_controlRegisterFieldList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList::addAssignOperation (const GGS_uint & inOperand0,
                                                       const GGS_string & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterFieldList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList::setter_append (const GGS_uint inOperand0,
                                                  const GGS_string inOperand1,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterFieldList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList::setter_insertAtIndex (const GGS_uint inOperand0,
                                                         const GGS_string inOperand1,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterFieldList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_controlRegisterFieldList::setter_removeAtIndex (GGS_uint & outOperand0,
                                                         GGS_string & outOperand1,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFieldBitCount ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFieldName ;
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

void GGS_controlRegisterFieldList::setter_popFirst (GGS_uint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFieldBitCount ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFieldName ;
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

void GGS_controlRegisterFieldList::setter_popLast (GGS_uint & outOperand0,
                                                   GGS_string & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFieldBitCount ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFieldName ;
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

void GGS_controlRegisterFieldList::method_first (GGS_uint & outOperand0,
                                                 GGS_string & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFieldBitCount ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFieldName ;
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

void GGS_controlRegisterFieldList::method_last (GGS_uint & outOperand0,
                                                GGS_string & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFieldBitCount ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFieldName ;
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

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::add_operation (const GGS_controlRegisterFieldList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterFieldList result ;
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

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldList result ;
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

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList::plusAssignOperation (const GGS_controlRegisterFieldList inList,
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

void GGS_controlRegisterFieldList::setter_setMFieldBitCountAtIndex (GGS_uint inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldBitCount = inOperand ;
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
  
GGS_uint GGS_controlRegisterFieldList::getter_mFieldBitCountAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldBitCount ;
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

void GGS_controlRegisterFieldList::setter_setMFieldNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldName = inOperand ;
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
  
GGS_string GGS_controlRegisterFieldList::getter_mFieldNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldName ;
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
// Down Enumerator for @controlRegisterFieldList
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterFieldList::DownEnumerator_controlRegisterFieldList (const GGS_controlRegisterFieldList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element DownEnumerator_controlRegisterFieldList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterFieldList::current_mFieldBitCount (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_controlRegisterFieldList::current_mFieldName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterFieldList
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterFieldList::UpEnumerator_controlRegisterFieldList (const GGS_controlRegisterFieldList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList_2E_element UpEnumerator_controlRegisterFieldList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterFieldList::current_mFieldBitCount (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_controlRegisterFieldList::current_mFieldName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldName ;
}




//--------------------------------------------------------------------------------------------------
//     @controlRegisterFieldList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldList ("controlRegisterFieldList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterFieldList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList GGS_controlRegisterFieldList::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldList result ;
  const GGS_controlRegisterFieldList * p = (const GGS_controlRegisterFieldList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterFieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @controlRegisterFieldMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap::GGS_controlRegisterFieldMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap::~ GGS_controlRegisterFieldMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap::GGS_controlRegisterFieldMap (const GGS_controlRegisterFieldMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap & GGS_controlRegisterFieldMap::operator = (const GGS_controlRegisterFieldMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap GGS_controlRegisterFieldMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap GGS_controlRegisterFieldMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_controlRegisterFieldMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterFieldMap::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterFieldMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterFieldMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterFieldMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_controlRegisterFieldMap::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_controlRegisterFieldMap::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterFieldMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_controlRegisterFieldMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::performInsert (const GGS_controlRegisterFieldMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterFieldMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element>
GGS_controlRegisterFieldMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_controlRegisterFieldMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element>>
GGS_controlRegisterFieldMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_controlRegisterFieldMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_ GGS_controlRegisterFieldMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterFieldMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_controlRegisterFieldMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_controlRegisterFieldMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mBitIndex = info->mProperty_mBitIndex ;
      element.mProperty_mBitCount = info->mProperty_mBitCount ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap GGS_controlRegisterFieldMap::class_func_mapWithMapToOverride (const GGS_controlRegisterFieldMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_controlRegisterFieldMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap GGS_controlRegisterFieldMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_uint inArgument0,
                                                    GGS_uint inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterFieldMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::method_searchKey (GGS_lstring inLKey,
                                                    GGS_uint & outArgument0,
                                                    GGS_uint & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' slice is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mBitIndex ;
    outArgument1 = info->mProperty_mBitCount ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterFieldMap::getter_mBitIndexForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterFieldMap::getter_mBitCountForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::setter_setMBitIndexForKey (GGS_uint inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::setter_setMBitCountForKey (GGS_uint inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_controlRegisterFieldMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element>> & inArray,
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
    ioString.appendString ("mBitIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mBitIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitCount:") ;
    inArray (i COMMA_HERE)->mProperty_mBitCount.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element>> array = sortedInfoArray () ;
    GGS_controlRegisterFieldMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_controlRegisterFieldMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_controlRegisterFieldMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @controlRegisterFieldMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterFieldMap::DownEnumerator_controlRegisterFieldMap (const GGS_controlRegisterFieldMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element DownEnumerator_controlRegisterFieldMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controlRegisterFieldMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterFieldMap::current_mBitIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterFieldMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @controlRegisterFieldMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterFieldMap::UpEnumerator_controlRegisterFieldMap (const GGS_controlRegisterFieldMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element UpEnumerator_controlRegisterFieldMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controlRegisterFieldMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterFieldMap::current_mBitIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterFieldMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}


//--------------------------------------------------------------------------------------------------
//     @controlRegisterFieldMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap ("controlRegisterFieldMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterFieldMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap GGS_controlRegisterFieldMap::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap result ;
  const GGS_controlRegisterFieldMap * p = (const GGS_controlRegisterFieldMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @sliceMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_sliceMap::GGS_sliceMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap::~ GGS_sliceMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap::GGS_sliceMap (const GGS_sliceMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap & GGS_sliceMap::operator = (const GGS_sliceMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap GGS_sliceMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_sliceMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap GGS_sliceMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_sliceMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sliceMap::getter_hasKey (const GGS_string & inKey
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sliceMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                             const GGS_uint & inLevel
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sliceMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sliceMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_sliceMap::getter_locationForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_sliceMap::getter_keyList (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_sliceMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::performInsert (const GGS_sliceMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_sliceMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>
GGS_sliceMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_sliceMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>>
GGS_sliceMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_sliceMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element_3F_ GGS_sliceMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sliceMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_sliceMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_sliceMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mAccessOperator = info->mProperty_mAccessOperator ;
      element.mProperty_mAccessRightOperand = info->mProperty_mAccessRightOperand ;
      element.mProperty_mResultType = info->mProperty_mResultType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap GGS_sliceMap::class_func_mapWithMapToOverride (const GGS_sliceMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GGS_sliceMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_sliceMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap GGS_sliceMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_sliceMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::setter_insertKey (GGS_lstring inLKey,
                                     GGS_llvmBinaryOperation inArgument0,
                                     GGS_bigint inArgument1,
                                     GGS_omnibusType inArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  const GGS_sliceMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::method_searchKey (GGS_lstring inLKey,
                                     GGS_llvmBinaryOperation & outArgument0,
                                     GGS_bigint & outArgument1,
                                     GGS_omnibusType & outArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' slice is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mAccessOperator ;
    outArgument1 = info->mProperty_mAccessRightOperand ;
    outArgument2 = info->mProperty_mResultType ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_sliceMap::getter_mAccessOperatorForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_llvmBinaryOperation result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAccessOperator ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_sliceMap::getter_mAccessRightOperandForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAccessRightOperand ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_sliceMap::getter_mResultTypeForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mResultType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::setter_setMAccessOperatorForKey (GGS_llvmBinaryOperation inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_sliceMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAccessOperator = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::setter_setMAccessRightOperandForKey (GGS_bigint inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_sliceMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAccessRightOperand = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::setter_setMResultTypeForKey (GGS_omnibusType inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_sliceMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mResultType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_sliceMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> & inArray,
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
    ioString.appendString ("mAccessOperator:") ;
    inArray (i COMMA_HERE)->mProperty_mAccessOperator.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAccessRightOperand:") ;
    inArray (i COMMA_HERE)->mProperty_mAccessRightOperand.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mResultType:") ;
    inArray (i COMMA_HERE)->mProperty_mResultType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> array = sortedInfoArray () ;
    GGS_sliceMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_sliceMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_sliceMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @sliceMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_sliceMap::DownEnumerator_sliceMap (const GGS_sliceMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element DownEnumerator_sliceMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_sliceMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation DownEnumerator_sliceMap::current_mAccessOperator (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccessOperator ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_sliceMap::current_mAccessRightOperand (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccessRightOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_sliceMap::current_mResultType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @sliceMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_sliceMap::UpEnumerator_sliceMap (const GGS_sliceMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element UpEnumerator_sliceMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_sliceMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation UpEnumerator_sliceMap::current_mAccessOperator (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccessOperator ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_sliceMap::current_mAccessRightOperand (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccessRightOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_sliceMap::current_mResultType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultType ;
}


//--------------------------------------------------------------------------------------------------
//     @sliceMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap ("sliceMap",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap GGS_sliceMap::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_sliceMap result ;
  const GGS_sliceMap * p = (const GGS_sliceMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

