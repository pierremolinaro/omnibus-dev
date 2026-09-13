#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

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

AbstractPtrClass * cPtr_compileTimeIntBitWiseOrOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_compileTimeIntMinusOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_compileTimeIntComplementOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_registerGroupIndexAST_2E_index::GGS_registerGroupIndexAST_2E_index (void) :
mProperty_index (),
mProperty_endOfIndex (),
mProperty_checkIndexExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index::GGS_registerGroupIndexAST_2E_index (const GGS_registerGroupIndexAST_2E_index & inSource) :
mProperty_index (inSource.mProperty_index),
mProperty_endOfIndex (inSource.mProperty_endOfIndex),
mProperty_checkIndexExpression (inSource.mProperty_checkIndexExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index & GGS_registerGroupIndexAST_2E_index::operator = (const GGS_registerGroupIndexAST_2E_index & inSource) {
  mProperty_index = inSource.mProperty_index ;
  mProperty_endOfIndex = inSource.mProperty_endOfIndex ;
  mProperty_checkIndexExpression = inSource.mProperty_checkIndexExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index GGS_registerGroupIndexAST_2E_index::init_21__21__21_ (const GGS_expressionAST & in_index,
                                                                                         const GGS_location & in_endOfIndex,
                                                                                         const GGS_bool & in_checkIndexExpression,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupIndexAST_2E_index result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_index = in_index ;
  result.mProperty_endOfIndex = in_endOfIndex ;
  result.mProperty_checkIndexExpression = in_checkIndexExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST_2E_index::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index::GGS_registerGroupIndexAST_2E_index (const GGS_expressionAST & inOperand0,
                                                                        const GGS_location & inOperand1,
                                                                        const GGS_bool & inOperand2) :
mProperty_index (inOperand0),
mProperty_endOfIndex (inOperand1),
mProperty_checkIndexExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupIndexAST_2E_index::isValid (void) const {
  return mProperty_index.isValid () && mProperty_endOfIndex.isValid () && mProperty_checkIndexExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST_2E_index::drop (void) {
  mProperty_index.drop () ;
  mProperty_endOfIndex.drop () ;
  mProperty_checkIndexExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST_2E_index::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupIndexAST.index:") ;
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
//     @registerGroupIndexAST.index generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index ("registerGroupIndexAST.index",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupIndexAST_2E_index::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupIndexAST_2E_index::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupIndexAST_2E_index (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index GGS_registerGroupIndexAST_2E_index::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_registerGroupIndexAST_2E_index result ;
  const GGS_registerGroupIndexAST_2E_index * p = (const GGS_registerGroupIndexAST_2E_index *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupIndexAST_2E_index *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupIndexAST.index", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @registerGroupIndexAST_2E_index_3F_
//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index_3F_::GGS_registerGroupIndexAST_2E_index_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index_3F_::GGS_registerGroupIndexAST_2E_index_3F_ (const GGS_registerGroupIndexAST_2E_index & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index_3F_ GGS_registerGroupIndexAST_2E_index_3F_::init_nil (void) {
  GGS_registerGroupIndexAST_2E_index_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupIndexAST_2E_index_3F_::isValid (void) const {
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

bool GGS_registerGroupIndexAST_2E_index_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST_2E_index_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_registerGroupIndexAST_2E_index () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST_2E_index_3F_::description (String & ioString,
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
//     @registerGroupIndexAST.index? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index_3F_ ("registerGroupIndexAST.index?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupIndexAST_2E_index_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupIndexAST_2E_index_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupIndexAST_2E_index_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index_3F_ GGS_registerGroupIndexAST_2E_index_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_registerGroupIndexAST_2E_index_3F_ result ;
  const GGS_registerGroupIndexAST_2E_index_3F_ * p = (const GGS_registerGroupIndexAST_2E_index_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupIndexAST_2E_index_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupIndexAST.index?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index::GGS_registerIndexAST_2E_index (void) :
mProperty_index (),
mProperty_endOfIndex (),
mProperty_checkIndexExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index::GGS_registerIndexAST_2E_index (const GGS_registerIndexAST_2E_index & inSource) :
mProperty_index (inSource.mProperty_index),
mProperty_endOfIndex (inSource.mProperty_endOfIndex),
mProperty_checkIndexExpression (inSource.mProperty_checkIndexExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index & GGS_registerIndexAST_2E_index::operator = (const GGS_registerIndexAST_2E_index & inSource) {
  mProperty_index = inSource.mProperty_index ;
  mProperty_endOfIndex = inSource.mProperty_endOfIndex ;
  mProperty_checkIndexExpression = inSource.mProperty_checkIndexExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerIndexAST_2E_index GGS_registerIndexAST_2E_index::init_21__21__21_ (const GGS_expressionAST & in_index,
                                                                               const GGS_location & in_endOfIndex,
                                                                               const GGS_bool & in_checkIndexExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerIndexAST_2E_index result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_index = in_index ;
  result.mProperty_endOfIndex = in_endOfIndex ;
  result.mProperty_checkIndexExpression = in_checkIndexExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST_2E_index::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index::GGS_registerIndexAST_2E_index (const GGS_expressionAST & inOperand0,
                                                              const GGS_location & inOperand1,
                                                              const GGS_bool & inOperand2) :
mProperty_index (inOperand0),
mProperty_endOfIndex (inOperand1),
mProperty_checkIndexExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerIndexAST_2E_index::isValid (void) const {
  return mProperty_index.isValid () && mProperty_endOfIndex.isValid () && mProperty_checkIndexExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST_2E_index::drop (void) {
  mProperty_index.drop () ;
  mProperty_endOfIndex.drop () ;
  mProperty_checkIndexExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST_2E_index::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerIndexAST.index:") ;
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
//     @registerIndexAST.index generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST_2E_index ("registerIndexAST.index",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerIndexAST_2E_index::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIndexAST_2E_index ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerIndexAST_2E_index::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerIndexAST_2E_index (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index GGS_registerIndexAST_2E_index::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_registerIndexAST_2E_index result ;
  const GGS_registerIndexAST_2E_index * p = (const GGS_registerIndexAST_2E_index *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerIndexAST_2E_index *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIndexAST.index", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @registerIndexAST_2E_index_3F_
//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index_3F_::GGS_registerIndexAST_2E_index_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index_3F_::GGS_registerIndexAST_2E_index_3F_ (const GGS_registerIndexAST_2E_index & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index_3F_ GGS_registerIndexAST_2E_index_3F_::init_nil (void) {
  GGS_registerIndexAST_2E_index_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerIndexAST_2E_index_3F_::isValid (void) const {
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

bool GGS_registerIndexAST_2E_index_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST_2E_index_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_registerIndexAST_2E_index () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST_2E_index_3F_::description (String & ioString,
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
//     @registerIndexAST.index? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST_2E_index_3F_ ("registerIndexAST.index?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerIndexAST_2E_index_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIndexAST_2E_index_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerIndexAST_2E_index_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerIndexAST_2E_index_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index_3F_ GGS_registerIndexAST_2E_index_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_registerIndexAST_2E_index_3F_ result ;
  const GGS_registerIndexAST_2E_index_3F_ * p = (const GGS_registerIndexAST_2E_index_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerIndexAST_2E_index_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIndexAST.index?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element::GGS_switchCaseListAST_2E_element (void) :
mProperty_mCaseIdentifiers (),
mProperty_mCaseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element::GGS_switchCaseListAST_2E_element (const GGS_switchCaseListAST_2E_element & inSource) :
mProperty_mCaseIdentifiers (inSource.mProperty_mCaseIdentifiers),
mProperty_mCaseInstructionList (inSource.mProperty_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element & GGS_switchCaseListAST_2E_element::operator = (const GGS_switchCaseListAST_2E_element & inSource) {
  mProperty_mCaseIdentifiers = inSource.mProperty_mCaseIdentifiers ;
  mProperty_mCaseInstructionList = inSource.mProperty_mCaseInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchCaseListAST_2E_element GGS_switchCaseListAST_2E_element::init_21__21_ (const GGS_lstringlist & in_mCaseIdentifiers,
                                                                                 const GGS_instructionListAST & in_mCaseInstructionList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchCaseListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCaseIdentifiers = in_mCaseIdentifiers ;
  result.mProperty_mCaseInstructionList = in_mCaseInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element::GGS_switchCaseListAST_2E_element (const GGS_lstringlist & inOperand0,
                                                                    const GGS_instructionListAST & inOperand1) :
mProperty_mCaseIdentifiers (inOperand0),
mProperty_mCaseInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchCaseListAST_2E_element::isValid (void) const {
  return mProperty_mCaseIdentifiers.isValid () && mProperty_mCaseInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST_2E_element::drop (void) {
  mProperty_mCaseIdentifiers.drop () ;
  mProperty_mCaseInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchCaseListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCaseIdentifiers.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCaseInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchCaseListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListAST_2E_element ("switchCaseListAST.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchCaseListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchCaseListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchCaseListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element GGS_switchCaseListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchCaseListAST_2E_element result ;
  const GGS_switchCaseListAST_2E_element * p = (const GGS_switchCaseListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchCaseListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element::GGS_switchCaseListIR_2E_element (void) :
mProperty_mCaseIdentifierIndexes (),
mProperty_mCaseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element::GGS_switchCaseListIR_2E_element (const GGS_switchCaseListIR_2E_element & inSource) :
mProperty_mCaseIdentifierIndexes (inSource.mProperty_mCaseIdentifierIndexes),
mProperty_mCaseInstructionList (inSource.mProperty_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element & GGS_switchCaseListIR_2E_element::operator = (const GGS_switchCaseListIR_2E_element & inSource) {
  mProperty_mCaseIdentifierIndexes = inSource.mProperty_mCaseIdentifierIndexes ;
  mProperty_mCaseInstructionList = inSource.mProperty_mCaseInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchCaseListIR_2E_element GGS_switchCaseListIR_2E_element::init_21__21_ (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                                                               const GGS_instructionListIR & in_mCaseInstructionList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchCaseListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCaseIdentifierIndexes = in_mCaseIdentifierIndexes ;
  result.mProperty_mCaseInstructionList = in_mCaseInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element::GGS_switchCaseListIR_2E_element (const GGS_uintlist & inOperand0,
                                                                  const GGS_instructionListIR & inOperand1) :
mProperty_mCaseIdentifierIndexes (inOperand0),
mProperty_mCaseInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchCaseListIR_2E_element::isValid (void) const {
  return mProperty_mCaseIdentifierIndexes.isValid () && mProperty_mCaseInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR_2E_element::drop (void) {
  mProperty_mCaseIdentifierIndexes.drop () ;
  mProperty_mCaseInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchCaseListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCaseIdentifierIndexes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCaseInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchCaseListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListIR_2E_element ("switchCaseListIR.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchCaseListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchCaseListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchCaseListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element GGS_switchCaseListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_switchCaseListIR_2E_element result ;
  const GGS_switchCaseListIR_2E_element * p = (const GGS_switchCaseListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchCaseListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_genericFormalParameterList_2E_element::GGS_genericFormalParameterList_2E_element (void) :
mProperty_mParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList_2E_element::GGS_genericFormalParameterList_2E_element (const GGS_genericFormalParameterList_2E_element & inSource) :
mProperty_mParameter (inSource.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList_2E_element & GGS_genericFormalParameterList_2E_element::operator = (const GGS_genericFormalParameterList_2E_element & inSource) {
  mProperty_mParameter = inSource.mProperty_mParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_genericFormalParameterList_2E_element GGS_genericFormalParameterList_2E_element::init_21_ (const GGS_genericFormalParameter & in_mParameter,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameter = in_mParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList_2E_element::GGS_genericFormalParameterList_2E_element (const GGS_genericFormalParameter & inOperand0) :
mProperty_mParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_genericFormalParameterList_2E_element::objectCompare (const GGS_genericFormalParameterList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameter.objectCompare (inOperand.mProperty_mParameter) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericFormalParameterList_2E_element::isValid (void) const {
  return mProperty_mParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList_2E_element::drop (void) {
  mProperty_mParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericFormalParameterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @genericFormalParameterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameterList_2E_element ("genericFormalParameterList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericFormalParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList_2E_element GGS_genericFormalParameterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameterList_2E_element result ;
  const GGS_genericFormalParameterList_2E_element * p = (const GGS_genericFormalParameterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element::GGS_llvmStringDefinition_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element::GGS_llvmStringDefinition_2E_element (const GGS_llvmStringDefinition_2E_element & inSource) :
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element & GGS_llvmStringDefinition_2E_element::operator = (const GGS_llvmStringDefinition_2E_element & inSource) {
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element GGS_llvmStringDefinition_2E_element::init_21_ (const GGS_llvmStringDefinitionElement & in_mElement,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinition_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element::GGS_llvmStringDefinition_2E_element (const GGS_llvmStringDefinitionElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinition_2E_element::objectCompare (const GGS_llvmStringDefinition_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmStringDefinition_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmStringDefinition.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmStringDefinition.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinition_2E_element ("llvmStringDefinition.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinition_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinition_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinition_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinition_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element GGS_llvmStringDefinition_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinition_2E_element result ;
  const GGS_llvmStringDefinition_2E_element * p = (const GGS_llvmStringDefinition_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinition_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinition.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_objectIR_2E_literalString::GGS_objectIR_2E_literalString (void) :
mProperty_utf_38_Size (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString::GGS_objectIR_2E_literalString (const GGS_objectIR_2E_literalString & inSource) :
mProperty_utf_38_Size (inSource.mProperty_utf_38_Size),
mProperty_index (inSource.mProperty_index) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString & GGS_objectIR_2E_literalString::operator = (const GGS_objectIR_2E_literalString & inSource) {
  mProperty_utf_38_Size = inSource.mProperty_utf_38_Size ;
  mProperty_index = inSource.mProperty_index ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectIR_2E_literalString GGS_objectIR_2E_literalString::init_21__21_ (const GGS_uint & in_utf_38_Size,
                                                                           const GGS_uint & in_index,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR_2E_literalString result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_utf_38_Size = in_utf_38_Size ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalString::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString::GGS_objectIR_2E_literalString (const GGS_uint & inOperand0,
                                                              const GGS_uint & inOperand1) :
mProperty_utf_38_Size (inOperand0),
mProperty_index (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_literalString::objectCompare (const GGS_objectIR_2E_literalString & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_utf_38_Size.objectCompare (inOperand.mProperty_utf_38_Size) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_index.objectCompare (inOperand.mProperty_index) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_literalString::isValid (void) const {
  return mProperty_utf_38_Size.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalString::drop (void) {
  mProperty_utf_38_Size.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalString::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectIR.literalString:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_utf_38_Size.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_index.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @objectIR.literalString generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_literalString ("objectIR.literalString",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_literalString::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_literalString ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_literalString::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_literalString (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString GGS_objectIR_2E_literalString::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_literalString result ;
  const GGS_objectIR_2E_literalString * p = (const GGS_objectIR_2E_literalString *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_literalString *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.literalString", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @objectIR_2E_literalString_3F_
//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString_3F_::GGS_objectIR_2E_literalString_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString_3F_::GGS_objectIR_2E_literalString_3F_ (const GGS_objectIR_2E_literalString & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString_3F_ GGS_objectIR_2E_literalString_3F_::init_nil (void) {
  GGS_objectIR_2E_literalString_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectIR_2E_literalString_3F_::isValid (void) const {
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

bool GGS_objectIR_2E_literalString_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR_2E_literalString_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_objectIR_2E_literalString () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR_2E_literalString_3F_::objectCompare (const GGS_objectIR_2E_literalString_3F_ & inOperand) const {
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

void GGS_objectIR_2E_literalString_3F_::description (String & ioString,
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
//     @objectIR.literalString? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR_2E_literalString_3F_ ("objectIR.literalString?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR_2E_literalString_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR_2E_literalString_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR_2E_literalString_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR_2E_literalString_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString_3F_ GGS_objectIR_2E_literalString_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_objectIR_2E_literalString_3F_ result ;
  const GGS_objectIR_2E_literalString_3F_ * p = (const GGS_objectIR_2E_literalString_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR_2E_literalString_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR.literalString?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_llvmGenerationInstructionElement_2E_string::GGS_llvmGenerationInstructionElement_2E_string (void) :
mProperty_string () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string::GGS_llvmGenerationInstructionElement_2E_string (const GGS_llvmGenerationInstructionElement_2E_string & inSource) :
mProperty_string (inSource.mProperty_string) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string & GGS_llvmGenerationInstructionElement_2E_string::operator = (const GGS_llvmGenerationInstructionElement_2E_string & inSource) {
  mProperty_string = inSource.mProperty_string ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string GGS_llvmGenerationInstructionElement_2E_string::init_21_ (const GGS_string & in_string,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_string result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_string = in_string ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_string::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string::GGS_llvmGenerationInstructionElement_2E_string (const GGS_string & inOperand0) :
mProperty_string (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmGenerationInstructionElement_2E_string::isValid (void) const {
  return mProperty_string.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_string::drop (void) {
  mProperty_string.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_string::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmGenerationInstructionElement.string:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_string.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionElement.string generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_string ("llvmGenerationInstructionElement.string",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElement_2E_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_string ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElement_2E_string::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElement_2E_string (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string GGS_llvmGenerationInstructionElement_2E_string::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_string result ;
  const GGS_llvmGenerationInstructionElement_2E_string * p = (const GGS_llvmGenerationInstructionElement_2E_string *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElement_2E_string *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement.string", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @llvmGenerationInstructionElement_2E_string_3F_
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string_3F_::GGS_llvmGenerationInstructionElement_2E_string_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string_3F_::GGS_llvmGenerationInstructionElement_2E_string_3F_ (const GGS_llvmGenerationInstructionElement_2E_string & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string_3F_ GGS_llvmGenerationInstructionElement_2E_string_3F_::init_nil (void) {
  GGS_llvmGenerationInstructionElement_2E_string_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmGenerationInstructionElement_2E_string_3F_::isValid (void) const {
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

bool GGS_llvmGenerationInstructionElement_2E_string_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_string_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_llvmGenerationInstructionElement_2E_string () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElement_2E_string_3F_::description (String & ioString,
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
//     @llvmGenerationInstructionElement.string? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_string_3F_ ("llvmGenerationInstructionElement.string?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElement_2E_string_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_string_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElement_2E_string_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElement_2E_string_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElement_2E_string_3F_ GGS_llvmGenerationInstructionElement_2E_string_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElement_2E_string_3F_ result ;
  const GGS_llvmGenerationInstructionElement_2E_string_3F_ * p = (const GGS_llvmGenerationInstructionElement_2E_string_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElement_2E_string_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement.string?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element::GGS_llvmGenerationInstructionElementList_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element::GGS_llvmGenerationInstructionElementList_2E_element (const GGS_llvmGenerationInstructionElementList_2E_element & inSource) :
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element & GGS_llvmGenerationInstructionElementList_2E_element::operator = (const GGS_llvmGenerationInstructionElementList_2E_element & inSource) {
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element GGS_llvmGenerationInstructionElementList_2E_element::init_21_ (const GGS_llvmGenerationInstructionElement & in_mElement,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element::GGS_llvmGenerationInstructionElementList_2E_element (const GGS_llvmGenerationInstructionElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmGenerationInstructionElementList_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionElementList_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmGenerationInstructionElementList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionElementList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList_2E_element ("llvmGenerationInstructionElementList.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionElementList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionElementList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionElementList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionElementList_2E_element GGS_llvmGenerationInstructionElementList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionElementList_2E_element result ;
  const GGS_llvmGenerationInstructionElementList_2E_element * p = (const GGS_llvmGenerationInstructionElementList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionElementList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElementList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element::GGS_llvmGenerationInstructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element::GGS_llvmGenerationInstructionList_2E_element (const GGS_llvmGenerationInstructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element & GGS_llvmGenerationInstructionList_2E_element::operator = (const GGS_llvmGenerationInstructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element GGS_llvmGenerationInstructionList_2E_element::init_21_ (const GGS_abstractLLVMInstruction & in_mInstruction,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element::GGS_llvmGenerationInstructionList_2E_element (const GGS_abstractLLVMInstruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_llvmGenerationInstructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @llvmGenerationInstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList_2E_element ("llvmGenerationInstructionList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element GGS_llvmGenerationInstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList_2E_element result ;
  const GGS_llvmGenerationInstructionList_2E_element * p = (const GGS_llvmGenerationInstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element::GGS_procCallEffectiveParameterListIR_2E_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element::GGS_procCallEffectiveParameterListIR_2E_element (const GGS_procCallEffectiveParameterListIR_2E_element & inSource) :
mProperty_mEffectiveParameterPassingMode (inSource.mProperty_mEffectiveParameterPassingMode),
mProperty_mParameter (inSource.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element & GGS_procCallEffectiveParameterListIR_2E_element::operator = (const GGS_procCallEffectiveParameterListIR_2E_element & inSource) {
  mProperty_mEffectiveParameterPassingMode = inSource.mProperty_mEffectiveParameterPassingMode ;
  mProperty_mParameter = inSource.mProperty_mParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                                                               const GGS_objectIR & in_mParameter,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_procCallEffectiveParameterListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEffectiveParameterPassingMode = in_mEffectiveParameterPassingMode ;
  result.mProperty_mParameter = in_mParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element::GGS_procCallEffectiveParameterListIR_2E_element (const GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                  const GGS_objectIR & inOperand1) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mParameter (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_procCallEffectiveParameterListIR_2E_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR_2E_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @procCallEffectiveParameterListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @procCallEffectiveParameterListIR.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2E_element ("procCallEffectiveParameterListIR.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procCallEffectiveParameterListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallEffectiveParameterListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallEffectiveParameterListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element GGS_procCallEffectiveParameterListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_procCallEffectiveParameterListIR_2E_element result ;
  const GGS_procCallEffectiveParameterListIR_2E_element * p = (const GGS_procCallEffectiveParameterListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallEffectiveParameterListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_interruptionPanicCode_2E_code::GGS_interruptionPanicCode_2E_code (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code::GGS_interruptionPanicCode_2E_code (const GGS_interruptionPanicCode_2E_code & inSource) :
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code & GGS_interruptionPanicCode_2E_code::operator = (const GGS_interruptionPanicCode_2E_code & inSource) {
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code GGS_interruptionPanicCode_2E_code::init_21_ (const GGS_lbigint & in_value,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_interruptionPanicCode_2E_code result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionPanicCode_2E_code::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code::GGS_interruptionPanicCode_2E_code (const GGS_lbigint & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_interruptionPanicCode_2E_code::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionPanicCode_2E_code::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionPanicCode_2E_code::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @interruptionPanicCode.code:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @interruptionPanicCode.code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code ("interruptionPanicCode.code",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_interruptionPanicCode_2E_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptionPanicCode_2E_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptionPanicCode_2E_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code GGS_interruptionPanicCode_2E_code::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_interruptionPanicCode_2E_code result ;
  const GGS_interruptionPanicCode_2E_code * p = (const GGS_interruptionPanicCode_2E_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptionPanicCode_2E_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionPanicCode.code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @interruptionPanicCode_2E_code_3F_
//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code_3F_::GGS_interruptionPanicCode_2E_code_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code_3F_::GGS_interruptionPanicCode_2E_code_3F_ (const GGS_interruptionPanicCode_2E_code & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code_3F_ GGS_interruptionPanicCode_2E_code_3F_::init_nil (void) {
  GGS_interruptionPanicCode_2E_code_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_interruptionPanicCode_2E_code_3F_::isValid (void) const {
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

bool GGS_interruptionPanicCode_2E_code_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionPanicCode_2E_code_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_interruptionPanicCode_2E_code () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionPanicCode_2E_code_3F_::description (String & ioString,
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
//     @interruptionPanicCode.code? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code_3F_ ("interruptionPanicCode.code?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_interruptionPanicCode_2E_code_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptionPanicCode_2E_code_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptionPanicCode_2E_code_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code_3F_ GGS_interruptionPanicCode_2E_code_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_interruptionPanicCode_2E_code_3F_ result ;
  const GGS_interruptionPanicCode_2E_code_3F_ * p = (const GGS_interruptionPanicCode_2E_code_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptionPanicCode_2E_code_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionPanicCode.code?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @extendExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extendExpressionAST::objectCompare (const GGS_extendExpressionAST & inOperand) const {
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

GGS_extendExpressionAST::GGS_extendExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                  const GGS_lstring & in_mTypeName,
                  const GGS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_extendExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_extendExpressionAST (inCompiler COMMA_THERE)) ;
  object->extendExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GGS_extendExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::
extendExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_location & in_mEndOfExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST::GGS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_extendExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extendExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extendExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mEndOfExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extendExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GGS_expressionAST & in_mExpression,
                                                    const GGS_lstring & in_mTypeName,
                                                    const GGS_location & in_mEndOfExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extendExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

void cPtr_extendExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@extendExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_extendExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extendExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extendExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_extendExpressionAST result ;
  const GGS_extendExpressionAST * p = (const GGS_extendExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extendExpressionAST_2E_weak::objectCompare (const GGS_extendExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_extendExpressionAST_2E_weak::GGS_extendExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST_2E_weak & GGS_extendExpressionAST_2E_weak::operator = (const GGS_extendExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST_2E_weak::GGS_extendExpressionAST_2E_weak (const GGS_extendExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST_2E_weak GGS_extendExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extendExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_extendExpressionAST result ;
  if (isValid ()) {
    const cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_extendExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST_2E_weak::bang_extendExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extendExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extendExpressionAST) ;
      result = GGS_extendExpressionAST ((cPtr_extendExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extendExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendExpressionAST_2E_weak ("extendExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST_2E_weak GGS_extendExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_extendExpressionAST_2E_weak result ;
  const GGS_extendExpressionAST_2E_weak * p = (const GGS_extendExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element::GGS_decoratedRegularRoutineList_2E_element (void) :
mProperty_receiverTypeName (),
mProperty_mode (),
mProperty_isRequired (),
mProperty_routineKind (),
mProperty_warnIfUnused (),
mProperty_exportedRoutine (),
mProperty_routineAttributes (),
mProperty_routineMangledLLVMName (),
mProperty_formalArgumentList (),
mProperty_warningOnUnusedArgs (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineDeclaration (),
mProperty_returnTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element::GGS_decoratedRegularRoutineList_2E_element (const GGS_decoratedRegularRoutineList_2E_element & inSource) :
mProperty_receiverTypeName (inSource.mProperty_receiverTypeName),
mProperty_mode (inSource.mProperty_mode),
mProperty_isRequired (inSource.mProperty_isRequired),
mProperty_routineKind (inSource.mProperty_routineKind),
mProperty_warnIfUnused (inSource.mProperty_warnIfUnused),
mProperty_exportedRoutine (inSource.mProperty_exportedRoutine),
mProperty_routineAttributes (inSource.mProperty_routineAttributes),
mProperty_routineMangledLLVMName (inSource.mProperty_routineMangledLLVMName),
mProperty_formalArgumentList (inSource.mProperty_formalArgumentList),
mProperty_warningOnUnusedArgs (inSource.mProperty_warningOnUnusedArgs),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfRoutineDeclaration (inSource.mProperty_mEndOfRoutineDeclaration),
mProperty_returnTypeName (inSource.mProperty_returnTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element & GGS_decoratedRegularRoutineList_2E_element::operator = (const GGS_decoratedRegularRoutineList_2E_element & inSource) {
  mProperty_receiverTypeName = inSource.mProperty_receiverTypeName ;
  mProperty_mode = inSource.mProperty_mode ;
  mProperty_isRequired = inSource.mProperty_isRequired ;
  mProperty_routineKind = inSource.mProperty_routineKind ;
  mProperty_warnIfUnused = inSource.mProperty_warnIfUnused ;
  mProperty_exportedRoutine = inSource.mProperty_exportedRoutine ;
  mProperty_routineAttributes = inSource.mProperty_routineAttributes ;
  mProperty_routineMangledLLVMName = inSource.mProperty_routineMangledLLVMName ;
  mProperty_formalArgumentList = inSource.mProperty_formalArgumentList ;
  mProperty_warningOnUnusedArgs = inSource.mProperty_warningOnUnusedArgs ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfRoutineDeclaration = inSource.mProperty_mEndOfRoutineDeclaration ;
  mProperty_returnTypeName = inSource.mProperty_returnTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element GGS_decoratedRegularRoutineList_2E_element::init_21_receiverTypeName_21_mode_21_isRequired_21_routineKind_21_warnIfUnused_21_exportedRoutine_21_routineAttributes_21_routineMangledLLVMName_21_formalArgumentList_21_warningOnUnusedArgs_21__21__21_returnTypeName (const GGS_lstring & in_receiverTypeName,
                                                                                                                                                                                                                                                                                                               const GGS_mode & in_mode,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_isRequired,
                                                                                                                                                                                                                                                                                                               const GGS_routineKind & in_routineKind,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_warnIfUnused,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_exportedRoutine,
                                                                                                                                                                                                                                                                                                               const GGS_routineAttributes & in_routineAttributes,
                                                                                                                                                                                                                                                                                                               const GGS_lstring & in_routineMangledLLVMName,
                                                                                                                                                                                                                                                                                                               const GGS_routineFormalArgumentListAST & in_formalArgumentList,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_warningOnUnusedArgs,
                                                                                                                                                                                                                                                                                                               const GGS_instructionListAST & in_mInstructionList,
                                                                                                                                                                                                                                                                                                               const GGS_location & in_mEndOfRoutineDeclaration,
                                                                                                                                                                                                                                                                                                               const GGS_lstring & in_returnTypeName,
                                                                                                                                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_receiverTypeName = in_receiverTypeName ;
  result.mProperty_mode = in_mode ;
  result.mProperty_isRequired = in_isRequired ;
  result.mProperty_routineKind = in_routineKind ;
  result.mProperty_warnIfUnused = in_warnIfUnused ;
  result.mProperty_exportedRoutine = in_exportedRoutine ;
  result.mProperty_routineAttributes = in_routineAttributes ;
  result.mProperty_routineMangledLLVMName = in_routineMangledLLVMName ;
  result.mProperty_formalArgumentList = in_formalArgumentList ;
  result.mProperty_warningOnUnusedArgs = in_warningOnUnusedArgs ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineDeclaration = in_mEndOfRoutineDeclaration ;
  result.mProperty_returnTypeName = in_returnTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element::GGS_decoratedRegularRoutineList_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_mode & inOperand1,
                                                                                        const GGS_bool & inOperand2,
                                                                                        const GGS_routineKind & inOperand3,
                                                                                        const GGS_bool & inOperand4,
                                                                                        const GGS_bool & inOperand5,
                                                                                        const GGS_routineAttributes & inOperand6,
                                                                                        const GGS_lstring & inOperand7,
                                                                                        const GGS_routineFormalArgumentListAST & inOperand8,
                                                                                        const GGS_bool & inOperand9,
                                                                                        const GGS_instructionListAST & inOperand10,
                                                                                        const GGS_location & inOperand11,
                                                                                        const GGS_lstring & inOperand12) :
mProperty_receiverTypeName (inOperand0),
mProperty_mode (inOperand1),
mProperty_isRequired (inOperand2),
mProperty_routineKind (inOperand3),
mProperty_warnIfUnused (inOperand4),
mProperty_exportedRoutine (inOperand5),
mProperty_routineAttributes (inOperand6),
mProperty_routineMangledLLVMName (inOperand7),
mProperty_formalArgumentList (inOperand8),
mProperty_warningOnUnusedArgs (inOperand9),
mProperty_mInstructionList (inOperand10),
mProperty_mEndOfRoutineDeclaration (inOperand11),
mProperty_returnTypeName (inOperand12) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedRegularRoutineList_2E_element::isValid (void) const {
  return mProperty_receiverTypeName.isValid () && mProperty_mode.isValid () && mProperty_isRequired.isValid () && mProperty_routineKind.isValid () && mProperty_warnIfUnused.isValid () && mProperty_exportedRoutine.isValid () && mProperty_routineAttributes.isValid () && mProperty_routineMangledLLVMName.isValid () && mProperty_formalArgumentList.isValid () && mProperty_warningOnUnusedArgs.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineDeclaration.isValid () && mProperty_returnTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList_2E_element::drop (void) {
  mProperty_receiverTypeName.drop () ;
  mProperty_mode.drop () ;
  mProperty_isRequired.drop () ;
  mProperty_routineKind.drop () ;
  mProperty_warnIfUnused.drop () ;
  mProperty_exportedRoutine.drop () ;
  mProperty_routineAttributes.drop () ;
  mProperty_routineMangledLLVMName.drop () ;
  mProperty_formalArgumentList.drop () ;
  mProperty_warningOnUnusedArgs.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineDeclaration.drop () ;
  mProperty_returnTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedRegularRoutineList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_receiverTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isRequired.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_warnIfUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exportedRoutine.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineAttributes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineMangledLLVMName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_formalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_warningOnUnusedArgs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_returnTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedRegularRoutineList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2E_element ("decoratedRegularRoutineList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedRegularRoutineList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRegularRoutineList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRegularRoutineList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element GGS_decoratedRegularRoutineList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList_2E_element result ;
  const GGS_decoratedRegularRoutineList_2E_element * p = (const GGS_decoratedRegularRoutineList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRegularRoutineList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRegularRoutineList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
AbstractStrongPtrClass (inCompiler COMMA_THERE),
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
AbstractStrongPtrClass (inCompiler COMMA_THERE),
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

AbstractPtrClass * cPtr_omnibusType::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_omnibusType (mProperty_subscript, mProperty_attributes, mProperty_omnibusTypeDescriptionName, mProperty_kind, mProperty_llvmBaseTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_omnibusType::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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
AbstractStrongPtrClass (inCompiler COMMA_THERE),
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
AbstractStrongPtrClass (inCompiler COMMA_THERE),
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
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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

ComparisonResult GGS_regularRoutineIR_2E_weak::objectCompare (const GGS_regularRoutineIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_regularRoutineIR_2E_weak::GGS_regularRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR_2E_weak & GGS_regularRoutineIR_2E_weak::operator = (const GGS_regularRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR_2E_weak::GGS_regularRoutineIR_2E_weak (const GGS_regularRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR_2E_weak GGS_regularRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_regularRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_regularRoutineIR result ;
  if (isValid ()) {
    const cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_regularRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR_2E_weak::bang_regularRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_regularRoutineIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_regularRoutineIR) ;
      result = GGS_regularRoutineIR ((cPtr_regularRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @regularRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularRoutineIR_2E_weak ("regularRoutineIR.weak",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR_2E_weak GGS_regularRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_regularRoutineIR_2E_weak result ;
  const GGS_regularRoutineIR_2E_weak * p = (const GGS_regularRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @storeToUniversalReferenceIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeToUniversalReferenceIR::objectCompare (const GGS_storeToUniversalReferenceIR & inOperand) const {
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

GGS_storeToUniversalReferenceIR::GGS_storeToUniversalReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR::
init_21__21__21_ (const GGS_string & in_mLLVMTargetVarName,
                  const GGS_omnibusType & in_mTargetVarType,
                  const GGS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeToUniversalReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_storeToUniversalReferenceIR (inCompiler COMMA_THERE)) ;
  object->storeToUniversalReferenceIR_init_21__21__21_ (in_mLLVMTargetVarName, in_mTargetVarType, in_mSourceValue, inCompiler) ;
  const GGS_storeToUniversalReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeToUniversalReferenceIR::
storeToUniversalReferenceIR_init_21__21__21_ (const GGS_string & in_mLLVMTargetVarName,
                                              const GGS_omnibusType & in_mTargetVarType,
                                              const GGS_objectIR & in_mSourceValue,
                                              Compiler * /* inCompiler */) {
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR::GGS_storeToUniversalReferenceIR (const cPtr_storeToUniversalReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeToUniversalReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_storeToUniversalReferenceIR::readProperty_mLLVMTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mLLVMTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeToUniversalReferenceIR::setProperty_mLLVMTargetVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mLLVMTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_storeToUniversalReferenceIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeToUniversalReferenceIR::setProperty_mTargetVarType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeToUniversalReferenceIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeToUniversalReferenceIR::setProperty_mSourceValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeToUniversalReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTargetVarName (),
mProperty_mTargetVarType (),
mProperty_mSourceValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (const GGS_string & in_mLLVMTargetVarName,
                                                                    const GGS_omnibusType & in_mTargetVarType,
                                                                    const GGS_objectIR & in_mSourceValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTargetVarName (),
mProperty_mTargetVarType (),
mProperty_mSourceValue () {
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_storeToUniversalReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

void cPtr_storeToUniversalReferenceIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@storeToUniversalReferenceIR:") ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_storeToUniversalReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeToUniversalReferenceIR (mProperty_mLLVMTargetVarName, mProperty_mTargetVarType, mProperty_mSourceValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeToUniversalReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMTargetVarName.printNonNullClassInstanceProperties ("mLLVMTargetVarName") ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @storeToUniversalReferenceIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ("storeToUniversalReferenceIR",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeToUniversalReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeToUniversalReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeToUniversalReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_storeToUniversalReferenceIR result ;
  const GGS_storeToUniversalReferenceIR * p = (const GGS_storeToUniversalReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeToUniversalReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

