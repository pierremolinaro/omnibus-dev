#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeComputedPropertyValueIR_2E_weak::objectCompare (const GGS_storeComputedPropertyValueIR_2E_weak & inOperand) const {
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

GGS_storeComputedPropertyValueIR_2E_weak::GGS_storeComputedPropertyValueIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_storeComputedPropertyValueIR_2E_weak & GGS_storeComputedPropertyValueIR_2E_weak::operator = (const GGS_storeComputedPropertyValueIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//Extension method '@instructionListIR generateRelease'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_generateRelease (GGS_instructionListIR & ioObject,
                                      const GGS_omnibusType constinArgument_inType,
                                      const GGS_lstring constinArgument_in_5F_omnibusName,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_releaseIR::init_21__21_ (constinArgument_inType, constinArgument_in_5F_omnibusName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-release.galgas3", 3)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_releaseIR_2E_weak::objectCompare (const GGS_releaseIR_2E_weak & inOperand) const {
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

GGS_releaseIR_2E_weak::GGS_releaseIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR_2E_weak & GGS_releaseIR_2E_weak::operator = (const GGS_releaseIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_forLowerUpperBoundInstructionAST_2E_weak::objectCompare (const GGS_forLowerUpperBoundInstructionAST_2E_weak & inOperand) const {
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

GGS_forLowerUpperBoundInstructionAST_2E_weak::GGS_forLowerUpperBoundInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST_2E_weak & GGS_forLowerUpperBoundInstructionAST_2E_weak::operator = (const GGS_forLowerUpperBoundInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST_2E_weak::GGS_forLowerUpperBoundInstructionAST_2E_weak (const GGS_forLowerUpperBoundInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST_2E_weak GGS_forLowerUpperBoundInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST GGS_forLowerUpperBoundInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_forLowerUpperBoundInstructionAST result ;
  if (isValid ()) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_forLowerUpperBoundInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST GGS_forLowerUpperBoundInstructionAST_2E_weak::bang_forLowerUpperBoundInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forLowerUpperBoundInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forLowerUpperBoundInstructionAST) ;
      result = GGS_forLowerUpperBoundInstructionAST ((cPtr_forLowerUpperBoundInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @forLowerUpperBoundInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2E_weak ("forLowerUpperBoundInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forLowerUpperBoundInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forLowerUpperBoundInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forLowerUpperBoundInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST_2E_weak GGS_forLowerUpperBoundInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionAST_2E_weak result ;
  const GGS_forLowerUpperBoundInstructionAST_2E_weak * p = (const GGS_forLowerUpperBoundInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forLowerUpperBoundInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forLowerUpperBoundInstructionIR_2E_weak::objectCompare (const GGS_forLowerUpperBoundInstructionIR_2E_weak & inOperand) const {
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

GGS_forLowerUpperBoundInstructionIR_2E_weak::GGS_forLowerUpperBoundInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR_2E_weak & GGS_forLowerUpperBoundInstructionIR_2E_weak::operator = (const GGS_forLowerUpperBoundInstructionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR_2E_weak::GGS_forLowerUpperBoundInstructionIR_2E_weak (const GGS_forLowerUpperBoundInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR_2E_weak GGS_forLowerUpperBoundInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR GGS_forLowerUpperBoundInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_forLowerUpperBoundInstructionIR result ;
  if (isValid ()) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_forLowerUpperBoundInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR GGS_forLowerUpperBoundInstructionIR_2E_weak::bang_forLowerUpperBoundInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forLowerUpperBoundInstructionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forLowerUpperBoundInstructionIR) ;
      result = GGS_forLowerUpperBoundInstructionIR ((cPtr_forLowerUpperBoundInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @forLowerUpperBoundInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2E_weak ("forLowerUpperBoundInstructionIR.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forLowerUpperBoundInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forLowerUpperBoundInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forLowerUpperBoundInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR_2E_weak GGS_forLowerUpperBoundInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionIR_2E_weak result ;
  const GGS_forLowerUpperBoundInstructionIR_2E_weak * p = (const GGS_forLowerUpperBoundInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forLowerUpperBoundInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_boolTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_boolTypeAST_2E_weak::GGS_boolTypeAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak & GGS_boolTypeAST_2E_weak::operator = (const GGS_boolTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @abstractImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractImplicitConverterToBoolean::objectCompare (const GGS_abstractImplicitConverterToBoolean & inOperand) const {
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

GGS_abstractImplicitConverterToBoolean::GGS_abstractImplicitConverterToBoolean (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractImplicitConverterToBoolean::
abstractImplicitConverterToBoolean_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean::GGS_abstractImplicitConverterToBoolean (const cPtr_abstractImplicitConverterToBoolean * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractImplicitConverterToBoolean::cPtr_abstractImplicitConverterToBoolean (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractImplicitConverterToBoolean generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ("abstractImplicitConverterToBoolean",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean result ;
  const GGS_abstractImplicitConverterToBoolean * p = (const GGS_abstractImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_abstractImplicitConverterToBoolean_2E_weak & inOperand) const {
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

GGS_abstractImplicitConverterToBoolean_2E_weak::GGS_abstractImplicitConverterToBoolean_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak & GGS_abstractImplicitConverterToBoolean_2E_weak::operator = (const GGS_abstractImplicitConverterToBoolean & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak::GGS_abstractImplicitConverterToBoolean_2E_weak (const GGS_abstractImplicitConverterToBoolean & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak GGS_abstractImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean_2E_weak::unwrappedValue (void) const {
  GGS_abstractImplicitConverterToBoolean result ;
  if (isValid ()) {
    const cPtr_abstractImplicitConverterToBoolean * p = (cPtr_abstractImplicitConverterToBoolean *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractImplicitConverterToBoolean (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean_2E_weak::bang_abstractImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractImplicitConverterToBoolean) ;
      result = GGS_abstractImplicitConverterToBoolean ((cPtr_abstractImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractImplicitConverterToBoolean.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ("abstractImplicitConverterToBoolean.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak GGS_abstractImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean_2E_weak result ;
  const GGS_abstractImplicitConverterToBoolean_2E_weak * p = (const GGS_abstractImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_boolNotOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_boolNotOperator_2E_weak::GGS_boolNotOperator_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak & GGS_boolNotOperator_2E_weak::operator = (const GGS_boolNotOperator & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

class CollectionElementPtr_controlRegisterNameListAST : public CollectionElementPtr {
  public: GGS_controlRegisterNameListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_controlRegisterNameListAST (const GGS_lstring & in_mRegisterName,
                                                           const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                           const GGS_bool & in_mIsReadOnly,
                                                           const GGS_expressionAST & in_mRegisterOffset,
                                                           const GGS_location & in_mRegisterOffsetLocation
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_controlRegisterNameListAST (const GGS_controlRegisterNameListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterNameListAST::CollectionElementPtr_controlRegisterNameListAST (const GGS_lstring & in_mRegisterName,
                                                                                                  const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                                                                  const GGS_bool & in_mIsReadOnly,
                                                                                                  const GGS_expressionAST & in_mRegisterOffset,
                                                                                                  const GGS_location & in_mRegisterOffsetLocation
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRegisterName, in_mControlRegisterKind, in_mIsReadOnly, in_mRegisterOffset, in_mRegisterOffsetLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterNameListAST::CollectionElementPtr_controlRegisterNameListAST (const GGS_controlRegisterNameListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRegisterName, inElement.mProperty_mControlRegisterKind, inElement.mProperty_mIsReadOnly, inElement.mProperty_mRegisterOffset, inElement.mProperty_mRegisterOffsetLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_controlRegisterNameListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_controlRegisterNameListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_controlRegisterNameListAST (mObject.mProperty_mRegisterName, mObject.mProperty_mControlRegisterKind, mObject.mProperty_mIsReadOnly, mObject.mProperty_mRegisterOffset, mObject.mProperty_mRegisterOffsetLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterNameListAST
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST::GGS_controlRegisterNameListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST::GGS_controlRegisterNameListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_controlRegisterNameListAST * p = (CollectionElementPtr_controlRegisterNameListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_controlRegisterNameListAST) ;
    const GGS_controlRegisterNameListAST_2E_element element (p->mObject.mProperty_mRegisterName, p->mObject.mProperty_mControlRegisterKind, p->mObject.mProperty_mIsReadOnly, p->mObject.mProperty_mRegisterOffset, p->mObject.mProperty_mRegisterOffsetLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_lstring & in_mRegisterName,
                                                                const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                                const GGS_bool & in_mIsReadOnly,
                                                                const GGS_expressionAST & in_mRegisterOffset,
                                                                const GGS_location & in_mRegisterOffsetLocation
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_controlRegisterNameListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_controlRegisterNameListAST (in_mRegisterName, in_mControlRegisterKind, in_mIsReadOnly, in_mRegisterOffset, in_mRegisterOffsetLocation COMMA_THERE)) ;
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

class CollectionElementPtr_controlRegisterDeclarationList : public CollectionElementPtr {
  public: GGS_controlRegisterDeclarationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_controlRegisterDeclarationList (const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                               const GGS_lstring & in_mRegisterTypeName,
                                                               const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                               const GGS_location & in_mRegisterBitSliceListLocation
                                                               COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_controlRegisterDeclarationList (const GGS_controlRegisterDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterDeclarationList::CollectionElementPtr_controlRegisterDeclarationList (const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                          const GGS_lstring & in_mRegisterTypeName,
                                                                                                          const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                          const GGS_location & in_mRegisterBitSliceListLocation
                                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRegisterArrayList, in_mRegisterTypeName, in_mRegisterBitSliceList, in_mRegisterBitSliceListLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterDeclarationList::CollectionElementPtr_controlRegisterDeclarationList (const GGS_controlRegisterDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRegisterArrayList, inElement.mProperty_mRegisterTypeName, inElement.mProperty_mRegisterBitSliceList, inElement.mProperty_mRegisterBitSliceListLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_controlRegisterDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_controlRegisterDeclarationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_controlRegisterDeclarationList (mObject.mProperty_mRegisterArrayList, mObject.mProperty_mRegisterTypeName, mObject.mProperty_mRegisterBitSliceList, mObject.mProperty_mRegisterBitSliceListLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList::GGS_controlRegisterDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList::GGS_controlRegisterDeclarationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_controlRegisterDeclarationList * p = (CollectionElementPtr_controlRegisterDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_controlRegisterDeclarationList) ;
    const GGS_controlRegisterDeclarationList_2E_element element (p->mObject.mProperty_mRegisterArrayList, p->mObject.mProperty_mRegisterTypeName, p->mObject.mProperty_mRegisterBitSliceList, p->mObject.mProperty_mRegisterBitSliceListLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                    const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                    const GGS_lstring & in_mRegisterTypeName,
                                                                    const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                    const GGS_location & in_mRegisterBitSliceListLocation
                                                                    COMMA_LOCATION_ARGS) {
  CollectionElementPtr_controlRegisterDeclarationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_controlRegisterDeclarationList (in_mRegisterArrayList, in_mRegisterTypeName, in_mRegisterBitSliceList, in_mRegisterBitSliceListLocation COMMA_THERE)) ;
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

class CollectionElementPtr_controlRegisterBitSliceList : public CollectionElementPtr {
  public: GGS_controlRegisterBitSliceList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_controlRegisterBitSliceList (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_controlRegisterBitSliceList (const GGS_controlRegisterBitSliceList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterBitSliceList::CollectionElementPtr_controlRegisterBitSliceList (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRegisterBitSlice) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterBitSliceList::CollectionElementPtr_controlRegisterBitSliceList (const GGS_controlRegisterBitSliceList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRegisterBitSlice) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_controlRegisterBitSliceList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_controlRegisterBitSliceList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_controlRegisterBitSliceList (mObject.mProperty_mRegisterBitSlice COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterBitSliceList
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList::GGS_controlRegisterBitSliceList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSliceList::GGS_controlRegisterBitSliceList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_controlRegisterBitSliceList * p = (CollectionElementPtr_controlRegisterBitSliceList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_controlRegisterBitSliceList) ;
    const GGS_controlRegisterBitSliceList_2E_element element (p->mObject.mProperty_mRegisterBitSlice) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSliceList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_controlRegisterBitSliceList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_controlRegisterBitSliceList (in_mRegisterBitSlice COMMA_THERE)) ;
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

class CollectionElementPtr_registerGroupListAST : public CollectionElementPtr {
  public: GGS_registerGroupListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_registerGroupListAST (const GGS_lstring & in_mRegisterGroupName,
                                                     const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_registerGroupListAST (const GGS_registerGroupListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_registerGroupListAST::CollectionElementPtr_registerGroupListAST (const GGS_lstring & in_mRegisterGroupName,
                                                                                      const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRegisterGroupName, in_mControlRegisterGroupKind) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_registerGroupListAST::CollectionElementPtr_registerGroupListAST (const GGS_registerGroupListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRegisterGroupName, inElement.mProperty_mControlRegisterGroupKind) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_registerGroupListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_registerGroupListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_registerGroupListAST (mObject.mProperty_mRegisterGroupName, mObject.mProperty_mControlRegisterGroupKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @registerGroupListAST
//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST::GGS_registerGroupListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST::GGS_registerGroupListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_registerGroupListAST * p = (CollectionElementPtr_registerGroupListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_registerGroupListAST) ;
    const GGS_registerGroupListAST_2E_element element (p->mObject.mProperty_mRegisterGroupName, p->mObject.mProperty_mControlRegisterGroupKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_lstring & in_mRegisterGroupName,
                                                          const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_registerGroupListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_registerGroupListAST (in_mRegisterGroupName, in_mControlRegisterGroupKind COMMA_THERE)) ;
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

AbstractPtrClass * cPtr_controlRegisterGroupDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_controlRegisterGroupDeclarationAST_2E_weak::GGS_controlRegisterGroupDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupDeclarationAST_2E_weak & GGS_controlRegisterGroupDeclarationAST_2E_weak::operator = (const GGS_controlRegisterGroupDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

class CollectionElementPtr_controlRegisterFieldList : public CollectionElementPtr {
  public: GGS_controlRegisterFieldList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_controlRegisterFieldList (const GGS_uint & in_mFieldBitCount,
                                                         const GGS_string & in_mFieldName
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_controlRegisterFieldList (const GGS_controlRegisterFieldList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterFieldList::CollectionElementPtr_controlRegisterFieldList (const GGS_uint & in_mFieldBitCount,
                                                                                              const GGS_string & in_mFieldName
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFieldBitCount, in_mFieldName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterFieldList::CollectionElementPtr_controlRegisterFieldList (const GGS_controlRegisterFieldList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFieldBitCount, inElement.mProperty_mFieldName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_controlRegisterFieldList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_controlRegisterFieldList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_controlRegisterFieldList (mObject.mProperty_mFieldBitCount, mObject.mProperty_mFieldName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterFieldList
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList::GGS_controlRegisterFieldList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList::GGS_controlRegisterFieldList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_controlRegisterFieldList * p = (CollectionElementPtr_controlRegisterFieldList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_controlRegisterFieldList) ;
    const GGS_controlRegisterFieldList_2E_element element (p->mObject.mProperty_mFieldBitCount, p->mObject.mProperty_mFieldName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_uint & in_mFieldBitCount,
                                                              const GGS_string & in_mFieldName
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_controlRegisterFieldList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_controlRegisterFieldList (in_mFieldBitCount, in_mFieldName COMMA_THERE)) ;
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

//--------------------------------------------------------------------------------------------------
//  Enum llvmBinaryOperation
//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation::GGS_llvmBinaryOperation (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_addNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_addNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_subNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_subNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_mulNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_mulNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_udivNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_udivNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_sdivNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_sdivNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_uremNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_uremNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_sremNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_sremNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_uaddOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_uaddOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_saddOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_saddOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_usubOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_usubOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_ssubOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_ssubOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_umulOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_umulOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_smulOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_smulOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_udivOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_udivOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_sdivOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_sdivOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_uremOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_uremOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_sremOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_sremOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_and (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_and ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_ior (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_ior ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_xor (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_xor ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_shl (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_shl ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_ashr (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_ashr ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_lshr (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_lshr ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_eq (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_eq ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_ult (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_ult ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_ule (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_ule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_slt (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_slt ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_sle (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_sle ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmBinaryOperation [29] = {
  "(not built)",
  "addNoOVF",
  "subNoOVF",
  "mulNoOVF",
  "udivNoOVF",
  "sdivNoOVF",
  "uremNoOVF",
  "sremNoOVF",
  "uaddOVF",
  "saddOVF",
  "usubOVF",
  "ssubOVF",
  "umulOVF",
  "smulOVF",
  "udivOVF",
  "sdivOVF",
  "uremOVF",
  "sremOVF",
  "and",
  "ior",
  "xor",
  "shl",
  "ashr",
  "lshr",
  "icmp_eq",
  "icmp_ult",
  "icmp_ule",
  "icmp_slt",
  "icmp_sle"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isAddNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_addNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSubNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_subNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isMulNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mulNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_udivNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sdivNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uremNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sremNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUaddOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uaddOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSaddOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_saddOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUsubOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_usubOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSsubOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ssubOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUmulOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_umulOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSmulOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_smulOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUdivOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_udivOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSdivOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sdivOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUremOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uremOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSremOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sremOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isAnd (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_and == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIor (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ior == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isXor (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_xor == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isShl (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_shl == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isAshr (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ashr == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isLshr (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lshr == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_eq (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_eq == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_ult (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_ult == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_ule (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_ule == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_slt (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_slt == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_sle (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_sle == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmBinaryOperation::description (String & ioString,
                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @llvmBinaryOperation: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmBinaryOperation [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @llvmBinaryOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmBinaryOperation ("llvmBinaryOperation",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmBinaryOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmBinaryOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmBinaryOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmBinaryOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  const GGS_llvmBinaryOperation * p = (const GGS_llvmBinaryOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmBinaryOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmBinaryOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_noteTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  UpEnumerator_controlRegisterDeclarationList enumerator_11436 (temp_0.readProperty_mRegisters ()) ;
  while (enumerator_11436.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_11436.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 297)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 298)), enumerator_11436.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 298)) ;
    }
    enumerator_11436.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_controlRegisterGroupDeclarationAST) ;
    inObject->method_noteTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//  Map type @controlRegisterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap::GGS_controlRegisterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap::~ GGS_controlRegisterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap::GGS_controlRegisterMap (const GGS_controlRegisterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap & GGS_controlRegisterMap::operator = (const GGS_controlRegisterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_controlRegisterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_controlRegisterMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_controlRegisterMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_controlRegisterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::performInsert (const GGS_controlRegisterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>
GGS_controlRegisterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_controlRegisterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>>
GGS_controlRegisterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_controlRegisterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element_3F_ GGS_controlRegisterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_controlRegisterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_controlRegisterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mType = info->mProperty_mType ;
      element.mProperty_mIsReadOnly = info->mProperty_mIsReadOnly ;
      element.mProperty_mUserAccess = info->mProperty_mUserAccess ;
      element.mProperty_mRegisterFieldAccessMap = info->mProperty_mRegisterFieldAccessMap ;
      element.mProperty_mRegisterFieldMap = info->mProperty_mRegisterFieldMap ;
      element.mProperty_mAddressOffset = info->mProperty_mAddressOffset ;
      element.mProperty_mControlRegisterFieldList = info->mProperty_mControlRegisterFieldList ;
      element.mProperty_mRegisterBitCount = info->mProperty_mRegisterBitCount ;
      element.mProperty_mArraySize = info->mProperty_mArraySize ;
      element.mProperty_mElementArraySize = info->mProperty_mElementArraySize ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::class_func_mapWithMapToOverride (const GGS_controlRegisterMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_controlRegisterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_omnibusType inArgument0,
                                               GGS_bool inArgument1,
                                               GGS_bool inArgument2,
                                               GGS_sliceMap inArgument3,
                                               GGS_controlRegisterFieldMap inArgument4,
                                               GGS_bigint inArgument5,
                                               GGS_controlRegisterFieldList inArgument6,
                                               GGS_uint inArgument7,
                                               GGS_uint inArgument8,
                                               GGS_uint inArgument9,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9) ;
  const char * kInsertErrorMessage = "the '%K' control register has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_omnibusType & outArgument0,
                                               GGS_bool & outArgument1,
                                               GGS_bool & outArgument2,
                                               GGS_sliceMap & outArgument3,
                                               GGS_controlRegisterFieldMap & outArgument4,
                                               GGS_bigint & outArgument5,
                                               GGS_controlRegisterFieldList & outArgument6,
                                               GGS_uint & outArgument7,
                                               GGS_uint & outArgument8,
                                               GGS_uint & outArgument9,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' control register is not declared" ;
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
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
  }else{
    outArgument0 = info->mProperty_mType ;
    outArgument1 = info->mProperty_mIsReadOnly ;
    outArgument2 = info->mProperty_mUserAccess ;
    outArgument3 = info->mProperty_mRegisterFieldAccessMap ;
    outArgument4 = info->mProperty_mRegisterFieldMap ;
    outArgument5 = info->mProperty_mAddressOffset ;
    outArgument6 = info->mProperty_mControlRegisterFieldList ;
    outArgument7 = info->mProperty_mRegisterBitCount ;
    outArgument8 = info->mProperty_mArraySize ;
    outArgument9 = info->mProperty_mElementArraySize ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_controlRegisterMap::getter_mTypeForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterMap::getter_mIsReadOnlyForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsReadOnly ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterMap::getter_mUserAccessForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUserAccess ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_sliceMap GGS_controlRegisterMap::getter_mRegisterFieldAccessMapForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_sliceMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterFieldAccessMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap GGS_controlRegisterMap::getter_mRegisterFieldMapForKey (const GGS_string & inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterFieldMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_controlRegisterMap::getter_mAddressOffsetForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAddressOffset ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList GGS_controlRegisterMap::getter_mControlRegisterFieldListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mControlRegisterFieldList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_mRegisterBitCountForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterBitCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_mArraySizeForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mArraySize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_mElementArraySizeForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mElementArraySize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMTypeForKey (GGS_omnibusType inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMIsReadOnlyForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsReadOnly = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMUserAccessForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUserAccess = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMRegisterFieldAccessMapForKey (GGS_sliceMap inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterFieldAccessMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMRegisterFieldMapForKey (GGS_controlRegisterFieldMap inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterFieldMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMAddressOffsetForKey (GGS_bigint inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAddressOffset = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMControlRegisterFieldListForKey (GGS_controlRegisterFieldList inValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mControlRegisterFieldList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMRegisterBitCountForKey (GGS_uint inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterBitCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMArraySizeForKey (GGS_uint inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mArraySize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMElementArraySizeForKey (GGS_uint inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mElementArraySize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_controlRegisterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> & inArray,
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
    ioString.appendString ("mType:") ;
    inArray (i COMMA_HERE)->mProperty_mType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsReadOnly:") ;
    inArray (i COMMA_HERE)->mProperty_mIsReadOnly.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mUserAccess:") ;
    inArray (i COMMA_HERE)->mProperty_mUserAccess.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRegisterFieldAccessMap:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRegisterFieldMap:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterFieldMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAddressOffset:") ;
    inArray (i COMMA_HERE)->mProperty_mAddressOffset.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mControlRegisterFieldList:") ;
    inArray (i COMMA_HERE)->mProperty_mControlRegisterFieldList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRegisterBitCount:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterBitCount.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mArraySize:") ;
    inArray (i COMMA_HERE)->mProperty_mArraySize.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mElementArraySize:") ;
    inArray (i COMMA_HERE)->mProperty_mElementArraySize.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> array = sortedInfoArray () ;
    GGS_controlRegisterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_controlRegisterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_controlRegisterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @controlRegisterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterMap::DownEnumerator_controlRegisterMap (const GGS_controlRegisterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element DownEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsReadOnly ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_controlRegisterMap::current_mUserAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserAccess ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap DownEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterFieldAccessMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap DownEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterFieldMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_controlRegisterMap::current_mAddressOffset (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAddressOffset ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList DownEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControlRegisterFieldList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mElementArraySize ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @controlRegisterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterMap::UpEnumerator_controlRegisterMap (const GGS_controlRegisterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element UpEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsReadOnly ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_controlRegisterMap::current_mUserAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserAccess ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap UpEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterFieldAccessMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap UpEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterFieldMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_controlRegisterMap::current_mAddressOffset (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAddressOffset ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList UpEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControlRegisterFieldList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mElementArraySize ;
}


//--------------------------------------------------------------------------------------------------
//     @controlRegisterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap ("controlRegisterMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_controlRegisterMap result ;
  const GGS_controlRegisterMap * p = (const GGS_controlRegisterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum registerGroupKind
//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind::GGS_registerGroupKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind GGS_registerGroupKind::class_func_single (const GGS_bigint & inAssociatedValue0
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind result ;
  result.mEnum = Enumeration::enum_single ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_registerGroupKind_2E_single (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind GGS_registerGroupKind::class_func_arrayGroup (const GGS_lbigintlist & inAssociatedValue0
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind result ;
  result.mEnum = Enumeration::enum_arrayGroup ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_registerGroupKind_2E_arrayGroup (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::method_extractSingle (GGS_bigint & outAssociatedValue_baseAddress,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_single) {
    outAssociatedValue_baseAddress.drop () ;
    String s ;
    s.appendCString ("method @registerGroupKind.single invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_registerGroupKind_2E_single *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_baseAddress = ptr->mProperty_baseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::method_extractArrayGroup (GGS_lbigintlist & outAssociatedValue_baseAddresses,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayGroup) {
    outAssociatedValue_baseAddresses.drop () ;
    String s ;
    s.appendCString ("method @registerGroupKind.arrayGroup invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_registerGroupKind_2E_arrayGroup *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_baseAddresses = ptr->mProperty_baseAddresses ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_ GGS_registerGroupKind::getter_getSingle (UNUSED_LOCATION_ARGS) const {
  GGS_registerGroupKind_2E_single_3F_ result ;
  if (mEnum == Enumeration::enum_single) {
    const auto ptr = (const GGS_registerGroupKind_2E_single *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_registerGroupKind_2E_single (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::getAssociatedValuesFor_single (GGS_bigint & out_baseAddress) const {
  const auto ptr = (const GGS_registerGroupKind_2E_single *) mAssociatedValues.associatedValuesPointer () ;
  out_baseAddress = ptr->mProperty_baseAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_ GGS_registerGroupKind::getter_getArrayGroup (UNUSED_LOCATION_ARGS) const {
  GGS_registerGroupKind_2E_arrayGroup_3F_ result ;
  if (mEnum == Enumeration::enum_arrayGroup) {
    const auto ptr = (const GGS_registerGroupKind_2E_arrayGroup *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_registerGroupKind_2E_arrayGroup (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::getAssociatedValuesFor_arrayGroup (GGS_lbigintlist & out_baseAddresses) const {
  const auto ptr = (const GGS_registerGroupKind_2E_arrayGroup *) mAssociatedValues.associatedValuesPointer () ;
  out_baseAddresses = ptr->mProperty_baseAddresses ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerGroupKind [3] = {
  "(not built)",
  "single",
  "arrayGroup"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerGroupKind::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_single == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerGroupKind::getter_isArrayGroup (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayGroup == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @registerGroupKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerGroupKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @registerGroupKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind ("registerGroupKind",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind GGS_registerGroupKind::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind result ;
  const GGS_registerGroupKind * p = (const GGS_registerGroupKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @controlRegisterGroupMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap::GGS_controlRegisterGroupMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap::~ GGS_controlRegisterGroupMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap::GGS_controlRegisterGroupMap (const GGS_controlRegisterGroupMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap & GGS_controlRegisterGroupMap::operator = (const GGS_controlRegisterGroupMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterGroupMap::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterGroupMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterGroupMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterGroupMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_controlRegisterGroupMap::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_controlRegisterGroupMap::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterGroupMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_controlRegisterGroupMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::performInsert (const GGS_controlRegisterGroupMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterGroupMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element>
GGS_controlRegisterGroupMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_controlRegisterGroupMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element>>
GGS_controlRegisterGroupMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_controlRegisterGroupMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element_3F_ GGS_controlRegisterGroupMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterGroupMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_controlRegisterGroupMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_controlRegisterGroupMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mGroupKind = info->mProperty_mGroupKind ;
      element.mProperty_mControlRegisterMap = info->mProperty_mControlRegisterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::class_func_mapWithMapToOverride (const GGS_controlRegisterGroupMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_controlRegisterGroupMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_registerGroupKind inArgument0,
                                                    GGS_controlRegisterMap inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' control register group has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::method_searchKey (GGS_lstring inLKey,
                                                    GGS_registerGroupKind & outArgument0,
                                                    GGS_controlRegisterMap & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "** internal error **" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mGroupKind ;
    outArgument1 = info->mProperty_mControlRegisterMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind GGS_controlRegisterGroupMap::getter_mGroupKindForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_registerGroupKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mGroupKind ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterGroupMap::getter_mControlRegisterMapForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mControlRegisterMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::setter_setMGroupKindForKey (GGS_registerGroupKind inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterGroupMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mGroupKind = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::setter_setMControlRegisterMapForKey (GGS_controlRegisterMap inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterGroupMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mControlRegisterMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_controlRegisterGroupMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element>> & inArray,
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
    ioString.appendString ("mGroupKind:") ;
    inArray (i COMMA_HERE)->mProperty_mGroupKind.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mControlRegisterMap:") ;
    inArray (i COMMA_HERE)->mProperty_mControlRegisterMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element>> array = sortedInfoArray () ;
    GGS_controlRegisterGroupMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_controlRegisterGroupMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_controlRegisterGroupMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @controlRegisterGroupMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterGroupMap::DownEnumerator_controlRegisterGroupMap (const GGS_controlRegisterGroupMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element DownEnumerator_controlRegisterGroupMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controlRegisterGroupMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind DownEnumerator_controlRegisterGroupMap::current_mGroupKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGroupKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap DownEnumerator_controlRegisterGroupMap::current_mControlRegisterMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControlRegisterMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @controlRegisterGroupMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterGroupMap::UpEnumerator_controlRegisterGroupMap (const GGS_controlRegisterGroupMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element UpEnumerator_controlRegisterGroupMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controlRegisterGroupMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind UpEnumerator_controlRegisterGroupMap::current_mGroupKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGroupKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap UpEnumerator_controlRegisterGroupMap::current_mControlRegisterMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControlRegisterMap ;
}


//--------------------------------------------------------------------------------------------------
//     @controlRegisterGroupMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap ("controlRegisterGroupMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap result ;
  const GGS_controlRegisterGroupMap * p = (const GGS_controlRegisterGroupMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDecoratedDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDecoratedDeclaration::objectCompare (const GGS_abstractDecoratedDeclaration & inOperand) const {
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

GGS_abstractDecoratedDeclaration::GGS_abstractDecoratedDeclaration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractDecoratedDeclaration::
abstractDecoratedDeclaration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration::GGS_abstractDecoratedDeclaration (const cPtr_abstractDecoratedDeclaration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDecoratedDeclaration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDecoratedDeclaration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractDecoratedDeclaration::cPtr_abstractDecoratedDeclaration (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractDecoratedDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ("abstractDecoratedDeclaration",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDecoratedDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDecoratedDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDecoratedDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration GGS_abstractDecoratedDeclaration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractDecoratedDeclaration result ;
  const GGS_abstractDecoratedDeclaration * p = (const GGS_abstractDecoratedDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDecoratedDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDecoratedDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDecoratedDeclaration_2E_weak::objectCompare (const GGS_abstractDecoratedDeclaration_2E_weak & inOperand) const {
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

GGS_abstractDecoratedDeclaration_2E_weak::GGS_abstractDecoratedDeclaration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration_2E_weak & GGS_abstractDecoratedDeclaration_2E_weak::operator = (const GGS_abstractDecoratedDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration_2E_weak::GGS_abstractDecoratedDeclaration_2E_weak (const GGS_abstractDecoratedDeclaration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration_2E_weak GGS_abstractDecoratedDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractDecoratedDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration GGS_abstractDecoratedDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_abstractDecoratedDeclaration result ;
  if (isValid ()) {
    const cPtr_abstractDecoratedDeclaration * p = (cPtr_abstractDecoratedDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractDecoratedDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration GGS_abstractDecoratedDeclaration_2E_weak::bang_abstractDecoratedDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractDecoratedDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDecoratedDeclaration) ;
      result = GGS_abstractDecoratedDeclaration ((cPtr_abstractDecoratedDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractDecoratedDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak ("abstractDecoratedDeclaration.weak",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDecoratedDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDecoratedDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDecoratedDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration_2E_weak GGS_abstractDecoratedDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractDecoratedDeclaration_2E_weak result ;
  const GGS_abstractDecoratedDeclaration_2E_weak * p = (const GGS_abstractDecoratedDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDecoratedDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDecoratedDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@controlRegisterGroupArrayList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_controlRegisterGroupArrayList : public CollectionElementPtr {
  public: GGS_controlRegisterGroupArrayList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_controlRegisterGroupArrayList (const GGS_lstring & in_mGroupName,
                                                              const GGS_lbigintlist & in_mBaseAddresses
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterGroupArrayList::CollectionElementPtr_controlRegisterGroupArrayList (const GGS_lstring & in_mGroupName,
                                                                                                        const GGS_lbigintlist & in_mBaseAddresses
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mGroupName, in_mBaseAddresses) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controlRegisterGroupArrayList::CollectionElementPtr_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mGroupName, inElement.mProperty_mBaseAddresses) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_controlRegisterGroupArrayList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_controlRegisterGroupArrayList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_controlRegisterGroupArrayList (mObject.mProperty_mGroupName, mObject.mProperty_mBaseAddresses COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterGroupArrayList
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList::GGS_controlRegisterGroupArrayList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList::GGS_controlRegisterGroupArrayList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_controlRegisterGroupArrayList * p = (CollectionElementPtr_controlRegisterGroupArrayList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_controlRegisterGroupArrayList) ;
    const GGS_controlRegisterGroupArrayList_2E_element element (p->mObject.mProperty_mGroupName, p->mObject.mProperty_mBaseAddresses) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mGroupName,
                                                                   const GGS_lbigintlist & in_mBaseAddresses
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_controlRegisterGroupArrayList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_controlRegisterGroupArrayList (in_mGroupName, in_mBaseAddresses COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterGroupArrayList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_controlRegisterGroupArrayList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::description (String & ioString,
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
      ioString.appendString ("mGroupName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBaseAddresses:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBaseAddresses.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupArrayList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::plusPlusAssignOperation (const GGS_controlRegisterGroupArrayList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_lbigintlist & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupArrayList_2E_element element (inOperand0, inOperand1) ;
  GGS_controlRegisterGroupArrayList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_lbigintlist & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupArrayList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_lbigintlist inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupArrayList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_lbigintlist inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupArrayList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_controlRegisterGroupArrayList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_lbigintlist & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGroupName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBaseAddresses ;
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

void GGS_controlRegisterGroupArrayList::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_lbigintlist & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBaseAddresses ;
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

void GGS_controlRegisterGroupArrayList::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_lbigintlist & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBaseAddresses ;
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

void GGS_controlRegisterGroupArrayList::method_first (GGS_lstring & outOperand0,
                                                      GGS_lbigintlist & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBaseAddresses ;
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

void GGS_controlRegisterGroupArrayList::method_last (GGS_lstring & outOperand0,
                                                     GGS_lbigintlist & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBaseAddresses ;
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

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::add_operation (const GGS_controlRegisterGroupArrayList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
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

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
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

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::plusAssignOperation (const GGS_controlRegisterGroupArrayList inList,
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

void GGS_controlRegisterGroupArrayList::setter_setMGroupNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName = inOperand ;
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
  
GGS_lstring GGS_controlRegisterGroupArrayList::getter_mGroupNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName ;
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

void GGS_controlRegisterGroupArrayList::setter_setMBaseAddressesAtIndex (GGS_lbigintlist inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBaseAddresses = inOperand ;
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
  
GGS_lbigintlist GGS_controlRegisterGroupArrayList::getter_mBaseAddressesAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lbigintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBaseAddresses ;
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
// Down Enumerator for @controlRegisterGroupArrayList
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterGroupArrayList::DownEnumerator_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element DownEnumerator_controlRegisterGroupArrayList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controlRegisterGroupArrayList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist DownEnumerator_controlRegisterGroupArrayList::current_mBaseAddresses (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBaseAddresses ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterGroupArrayList
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterGroupArrayList::UpEnumerator_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element UpEnumerator_controlRegisterGroupArrayList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controlRegisterGroupArrayList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist UpEnumerator_controlRegisterGroupArrayList::current_mBaseAddresses (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBaseAddresses ;
}




//--------------------------------------------------------------------------------------------------
//     @controlRegisterGroupArrayList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ("controlRegisterGroupArrayList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupArrayList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupArrayList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupArrayList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupArrayList result ;
  const GGS_controlRegisterGroupArrayList * p = (const GGS_controlRegisterGroupArrayList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupArrayList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@controlRegisterByAddress' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_controlRegisterByAddress (const GGS_controlRegisterByAddress_2E_element & inLeft,
                                                           const GGS_controlRegisterByAddress_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mAddress.objectCompare (inRight.mProperty_mAddress) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress::GGS_controlRegisterByAddress (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterByAddress::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::plusPlusAssignOperation (const GGS_controlRegisterByAddress_2E_element & inElement
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_controlRegisterByAddress) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress GGS_controlRegisterByAddress::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByAddress result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress GGS_controlRegisterByAddress::class_func_sortedListWithValue (const GGS_bigint & inOperand0,
                                                                                           const GGS_string & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByAddress result = init (nullptr COMMA_THERE) ;
  const GGS_controlRegisterByAddress_2E_element newElement (inOperand0, inOperand1) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::addAssignOperation (const GGS_bigint & inOperand0,
                                                       const GGS_string & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterByAddress_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::setter_insert (const GGS_bigint inOperand0,
                                                  const GGS_string inOperand1,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterByAddress_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::plusAssignOperation (const GGS_controlRegisterByAddress inSortedList,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_controlRegisterByAddress) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::setter_popSmallest (GGS_bigint & outOperand0,
                                                       GGS_string & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mHTML ;
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

void GGS_controlRegisterByAddress::setter_popGreatest (GGS_bigint & outOperand0,
                                                       GGS_string & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mHTML ;
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

void GGS_controlRegisterByAddress::method_smallest (GGS_bigint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mHTML ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::method_greatest (GGS_bigint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mHTML ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @controlRegisterByAddress
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterByAddress::DownEnumerator_controlRegisterByAddress (const GGS_controlRegisterByAddress & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element DownEnumerator_controlRegisterByAddress::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_controlRegisterByAddress::current_mAddress (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_controlRegisterByAddress::current_mHTML (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mHTML ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterByAddress
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterByAddress::UpEnumerator_controlRegisterByAddress (const GGS_controlRegisterByAddress & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element UpEnumerator_controlRegisterByAddress::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_controlRegisterByAddress::current_mAddress (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_controlRegisterByAddress::current_mHTML (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mHTML ;
}



//--------------------------------------------------------------------------------------------------
//     @controlRegisterByAddress generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByAddress ("controlRegisterByAddress",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterByAddress::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByAddress ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterByAddress::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterByAddress (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress GGS_controlRegisterByAddress::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByAddress result ;
  const GGS_controlRegisterByAddress * p = (const GGS_controlRegisterByAddress *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterByAddress *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByAddress", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@controlRegisterByName' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_controlRegisterByName (const GGS_controlRegisterByName_2E_element & inLeft,
                                                        const GGS_controlRegisterByName_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mName.objectCompare (inRight.mProperty_mName) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName::GGS_controlRegisterByName (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterByName::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::plusPlusAssignOperation (const GGS_controlRegisterByName_2E_element & inElement
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_controlRegisterByName) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName GGS_controlRegisterByName::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByName result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName GGS_controlRegisterByName::class_func_sortedListWithValue (const GGS_bigint & inOperand0,
                                                                                     const GGS_string & inOperand1,
                                                                                     const GGS_string & inOperand2
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByName result = init (nullptr COMMA_THERE) ;
  const GGS_controlRegisterByName_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::addAssignOperation (const GGS_bigint & inOperand0,
                                                    const GGS_string & inOperand1,
                                                    const GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterByName_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::setter_insert (const GGS_bigint inOperand0,
                                               const GGS_string inOperand1,
                                               const GGS_string inOperand2,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterByName_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::plusAssignOperation (const GGS_controlRegisterByName inSortedList,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_controlRegisterByName) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::setter_popSmallest (GGS_bigint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mHTML ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mName ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::setter_popGreatest (GGS_bigint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mHTML ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mName ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::method_smallest (GGS_bigint & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_string & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mHTML ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mName ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::method_greatest (GGS_bigint & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_string & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mHTML ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mName ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @controlRegisterByName
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterByName::DownEnumerator_controlRegisterByName (const GGS_controlRegisterByName & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element DownEnumerator_controlRegisterByName::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_controlRegisterByName::current_mAddress (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_controlRegisterByName::current_mHTML (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mHTML ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_controlRegisterByName::current_mName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterByName
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterByName::UpEnumerator_controlRegisterByName (const GGS_controlRegisterByName & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element UpEnumerator_controlRegisterByName::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_controlRegisterByName::current_mAddress (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_controlRegisterByName::current_mHTML (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mHTML ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_controlRegisterByName::current_mName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mName ;
}



//--------------------------------------------------------------------------------------------------
//     @controlRegisterByName generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByName ("controlRegisterByName",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterByName::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByName ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterByName::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterByName (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName GGS_controlRegisterByName::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByName result ;
  const GGS_controlRegisterByName * p = (const GGS_controlRegisterByName *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterByName *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByName", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInstructionWithAssignmentAST_2E_weak::objectCompare (const GGS_varInstructionWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_varInstructionWithAssignmentAST_2E_weak::GGS_varInstructionWithAssignmentAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST_2E_weak & GGS_varInstructionWithAssignmentAST_2E_weak::operator = (const GGS_varInstructionWithAssignmentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST_2E_weak::GGS_varInstructionWithAssignmentAST_2E_weak (const GGS_varInstructionWithAssignmentAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST_2E_weak GGS_varInstructionWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_varInstructionWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST GGS_varInstructionWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_varInstructionWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_varInstructionWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST GGS_varInstructionWithAssignmentAST_2E_weak::bang_varInstructionWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_varInstructionWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInstructionWithAssignmentAST) ;
      result = GGS_varInstructionWithAssignmentAST ((cPtr_varInstructionWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @varInstructionWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2E_weak ("varInstructionWithAssignmentAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInstructionWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInstructionWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInstructionWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST_2E_weak GGS_varInstructionWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_varInstructionWithAssignmentAST_2E_weak result ;
  const GGS_varInstructionWithAssignmentAST_2E_weak * p = (const GGS_varInstructionWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInstructionWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varDeclarationInstructionAST_2E_weak::objectCompare (const GGS_varDeclarationInstructionAST_2E_weak & inOperand) const {
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

GGS_varDeclarationInstructionAST_2E_weak::GGS_varDeclarationInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST_2E_weak & GGS_varDeclarationInstructionAST_2E_weak::operator = (const GGS_varDeclarationInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST_2E_weak::GGS_varDeclarationInstructionAST_2E_weak (const GGS_varDeclarationInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST_2E_weak GGS_varDeclarationInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_varDeclarationInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST GGS_varDeclarationInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_varDeclarationInstructionAST result ;
  if (isValid ()) {
    const cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_varDeclarationInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST GGS_varDeclarationInstructionAST_2E_weak::bang_varDeclarationInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_varDeclarationInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varDeclarationInstructionAST) ;
      result = GGS_varDeclarationInstructionAST ((cPtr_varDeclarationInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @varDeclarationInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2E_weak ("varDeclarationInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varDeclarationInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varDeclarationInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varDeclarationInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST_2E_weak GGS_varDeclarationInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_varDeclarationInstructionAST_2E_weak result ;
  const GGS_varDeclarationInstructionAST_2E_weak * p = (const GGS_varDeclarationInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varDeclarationInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varDeclarationInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum effectiveArgumentPassingModeAST
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST::GGS_effectiveArgumentPassingModeAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentPassingModeAST::class_func_input (const GGS_lstring & inAssociatedValue0
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_input ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_effectiveArgumentPassingModeAST_2E_input (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentPassingModeAST::class_func_inputWithType (const GGS_bool & inAssociatedValue0,
                                                                                                   const GGS_lstring & inAssociatedValue1,
                                                                                                   const GGS_lstring & inAssociatedValue2
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_inputWithType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_effectiveArgumentPassingModeAST_2E_inputWithType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentPassingModeAST::class_func_output (const GGS_expressionAST & inAssociatedValue0,
                                                                                            const GGS_location & inAssociatedValue1
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_output ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_effectiveArgumentPassingModeAST_2E_output (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentPassingModeAST::class_func_outputInput (const GGS_lstring & inAssociatedValue0
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_outputInput ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_effectiveArgumentPassingModeAST_2E_outputInput (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentPassingModeAST::class_func_outputInputSelfVariable (const GGS_lstring & inAssociatedValue0
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_outputInputSelfVariable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::method_extractInput (GGS_lstring & outAssociatedValue_name,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_input) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.input invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_effectiveArgumentPassingModeAST_2E_input *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::method_extractInputWithType (GGS_bool & outAssociatedValue_constant,
                                                                       GGS_lstring & outAssociatedValue_typeName,
                                                                       GGS_lstring & outAssociatedValue_name,
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
    const auto ptr = (GGS_effectiveArgumentPassingModeAST_2E_inputWithType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_constant = ptr->mProperty_constant ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::method_extractOutput (GGS_expressionAST & outAssociatedValue_exp,
                                                                GGS_location & outAssociatedValue_endOfExp,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_output) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.output invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_effectiveArgumentPassingModeAST_2E_output *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::method_extractOutputInput (GGS_lstring & outAssociatedValue_name,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_outputInput) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.outputInput invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_effectiveArgumentPassingModeAST_2E_outputInput *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::method_extractOutputInputSelfVariable (GGS_lstring & outAssociatedValue_name,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_outputInputSelfVariable) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @effectiveArgumentPassingModeAST.outputInputSelfVariable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_input_3F_ GGS_effectiveArgumentPassingModeAST::getter_getInput (UNUSED_LOCATION_ARGS) const {
  GGS_effectiveArgumentPassingModeAST_2E_input_3F_ result ;
  if (mEnum == Enumeration::enum_input) {
    const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_input *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_effectiveArgumentPassingModeAST_2E_input (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_input (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_input *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ GGS_effectiveArgumentPassingModeAST::getter_getInputWithType (UNUSED_LOCATION_ARGS) const {
  GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ result ;
  if (mEnum == Enumeration::enum_inputWithType) {
    const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_effectiveArgumentPassingModeAST_2E_inputWithType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_inputWithType (GGS_bool & out_constant,
                                                                                GGS_lstring & out_typeName,
                                                                                GGS_lstring & out_name) const {
  const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType *) mAssociatedValues.associatedValuesPointer () ;
  out_constant = ptr->mProperty_constant ;
  out_typeName = ptr->mProperty_typeName ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_output_3F_ GGS_effectiveArgumentPassingModeAST::getter_getOutput (UNUSED_LOCATION_ARGS) const {
  GGS_effectiveArgumentPassingModeAST_2E_output_3F_ result ;
  if (mEnum == Enumeration::enum_output) {
    const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_output *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_effectiveArgumentPassingModeAST_2E_output (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_output (GGS_expressionAST & out_exp,
                                                                         GGS_location & out_endOfExp) const {
  const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_output *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ GGS_effectiveArgumentPassingModeAST::getter_getOutputInput (UNUSED_LOCATION_ARGS) const {
  GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ result ;
  if (mEnum == Enumeration::enum_outputInput) {
    const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_outputInput *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_effectiveArgumentPassingModeAST_2E_outputInput (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_outputInput (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_outputInput *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ GGS_effectiveArgumentPassingModeAST::getter_getOutputInputSelfVariable (UNUSED_LOCATION_ARGS) const {
  GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ result ;
  if (mEnum == Enumeration::enum_outputInputSelfVariable) {
    const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::getAssociatedValuesFor_outputInputSelfVariable (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable *) mAssociatedValues.associatedValuesPointer () ;
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

GGS_bool GGS_effectiveArgumentPassingModeAST::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_input == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_effectiveArgumentPassingModeAST::getter_isInputWithType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_inputWithType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_effectiveArgumentPassingModeAST::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_output == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_effectiveArgumentPassingModeAST::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_outputInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_effectiveArgumentPassingModeAST::getter_isOutputInputSelfVariable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_outputInputSelfVariable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentPassingModeAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @effectiveArgumentPassingModeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_effectiveArgumentPassingModeAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @effectiveArgumentPassingModeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ("effectiveArgumentPassingModeAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentPassingModeAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentPassingModeAST result ;
  const GGS_effectiveArgumentPassingModeAST * p = (const GGS_effectiveArgumentPassingModeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@effectiveArgumentPassingModeAST matchingFormalArgument'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_matchingFormalArgument (const GGS_effectiveArgumentPassingModeAST & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
    {
      GGS_lstring extractedValue_850__0 ;
      temp_0.getAssociatedValuesFor_input (extractedValue_850__0) ;
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
    {
      GGS_bool extractedValue_890__0 ;
      GGS_lstring extractedValue_892__1 ;
      GGS_lstring extractedValue_894__2 ;
      temp_0.getAssociatedValuesFor_inputWithType (extractedValue_890__0, extractedValue_892__1, extractedValue_894__2) ;
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
    {
      GGS_expressionAST extractedValue_927__0 ;
      GGS_location extractedValue_929__1 ;
      temp_0.getAssociatedValuesFor_output (extractedValue_927__0, extractedValue_929__1) ;
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
    {
      GGS_lstring extractedValue_967__0 ;
      temp_0.getAssociatedValuesFor_outputInput (extractedValue_967__0) ;
      result_result = GGS_string ("\?!") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
    {
      GGS_lstring extractedValue_1018__0 ;
      temp_0.getAssociatedValuesFor_outputInputSelfVariable (extractedValue_1018__0) ;
      result_result = GGS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//Class for element of '@effectiveArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_effectiveArgumentListAST : public CollectionElementPtr {
  public: GGS_effectiveArgumentListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_effectiveArgumentListAST (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                         const GGS_lstring & in_mSelector
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_effectiveArgumentListAST (const GGS_effectiveArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_effectiveArgumentListAST::CollectionElementPtr_effectiveArgumentListAST (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                              const GGS_lstring & in_mSelector
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mEffectiveParameterKind, in_mSelector) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_effectiveArgumentListAST::CollectionElementPtr_effectiveArgumentListAST (const GGS_effectiveArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mEffectiveParameterKind, inElement.mProperty_mSelector) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_effectiveArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_effectiveArgumentListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_effectiveArgumentListAST (mObject.mProperty_mEffectiveParameterKind, mObject.mProperty_mSelector COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @effectiveArgumentListAST
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST::GGS_effectiveArgumentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST::GGS_effectiveArgumentListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_effectiveArgumentListAST * p = (CollectionElementPtr_effectiveArgumentListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_effectiveArgumentListAST) ;
    const GGS_effectiveArgumentListAST_2E_element element (p->mObject.mProperty_mEffectiveParameterKind, p->mObject.mProperty_mSelector) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                              const GGS_lstring & in_mSelector
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_effectiveArgumentListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_effectiveArgumentListAST (in_mEffectiveParameterKind, in_mSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_effectiveArgumentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_effectiveArgumentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::description (String & ioString,
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
      ioString.appendString ("mEffectiveParameterKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEffectiveParameterKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelector.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::plusPlusAssignOperation (const GGS_effectiveArgumentListAST_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::class_func_listWithValue (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                     const GGS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_effectiveArgumentListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_effectiveArgumentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::addAssignOperation (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                       const GGS_lstring & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  const GGS_effectiveArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_append (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_effectiveArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_insertAtIndex (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_effectiveArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_effectiveArgumentListAST::setter_removeAtIndex (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSelector ;
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

void GGS_effectiveArgumentListAST::setter_popFirst (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
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

void GGS_effectiveArgumentListAST::setter_popLast (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
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

void GGS_effectiveArgumentListAST::method_first (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
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

void GGS_effectiveArgumentListAST::method_last (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                GGS_lstring & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEffectiveParameterKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
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

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::add_operation (const GGS_effectiveArgumentListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
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

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
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

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::plusAssignOperation (const GGS_effectiveArgumentListAST inList,
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

void GGS_effectiveArgumentListAST::setter_setMEffectiveParameterKindAtIndex (GGS_effectiveArgumentPassingModeAST inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEffectiveParameterKind = inOperand ;
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
  
GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentListAST::getter_mEffectiveParameterKindAtIndex (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentPassingModeAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEffectiveParameterKind ;
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

void GGS_effectiveArgumentListAST::setter_setMSelectorAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_effectiveArgumentListAST::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
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
// Down Enumerator for @effectiveArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_effectiveArgumentListAST::DownEnumerator_effectiveArgumentListAST (const GGS_effectiveArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element DownEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST DownEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEffectiveParameterKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @effectiveArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_effectiveArgumentListAST::UpEnumerator_effectiveArgumentListAST (const GGS_effectiveArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element UpEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST UpEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEffectiveParameterKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}




//--------------------------------------------------------------------------------------------------
//     @effectiveArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST ("effectiveArgumentListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_effectiveArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_effectiveArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_effectiveArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST result ;
  const GGS_effectiveArgumentListAST * p = (const GGS_effectiveArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_effectiveArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@effectiveArgumentListAST mangledName'
//--------------------------------------------------------------------------------------------------

GGS_lstring extensionGetter_mangledName (const GGS_effectiveArgumentListAST & inObject,
                                         const GGS_string & constinArgument_inReceiverTypeName,
                                         const GGS_lstring & constinArgument_inFunctionName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1596 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_1596.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 40)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 40)) ;
    }
  }
  var_s_1596.plusAssignOperation(constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 42)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 42)) ;
  const GGS_effectiveArgumentListAST temp_1 = inObject ;
  UpEnumerator_effectiveArgumentListAST enumerator_1749 (temp_1) ;
  while (enumerator_1749.hasCurrentObject ()) {
    var_s_1596.plusAssignOperation(extensionGetter_matchingFormalArgument (enumerator_1749.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 44)).add_operation (enumerator_1749.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 44)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 44)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 44)) ;
    enumerator_1749.gotoNextObject () ;
  }
  var_s_1596.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 46)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1596, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@compileTimeInfixOperatorEnumeration string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_compileTimeInfixOperatorEnumeration & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_compileTimeInfixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_equal:
    {
      result_result = GGS_string ("==") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_lessThan:
    {
      result_result = GGS_string ("<") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseAndOp:
    {
      result_result = GGS_string ("&") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseOrOp:
    {
      result_result = GGS_string ("|") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseXorOp:
    {
      result_result = GGS_string ("^") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_addOp:
    {
      result_result = GGS_string ("+") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_subOp:
    {
      result_result = GGS_string ("-") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_mulOp:
    {
      result_result = GGS_string ("*") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divOp:
    {
      result_result = GGS_string ("/") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divNoOvf:
    {
      result_result = GGS_string ("!&") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_modOp:
    {
      result_result = GGS_string ("%") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_moduloNoOvf:
    {
      result_result = GGS_string ("!%") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_leftShift:
    {
      result_result = GGS_string ("<<") ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_rightShift:
    {
      result_result = GGS_string (">>") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@compileTimeInfixOperatorEnumeration omnibusInfixOperator'
//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator extensionGetter_omnibusInfixOperator (const GGS_compileTimeInfixOperatorEnumeration & inObject,
                                                               Compiler *
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result_result ; // Returned variable
  const GGS_compileTimeInfixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_equal:
    {
      result_result = GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas3", 50)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_lessThan:
    {
      result_result = GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas3", 51)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseAndOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 52)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseOrOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 53)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseXorOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 54)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_addOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 55)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_subOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 56)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_mulOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 57)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 58)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divNoOvf:
    {
      result_result = GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas3", 59)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_modOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 60)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_moduloNoOvf:
    {
      result_result = GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas3", 61)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_leftShift:
    {
      result_result = GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 62)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_rightShift:
    {
      result_result = GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 63)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixOperatorAST_2E_weak::objectCompare (const GGS_compileTimeInfixOperatorAST_2E_weak & inOperand) const {
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

GGS_compileTimeInfixOperatorAST_2E_weak::GGS_compileTimeInfixOperatorAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST_2E_weak & GGS_compileTimeInfixOperatorAST_2E_weak::operator = (const GGS_compileTimeInfixOperatorAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST_2E_weak::GGS_compileTimeInfixOperatorAST_2E_weak (const GGS_compileTimeInfixOperatorAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST_2E_weak GGS_compileTimeInfixOperatorAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST GGS_compileTimeInfixOperatorAST_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeInfixOperatorAST result ;
  if (isValid ()) {
    const cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeInfixOperatorAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST GGS_compileTimeInfixOperatorAST_2E_weak::bang_compileTimeInfixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeInfixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeInfixOperatorAST) ;
      result = GGS_compileTimeInfixOperatorAST ((cPtr_compileTimeInfixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeInfixOperatorAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST_2E_weak ("compileTimeInfixOperatorAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeInfixOperatorAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixOperatorAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixOperatorAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST_2E_weak GGS_compileTimeInfixOperatorAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorAST_2E_weak result ;
  const GGS_compileTimeInfixOperatorAST_2E_weak * p = (const GGS_compileTimeInfixOperatorAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixOperatorAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixOperatorUsage_2E_weak::objectCompare (const GGS_compileTimeInfixOperatorUsage_2E_weak & inOperand) const {
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

GGS_compileTimeInfixOperatorUsage_2E_weak::GGS_compileTimeInfixOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage_2E_weak & GGS_compileTimeInfixOperatorUsage_2E_weak::operator = (const GGS_compileTimeInfixOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage_2E_weak::GGS_compileTimeInfixOperatorUsage_2E_weak (const GGS_compileTimeInfixOperatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage_2E_weak GGS_compileTimeInfixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeInfixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeInfixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixOperatorUsage_2E_weak::bang_compileTimeInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeInfixOperatorUsage) ;
      result = GGS_compileTimeInfixOperatorUsage ((cPtr_compileTimeInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeInfixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2E_weak ("compileTimeInfixOperatorUsage.weak",
                                                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage_2E_weak GGS_compileTimeInfixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorUsage_2E_weak result ;
  const GGS_compileTimeInfixOperatorUsage_2E_weak * p = (const GGS_compileTimeInfixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::objectCompare (const GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak & inOperand) const {
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

GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak & GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::operator = (const GGS_compileTimeInfixInfEqualOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak (const GGS_compileTimeInfixInfEqualOperatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeInfixInfEqualOperatorUsage result ;
  if (isValid ()) {
    const cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeInfixInfEqualOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::bang_compileTimeInfixInfEqualOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeInfixInfEqualOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
      result = GGS_compileTimeInfixInfEqualOperatorUsage ((cPtr_compileTimeInfixInfEqualOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeInfixInfEqualOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2E_weak ("compileTimeInfixInfEqualOperatorUsage.weak",
                                                                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak result ;
  const GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak * p = (const GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixInfEqualOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeDynamicArrayDeclarationAST_2E_weak::objectCompare (const GGS_typeDynamicArrayDeclarationAST_2E_weak & inOperand) const {
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

GGS_typeDynamicArrayDeclarationAST_2E_weak::GGS_typeDynamicArrayDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak & GGS_typeDynamicArrayDeclarationAST_2E_weak::operator = (const GGS_typeDynamicArrayDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_dynArrayRemoveAllFunctionIR_2E_weak::GGS_dynArrayRemoveAllFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak & GGS_dynArrayRemoveAllFunctionIR_2E_weak::operator = (const GGS_dynArrayRemoveAllFunctionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_dynArrayLengthFunctionIR_2E_weak::GGS_dynArrayLengthFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak & GGS_dynArrayLengthFunctionIR_2E_weak::operator = (const GGS_dynArrayLengthFunctionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_dynArrayAppendFunctionIR_2E_weak::GGS_dynArrayAppendFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR_2E_weak & GGS_dynArrayAppendFunctionIR_2E_weak::operator = (const GGS_dynArrayAppendFunctionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_dynArrayInsertFunctionIR_2E_weak::GGS_dynArrayInsertFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR_2E_weak & GGS_dynArrayInsertFunctionIR_2E_weak::operator = (const GGS_dynArrayInsertFunctionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_dynamicArrayTypeAssignUsage_2E_weak::GGS_dynamicArrayTypeAssignUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage_2E_weak & GGS_dynamicArrayTypeAssignUsage_2E_weak::operator = (const GGS_dynamicArrayTypeAssignUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak::operator = (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//Class for element of '@sliceAssignmentListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_sliceAssignmentListAST : public CollectionElementPtr {
  public: GGS_sliceAssignmentListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_sliceAssignmentListAST (const GGS_lstring & in_mSliceWidth,
                                                       const GGS_sliceTargetAST & in_mSliceKind
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_sliceAssignmentListAST (const GGS_sliceAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_sliceAssignmentListAST::CollectionElementPtr_sliceAssignmentListAST (const GGS_lstring & in_mSliceWidth,
                                                                                          const GGS_sliceTargetAST & in_mSliceKind
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSliceWidth, in_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_sliceAssignmentListAST::CollectionElementPtr_sliceAssignmentListAST (const GGS_sliceAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSliceWidth, inElement.mProperty_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_sliceAssignmentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_sliceAssignmentListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_sliceAssignmentListAST (mObject.mProperty_mSliceWidth, mObject.mProperty_mSliceKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @sliceAssignmentListAST
//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST::GGS_sliceAssignmentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST::GGS_sliceAssignmentListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_sliceAssignmentListAST * p = (CollectionElementPtr_sliceAssignmentListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_sliceAssignmentListAST) ;
    const GGS_sliceAssignmentListAST_2E_element element (p->mObject.mProperty_mSliceWidth, p->mObject.mProperty_mSliceKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_lstring & in_mSliceWidth,
                                                            const GGS_sliceTargetAST & in_mSliceKind
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_sliceAssignmentListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_sliceAssignmentListAST (in_mSliceWidth, in_mSliceKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sliceAssignmentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_sliceAssignmentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::description (String & ioString,
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
      ioString.appendString ("mSliceWidth:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSliceWidth.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSliceKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSliceKind.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceAssignmentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::plusPlusAssignOperation (const GGS_sliceAssignmentListAST_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_sliceTargetAST & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_sliceAssignmentListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_sliceAssignmentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_sliceTargetAST & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_sliceAssignmentListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_append (const GGS_lstring inOperand0,
                                                const GGS_sliceTargetAST inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_sliceAssignmentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_sliceTargetAST inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_sliceAssignmentListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_sliceAssignmentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_sliceTargetAST & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSliceKind ;
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

void GGS_sliceAssignmentListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_sliceTargetAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSliceKind ;
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

void GGS_sliceAssignmentListAST::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_sliceTargetAST & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSliceKind ;
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

void GGS_sliceAssignmentListAST::method_first (GGS_lstring & outOperand0,
                                               GGS_sliceTargetAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSliceKind ;
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

void GGS_sliceAssignmentListAST::method_last (GGS_lstring & outOperand0,
                                              GGS_sliceTargetAST & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSliceKind ;
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

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::add_operation (const GGS_sliceAssignmentListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
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

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
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

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_sliceAssignmentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::plusAssignOperation (const GGS_sliceAssignmentListAST inList,
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

void GGS_sliceAssignmentListAST::setter_setMSliceWidthAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceWidth = inOperand ;
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
  
GGS_lstring GGS_sliceAssignmentListAST::getter_mSliceWidthAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceWidth ;
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

void GGS_sliceAssignmentListAST::setter_setMSliceKindAtIndex (GGS_sliceTargetAST inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceKind = inOperand ;
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
  
GGS_sliceTargetAST GGS_sliceAssignmentListAST::getter_mSliceKindAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_sliceTargetAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceKind ;
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
// Down Enumerator for @sliceAssignmentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_sliceAssignmentListAST::DownEnumerator_sliceAssignmentListAST (const GGS_sliceAssignmentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element DownEnumerator_sliceAssignmentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_sliceAssignmentListAST::current_mSliceWidth (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST DownEnumerator_sliceAssignmentListAST::current_mSliceKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceKind ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sliceAssignmentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_sliceAssignmentListAST::UpEnumerator_sliceAssignmentListAST (const GGS_sliceAssignmentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST_2E_element UpEnumerator_sliceAssignmentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_sliceAssignmentListAST::current_mSliceWidth (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST UpEnumerator_sliceAssignmentListAST::current_mSliceKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceKind ;
}




//--------------------------------------------------------------------------------------------------
//     @sliceAssignmentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST ("sliceAssignmentListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceAssignmentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentListAST result ;
  const GGS_sliceAssignmentListAST * p = (const GGS_sliceAssignmentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceAssignmentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sliceAssignmentInstructionAST_2E_weak::objectCompare (const GGS_sliceAssignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_sliceAssignmentInstructionAST_2E_weak::GGS_sliceAssignmentInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST_2E_weak & GGS_sliceAssignmentInstructionAST_2E_weak::operator = (const GGS_sliceAssignmentInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum sliceTargetAST
//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST::GGS_sliceTargetAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::class_func_discarded (UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_discarded ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::class_func_varDeclaration (const GGS_lstring & inAssociatedValue0
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_varDeclaration ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_sliceTargetAST_2E_varDeclaration (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::class_func_letDeclaration (const GGS_lstring & inAssociatedValue0
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_letDeclaration ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_sliceTargetAST_2E_letDeclaration (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::class_func_lValue (const GGS_LValueAST & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  result.mEnum = Enumeration::enum_lValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_sliceTargetAST_2E_lValue (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::method_extractVarDeclaration (GGS_lstring & outAssociatedValue_varName,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_varDeclaration) {
    outAssociatedValue_varName.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.varDeclaration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_sliceTargetAST_2E_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_varName = ptr->mProperty_varName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::method_extractLetDeclaration (GGS_lstring & outAssociatedValue_letName,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letDeclaration) {
    outAssociatedValue_letName.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.letDeclaration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_sliceTargetAST_2E_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_letName = ptr->mProperty_letName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::method_extractLValue (GGS_LValueAST & outAssociatedValue_target,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_lValue) {
    outAssociatedValue_target.drop () ;
    String s ;
    s.appendCString ("method @sliceTargetAST.lValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_sliceTargetAST_2E_lValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_target = ptr->mProperty_target ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_varDeclaration_3F_ GGS_sliceTargetAST::getter_getVarDeclaration (UNUSED_LOCATION_ARGS) const {
  GGS_sliceTargetAST_2E_varDeclaration_3F_ result ;
  if (mEnum == Enumeration::enum_varDeclaration) {
    const auto ptr = (const GGS_sliceTargetAST_2E_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_sliceTargetAST_2E_varDeclaration (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::getAssociatedValuesFor_varDeclaration (GGS_lstring & out_varName) const {
  const auto ptr = (const GGS_sliceTargetAST_2E_varDeclaration *) mAssociatedValues.associatedValuesPointer () ;
  out_varName = ptr->mProperty_varName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_letDeclaration_3F_ GGS_sliceTargetAST::getter_getLetDeclaration (UNUSED_LOCATION_ARGS) const {
  GGS_sliceTargetAST_2E_letDeclaration_3F_ result ;
  if (mEnum == Enumeration::enum_letDeclaration) {
    const auto ptr = (const GGS_sliceTargetAST_2E_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_sliceTargetAST_2E_letDeclaration (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::getAssociatedValuesFor_letDeclaration (GGS_lstring & out_letName) const {
  const auto ptr = (const GGS_sliceTargetAST_2E_letDeclaration *) mAssociatedValues.associatedValuesPointer () ;
  out_letName = ptr->mProperty_letName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST_2E_lValue_3F_ GGS_sliceTargetAST::getter_getLValue (UNUSED_LOCATION_ARGS) const {
  GGS_sliceTargetAST_2E_lValue_3F_ result ;
  if (mEnum == Enumeration::enum_lValue) {
    const auto ptr = (const GGS_sliceTargetAST_2E_lValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_sliceTargetAST_2E_lValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::getAssociatedValuesFor_lValue (GGS_LValueAST & out_target) const {
  const auto ptr = (const GGS_sliceTargetAST_2E_lValue *) mAssociatedValues.associatedValuesPointer () ;
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

GGS_bool GGS_sliceTargetAST::getter_isDiscarded (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_discarded == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sliceTargetAST::getter_isVarDeclaration (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_varDeclaration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sliceTargetAST::getter_isLetDeclaration (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letDeclaration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sliceTargetAST::getter_isLValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceTargetAST::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @sliceTargetAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_sliceTargetAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @sliceTargetAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST ("sliceTargetAST",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceTargetAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceTargetAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceTargetAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceTargetAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceTargetAST GGS_sliceTargetAST::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_sliceTargetAST result ;
  const GGS_sliceTargetAST * p = (const GGS_sliceTargetAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceTargetAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceTargetAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typedConstantCallAST_2E_weak::objectCompare (const GGS_typedConstantCallAST_2E_weak & inOperand) const {
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

GGS_typedConstantCallAST_2E_weak::GGS_typedConstantCallAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak & GGS_typedConstantCallAST_2E_weak::operator = (const GGS_typedConstantCallAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak::GGS_typedConstantCallAST_2E_weak (const GGS_typedConstantCallAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak GGS_typedConstantCallAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typedConstantCallAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST_2E_weak::unwrappedValue (void) const {
  GGS_typedConstantCallAST result ;
  if (isValid ()) {
    const cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typedConstantCallAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST_2E_weak::bang_typedConstantCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typedConstantCallAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typedConstantCallAST) ;
      result = GGS_typedConstantCallAST ((cPtr_typedConstantCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typedConstantCallAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedConstantCallAST_2E_weak ("typedConstantCallAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typedConstantCallAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typedConstantCallAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typedConstantCallAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak GGS_typedConstantCallAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typedConstantCallAST_2E_weak result ;
  const GGS_typedConstantCallAST_2E_weak * p = (const GGS_typedConstantCallAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typedConstantCallAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCallAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@registerIntegerFieldListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_registerIntegerFieldListAST : public CollectionElementPtr {
  public: GGS_registerIntegerFieldListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_registerIntegerFieldListAST (const GGS_lstring & in_mFieldName,
                                                            const GGS_expressionAST & in_mExpression,
                                                            const GGS_location & in_mExpressionLocation
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_registerIntegerFieldListAST (const GGS_registerIntegerFieldListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_registerIntegerFieldListAST::CollectionElementPtr_registerIntegerFieldListAST (const GGS_lstring & in_mFieldName,
                                                                                                    const GGS_expressionAST & in_mExpression,
                                                                                                    const GGS_location & in_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFieldName, in_mExpression, in_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_registerIntegerFieldListAST::CollectionElementPtr_registerIntegerFieldListAST (const GGS_registerIntegerFieldListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFieldName, inElement.mProperty_mExpression, inElement.mProperty_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_registerIntegerFieldListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_registerIntegerFieldListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_registerIntegerFieldListAST (mObject.mProperty_mFieldName, mObject.mProperty_mExpression, mObject.mProperty_mExpressionLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @registerIntegerFieldListAST
//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST::GGS_registerIntegerFieldListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST::GGS_registerIntegerFieldListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_registerIntegerFieldListAST * p = (CollectionElementPtr_registerIntegerFieldListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_registerIntegerFieldListAST) ;
    const GGS_registerIntegerFieldListAST_2E_element element (p->mObject.mProperty_mFieldName, p->mObject.mProperty_mExpression, p->mObject.mProperty_mExpressionLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mFieldName,
                                                                 const GGS_expressionAST & in_mExpression,
                                                                 const GGS_location & in_mExpressionLocation
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_registerIntegerFieldListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_registerIntegerFieldListAST (in_mFieldName, in_mExpression, in_mExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerIntegerFieldListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_registerIntegerFieldListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST::description (String & ioString,
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
      ioString.appendString ("mFieldName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFieldName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpressionLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpressionLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerIntegerFieldListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST::plusPlusAssignOperation (const GGS_registerIntegerFieldListAST_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_expressionAST & inOperand1,
                                                                                           const GGS_location & inOperand2
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_registerIntegerFieldListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_registerIntegerFieldListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_expressionAST & inOperand1,
                                                          const GGS_location & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  const GGS_registerIntegerFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_expressionAST inOperand1,
                                                     const GGS_location inOperand2,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_registerIntegerFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_expressionAST inOperand1,
                                                            const GGS_location inOperand2,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_registerIntegerFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_registerIntegerFieldListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_expressionAST & outOperand1,
                                                            GGS_location & outOperand2,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFieldName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mExpressionLocation ;
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

void GGS_registerIntegerFieldListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_expressionAST & outOperand1,
                                                       GGS_location & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFieldName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mExpressionLocation ;
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

void GGS_registerIntegerFieldListAST::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_expressionAST & outOperand1,
                                                      GGS_location & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFieldName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mExpressionLocation ;
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

void GGS_registerIntegerFieldListAST::method_first (GGS_lstring & outOperand0,
                                                    GGS_expressionAST & outOperand1,
                                                    GGS_location & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFieldName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mExpressionLocation ;
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

void GGS_registerIntegerFieldListAST::method_last (GGS_lstring & outOperand0,
                                                   GGS_expressionAST & outOperand1,
                                                   GGS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFieldName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mExpressionLocation ;
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

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::add_operation (const GGS_registerIntegerFieldListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_registerIntegerFieldListAST result ;
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

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_registerIntegerFieldListAST result ;
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

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_registerIntegerFieldListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_registerIntegerFieldListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_registerIntegerFieldListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST::plusAssignOperation (const GGS_registerIntegerFieldListAST inList,
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

void GGS_registerIntegerFieldListAST::setter_setMFieldNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_registerIntegerFieldListAST::getter_mFieldNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
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

void GGS_registerIntegerFieldListAST::setter_setMExpressionAtIndex (GGS_expressionAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
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
  
GGS_expressionAST GGS_registerIntegerFieldListAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_expressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
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

void GGS_registerIntegerFieldListAST::setter_setMExpressionLocationAtIndex (GGS_location inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpressionLocation = inOperand ;
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
  
GGS_location GGS_registerIntegerFieldListAST::getter_mExpressionLocationAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpressionLocation ;
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
// Down Enumerator for @registerIntegerFieldListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_registerIntegerFieldListAST::DownEnumerator_registerIntegerFieldListAST (const GGS_registerIntegerFieldListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element DownEnumerator_registerIntegerFieldListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_registerIntegerFieldListAST::current_mFieldName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_registerIntegerFieldListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_registerIntegerFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpressionLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @registerIntegerFieldListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_registerIntegerFieldListAST::UpEnumerator_registerIntegerFieldListAST (const GGS_registerIntegerFieldListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST_2E_element UpEnumerator_registerIntegerFieldListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_registerIntegerFieldListAST::current_mFieldName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_registerIntegerFieldListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_registerIntegerFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpressionLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @registerIntegerFieldListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST ("registerIntegerFieldListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerIntegerFieldListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerIntegerFieldListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerIntegerFieldListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_registerIntegerFieldListAST result ;
  const GGS_registerIntegerFieldListAST * p = (const GGS_registerIntegerFieldListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerIntegerFieldListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerConstantExpressionAST_2E_weak::objectCompare (const GGS_registerConstantExpressionAST_2E_weak & inOperand) const {
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

GGS_registerConstantExpressionAST_2E_weak::GGS_registerConstantExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST_2E_weak & GGS_registerConstantExpressionAST_2E_weak::operator = (const GGS_registerConstantExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST_2E_weak::GGS_registerConstantExpressionAST_2E_weak (const GGS_registerConstantExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST_2E_weak GGS_registerConstantExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_registerConstantExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST GGS_registerConstantExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_registerConstantExpressionAST result ;
  if (isValid ()) {
    const cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_registerConstantExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST GGS_registerConstantExpressionAST_2E_weak::bang_registerConstantExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_registerConstantExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_registerConstantExpressionAST) ;
      result = GGS_registerConstantExpressionAST ((cPtr_registerConstantExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @registerConstantExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST_2E_weak ("registerConstantExpressionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerConstantExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerConstantExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerConstantExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST_2E_weak GGS_registerConstantExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_registerConstantExpressionAST_2E_weak result ;
  const GGS_registerConstantExpressionAST_2E_weak * p = (const GGS_registerConstantExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerConstantExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum prefixOperator
//--------------------------------------------------------------------------------------------------

GGS_prefixOperator::GGS_prefixOperator (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefixOperator GGS_prefixOperator::class_func_notOp (UNUSED_LOCATION_ARGS) {
  GGS_prefixOperator result ;
  result.mEnum = Enumeration::enum_notOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperator GGS_prefixOperator::class_func_minusOp (UNUSED_LOCATION_ARGS) {
  GGS_prefixOperator result ;
  result.mEnum = Enumeration::enum_minusOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperator GGS_prefixOperator::class_func_bitWiseComplement (UNUSED_LOCATION_ARGS) {
  GGS_prefixOperator result ;
  result.mEnum = Enumeration::enum_bitWiseComplement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperator GGS_prefixOperator::class_func_minusNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_prefixOperator result ;
  result.mEnum = Enumeration::enum_minusNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_prefixOperator [5] = {
  "(not built)",
  "notOp",
  "minusOp",
  "bitWiseComplement",
  "minusNoOvf"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_prefixOperator::getter_isNotOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_prefixOperator::getter_isMinusOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_prefixOperator::getter_isBitWiseComplement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseComplement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_prefixOperator::getter_isMinusNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperator::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @prefixOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_prefixOperator [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @prefixOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperator ("prefixOperator",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperator GGS_prefixOperator::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_prefixOperator result ;
  const GGS_prefixOperator * p = (const GGS_prefixOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefixOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorExpressionAST::objectCompare (const GGS_prefixOperatorExpressionAST & inOperand) const {
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

GGS_prefixOperatorExpressionAST::GGS_prefixOperatorExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_prefixOperatorExpressionAST GGS_prefixOperatorExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_prefixOperator & in_mOp,
                  const GGS_expressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_prefixOperatorExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_prefixOperatorExpressionAST (inCompiler COMMA_THERE)) ;
  object->prefixOperatorExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mOp, in_mExpression, inCompiler) ;
  const GGS_prefixOperatorExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::
prefixOperatorExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                              const GGS_prefixOperator & in_mOp,
                                              const GGS_expressionAST & in_mExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mOp = in_mOp ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST::GGS_prefixOperatorExpressionAST (const cPtr_prefixOperatorExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_prefixOperatorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorExpressionAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperator GGS_prefixOperatorExpressionAST::readProperty_mOp (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_prefixOperator () ;
  }else{
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    return p->mProperty_mOp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorExpressionAST::setProperty_mOp (const GGS_prefixOperator & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_prefixOperatorExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorExpressionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorExpressionAST::cPtr_prefixOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mOp (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorExpressionAST::cPtr_prefixOperatorExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                    const GGS_prefixOperator & in_mOp,
                                                                    const GGS_expressionAST & in_mExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mOp (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mOp = in_mOp ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_prefixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

void cPtr_prefixOperatorExpressionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@prefixOperatorExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOp.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_prefixOperatorExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefixOperatorExpressionAST (mProperty_mOperatorLocation, mProperty_mOp, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mOp.printNonNullClassInstanceProperties ("mOp") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @prefixOperatorExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ("prefixOperatorExpressionAST",
                                                                                & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST GGS_prefixOperatorExpressionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorExpressionAST result ;
  const GGS_prefixOperatorExpressionAST * p = (const GGS_prefixOperatorExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorExpressionAST_2E_weak::objectCompare (const GGS_prefixOperatorExpressionAST_2E_weak & inOperand) const {
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

GGS_prefixOperatorExpressionAST_2E_weak::GGS_prefixOperatorExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST_2E_weak & GGS_prefixOperatorExpressionAST_2E_weak::operator = (const GGS_prefixOperatorExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST_2E_weak::GGS_prefixOperatorExpressionAST_2E_weak (const GGS_prefixOperatorExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST_2E_weak GGS_prefixOperatorExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefixOperatorExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST GGS_prefixOperatorExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_prefixOperatorExpressionAST result ;
  if (isValid ()) {
    const cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_prefixOperatorExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST GGS_prefixOperatorExpressionAST_2E_weak::bang_prefixOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorExpressionAST) ;
      result = GGS_prefixOperatorExpressionAST ((cPtr_prefixOperatorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @prefixOperatorExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST_2E_weak ("prefixOperatorExpressionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST_2E_weak GGS_prefixOperatorExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorExpressionAST_2E_weak result ;
  const GGS_prefixOperatorExpressionAST_2E_weak * p = (const GGS_prefixOperatorExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@taskSetupListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_taskSetupListAST : public CollectionElementPtr {
  public: GGS_taskSetupListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_taskSetupListAST (const GGS_lstring & in_mName,
                                                 const GGS_lstringlist & in_mDependanceList
                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_taskSetupListAST (const GGS_taskSetupListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_taskSetupListAST::CollectionElementPtr_taskSetupListAST (const GGS_lstring & in_mName,
                                                                              const GGS_lstringlist & in_mDependanceList
                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mName, in_mDependanceList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_taskSetupListAST::CollectionElementPtr_taskSetupListAST (const GGS_taskSetupListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mDependanceList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_taskSetupListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_taskSetupListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_taskSetupListAST (mObject.mProperty_mName, mObject.mProperty_mDependanceList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @taskSetupListAST
//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST::GGS_taskSetupListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST::GGS_taskSetupListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_taskSetupListAST * p = (CollectionElementPtr_taskSetupListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_taskSetupListAST) ;
    const GGS_taskSetupListAST_2E_element element (p->mObject.mProperty_mName, p->mObject.mProperty_mDependanceList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                      const GGS_lstring & in_mName,
                                                      const GGS_lstringlist & in_mDependanceList
                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_taskSetupListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_taskSetupListAST (in_mName, in_mDependanceList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskSetupListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_taskSetupListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::description (String & ioString,
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
      ioString.appendString ("mName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDependanceList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDependanceList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSetupListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::plusPlusAssignOperation (const GGS_taskSetupListAST_2E_element & inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                     const GGS_lstringlist & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_taskSetupListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_taskSetupListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                               const GGS_lstringlist & inOperand1
                                               COMMA_LOCATION_ARGS) {
  const GGS_taskSetupListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::setter_append (const GGS_lstring inOperand0,
                                          const GGS_lstringlist inOperand1,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  const GGS_taskSetupListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                 const GGS_lstringlist inOperand1,
                                                 const GGS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_taskSetupListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_taskSetupListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                 GGS_lstringlist & outOperand1,
                                                 const GGS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mDependanceList ;
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

void GGS_taskSetupListAST::setter_popFirst (GGS_lstring & outOperand0,
                                            GGS_lstringlist & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDependanceList ;
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

void GGS_taskSetupListAST::setter_popLast (GGS_lstring & outOperand0,
                                           GGS_lstringlist & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDependanceList ;
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

void GGS_taskSetupListAST::method_first (GGS_lstring & outOperand0,
                                         GGS_lstringlist & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDependanceList ;
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

void GGS_taskSetupListAST::method_last (GGS_lstring & outOperand0,
                                        GGS_lstringlist & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDependanceList ;
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

GGS_taskSetupListAST GGS_taskSetupListAST::add_operation (const GGS_taskSetupListAST & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
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

GGS_taskSetupListAST GGS_taskSetupListAST::subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
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

GGS_taskSetupListAST GGS_taskSetupListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::plusAssignOperation (const GGS_taskSetupListAST inList,
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

void GGS_taskSetupListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mName = inOperand ;
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
  
GGS_lstring GGS_taskSetupListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mName ;
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

void GGS_taskSetupListAST::setter_setMDependanceListAtIndex (GGS_lstringlist inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDependanceList = inOperand ;
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
  
GGS_lstringlist GGS_taskSetupListAST::getter_mDependanceListAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDependanceList ;
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
// Down Enumerator for @taskSetupListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskSetupListAST::DownEnumerator_taskSetupListAST (const GGS_taskSetupListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element DownEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_taskSetupListAST::current_mName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_taskSetupListAST::current_mDependanceList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependanceList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @taskSetupListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskSetupListAST::UpEnumerator_taskSetupListAST (const GGS_taskSetupListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element UpEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_taskSetupListAST::current_mName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_taskSetupListAST::current_mDependanceList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependanceList ;
}




//--------------------------------------------------------------------------------------------------
//     @taskSetupListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupListAST ("taskSetupListAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskSetupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSetupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSetupListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_taskSetupListAST result ;
  const GGS_taskSetupListAST * p = (const GGS_taskSetupListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSetupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syncInstructionBranchListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_syncInstructionBranchListAST : public CollectionElementPtr {
  public: GGS_syncInstructionBranchListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_syncInstructionBranchListAST (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                             const GGS_instructionListAST & in_mInstructionList,
                                                             const GGS_location & in_mEndOfBranch
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syncInstructionBranchListAST::CollectionElementPtr_syncInstructionBranchListAST (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                                                                      const GGS_instructionListAST & in_mInstructionList,
                                                                                                      const GGS_location & in_mEndOfBranch
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syncInstructionBranchListAST::CollectionElementPtr_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mGuardedCommand, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_syncInstructionBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_syncInstructionBranchListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_syncInstructionBranchListAST (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syncInstructionBranchListAST
//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST::GGS_syncInstructionBranchListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST::GGS_syncInstructionBranchListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_syncInstructionBranchListAST * p = (CollectionElementPtr_syncInstructionBranchListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_syncInstructionBranchListAST) ;
    const GGS_syncInstructionBranchListAST_2E_element element (p->mObject.mProperty_mGuardedCommand, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfBranch) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_guardedCommandAST & in_mGuardedCommand,
                                                                  const GGS_instructionListAST & in_mInstructionList,
                                                                  const GGS_location & in_mEndOfBranch
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_syncInstructionBranchListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_syncInstructionBranchListAST (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syncInstructionBranchListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syncInstructionBranchListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::description (String & ioString,
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
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfBranch:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfBranch.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syncInstructionBranchListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::plusPlusAssignOperation (const GGS_syncInstructionBranchListAST_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::class_func_listWithValue (const GGS_guardedCommandAST & inOperand0,
                                                                                             const GGS_instructionListAST & inOperand1,
                                                                                             const GGS_location & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_syncInstructionBranchListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_syncInstructionBranchListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::addAssignOperation (const GGS_guardedCommandAST & inOperand0,
                                                           const GGS_instructionListAST & inOperand1,
                                                           const GGS_location & inOperand2
                                                           COMMA_LOCATION_ARGS) {
  const GGS_syncInstructionBranchListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::setter_append (const GGS_guardedCommandAST inOperand0,
                                                      const GGS_instructionListAST inOperand1,
                                                      const GGS_location inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_syncInstructionBranchListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::setter_insertAtIndex (const GGS_guardedCommandAST inOperand0,
                                                             const GGS_instructionListAST inOperand1,
                                                             const GGS_location inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_syncInstructionBranchListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_syncInstructionBranchListAST::setter_removeAtIndex (GGS_guardedCommandAST & outOperand0,
                                                             GGS_instructionListAST & outOperand1,
                                                             GGS_location & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfBranch ;
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

void GGS_syncInstructionBranchListAST::setter_popFirst (GGS_guardedCommandAST & outOperand0,
                                                        GGS_instructionListAST & outOperand1,
                                                        GGS_location & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfBranch ;
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

void GGS_syncInstructionBranchListAST::setter_popLast (GGS_guardedCommandAST & outOperand0,
                                                       GGS_instructionListAST & outOperand1,
                                                       GGS_location & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfBranch ;
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

void GGS_syncInstructionBranchListAST::method_first (GGS_guardedCommandAST & outOperand0,
                                                     GGS_instructionListAST & outOperand1,
                                                     GGS_location & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfBranch ;
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

void GGS_syncInstructionBranchListAST::method_last (GGS_guardedCommandAST & outOperand0,
                                                    GGS_instructionListAST & outOperand1,
                                                    GGS_location & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGuardedCommand ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfBranch ;
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

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::add_operation (const GGS_syncInstructionBranchListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result ;
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

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result ;
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

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::plusAssignOperation (const GGS_syncInstructionBranchListAST inList,
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

void GGS_syncInstructionBranchListAST::setter_setMGuardedCommandAtIndex (GGS_guardedCommandAST inOperand,
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
  
GGS_guardedCommandAST GGS_syncInstructionBranchListAST::getter_mGuardedCommandAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandAST result ;
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

void GGS_syncInstructionBranchListAST::setter_setMInstructionListAtIndex (GGS_instructionListAST inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
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
  
GGS_instructionListAST GGS_syncInstructionBranchListAST::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
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

void GGS_syncInstructionBranchListAST::setter_setMEndOfBranchAtIndex (GGS_location inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfBranch = inOperand ;
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
  
GGS_location GGS_syncInstructionBranchListAST::getter_mEndOfBranchAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfBranch ;
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
// Down Enumerator for @syncInstructionBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_syncInstructionBranchListAST::DownEnumerator_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element DownEnumerator_syncInstructionBranchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST DownEnumerator_syncInstructionBranchListAST::current_mGuardedCommand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST DownEnumerator_syncInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_syncInstructionBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfBranch ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syncInstructionBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_syncInstructionBranchListAST::UpEnumerator_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element UpEnumerator_syncInstructionBranchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST UpEnumerator_syncInstructionBranchListAST::current_mGuardedCommand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST UpEnumerator_syncInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_syncInstructionBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfBranch ;
}




//--------------------------------------------------------------------------------------------------
//     @syncInstructionBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST ("syncInstructionBranchListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_syncInstructionBranchListAST result ;
  const GGS_syncInstructionBranchListAST * p = (const GGS_syncInstructionBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const GGS_taskListAST inObject,
                                                 GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskListAST temp_0 = inObject ;
  UpEnumerator_taskListAST enumerator_5017 (temp_0) ;
  while (enumerator_5017.hasCurrentObject ()) {
    UpEnumerator_syncInstructionBranchListAST enumerator_5057 (enumerator_5017.current_mGuardedCommandList (HERE)) ;
    while (enumerator_5057.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5057.current (HERE).readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 148)) ;
      enumerator_5057.gotoNextObject () ;
    }
    enumerator_5017.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Map type @taskMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_taskMap::GGS_taskMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap::~ GGS_taskMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap::GGS_taskMap (const GGS_taskMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap & GGS_taskMap::operator = (const GGS_taskMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_taskMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMap::getter_hasKey (const GGS_string & inKey
                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                            const GGS_uint & inLevel
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_taskMap::getter_locationForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_taskMap::getter_keyList (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_taskMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_taskMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::performInsert (const GGS_taskMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_taskMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element>
GGS_taskMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_taskMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element>>
GGS_taskMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_taskMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element_3F_ GGS_taskMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_taskMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_taskMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mTaskType = info->mProperty_mTaskType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::class_func_mapWithMapToOverride (const GGS_taskMap & inMapToOverride
                                                          COMMA_LOCATION_ARGS) {
  GGS_taskMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_taskMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::getter_overriddenMap (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_taskMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::setter_insertKey (GGS_lstring inLKey,
                                    GGS_omnibusType inArgument0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  const GGS_taskMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' task is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::method_searchKey (GGS_lstring inLKey,
                                    GGS_omnibusType & outArgument0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' task" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mTaskType ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_taskMap::getter_mTaskTypeForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTaskType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMap::setter_setMTaskTypeForKey (GGS_omnibusType inValue,
                                             GGS_string inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTaskType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_taskMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element>> & inArray,
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
    ioString.appendString ("mTaskType:") ;
    inArray (i COMMA_HERE)->mProperty_mTaskType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMap_2E_element>> array = sortedInfoArray () ;
    GGS_taskMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_taskMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_taskMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @taskMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskMap::DownEnumerator_taskMap (const GGS_taskMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element DownEnumerator_taskMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_taskMap::current_mTaskType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @taskMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskMap::UpEnumerator_taskMap (const GGS_taskMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element UpEnumerator_taskMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_taskMap::current_mTaskType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskType ;
}


//--------------------------------------------------------------------------------------------------
//     @taskMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMap ("taskMap",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_taskMap result ;
  const GGS_taskMap * p = (const GGS_taskMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

