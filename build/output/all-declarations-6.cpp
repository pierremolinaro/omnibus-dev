#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_instructionNOP_2E_weak::objectCompare (const GGS_instructionNOP_2E_weak & inOperand) const {
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

GGS_instructionNOP_2E_weak::GGS_instructionNOP_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionNOP_2E_weak & GGS_instructionNOP_2E_weak::operator = (const GGS_instructionNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionNOP_2E_weak::GGS_instructionNOP_2E_weak (const GGS_instructionNOP & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_instructionNOP_2E_weak GGS_instructionNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_instructionNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionNOP GGS_instructionNOP_2E_weak::bang_instructionNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_instructionNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_instructionNOP) ;
      result = GGS_instructionNOP ((cPtr_instructionNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instructionNOP.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP_2E_weak ("instructionNOP.weak",
                                                                              & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_instructionNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionNOP_2E_weak GGS_instructionNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_instructionNOP_2E_weak result ;
  const GGS_instructionNOP_2E_weak * p = (const GGS_instructionNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_panicInstructionAST::objectCompare (const GGS_panicInstructionAST & inOperand) const {
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

GGS_panicInstructionAST::GGS_panicInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_panicInstructionAST GGS_panicInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_expressionAST & in_mCodeExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionAST (inCompiler COMMA_THERE)) ;
  object->panicInstructionAST_init_21__21_ (in_mInstructionLocation, in_mCodeExpression, inCompiler) ;
  const GGS_panicInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::
panicInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_expressionAST & in_mCodeExpression,
                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCodeExpression = in_mCodeExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST::GGS_panicInstructionAST (const cPtr_panicInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST GGS_panicInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_expressionAST & in_mCodeExpression
                                                                 COMMA_LOCATION_ARGS) {
  GGS_panicInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_panicInstructionAST (in_mInstructionLocation, in_mCodeExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_panicInstructionAST::readProperty_mCodeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    return p->mProperty_mCodeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicInstructionAST::setProperty_mCodeExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    p->mProperty_mCodeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_expressionAST & in_mCodeExpression
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

const C_galgas_type_descriptor * GGS_panicInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST GGS_panicInstructionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_panicInstructionAST result ;
  const GGS_panicInstructionAST * p = (const GGS_panicInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicInstructionAST_2E_weak::objectCompare (const GGS_panicInstructionAST_2E_weak & inOperand) const {
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

GGS_panicInstructionAST_2E_weak::GGS_panicInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak & GGS_panicInstructionAST_2E_weak::operator = (const GGS_panicInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak::GGS_panicInstructionAST_2E_weak (const GGS_panicInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak GGS_panicInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_panicInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST GGS_panicInstructionAST_2E_weak::bang_panicInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_panicInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicInstructionAST) ;
      result = GGS_panicInstructionAST ((cPtr_panicInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST_2E_weak ("panicInstructionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_panicInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak GGS_panicInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_panicInstructionAST_2E_weak result ;
  const GGS_panicInstructionAST_2E_weak * p = (const GGS_panicInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_panicInstructionIR::objectCompare (const GGS_panicInstructionIR & inOperand) const {
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

GGS_panicInstructionIR::GGS_panicInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_panicInstructionIR GGS_panicInstructionIR::
init_21__21_ (const GGS_location & in_mThrowLocation,
              const GGS_bigint & in_mPanicCode,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionIR (inCompiler COMMA_THERE)) ;
  object->panicInstructionIR_init_21__21_ (in_mThrowLocation, in_mPanicCode, inCompiler) ;
  const GGS_panicInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::
panicInstructionIR_init_21__21_ (const GGS_location & in_mThrowLocation,
                                 const GGS_bigint & in_mPanicCode,
                                 Compiler * /* inCompiler */) {
  mProperty_mThrowLocation = in_mThrowLocation ;
  mProperty_mPanicCode = in_mPanicCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR::GGS_panicInstructionIR (const cPtr_panicInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR GGS_panicInstructionIR::class_func_new (const GGS_location & in_mThrowLocation,
                                                               const GGS_bigint & in_mPanicCode
                                                               COMMA_LOCATION_ARGS) {
  GGS_panicInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_panicInstructionIR (in_mThrowLocation, in_mPanicCode COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_panicInstructionIR::readProperty_mThrowLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    return p->mProperty_mThrowLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicInstructionIR::setProperty_mThrowLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mThrowLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_panicInstructionIR::readProperty_mPanicCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    return p->mProperty_mPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicInstructionIR::setProperty_mPanicCode (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mPanicCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GGS_location & in_mThrowLocation,
                                                  const GGS_bigint & in_mPanicCode
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

const C_galgas_type_descriptor * GGS_panicInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR GGS_panicInstructionIR::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_panicInstructionIR result ;
  const GGS_panicInstructionIR * p = (const GGS_panicInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicInstructionIR_2E_weak::objectCompare (const GGS_panicInstructionIR_2E_weak & inOperand) const {
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

GGS_panicInstructionIR_2E_weak::GGS_panicInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak & GGS_panicInstructionIR_2E_weak::operator = (const GGS_panicInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak::GGS_panicInstructionIR_2E_weak (const GGS_panicInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak GGS_panicInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_panicInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR GGS_panicInstructionIR_2E_weak::bang_panicInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_panicInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicInstructionIR) ;
      result = GGS_panicInstructionIR ((cPtr_panicInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicInstructionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR_2E_weak ("panicInstructionIR.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_panicInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak GGS_panicInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_panicInstructionIR_2E_weak result ;
  const GGS_panicInstructionIR_2E_weak * p = (const GGS_panicInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_ifInstructionAST::objectCompare (const GGS_ifInstructionAST & inOperand) const {
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

GGS_ifInstructionAST::GGS_ifInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_expressionAST & in_mTestExpression,
                                          const GGS_location & in_mTestExpressionEndLocation,
                                          const GGS_bool & in_mStaticIfExpression,
                                          const GGS_instructionListAST & in_mThenInstructionList,
                                          const GGS_location & in_mEndOfThenInstructionList,
                                          const GGS_instructionListAST & in_mElseInstructionList,
                                          const GGS_location & in_mEndOfElseInstructionList,
                                          const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionAST (inCompiler COMMA_THERE)) ;
  object->ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mTestExpression, in_mTestExpressionEndLocation, in_mStaticIfExpression, in_mThenInstructionList, in_mEndOfThenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, in_mEndOf_5F_if_5F_instruction, inCompiler) ;
  const GGS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::
ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                           const GGS_expressionAST & in_mTestExpression,
                                                           const GGS_location & in_mTestExpressionEndLocation,
                                                           const GGS_bool & in_mStaticIfExpression,
                                                           const GGS_instructionListAST & in_mThenInstructionList,
                                                           const GGS_location & in_mEndOfThenInstructionList,
                                                           const GGS_instructionListAST & in_mElseInstructionList,
                                                           const GGS_location & in_mEndOfElseInstructionList,
                                                           const GGS_location & in_mEndOf_5F_if_5F_instruction,
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

GGS_ifInstructionAST::GGS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                           const GGS_expressionAST & in_mTestExpression,
                                                           const GGS_location & in_mTestExpressionEndLocation,
                                                           const GGS_bool & in_mStaticIfExpression,
                                                           const GGS_instructionListAST & in_mThenInstructionList,
                                                           const GGS_location & in_mEndOfThenInstructionList,
                                                           const GGS_instructionListAST & in_mElseInstructionList,
                                                           const GGS_location & in_mEndOfElseInstructionList,
                                                           const GGS_location & in_mEndOf_5F_if_5F_instruction
                                                           COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (in_mInstructionLocation, in_mTestExpression, in_mTestExpressionEndLocation, in_mStaticIfExpression, in_mThenInstructionList, in_mEndOfThenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, in_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_ifInstructionAST::readProperty_mTestExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mTestExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mTestExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mTestExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mTestExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mTestExpressionEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifInstructionAST::readProperty_mStaticIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mStaticIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mStaticIfExpression (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mStaticIfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_ifInstructionAST::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mThenInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOfThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOfThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mEndOfThenInstructionList (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_ifInstructionAST::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mElseInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOfElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOfElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mEndOfElseInstructionList (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mEndOf_5F_if_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOf_5F_if_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_expressionAST & in_mTestExpression,
                                              const GGS_location & in_mTestExpressionEndLocation,
                                              const GGS_bool & in_mStaticIfExpression,
                                              const GGS_instructionListAST & in_mThenInstructionList,
                                              const GGS_location & in_mEndOfThenInstructionList,
                                              const GGS_instructionListAST & in_mElseInstructionList,
                                              const GGS_location & in_mEndOfElseInstructionList,
                                              const GGS_location & in_mEndOf_5F_if_5F_instruction
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

const C_galgas_type_descriptor * GGS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST result ;
  const GGS_ifInstructionAST * p = (const GGS_ifInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionAST_2E_weak::objectCompare (const GGS_ifInstructionAST_2E_weak & inOperand) const {
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

GGS_ifInstructionAST_2E_weak::GGS_ifInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak & GGS_ifInstructionAST_2E_weak::operator = (const GGS_ifInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak::GGS_ifInstructionAST_2E_weak (const GGS_ifInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak GGS_ifInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST_2E_weak::bang_ifInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionAST) ;
      result = GGS_ifInstructionAST ((cPtr_ifInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ("ifInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak GGS_ifInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST_2E_weak result ;
  const GGS_ifInstructionAST_2E_weak * p = (const GGS_ifInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_ifInstructionIR::objectCompare (const GGS_ifInstructionIR & inOperand) const {
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

GGS_ifInstructionIR::GGS_ifInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionIR GGS_ifInstructionIR::
init_21__21__21__21_ (const GGS_string & in_mLLVMTestName,
                      const GGS_location & in_mLocation,
                      const GGS_instructionListIR & in_mThenInstructionGenerationList,
                      const GGS_instructionListIR & in_mElseInstructionGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionIR (inCompiler COMMA_THERE)) ;
  object->ifInstructionIR_init_21__21__21__21_ (in_mLLVMTestName, in_mLocation, in_mThenInstructionGenerationList, in_mElseInstructionGenerationList, inCompiler) ;
  const GGS_ifInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::
ifInstructionIR_init_21__21__21__21_ (const GGS_string & in_mLLVMTestName,
                                      const GGS_location & in_mLocation,
                                      const GGS_instructionListIR & in_mThenInstructionGenerationList,
                                      const GGS_instructionListIR & in_mElseInstructionGenerationList,
                                      Compiler * /* inCompiler */) {
  mProperty_mLLVMTestName = in_mLLVMTestName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mThenInstructionGenerationList = in_mThenInstructionGenerationList ;
  mProperty_mElseInstructionGenerationList = in_mElseInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR::GGS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR GGS_ifInstructionIR::class_func_new (const GGS_string & in_mLLVMTestName,
                                                         const GGS_location & in_mLocation,
                                                         const GGS_instructionListIR & in_mThenInstructionGenerationList,
                                                         const GGS_instructionListIR & in_mElseInstructionGenerationList
                                                         COMMA_LOCATION_ARGS) {
  GGS_ifInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionIR (in_mLLVMTestName, in_mLocation, in_mThenInstructionGenerationList, in_mElseInstructionGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_ifInstructionIR::readProperty_mLLVMTestName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mLLVMTestName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionIR::setProperty_mLLVMTestName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLLVMTestName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_ifInstructionIR::readProperty_mThenInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mThenInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionIR::setProperty_mThenInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mThenInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_ifInstructionIR::readProperty_mElseInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mElseInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionIR::setProperty_mElseInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mElseInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionIR::cPtr_ifInstructionIR (const GGS_string & in_mLLVMTestName,
                                            const GGS_location & in_mLocation,
                                            const GGS_instructionListIR & in_mThenInstructionGenerationList,
                                            const GGS_instructionListIR & in_mElseInstructionGenerationList
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

const C_galgas_type_descriptor * GGS_ifInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR GGS_ifInstructionIR::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_ifInstructionIR result ;
  const GGS_ifInstructionIR * p = (const GGS_ifInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionIR_2E_weak::objectCompare (const GGS_ifInstructionIR_2E_weak & inOperand) const {
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

GGS_ifInstructionIR_2E_weak::GGS_ifInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak & GGS_ifInstructionIR_2E_weak::operator = (const GGS_ifInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak::GGS_ifInstructionIR_2E_weak (const GGS_ifInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak GGS_ifInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR GGS_ifInstructionIR_2E_weak::bang_ifInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionIR) ;
      result = GGS_ifInstructionIR ((cPtr_ifInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR_2E_weak ("ifInstructionIR.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak GGS_ifInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ifInstructionIR_2E_weak result ;
  const GGS_ifInstructionIR_2E_weak * p = (const GGS_ifInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//
//     @guardedCommandAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST ("guardedCommandAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardedCommandAST::staticTypeDescriptor (void) const {
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

GGS_syncInstructionAST GGS_syncInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                               const GGS_syncInstructionBranchListAST & in_mBranchList,
                                                               const GGS_location & in_mEndOf_5F_on_5F_instruction
                                                               COMMA_LOCATION_ARGS) {
  GGS_syncInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncInstructionAST (in_mInstructionLocation, in_mBranchList, in_mEndOf_5F_on_5F_instruction COMMA_THERE)) ;
  return result ;
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

cPtr_syncInstructionAST::cPtr_syncInstructionAST (const GGS_location & in_mInstructionLocation,
                                                  const GGS_syncInstructionBranchListAST & in_mBranchList,
                                                  const GGS_location & in_mEndOf_5F_on_5F_instruction
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

const C_galgas_type_descriptor * GGS_syncInstructionAST::staticTypeDescriptor (void) const {
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
//
//     @syncInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST_2E_weak ("syncInstructionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syncInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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
//
//     @guardedCommandIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR ("guardedCommandIR",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardedCommandIR::staticTypeDescriptor (void) const {
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
//
//Class for element of '@syncInstructionBranchListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syncInstructionBranchListIR : public cCollectionElement {
  public: GGS_syncInstructionBranchListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_syncInstructionBranchListIR (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                          const GGS_instructionListIR & in_mInstructionGenerationList
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

GGS_syncInstructionBranchListIR::GGS_syncInstructionBranchListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR::GGS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::enterElement (const GGS_syncInstructionBranchListIR_2E_element & inValue,
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

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::class_func_listWithValue (const GGS_guardedCommandIR & inOperand0,
                                                                                           const GGS_instructionListIR & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_syncInstructionBranchListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_syncInstructionBranchListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_syncInstructionBranchListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_guardedCommandIR & in_mGuardedCommand,
                                                                 const GGS_instructionListIR & in_mInstructionGenerationList
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (in_mGuardedCommand,
                                                                 in_mInstructionGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::addAssign_operation (const GGS_guardedCommandIR & inOperand0,
                                                           const GGS_instructionListIR & inOperand1
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

void GGS_syncInstructionBranchListIR::setter_append (const GGS_guardedCommandIR inOperand0,
                                                     const GGS_instructionListIR inOperand1,
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

void GGS_syncInstructionBranchListIR::setter_insertAtIndex (const GGS_guardedCommandIR inOperand0,
                                                            const GGS_instructionListIR inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::setter_removeAtIndex (GGS_guardedCommandIR & outOperand0,
                                                            GGS_instructionListIR & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
      outOperand0 = p->mObject.mProperty_mGuardedCommand ;
      outOperand1 = p->mObject.mProperty_mInstructionGenerationList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::setter_popFirst (GGS_guardedCommandIR & outOperand0,
                                                       GGS_instructionListIR & outOperand1,
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

void GGS_syncInstructionBranchListIR::setter_popLast (GGS_guardedCommandIR & outOperand0,
                                                      GGS_instructionListIR & outOperand1,
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

void GGS_syncInstructionBranchListIR::method_first (GGS_guardedCommandIR & outOperand0,
                                                    GGS_instructionListIR & outOperand1,
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

void GGS_syncInstructionBranchListIR::method_last (GGS_guardedCommandIR & outOperand0,
                                                   GGS_instructionListIR & outOperand1,
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

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::add_operation (const GGS_syncInstructionBranchListIR & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result = GGS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result = GGS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListIR result = GGS_syncInstructionBranchListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::plusAssign_operation (const GGS_syncInstructionBranchListIR inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::setter_setMGuardedCommandAtIndex (GGS_guardedCommandIR inOperand,
                                                                        GGS_uint inIndex,
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

GGS_guardedCommandIR GGS_syncInstructionBranchListIR::getter_mGuardedCommandAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  GGS_guardedCommandIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListIR::setter_setMInstructionGenerationListAtIndex (GGS_instructionListIR inOperand,
                                                                                   GGS_uint inIndex,
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

GGS_instructionListIR GGS_syncInstructionBranchListIR::getter_mInstructionGenerationListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  GGS_instructionListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    result = p->mObject.mProperty_mInstructionGenerationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syncInstructionBranchListIR::cEnumerator_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListIR_2E_element cEnumerator_syncInstructionBranchListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR cEnumerator_syncInstructionBranchListIR::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR cEnumerator_syncInstructionBranchListIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_syncInstructionBranchListIR::staticTypeDescriptor (void) const {
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
//
//Class for element of '@guardedCommandIRList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guardedCommandIRList : public cCollectionElement {
  public: GGS_guardedCommandIRList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_guardedCommandIRList (const GGS_guardedCommandIR & in_mGuardedCommand
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guardedCommandIRList (const GGS_guardedCommandIRList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_guardedCommandIRList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGuardedCommand" ":") ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList::GGS_guardedCommandIRList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList::GGS_guardedCommandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_guardedCommandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_guardedCommandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::enterElement (const GGS_guardedCommandIRList_2E_element & inValue,
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

GGS_guardedCommandIRList GGS_guardedCommandIRList::class_func_listWithValue (const GGS_guardedCommandIR & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  GGS_guardedCommandIRList result ;
  if (inOperand0.isValid ()) {
    result = GGS_guardedCommandIRList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_guardedCommandIRList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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

void GGS_guardedCommandIRList::addAssign_operation (const GGS_guardedCommandIR & inOperand0
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

void GGS_guardedCommandIRList::setter_append (const GGS_guardedCommandIR inOperand0,
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

void GGS_guardedCommandIRList::setter_insertAtIndex (const GGS_guardedCommandIR inOperand0,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guardedCommandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::setter_removeAtIndex (GGS_guardedCommandIR & outOperand0,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
      outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::setter_popFirst (GGS_guardedCommandIR & outOperand0,
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

void GGS_guardedCommandIRList::setter_popLast (GGS_guardedCommandIR & outOperand0,
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

void GGS_guardedCommandIRList::method_first (GGS_guardedCommandIR & outOperand0,
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

void GGS_guardedCommandIRList::method_last (GGS_guardedCommandIR & outOperand0,
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

GGS_guardedCommandIRList GGS_guardedCommandIRList::add_operation (const GGS_guardedCommandIRList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result = GGS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result = GGS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList GGS_guardedCommandIRList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_guardedCommandIRList result = GGS_guardedCommandIRList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::plusAssign_operation (const GGS_guardedCommandIRList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardedCommandIRList::setter_setMGuardedCommandAtIndex (GGS_guardedCommandIR inOperand,
                                                                 GGS_uint inIndex,
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

GGS_guardedCommandIR GGS_guardedCommandIRList::getter_mGuardedCommandAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardedCommandIRList * p = (cCollectionElement_guardedCommandIRList *) attributes.ptr () ;
  GGS_guardedCommandIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_guardedCommandIRList::cEnumerator_guardedCommandIRList (const GGS_guardedCommandIRList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIRList_2E_element cEnumerator_guardedCommandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_guardedCommandIRList * p = (const cCollectionElement_guardedCommandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardedCommandIRList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandIR cEnumerator_guardedCommandIRList::current_mGuardedCommand (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_guardedCommandIRList::staticTypeDescriptor (void) const {
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

GGS_syncInstructionIR GGS_syncInstructionIR::class_func_new (const GGS_location & in_mSelectInstructionLocation,
                                                             const GGS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                             COMMA_LOCATION_ARGS) {
  GGS_syncInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_syncInstructionIR (in_mSelectInstructionLocation, in_mOnInstructionBranchListIR COMMA_THERE)) ;
  return result ;
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

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GGS_location & in_mSelectInstructionLocation,
                                                const GGS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
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

const C_galgas_type_descriptor * GGS_syncInstructionIR::staticTypeDescriptor (void) const {
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
//
//     @syncInstructionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR_2E_weak ("syncInstructionIR.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syncInstructionIR_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_whileInstructionAST::objectCompare (const GGS_whileInstructionAST & inOperand) const {
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

GGS_whileInstructionAST::GGS_whileInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_whileInstructionAST GGS_whileInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_expressionAST & in_m_5F_while_5F_Expression,
                          const GGS_location & in_mEndOf_5F_test_5F_expression,
                          const GGS_instructionListAST & in_mWhileInstructionList,
                          const GGS_location & in_mEndOf_5F_while_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_whileInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_whileInstructionAST (inCompiler COMMA_THERE)) ;
  object->whileInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_m_5F_while_5F_Expression, in_mEndOf_5F_test_5F_expression, in_mWhileInstructionList, in_mEndOf_5F_while_5F_instruction, inCompiler) ;
  const GGS_whileInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::
whileInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_expressionAST & in_m_5F_while_5F_Expression,
                                              const GGS_location & in_mEndOf_5F_test_5F_expression,
                                              const GGS_instructionListAST & in_mWhileInstructionList,
                                              const GGS_location & in_mEndOf_5F_while_5F_instruction,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_m_5F_while_5F_Expression = in_m_5F_while_5F_Expression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mEndOf_5F_while_5F_instruction = in_mEndOf_5F_while_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST::GGS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST GGS_whileInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_expressionAST & in_m_5F_while_5F_Expression,
                                                                 const GGS_location & in_mEndOf_5F_test_5F_expression,
                                                                 const GGS_instructionListAST & in_mWhileInstructionList,
                                                                 const GGS_location & in_mEndOf_5F_while_5F_instruction
                                                                 COMMA_LOCATION_ARGS) {
  GGS_whileInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_whileInstructionAST (in_mInstructionLocation, in_m_5F_while_5F_Expression, in_mEndOf_5F_test_5F_expression, in_mWhileInstructionList, in_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_whileInstructionAST::readProperty_m_5F_while_5F_Expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_m_5F_while_5F_Expression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_whileInstructionAST::setProperty_m_5F_while_5F_Expression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_m_5F_while_5F_Expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_whileInstructionAST::readProperty_mEndOf_5F_test_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mEndOf_5F_test_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_whileInstructionAST::setProperty_mEndOf_5F_test_5F_expression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_whileInstructionAST::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_whileInstructionAST::setProperty_mWhileInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_whileInstructionAST::readProperty_mEndOf_5F_while_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    return p->mProperty_mEndOf_5F_while_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_whileInstructionAST::setProperty_mEndOf_5F_while_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    p->mProperty_mEndOf_5F_while_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @whileInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionAST::cPtr_whileInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_expressionAST & in_m_5F_while_5F_Expression,
                                                    const GGS_location & in_mEndOf_5F_test_5F_expression,
                                                    const GGS_instructionListAST & in_mWhileInstructionList,
                                                    const GGS_location & in_mEndOf_5F_while_5F_instruction
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

const C_galgas_type_descriptor * GGS_whileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_whileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_whileInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST GGS_whileInstructionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_whileInstructionAST result ;
  const GGS_whileInstructionAST * p = (const GGS_whileInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_whileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_whileInstructionAST_2E_weak::objectCompare (const GGS_whileInstructionAST_2E_weak & inOperand) const {
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

GGS_whileInstructionAST_2E_weak::GGS_whileInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST_2E_weak & GGS_whileInstructionAST_2E_weak::operator = (const GGS_whileInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST_2E_weak::GGS_whileInstructionAST_2E_weak (const GGS_whileInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST_2E_weak GGS_whileInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_whileInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST GGS_whileInstructionAST_2E_weak::bang_whileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_whileInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_whileInstructionAST) ;
      result = GGS_whileInstructionAST ((cPtr_whileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST_2E_weak ("whileInstructionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_whileInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_whileInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_whileInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST_2E_weak GGS_whileInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_whileInstructionAST_2E_weak result ;
  const GGS_whileInstructionAST_2E_weak * p = (const GGS_whileInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_whileInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_whileInstructionIR::objectCompare (const GGS_whileInstructionIR & inOperand) const {
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

GGS_whileInstructionIR::GGS_whileInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_whileInstructionIR GGS_whileInstructionIR::
init_21__21__21__21_ (const GGS_uint & in_mLabelIndex,
                      const GGS_instructionListIR & in_mTestInstructionGenerationList,
                      const GGS_string & in_m_5F_while_5F_llvmName,
                      const GGS_instructionListIR & in_mInstructionGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_whileInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_whileInstructionIR (inCompiler COMMA_THERE)) ;
  object->whileInstructionIR_init_21__21__21__21_ (in_mLabelIndex, in_mTestInstructionGenerationList, in_m_5F_while_5F_llvmName, in_mInstructionGenerationList, inCompiler) ;
  const GGS_whileInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::
whileInstructionIR_init_21__21__21__21_ (const GGS_uint & in_mLabelIndex,
                                         const GGS_instructionListIR & in_mTestInstructionGenerationList,
                                         const GGS_string & in_m_5F_while_5F_llvmName,
                                         const GGS_instructionListIR & in_mInstructionGenerationList,
                                         Compiler * /* inCompiler */) {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mTestInstructionGenerationList = in_mTestInstructionGenerationList ;
  mProperty_m_5F_while_5F_llvmName = in_m_5F_while_5F_llvmName ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR::GGS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR GGS_whileInstructionIR::class_func_new (const GGS_uint & in_mLabelIndex,
                                                               const GGS_instructionListIR & in_mTestInstructionGenerationList,
                                                               const GGS_string & in_m_5F_while_5F_llvmName,
                                                               const GGS_instructionListIR & in_mInstructionGenerationList
                                                               COMMA_LOCATION_ARGS) {
  GGS_whileInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_whileInstructionIR (in_mLabelIndex, in_mTestInstructionGenerationList, in_m_5F_while_5F_llvmName, in_mInstructionGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_whileInstructionIR::readProperty_mLabelIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mLabelIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_whileInstructionIR::setProperty_mLabelIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_whileInstructionIR::readProperty_mTestInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mTestInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_whileInstructionIR::setProperty_mTestInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mTestInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_whileInstructionIR::readProperty_m_5F_while_5F_llvmName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_m_5F_while_5F_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_whileInstructionIR::setProperty_m_5F_while_5F_llvmName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_m_5F_while_5F_llvmName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_whileInstructionIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_whileInstructionIR::setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @whileInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionIR::cPtr_whileInstructionIR (const GGS_uint & in_mLabelIndex,
                                                  const GGS_instructionListIR & in_mTestInstructionGenerationList,
                                                  const GGS_string & in_m_5F_while_5F_llvmName,
                                                  const GGS_instructionListIR & in_mInstructionGenerationList
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

const C_galgas_type_descriptor * GGS_whileInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_whileInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_whileInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR GGS_whileInstructionIR::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_whileInstructionIR result ;
  const GGS_whileInstructionIR * p = (const GGS_whileInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_whileInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_whileInstructionIR_2E_weak::objectCompare (const GGS_whileInstructionIR_2E_weak & inOperand) const {
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

GGS_whileInstructionIR_2E_weak::GGS_whileInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR_2E_weak & GGS_whileInstructionIR_2E_weak::operator = (const GGS_whileInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR_2E_weak::GGS_whileInstructionIR_2E_weak (const GGS_whileInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR_2E_weak GGS_whileInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_whileInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR GGS_whileInstructionIR_2E_weak::bang_whileInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_whileInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_whileInstructionIR) ;
      result = GGS_whileInstructionIR ((cPtr_whileInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @whileInstructionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR_2E_weak ("whileInstructionIR.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_whileInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_whileInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_whileInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR_2E_weak GGS_whileInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_whileInstructionIR_2E_weak result ;
  const GGS_whileInstructionIR_2E_weak * p = (const GGS_whileInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_whileInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionAST_2E_weak::objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const {
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

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak & GGS_forInstructionAST_2E_weak::operator = (const GGS_forInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (const GGS_forInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak GGS_forInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST_2E_weak::bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GGS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ("forInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak GGS_forInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_forInstructionAST_2E_weak result ;
  const GGS_forInstructionAST_2E_weak * p = (const GGS_forInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionOnArrayIR_2E_weak::objectCompare (const GGS_forInstructionOnArrayIR_2E_weak & inOperand) const {
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

GGS_forInstructionOnArrayIR_2E_weak::GGS_forInstructionOnArrayIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnArrayIR_2E_weak & GGS_forInstructionOnArrayIR_2E_weak::operator = (const GGS_forInstructionOnArrayIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnArrayIR_2E_weak::GGS_forInstructionOnArrayIR_2E_weak (const GGS_forInstructionOnArrayIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnArrayIR_2E_weak GGS_forInstructionOnArrayIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionOnArrayIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnArrayIR GGS_forInstructionOnArrayIR_2E_weak::bang_forInstructionOnArrayIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionOnArrayIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionOnArrayIR) ;
      result = GGS_forInstructionOnArrayIR ((cPtr_forInstructionOnArrayIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionOnArrayIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2E_weak ("forInstructionOnArrayIR.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionOnArrayIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionOnArrayIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionOnArrayIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnArrayIR_2E_weak GGS_forInstructionOnArrayIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionOnArrayIR_2E_weak result ;
  const GGS_forInstructionOnArrayIR_2E_weak * p = (const GGS_forInstructionOnArrayIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionOnArrayIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionOnLiteralStringIR_2E_weak::objectCompare (const GGS_forInstructionOnLiteralStringIR_2E_weak & inOperand) const {
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

GGS_forInstructionOnLiteralStringIR_2E_weak::GGS_forInstructionOnLiteralStringIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR_2E_weak & GGS_forInstructionOnLiteralStringIR_2E_weak::operator = (const GGS_forInstructionOnLiteralStringIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR_2E_weak::GGS_forInstructionOnLiteralStringIR_2E_weak (const GGS_forInstructionOnLiteralStringIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR_2E_weak GGS_forInstructionOnLiteralStringIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionOnLiteralStringIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR GGS_forInstructionOnLiteralStringIR_2E_weak::bang_forInstructionOnLiteralStringIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionOnLiteralStringIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionOnLiteralStringIR) ;
      result = GGS_forInstructionOnLiteralStringIR ((cPtr_forInstructionOnLiteralStringIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionOnLiteralStringIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2E_weak ("forInstructionOnLiteralStringIR.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionOnLiteralStringIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionOnLiteralStringIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionOnLiteralStringIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR_2E_weak GGS_forInstructionOnLiteralStringIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionOnLiteralStringIR_2E_weak result ;
  const GGS_forInstructionOnLiteralStringIR_2E_weak * p = (const GGS_forInstructionOnLiteralStringIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionOnLiteralStringIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnLiteralStringIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forLowerUpperBoundInstructionAST_2E_weak::objectCompare (const GGS_forLowerUpperBoundInstructionAST_2E_weak & inOperand) const {
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

GGS_forLowerUpperBoundInstructionAST_2E_weak::GGS_forLowerUpperBoundInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST_2E_weak & GGS_forLowerUpperBoundInstructionAST_2E_weak::operator = (const GGS_forLowerUpperBoundInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST GGS_forLowerUpperBoundInstructionAST_2E_weak::bang_forLowerUpperBoundInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forLowerUpperBoundInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @forLowerUpperBoundInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2E_weak ("forLowerUpperBoundInstructionAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forLowerUpperBoundInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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

GGS_forLowerUpperBoundInstructionIR_2E_weak::GGS_forLowerUpperBoundInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR_2E_weak & GGS_forLowerUpperBoundInstructionIR_2E_weak::operator = (const GGS_forLowerUpperBoundInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR GGS_forLowerUpperBoundInstructionIR_2E_weak::bang_forLowerUpperBoundInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forLowerUpperBoundInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @forLowerUpperBoundInstructionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2E_weak ("forLowerUpperBoundInstructionIR.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forLowerUpperBoundInstructionIR_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_callInstructionAST_2E_weak::objectCompare (const GGS_callInstructionAST_2E_weak & inOperand) const {
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

GGS_callInstructionAST_2E_weak::GGS_callInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_callInstructionAST_2E_weak & GGS_callInstructionAST_2E_weak::operator = (const GGS_callInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_callInstructionAST_2E_weak::GGS_callInstructionAST_2E_weak (const GGS_callInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_callInstructionAST_2E_weak GGS_callInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_callInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_callInstructionAST GGS_callInstructionAST_2E_weak::bang_callInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_callInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_callInstructionAST) ;
      result = GGS_callInstructionAST ((cPtr_callInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @callInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST_2E_weak ("callInstructionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_callInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_callInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_callInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_callInstructionAST_2E_weak GGS_callInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_callInstructionAST_2E_weak result ;
  const GGS_callInstructionAST_2E_weak * p = (const GGS_callInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_callInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("callInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_standAloneProcedureCallInstructionAST_2E_weak::objectCompare (const GGS_standAloneProcedureCallInstructionAST_2E_weak & inOperand) const {
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

GGS_standAloneProcedureCallInstructionAST_2E_weak::GGS_standAloneProcedureCallInstructionAST_2E_weak (void) :
GGS_callInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST_2E_weak & GGS_standAloneProcedureCallInstructionAST_2E_weak::operator = (const GGS_standAloneProcedureCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST_2E_weak::GGS_standAloneProcedureCallInstructionAST_2E_weak (const GGS_standAloneProcedureCallInstructionAST & inSource) :
GGS_callInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST_2E_weak GGS_standAloneProcedureCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_standAloneProcedureCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST GGS_standAloneProcedureCallInstructionAST_2E_weak::bang_standAloneProcedureCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_standAloneProcedureCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standAloneProcedureCallInstructionAST) ;
      result = GGS_standAloneProcedureCallInstructionAST ((cPtr_standAloneProcedureCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @standAloneProcedureCallInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2E_weak ("standAloneProcedureCallInstructionAST.weak",
                                                                                                     & kTypeDescriptor_GALGAS_callInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_standAloneProcedureCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_standAloneProcedureCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_standAloneProcedureCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST_2E_weak GGS_standAloneProcedureCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_standAloneProcedureCallInstructionAST_2E_weak result ;
  const GGS_standAloneProcedureCallInstructionAST_2E_weak * p = (const GGS_standAloneProcedureCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_standAloneProcedureCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standAloneProcedureCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GGS_accessInAssignmentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_accessInAssignmentListAST (const GGS_accessInAssignmentAST & in_mAccess
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_accessInAssignmentListAST (const GGS_accessInAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_accessInAssignmentListAST::cCollectionElement_accessInAssignmentListAST (const GGS_accessInAssignmentAST & in_mAccess
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_accessInAssignmentListAST::cCollectionElement_accessInAssignmentListAST (const GGS_accessInAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_accessInAssignmentListAST::GGS_accessInAssignmentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST::GGS_accessInAssignmentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_accessInAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_accessInAssignmentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::enterElement (const GGS_accessInAssignmentListAST_2E_element & inValue,
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

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::class_func_listWithValue (const GGS_accessInAssignmentAST & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_accessInAssignmentListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_accessInAssignmentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_accessInAssignmentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_accessInAssignmentAST & in_mAccess
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_accessInAssignmentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_accessInAssignmentListAST (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::addAssign_operation (const GGS_accessInAssignmentAST & inOperand0
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

void GGS_accessInAssignmentListAST::setter_append (const GGS_accessInAssignmentAST inOperand0,
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

void GGS_accessInAssignmentListAST::setter_insertAtIndex (const GGS_accessInAssignmentAST inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_accessInAssignmentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::setter_removeAtIndex (GGS_accessInAssignmentAST & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
      outOperand0 = p->mObject.mProperty_mAccess ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::setter_popFirst (GGS_accessInAssignmentAST & outOperand0,
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

void GGS_accessInAssignmentListAST::setter_popLast (GGS_accessInAssignmentAST & outOperand0,
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

void GGS_accessInAssignmentListAST::method_first (GGS_accessInAssignmentAST & outOperand0,
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

void GGS_accessInAssignmentListAST::method_last (GGS_accessInAssignmentAST & outOperand0,
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

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::add_operation (const GGS_accessInAssignmentListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result = GGS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result = GGS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result = GGS_accessInAssignmentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::plusAssign_operation (const GGS_accessInAssignmentListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::setter_setMAccessAtIndex (GGS_accessInAssignmentAST inOperand,
                                                              GGS_uint inIndex,
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

GGS_accessInAssignmentAST GGS_accessInAssignmentListAST::getter_mAccessAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) attributes.ptr () ;
  GGS_accessInAssignmentAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    result = p->mObject.mProperty_mAccess ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_accessInAssignmentListAST::cEnumerator_accessInAssignmentListAST (const GGS_accessInAssignmentListAST & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element cEnumerator_accessInAssignmentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_accessInAssignmentListAST * p = (const cCollectionElement_accessInAssignmentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST cEnumerator_accessInAssignmentListAST::current_mAccess (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_accessInAssignmentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_accessInAssignmentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_accessInAssignmentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_accessInAssignmentListAST result ;
  const GGS_accessInAssignmentListAST * p = (const GGS_accessInAssignmentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_accessInAssignmentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procedureCallInstructionAST_2E_weak::objectCompare (const GGS_procedureCallInstructionAST_2E_weak & inOperand) const {
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

GGS_procedureCallInstructionAST_2E_weak::GGS_procedureCallInstructionAST_2E_weak (void) :
GGS_callInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procedureCallInstructionAST_2E_weak & GGS_procedureCallInstructionAST_2E_weak::operator = (const GGS_procedureCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procedureCallInstructionAST_2E_weak::GGS_procedureCallInstructionAST_2E_weak (const GGS_procedureCallInstructionAST & inSource) :
GGS_callInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_procedureCallInstructionAST_2E_weak GGS_procedureCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procedureCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procedureCallInstructionAST GGS_procedureCallInstructionAST_2E_weak::bang_procedureCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procedureCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procedureCallInstructionAST) ;
      result = GGS_procedureCallInstructionAST ((cPtr_procedureCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procedureCallInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2E_weak ("procedureCallInstructionAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_callInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_procedureCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procedureCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procedureCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procedureCallInstructionAST_2E_weak GGS_procedureCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_procedureCallInstructionAST_2E_weak result ;
  const GGS_procedureCallInstructionAST_2E_weak * p = (const GGS_procedureCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procedureCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST buildProcedureCallAccessList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildProcedureCallAccessList (const GGS_LValueOperandAST inObject,
                                                   GGS_accessInAssignmentListAST & ioArgument_ioAccessList,
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
      GGS_lstring extractedValue_3041_name_0 ;
      GGS_LValueOperandAST extractedValue_3064_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_3041_name_0, extractedValue_3064_next_1) ;
      ioArgument_ioAccessList.addAssign_operation (GGS_accessInAssignmentAST::class_func_property (extractedValue_3041_name_0  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3064_next_1, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 73)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_3206_index_0 ;
      GGS_location extractedValue_3222_endOfIndex_1 ;
      GGS_bool extractedValue_3239_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_3278_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_3206_index_0, extractedValue_3222_endOfIndex_1, extractedValue_3239_checkIndexExpression_2, extractedValue_3278_next_3) ;
      ioArgument_ioAccessList.addAssign_operation (GGS_accessInAssignmentAST::class_func_arrayAccess (extractedValue_3206_index_0, extractedValue_3222_endOfIndex_1, extractedValue_3239_checkIndexExpression_2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3278_next_3, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 76)) ;
    }
    break ;
  }
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
//
//     @effectiveArgumentPassingModeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ("effectiveArgumentPassingModeAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_effectiveArgumentPassingModeAST::staticTypeDescriptor (void) const {
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
//
//Class for element of '@procEffectiveParameterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_procEffectiveParameterList : public cCollectionElement {
  public: GGS_procEffectiveParameterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_procEffectiveParameterList (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                         const GGS_lstring & in_mSelector,
                                                         const GGS_omnibusType & in_mParameterType
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_procEffectiveParameterList (const GGS_procEffectiveParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                              const GGS_lstring & in_mSelector,
                                                                                              const GGS_omnibusType & in_mParameterType
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GGS_procEffectiveParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_procEffectiveParameterList::GGS_procEffectiveParameterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList::GGS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_procEffectiveParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_procEffectiveParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::enterElement (const GGS_procEffectiveParameterList_2E_element & inValue,
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

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::class_func_listWithValue (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS_omnibusType & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_procEffectiveParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_procEffectiveParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_procEffectiveParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                const GGS_lstring & in_mSelector,
                                                                const GGS_omnibusType & in_mParameterType
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (in_mEffectiveParameterPassingMode,
                                                                in_mSelector,
                                                                in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::addAssign_operation (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                          const GGS_lstring & inOperand1,
                                                          const GGS_omnibusType & inOperand2
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

void GGS_procEffectiveParameterList::setter_append (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_omnibusType inOperand2,
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

void GGS_procEffectiveParameterList::setter_insertAtIndex (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS_omnibusType inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::setter_removeAtIndex (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_omnibusType & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
      outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mParameterType ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::setter_popFirst (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_omnibusType & outOperand2,
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

void GGS_procEffectiveParameterList::setter_popLast (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_omnibusType & outOperand2,
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

void GGS_procEffectiveParameterList::method_first (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_omnibusType & outOperand2,
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

void GGS_procEffectiveParameterList::method_last (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_omnibusType & outOperand2,
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

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::add_operation (const GGS_procEffectiveParameterList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result = GGS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result = GGS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result = GGS_procEffectiveParameterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::plusAssign_operation (const GGS_procEffectiveParameterList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::setter_setMEffectiveParameterPassingModeAtIndex (GGS_effectiveArgumentPassingModeAST inOperand,
                                                                                      GGS_uint inIndex,
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

GGS_effectiveArgumentPassingModeAST GGS_procEffectiveParameterList::getter_mEffectiveParameterPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GGS_effectiveArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::setter_setMSelectorAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
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

GGS_lstring GGS_procEffectiveParameterList::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::setter_setMParameterTypeAtIndex (GGS_omnibusType inOperand,
                                                                      GGS_uint inIndex,
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

GGS_omnibusType GGS_procEffectiveParameterList::getter_mParameterTypeAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mProperty_mParameterType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_procEffectiveParameterList::cEnumerator_procEffectiveParameterList (const GGS_procEffectiveParameterList & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element cEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST cEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_procEffectiveParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procEffectiveParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procEffectiveParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_procEffectiveParameterList result ;
  const GGS_procEffectiveParameterList * p = (const GGS_procEffectiveParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procEffectiveParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum procEffectiveParameterPassingModeIR
//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterPassingModeIR::GGS_procEffectiveParameterPassingModeIR (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterPassingModeIR GGS_procEffectiveParameterPassingModeIR::class_func_input (UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = Enumeration::enum_input ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterPassingModeIR GGS_procEffectiveParameterPassingModeIR::class_func_output (UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = Enumeration::enum_output ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterPassingModeIR GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = Enumeration::enum_outputInput ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_procEffectiveParameterPassingModeIR [4] = {
  "(not built)",
  "input",
  "output",
  "outputInput"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procEffectiveParameterPassingModeIR::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_input == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procEffectiveParameterPassingModeIR::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_output == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procEffectiveParameterPassingModeIR::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_outputInput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterPassingModeIR::description (String & ioString,
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

const C_galgas_type_descriptor * GGS_procEffectiveParameterPassingModeIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procEffectiveParameterPassingModeIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procEffectiveParameterPassingModeIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterPassingModeIR GGS_procEffectiveParameterPassingModeIR::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_procEffectiveParameterPassingModeIR result ;
  const GGS_procEffectiveParameterPassingModeIR * p = (const GGS_procEffectiveParameterPassingModeIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procEffectiveParameterPassingModeIR *> (p)) {
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
  public: GGS_procCallEffectiveParameterListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_procCallEffectiveParameterListIR (const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                               const GGS_objectIR & in_mParameter
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                                                          const GGS_objectIR & in_mParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_procCallEffectiveParameterListIR::GGS_procCallEffectiveParameterListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR::GGS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::enterElement (const GGS_procCallEffectiveParameterListIR_2E_element & inValue,
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

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::class_func_listWithValue (const GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                     const GGS_objectIR & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_procCallEffectiveParameterListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_procCallEffectiveParameterListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_procCallEffectiveParameterListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                      const GGS_objectIR & in_mParameter
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (in_mEffectiveParameterPassingMode,
                                                                      in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::addAssign_operation (const GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                const GGS_objectIR & inOperand1
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

void GGS_procCallEffectiveParameterListIR::setter_append (const GGS_procEffectiveParameterPassingModeIR inOperand0,
                                                          const GGS_objectIR inOperand1,
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

void GGS_procCallEffectiveParameterListIR::setter_insertAtIndex (const GGS_procEffectiveParameterPassingModeIR inOperand0,
                                                                 const GGS_objectIR inOperand1,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::setter_removeAtIndex (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                 GGS_objectIR & outOperand1,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
      outOperand0 = p->mObject.mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = p->mObject.mProperty_mParameter ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::setter_popFirst (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                            GGS_objectIR & outOperand1,
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

void GGS_procCallEffectiveParameterListIR::setter_popLast (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                           GGS_objectIR & outOperand1,
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

void GGS_procCallEffectiveParameterListIR::method_first (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                         GGS_objectIR & outOperand1,
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

void GGS_procCallEffectiveParameterListIR::method_last (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                        GGS_objectIR & outOperand1,
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

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::add_operation (const GGS_procCallEffectiveParameterListIR & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result = GGS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result = GGS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result = GGS_procCallEffectiveParameterListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::plusAssign_operation (const GGS_procCallEffectiveParameterListIR inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::setter_setMEffectiveParameterPassingModeAtIndex (GGS_procEffectiveParameterPassingModeIR inOperand,
                                                                                            GGS_uint inIndex,
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

GGS_procEffectiveParameterPassingModeIR GGS_procCallEffectiveParameterListIR::getter_mEffectiveParameterPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GGS_procEffectiveParameterPassingModeIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mProperty_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::setter_setMParameterAtIndex (GGS_objectIR inOperand,
                                                                        GGS_uint inIndex,
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

GGS_objectIR GGS_procCallEffectiveParameterListIR::getter_mParameterAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GGS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mProperty_mParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_procCallEffectiveParameterListIR::cEnumerator_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element cEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterPassingModeIR cEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR cEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_procCallEffectiveParameterListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallEffectiveParameterListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallEffectiveParameterListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_procCallEffectiveParameterListIR result ;
  const GGS_procCallEffectiveParameterListIR * p = (const GGS_procCallEffectiveParameterListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallEffectiveParameterListIR *> (p)) {
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
  public: GGS_switchCaseListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_switchCaseListAST (const GGS_lstringlist & in_mCaseIdentifiers,
                                                const GGS_instructionListAST & in_mCaseInstructionList
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchCaseListAST (const GGS_switchCaseListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListAST::cCollectionElement_switchCaseListAST (const GGS_lstringlist & in_mCaseIdentifiers,
                                                                            const GGS_instructionListAST & in_mCaseInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifiers, in_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListAST::cCollectionElement_switchCaseListAST (const GGS_switchCaseListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_switchCaseListAST::GGS_switchCaseListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST::GGS_switchCaseListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_switchCaseListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_switchCaseListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::enterElement (const GGS_switchCaseListAST_2E_element & inValue,
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

GGS_switchCaseListAST GGS_switchCaseListAST::class_func_listWithValue (const GGS_lstringlist & inOperand0,
                                                                       const GGS_instructionListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  GGS_switchCaseListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_switchCaseListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_switchCaseListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstringlist & in_mCaseIdentifiers,
                                                       const GGS_instructionListAST & in_mCaseInstructionList
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListAST (in_mCaseIdentifiers,
                                                       in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::addAssign_operation (const GGS_lstringlist & inOperand0,
                                                 const GGS_instructionListAST & inOperand1
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

void GGS_switchCaseListAST::setter_append (const GGS_lstringlist inOperand0,
                                           const GGS_instructionListAST inOperand1,
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

void GGS_switchCaseListAST::setter_insertAtIndex (const GGS_lstringlist inOperand0,
                                                  const GGS_instructionListAST inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_removeAtIndex (GGS_lstringlist & outOperand0,
                                                  GGS_instructionListAST & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
      outOperand0 = p->mObject.mProperty_mCaseIdentifiers ;
      outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_popFirst (GGS_lstringlist & outOperand0,
                                             GGS_instructionListAST & outOperand1,
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

void GGS_switchCaseListAST::setter_popLast (GGS_lstringlist & outOperand0,
                                            GGS_instructionListAST & outOperand1,
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

void GGS_switchCaseListAST::method_first (GGS_lstringlist & outOperand0,
                                          GGS_instructionListAST & outOperand1,
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

void GGS_switchCaseListAST::method_last (GGS_lstringlist & outOperand0,
                                         GGS_instructionListAST & outOperand1,
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

GGS_switchCaseListAST GGS_switchCaseListAST::add_operation (const GGS_switchCaseListAST & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result = GGS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result = GGS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result = GGS_switchCaseListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::plusAssign_operation (const GGS_switchCaseListAST inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_setMCaseIdentifiersAtIndex (GGS_lstringlist inOperand,
                                                               GGS_uint inIndex,
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

GGS_lstringlist GGS_switchCaseListAST::getter_mCaseIdentifiersAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    result = p->mObject.mProperty_mCaseIdentifiers ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_setMCaseInstructionListAtIndex (GGS_instructionListAST inOperand,
                                                                   GGS_uint inIndex,
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

GGS_instructionListAST GGS_switchCaseListAST::getter_mCaseInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) attributes.ptr () ;
  GGS_instructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchCaseListAST::cEnumerator_switchCaseListAST (const GGS_switchCaseListAST & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element cEnumerator_switchCaseListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_switchCaseListAST::current_mCaseIdentifiers (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListAST * p = (const cCollectionElement_switchCaseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
  return p->mObject.mProperty_mCaseIdentifiers ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST cEnumerator_switchCaseListAST::current_mCaseInstructionList (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_switchCaseListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchCaseListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchCaseListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_switchCaseListAST result ;
  const GGS_switchCaseListAST * p = (const GGS_switchCaseListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchCaseListAST *> (p)) {
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

ComparisonResult GGS_switchInstructionAST::objectCompare (const GGS_switchInstructionAST & inOperand) const {
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

GGS_switchInstructionAST::GGS_switchInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_expressionAST & in_mSwitchExpression,
                          const GGS_location & in_mEndOf_5F_test_5F_expression,
                          const GGS_switchCaseListAST & in_mSwitchCaseList,
                          const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOf_5F_test_5F_expression, in_mSwitchCaseList, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GGS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_expressionAST & in_mSwitchExpression,
                                               const GGS_location & in_mEndOf_5F_test_5F_expression,
                                               const GGS_switchCaseListAST & in_mSwitchCaseList,
                                               const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mSwitchCaseList = in_mSwitchCaseList ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST::GGS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_expressionAST & in_mSwitchExpression,
                                                                   const GGS_location & in_mEndOf_5F_test_5F_expression,
                                                                   const GGS_switchCaseListAST & in_mSwitchCaseList,
                                                                   const GGS_location & in_mEndOf_5F_switch_5F_instruction
                                                                   COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (in_mInstructionLocation, in_mSwitchExpression, in_mEndOf_5F_test_5F_expression, in_mSwitchCaseList, in_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionAST::setProperty_mSwitchExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOf_5F_test_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_test_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionAST::setProperty_mEndOf_5F_test_5F_expression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchInstructionAST::readProperty_mSwitchCaseList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_switchCaseListAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchCaseList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionAST::setProperty_mSwitchCaseList (const GGS_switchCaseListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchCaseList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionAST::setProperty_mEndOf_5F_switch_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_switch_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_expressionAST & in_mSwitchExpression,
                                                      const GGS_location & in_mEndOf_5F_test_5F_expression,
                                                      const GGS_switchCaseListAST & in_mSwitchCaseList,
                                                      const GGS_location & in_mEndOf_5F_switch_5F_instruction
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

const C_galgas_type_descriptor * GGS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  const GGS_switchInstructionAST * p = (const GGS_switchInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST_2E_weak::objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const {
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

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak & GGS_switchInstructionAST_2E_weak::operator = (const GGS_switchInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (const GGS_switchInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionAST) ;
      result = GGS_switchInstructionAST ((cPtr_switchInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ("switchInstructionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  const GGS_switchInstructionAST_2E_weak * p = (const GGS_switchInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GGS_switchCaseListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_switchCaseListIR (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                               const GGS_instructionListIR & in_mCaseInstructionList
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchCaseListIR (const GGS_switchCaseListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListIR::cCollectionElement_switchCaseListIR (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                                                          const GGS_instructionListIR & in_mCaseInstructionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseIdentifierIndexes, in_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchCaseListIR::cCollectionElement_switchCaseListIR (const GGS_switchCaseListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_switchCaseListIR::GGS_switchCaseListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR::GGS_switchCaseListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_switchCaseListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_switchCaseListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::enterElement (const GGS_switchCaseListIR_2E_element & inValue,
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

GGS_switchCaseListIR GGS_switchCaseListIR::class_func_listWithValue (const GGS_uintlist & inOperand0,
                                                                     const GGS_instructionListIR & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  GGS_switchCaseListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_switchCaseListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_switchCaseListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GGS_uintlist & in_mCaseIdentifierIndexes,
                                                      const GGS_instructionListIR & in_mCaseInstructionList
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListIR (in_mCaseIdentifierIndexes,
                                                      in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::addAssign_operation (const GGS_uintlist & inOperand0,
                                                const GGS_instructionListIR & inOperand1
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

void GGS_switchCaseListIR::setter_append (const GGS_uintlist inOperand0,
                                          const GGS_instructionListIR inOperand1,
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

void GGS_switchCaseListIR::setter_insertAtIndex (const GGS_uintlist inOperand0,
                                                 const GGS_instructionListIR inOperand1,
                                                 const GGS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchCaseListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_removeAtIndex (GGS_uintlist & outOperand0,
                                                 GGS_instructionListIR & outOperand1,
                                                 const GGS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
      outOperand0 = p->mObject.mProperty_mCaseIdentifierIndexes ;
      outOperand1 = p->mObject.mProperty_mCaseInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_popFirst (GGS_uintlist & outOperand0,
                                            GGS_instructionListIR & outOperand1,
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

void GGS_switchCaseListIR::setter_popLast (GGS_uintlist & outOperand0,
                                           GGS_instructionListIR & outOperand1,
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

void GGS_switchCaseListIR::method_first (GGS_uintlist & outOperand0,
                                         GGS_instructionListIR & outOperand1,
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

void GGS_switchCaseListIR::method_last (GGS_uintlist & outOperand0,
                                        GGS_instructionListIR & outOperand1,
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

GGS_switchCaseListIR GGS_switchCaseListIR::add_operation (const GGS_switchCaseListIR & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result = GGS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result = GGS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result = GGS_switchCaseListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::plusAssign_operation (const GGS_switchCaseListIR inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_setMCaseIdentifierIndexesAtIndex (GGS_uintlist inOperand,
                                                                    GGS_uint inIndex,
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

GGS_uintlist GGS_switchCaseListIR::getter_mCaseIdentifierIndexesAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  GGS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    result = p->mObject.mProperty_mCaseIdentifierIndexes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_setMCaseInstructionListAtIndex (GGS_instructionListIR inOperand,
                                                                  GGS_uint inIndex,
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

GGS_instructionListIR GGS_switchCaseListIR::getter_mCaseInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) attributes.ptr () ;
  GGS_instructionListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    result = p->mObject.mProperty_mCaseInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchCaseListIR::cEnumerator_switchCaseListIR (const GGS_switchCaseListIR & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element cEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uintlist cEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  const cCollectionElement_switchCaseListIR * p = (const cCollectionElement_switchCaseListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
  return p->mObject.mProperty_mCaseIdentifierIndexes ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR cEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_switchCaseListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchCaseListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchCaseListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_switchCaseListIR result ;
  const GGS_switchCaseListIR * p = (const GGS_switchCaseListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchCaseListIR *> (p)) {
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

ComparisonResult GGS_switchInstructionIR::objectCompare (const GGS_switchInstructionIR & inOperand) const {
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

GGS_switchInstructionIR::GGS_switchInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionIR GGS_switchInstructionIR::
init_21__21__21__21_ (const GGS_uint & in_mLabelIndex,
                      const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                      const GGS_objectIR & in_mSwitchExpression,
                      const GGS_switchCaseListIR & in_mCaseGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionIR (inCompiler COMMA_THERE)) ;
  object->switchInstructionIR_init_21__21__21__21_ (in_mLabelIndex, in_mSwitchExpressionGenerationList, in_mSwitchExpression, in_mCaseGenerationList, inCompiler) ;
  const GGS_switchInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::
switchInstructionIR_init_21__21__21__21_ (const GGS_uint & in_mLabelIndex,
                                          const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                          const GGS_objectIR & in_mSwitchExpression,
                                          const GGS_switchCaseListIR & in_mCaseGenerationList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mSwitchExpressionGenerationList = in_mSwitchExpressionGenerationList ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mCaseGenerationList = in_mCaseGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR::GGS_switchInstructionIR (const cPtr_switchInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR GGS_switchInstructionIR::class_func_new (const GGS_uint & in_mLabelIndex,
                                                                 const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                                 const GGS_objectIR & in_mSwitchExpression,
                                                                 const GGS_switchCaseListIR & in_mCaseGenerationList
                                                                 COMMA_LOCATION_ARGS) {
  GGS_switchInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionIR (in_mLabelIndex, in_mSwitchExpressionGenerationList, in_mSwitchExpression, in_mCaseGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_switchInstructionIR::readProperty_mLabelIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mLabelIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionIR::setProperty_mLabelIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_switchInstructionIR::readProperty_mSwitchExpressionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mSwitchExpressionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionIR::setProperty_mSwitchExpressionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpressionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_switchInstructionIR::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionIR::setProperty_mSwitchExpression (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchInstructionIR::readProperty_mCaseGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_switchCaseListIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mCaseGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionIR::setProperty_mCaseGenerationList (const GGS_switchCaseListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mCaseGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionIR::cPtr_switchInstructionIR (const GGS_uint & in_mLabelIndex,
                                                    const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                    const GGS_objectIR & in_mSwitchExpression,
                                                    const GGS_switchCaseListIR & in_mCaseGenerationList
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

const C_galgas_type_descriptor * GGS_switchInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR GGS_switchInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_switchInstructionIR result ;
  const GGS_switchInstructionIR * p = (const GGS_switchInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionIR_2E_weak::objectCompare (const GGS_switchInstructionIR_2E_weak & inOperand) const {
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

GGS_switchInstructionIR_2E_weak::GGS_switchInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak & GGS_switchInstructionIR_2E_weak::operator = (const GGS_switchInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak::GGS_switchInstructionIR_2E_weak (const GGS_switchInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak GGS_switchInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR GGS_switchInstructionIR_2E_weak::bang_switchInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionIR) ;
      result = GGS_switchInstructionIR ((cPtr_switchInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR_2E_weak ("switchInstructionIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak GGS_switchInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_switchInstructionIR_2E_weak result ;
  const GGS_switchInstructionIR_2E_weak * p = (const GGS_switchInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum accessInAssignmentAST
//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST::GGS_accessInAssignmentAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST GGS_accessInAssignmentAST::class_func_property (const GGS_lstring & inAssociatedValue0
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentAST result ;
  result.mEnum = Enumeration::enum_property ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_accessInAssignmentAST_2E_property (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST GGS_accessInAssignmentAST::class_func_arrayAccess (const GGS_expressionAST & inAssociatedValue0,
                                                                             const GGS_location & inAssociatedValue1,
                                                                             const GGS_bool & inAssociatedValue2
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentAST result ;
  result.mEnum = Enumeration::enum_arrayAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_accessInAssignmentAST_2E_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST::method_extractProperty (GGS_lstring & outAssociatedValue_name,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_property) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @accessInAssignmentAST.property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_accessInAssignmentAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST::method_extractArrayAccess (GGS_expressionAST & outAssociatedValue_index,
                                                           GGS_location & outAssociatedValue_endOfIndex,
                                                           GGS_bool & outAssociatedValue_checkIndexExpression,
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
    const auto ptr = (GGS_accessInAssignmentAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_property_3F_ GGS_accessInAssignmentAST::getter_getProperty (UNUSED_LOCATION_ARGS) const {
  GGS_accessInAssignmentAST_2E_property_3F_ result ;
  if (mEnum == Enumeration::enum_property) {
    const auto ptr = (const GGS_accessInAssignmentAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_accessInAssignmentAST_2E_property (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST::getAssociatedValuesFor_property (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_accessInAssignmentAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST_2E_arrayAccess_3F_ GGS_accessInAssignmentAST::getter_getArrayAccess (UNUSED_LOCATION_ARGS) const {
  GGS_accessInAssignmentAST_2E_arrayAccess_3F_ result ;
  if (mEnum == Enumeration::enum_arrayAccess) {
    const auto ptr = (const GGS_accessInAssignmentAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_accessInAssignmentAST_2E_arrayAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST::getAssociatedValuesFor_arrayAccess (GGS_expressionAST & out_index,
                                                                    GGS_location & out_endOfIndex,
                                                                    GGS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GGS_accessInAssignmentAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
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

GGS_bool GGS_accessInAssignmentAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_accessInAssignmentAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentAST::description (String & ioString,
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

const C_galgas_type_descriptor * GGS_accessInAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_accessInAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_accessInAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST GGS_accessInAssignmentAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_accessInAssignmentAST result ;
  const GGS_accessInAssignmentAST * p = (const GGS_accessInAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_accessInAssignmentAST *> (p)) {
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

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GGS_LValueOperandAST inObject,
                                                            GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
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
      GGS_lstring extractedValue_4205__0 ;
      GGS_LValueOperandAST extractedValue_4225_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_4205__0, extractedValue_4225_next_1) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4225_next_1, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 108)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_4327_indexExpression_0 ;
      GGS_location extractedValue_4344__1 ;
      GGS_bool extractedValue_4344__2 ;
      GGS_LValueOperandAST extractedValue_4364_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_4327_indexExpression_0, extractedValue_4344__1, extractedValue_4344__2, extractedValue_4364_next_3) ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4327_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 110)) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4364_next_3, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 111)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum registerGroupIndexAST
//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST::GGS_registerGroupIndexAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST GGS_registerGroupIndexAST::class_func_noIndex (UNUSED_LOCATION_ARGS) {
  GGS_registerGroupIndexAST result ;
  result.mEnum = Enumeration::enum_noIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST GGS_registerGroupIndexAST::class_func_index (const GGS_expressionAST & inAssociatedValue0,
                                                                       const GGS_location & inAssociatedValue1,
                                                                       const GGS_bool & inAssociatedValue2
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupIndexAST result ;
  result.mEnum = Enumeration::enum_index ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_registerGroupIndexAST_2E_index (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST::method_extractIndex (GGS_expressionAST & outAssociatedValue_index,
                                                     GGS_location & outAssociatedValue_endOfIndex,
                                                     GGS_bool & outAssociatedValue_checkIndexExpression,
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
    const auto ptr = (GGS_registerGroupIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index_3F_ GGS_registerGroupIndexAST::getter_getIndex (UNUSED_LOCATION_ARGS) const {
  GGS_registerGroupIndexAST_2E_index_3F_ result ;
  if (mEnum == Enumeration::enum_index) {
    const auto ptr = (const GGS_registerGroupIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_registerGroupIndexAST_2E_index (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST::getAssociatedValuesFor_index (GGS_expressionAST & out_index,
                                                              GGS_location & out_endOfIndex,
                                                              GGS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GGS_registerGroupIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
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

GGS_bool GGS_registerGroupIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerGroupIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_index == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST::description (String & ioString,
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

const C_galgas_type_descriptor * GGS_registerGroupIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupIndexAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupIndexAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST GGS_registerGroupIndexAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_registerGroupIndexAST result ;
  const GGS_registerGroupIndexAST * p = (const GGS_registerGroupIndexAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum registerIndexAST
//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST::GGS_registerIndexAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST GGS_registerIndexAST::class_func_noIndex (UNUSED_LOCATION_ARGS) {
  GGS_registerIndexAST result ;
  result.mEnum = Enumeration::enum_noIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST GGS_registerIndexAST::class_func_index (const GGS_expressionAST & inAssociatedValue0,
                                                             const GGS_location & inAssociatedValue1,
                                                             const GGS_bool & inAssociatedValue2
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerIndexAST result ;
  result.mEnum = Enumeration::enum_index ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_registerIndexAST_2E_index (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST::method_extractIndex (GGS_expressionAST & outAssociatedValue_index,
                                                GGS_location & outAssociatedValue_endOfIndex,
                                                GGS_bool & outAssociatedValue_checkIndexExpression,
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
    const auto ptr = (GGS_registerIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index_3F_ GGS_registerIndexAST::getter_getIndex (UNUSED_LOCATION_ARGS) const {
  GGS_registerIndexAST_2E_index_3F_ result ;
  if (mEnum == Enumeration::enum_index) {
    const auto ptr = (const GGS_registerIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_registerIndexAST_2E_index (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST::getAssociatedValuesFor_index (GGS_expressionAST & out_index,
                                                         GGS_location & out_endOfIndex,
                                                         GGS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GGS_registerIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
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

GGS_bool GGS_registerIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_index == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST::description (String & ioString,
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

const C_galgas_type_descriptor * GGS_registerIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIndexAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerIndexAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST GGS_registerIndexAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_registerIndexAST result ;
  const GGS_registerIndexAST * p = (const GGS_registerIndexAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerIndexAST *> (p)) {
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
      GGS_lstring extractedValue_847__0 ;
      temp_0.getAssociatedValuesFor_input (extractedValue_847__0) ;
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
    {
      GGS_bool extractedValue_887__0 ;
      GGS_lstring extractedValue_889__1 ;
      GGS_lstring extractedValue_891__2 ;
      temp_0.getAssociatedValuesFor_inputWithType (extractedValue_887__0, extractedValue_889__1, extractedValue_891__2) ;
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
    {
      GGS_expressionAST extractedValue_924__0 ;
      GGS_location extractedValue_926__1 ;
      temp_0.getAssociatedValuesFor_output (extractedValue_924__0, extractedValue_926__1) ;
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
    {
      GGS_lstring extractedValue_964__0 ;
      temp_0.getAssociatedValuesFor_outputInput (extractedValue_964__0) ;
      result_result = GGS_string ("\?!") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
    {
      GGS_lstring extractedValue_1015__0 ;
      temp_0.getAssociatedValuesFor_outputInputSelfVariable (extractedValue_1015__0) ;
      result_result = GGS_string ("\?!") ;
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

GGS_lstring extensionGetter_mangledName (const GGS_effectiveArgumentListAST & inObject,
                                         const GGS_string & constinArgument_inReceiverTypeName,
                                         const GGS_lstring & constinArgument_inFunctionName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1591 = GGS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_1591.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)) ;
    }
  }
  var_s_1591.plusAssign_operation(constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  const GGS_effectiveArgumentListAST temp_1 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_1744 (temp_1, EnumerationOrder::up) ;
  while (enumerator_1744.hasCurrentObject ()) {
    var_s_1591.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1744.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (enumerator_1744.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)) ;
    enumerator_1744.gotoNextObject () ;
  }
  var_s_1591.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 46)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1591, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR llvmName'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_llvmName (const GGS_objectIR & inObject,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 29)), GGS_string ("<<@objectIR llvmName void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 29)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_1302__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_1302__0) ;
      result_result = GGS_string ("zeroinitializer") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_1347__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_1347__0) ;
      result_result = GGS_string ("null") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_1391__0 ;
      GGS_bigint extractedValue_1401_value_1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_1391__0, extractedValue_1401_value_1) ;
      result_result = extractedValue_1401_value_1.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 32)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_1457__0 ;
      GGS_string extractedValue_1459_llvmName_1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_1457__0, extractedValue_1459_llvmName_1) ;
      result_result = extractedValue_1459_llvmName_1 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_1507__0 ;
      GGS_string extractedValue_1509_llvmName_1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_1507__0, extractedValue_1509_llvmName_1) ;
      result_result = extractedValue_1509_llvmName_1 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_1566__0 ;
      GGS_sortedOperandIRList extractedValue_1589_inValues_1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_1566__0, extractedValue_1589_inValues_1) ;
      result_result = GGS_string ("{") ;
      cEnumerator_sortedOperandIRList enumerator_1636 (extractedValue_1589_inValues_1, EnumerationOrder::up) ;
      while (enumerator_1636.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1636.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)).add_operation (extensionGetter_llvmName (enumerator_1636.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)) ;
        if (enumerator_1636.hasNextObject ()) {
          result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 39)) ;
        }
        enumerator_1636.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 41)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_1808__0 ;
      GGS_operandIRList extractedValue_1808__1 ;
      GGS_uint extractedValue_1810_index_2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_1808__0, extractedValue_1808__1, extractedValue_1810_index_2) ;
      result_result = GGS_string ("@gconst.").add_operation (extractedValue_1810_index_2.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 43)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_1889__0 ;
      GGS_uint extractedValue_1889__1 ;
      GGS_objectIR extractedValue_1889__2 ;
      GGS_uint extractedValue_1891_index_3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_1889__0, extractedValue_1889__1, extractedValue_1889__2, extractedValue_1891_index_3) ;
      result_result = GGS_string ("@gconst.").add_operation (extractedValue_1891_index_3.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 45)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_1961_size_0 ;
      GGS_uint extractedValue_1972_index_1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_1961_size_0, extractedValue_1972_index_1) ;
      GGS_string var_sizeStr_1989 = extractedValue_1961_size_0.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 47)) ;
      result_result = GGS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_1989, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (GGS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (var_sizeStr_1989, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)).add_operation (GGS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 48)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_1972_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)).add_operation (GGS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_2209__0 ;
      GGS_uint extractedValue_2209__1 ;
      GGS_objectIR extractedValue_2209__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_2209__0, extractedValue_2209__1, extractedValue_2209__2) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 51)), GGS_string ("<< ERROR @objectIR llvmName llvmArrayRepeatedDynamicValue >>\n"), fixItArray2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 51)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_2341__0 ;
      GGS_operandIRList extractedValue_2341__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_2341__0, extractedValue_2341__1) ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 53)), GGS_string ("<< ERROR @objectIR llvmName llvmArrayDynamicValues >>\n"), fixItArray3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 53)) ;
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

GGS_string extensionGetter_llvmValue (const GGS_objectIR & inObject,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 61)), GGS_string ("<<@objectIR llvmName void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 61)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_2680__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_2680__0) ;
      result_result = GGS_string ("zeroinitializer") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_2725__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_2725__0) ;
      result_result = GGS_string ("null") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_2769__0 ;
      GGS_bigint extractedValue_2779_value_1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_2769__0, extractedValue_2779_value_1) ;
      result_result = extractedValue_2779_value_1.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 64)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_2835__0 ;
      GGS_string extractedValue_2837_llvmName_1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_2835__0, extractedValue_2837_llvmName_1) ;
      result_result = extractedValue_2837_llvmName_1 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_2885__0 ;
      GGS_string extractedValue_2887_llvmName_1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_2885__0, extractedValue_2887_llvmName_1) ;
      result_result = extractedValue_2887_llvmName_1 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_2946_size_0 ;
      GGS_uint extractedValue_2957_index_1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_2946_size_0, extractedValue_2957_index_1) ;
      GGS_string var_sizeStr_2974 = extractedValue_2946_size_0.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 68)) ;
      result_result = GGS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_2974, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (GGS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (var_sizeStr_2974, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)).add_operation (GGS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 69)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_2957_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)).add_operation (GGS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_3182__0 ;
      GGS_sortedOperandIRList extractedValue_3205_inValues_1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_3182__0, extractedValue_3205_inValues_1) ;
      result_result = GGS_string ("{") ;
      cEnumerator_sortedOperandIRList enumerator_3252 (extractedValue_3205_inValues_1, EnumerationOrder::up) ;
      while (enumerator_3252.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_3252.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)).add_operation (extensionGetter_llvmValue (enumerator_3252.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)) ;
        if (enumerator_3252.hasNextObject ()) {
          result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 75)) ;
        }
        enumerator_3252.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 77)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_3424__0 ;
      GGS_operandIRList extractedValue_3441_inValues_1 ;
      GGS_uint extractedValue_3450__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_3424__0, extractedValue_3441_inValues_1, extractedValue_3450__2) ;
      result_result = GGS_string ("[") ;
      cEnumerator_operandIRList enumerator_3481 (extractedValue_3441_inValues_1, EnumerationOrder::up) ;
      while (enumerator_3481.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_3481.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)).add_operation (extensionGetter_llvmValue (enumerator_3481.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)) ;
        if (enumerator_3481.hasNextObject ()) {
          result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 82)) ;
        }
        enumerator_3481.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GGS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 84)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_3667__0 ;
      GGS_uint extractedValue_3669_size_1 ;
      GGS_objectIR extractedValue_3674_value_2 ;
      GGS_uint extractedValue_3680__3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_3667__0, extractedValue_3669_size_1, extractedValue_3674_value_2, extractedValue_3680__3) ;
      result_result = GGS_string ("[") ;
      cEnumerator_range enumerator_3721 (GGS_range (GGS_uint (uint32_t (0U)), extractedValue_3669_size_1.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 87))), EnumerationOrder::up) ;
      while (enumerator_3721.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (extractedValue_3674_value_2, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)).add_operation (extensionGetter_llvmValue (extractedValue_3674_value_2, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)) ;
        if (enumerator_3721.hasNextObject ()) {
          result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 89)) ;
        }
        enumerator_3721.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GGS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 91)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_3886__0 ;
      GGS_uint extractedValue_3886__1 ;
      GGS_objectIR extractedValue_3886__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_3886__0, extractedValue_3886__1, extractedValue_3886__2) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 93)), GGS_string ("<< ERROR @objectIR llvmValue llvmArrayRepeatedDynamicValue >>\n"), fixItArray2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 93)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_4019__0 ;
      GGS_operandIRList extractedValue_4019__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_4019__0, extractedValue_4019__1) ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 95)), GGS_string ("<< ERROR @objectIR llvmValue llvmArrayRepeatedDynamicValue >>\n"), fixItArray3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 95)) ;
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

GGS_omnibusType extensionGetter_type (const GGS_objectIR & inObject,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  const GGS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 103)), GGS_string ("<<@objectIR type void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 103)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_4367_type_0 ;
      GGS_string extractedValue_4372__1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_4367_type_0, extractedValue_4372__1) ;
      result_result = extractedValue_4367_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_4404_type_0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_4404_type_0) ;
      result_result = extractedValue_4404_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_4439_type_0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_4439_type_0) ;
      result_result = extractedValue_4439_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_4484_type_0 ;
      GGS_bigint extractedValue_4489__1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_4484_type_0, extractedValue_4489__1) ;
      result_result = extractedValue_4484_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_4531_type_0 ;
      GGS_string extractedValue_4536__1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_4531_type_0, extractedValue_4536__1) ;
      result_result = extractedValue_4531_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_4582_type_0 ;
      GGS_sortedOperandIRList extractedValue_4587__1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_4582_type_0, extractedValue_4587__1) ;
      result_result = extractedValue_4582_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_4636_type_0 ;
      GGS_operandIRList extractedValue_4641__1 ;
      GGS_uint extractedValue_4643__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_4636_type_0, extractedValue_4641__1, extractedValue_4643__2) ;
      result_result = extractedValue_4636_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_4685__0 ;
      GGS_uint extractedValue_4687__1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_4685__0, extractedValue_4687__1) ;
      result_result = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 111)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_4759_type_0 ;
      GGS_uint extractedValue_4765__1 ;
      GGS_objectIR extractedValue_4765__2 ;
      GGS_uint extractedValue_4765__3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_4759_type_0, extractedValue_4765__1, extractedValue_4765__2, extractedValue_4765__3) ;
      result_result = extractedValue_4759_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_4822_type_0 ;
      GGS_uint extractedValue_4828__1 ;
      GGS_objectIR extractedValue_4828__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_4822_type_0, extractedValue_4828__1, extractedValue_4828__2) ;
      result_result = extractedValue_4822_type_0 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_4878_type_0 ;
      GGS_operandIRList extractedValue_4883__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_4878_type_0, extractedValue_4883__1) ;
      result_result = extractedValue_4878_type_0 ;
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

GGS_string extensionGetter_llvmTypeName (const GGS_objectIR & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_objectIR temp_0 = inObject ;
  result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 121)).ptr (), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 121)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR omnibusTypeDescriptionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_omnibusTypeDescriptionName (const GGS_objectIR & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_objectIR temp_0 = inObject ;
  result_result = extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 127)).readProperty_omnibusTypeDescriptionName () ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR withType'
//
//--------------------------------------------------------------------------------------------------

GGS_objectIR extensionGetter_withType (const GGS_objectIR & inObject,
                                       const GGS_omnibusType & constinArgument_inType,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result_result ; // Returned variable
  const GGS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 135)), GGS_string ("<<@objectIR withType void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 135)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_5577__0 ;
      GGS_string extractedValue_5579_llvmName_1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_5577__0, extractedValue_5579_llvmName_1) ;
      result_result = GGS_objectIR::class_func_reference (constinArgument_inType, extractedValue_5579_llvmName_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 137)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_5662__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_5662__0) ;
      result_result = GGS_objectIR::class_func_null (constinArgument_inType  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 139)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_5725__0 ;
      GGS_bigint extractedValue_5735_value_1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_5725__0, extractedValue_5735_value_1) ;
      result_result = GGS_objectIR::class_func_literalInteger (constinArgument_inType, extractedValue_5735_value_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 141)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_5826__0 ;
      GGS_string extractedValue_5828_llvmName_1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_5826__0, extractedValue_5828_llvmName_1) ;
      result_result = GGS_objectIR::class_func_llvmNamedValue (constinArgument_inType, extractedValue_5828_llvmName_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 143)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_5917__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_5917__0) ;
      result_result = GGS_objectIR::class_func_zero (constinArgument_inType  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 145)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_5984__0 ;
      GGS_sortedOperandIRList extractedValue_6007_values_1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_5984__0, extractedValue_6007_values_1) ;
      result_result = GGS_objectIR::class_func_llvmStructureValue (constinArgument_inType, extractedValue_6007_values_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 147)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_6111_size_0 ;
      GGS_uint extractedValue_6122_index_1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_6111_size_0, extractedValue_6122_index_1) ;
      result_result = GGS_objectIR::class_func_literalString (extractedValue_6111_size_0, extractedValue_6122_index_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 149)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_6228__0 ;
      GGS_uint extractedValue_6230_size_1 ;
      GGS_objectIR extractedValue_6235_value_2 ;
      GGS_uint extractedValue_6241_index_3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_6228__0, extractedValue_6230_size_1, extractedValue_6235_value_2, extractedValue_6241_index_3) ;
      result_result = GGS_objectIR::class_func_llvmArrayRepeatedStaticValue (constinArgument_inType, extractedValue_6230_size_1, extractedValue_6235_value_2, extractedValue_6241_index_3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 151)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_6390__0 ;
      GGS_uint extractedValue_6392_size_1 ;
      GGS_objectIR extractedValue_6397_value_2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_6390__0, extractedValue_6392_size_1, extractedValue_6397_value_2) ;
      result_result = GGS_objectIR::class_func_llvmArrayRepeatedDynamicValue (constinArgument_inType, extractedValue_6392_size_1, extractedValue_6397_value_2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 153)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_6526__0 ;
      GGS_operandIRList extractedValue_6543_values_1 ;
      GGS_uint extractedValue_6550_index_2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_6526__0, extractedValue_6543_values_1, extractedValue_6550_index_2) ;
      result_result = GGS_objectIR::class_func_llvmArrayStaticValues (constinArgument_inType, extractedValue_6543_values_1, extractedValue_6550_index_2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 155)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_6671__0 ;
      GGS_operandIRList extractedValue_6688_values_1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_6671__0, extractedValue_6688_values_1) ;
      result_result = GGS_objectIR::class_func_llvmArrayDynamicValues (constinArgument_inType, extractedValue_6688_values_1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 157)) ;
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

GGS_string extensionGetter_name (const GGS_objectIR & inObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 165)), GGS_string ("<<@objectIR name void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 165)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_7009__0 ;
      GGS_string extractedValue_7011_llvmName_1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_7009__0, extractedValue_7011_llvmName_1) ;
      result_result = extractedValue_7011_llvmName_1 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_7054__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_7054__0) ;
      result_result = GGS_string ("zeroinitializer") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_7099__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_7099__0) ;
      result_result = GGS_string ("null") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_7143__0 ;
      GGS_bigint extractedValue_7153_value_1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_7143__0, extractedValue_7153_value_1) ;
      result_result = extractedValue_7153_value_1.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 169)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_7209__0 ;
      GGS_string extractedValue_7211_name_1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_7209__0, extractedValue_7211_name_1) ;
      result_result = extractedValue_7211_name_1 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_7260__0 ;
      GGS_sortedOperandIRList extractedValue_7262__1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_7260__0, extractedValue_7262__1) ;
      result_result = GGS_string ("{...}") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_7315__0 ;
      GGS_operandIRList extractedValue_7315__1 ;
      GGS_uint extractedValue_7315__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_7315__0, extractedValue_7315__1, extractedValue_7315__2) ;
      result_result = GGS_string ("[...]") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_7369__0 ;
      GGS_operandIRList extractedValue_7369__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_7369__0, extractedValue_7369__1) ;
      result_result = GGS_string ("[...]") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_7429__0 ;
      GGS_uint extractedValue_7429__1 ;
      GGS_objectIR extractedValue_7429__2 ;
      GGS_uint extractedValue_7429__3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_7429__0, extractedValue_7429__1, extractedValue_7429__2, extractedValue_7429__3) ;
      result_result = GGS_string ("[...]") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_7490__0 ;
      GGS_uint extractedValue_7490__1 ;
      GGS_objectIR extractedValue_7490__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_7490__0, extractedValue_7490__1, extractedValue_7490__2) ;
      result_result = GGS_string ("[...]") ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_7541_size_0 ;
      GGS_uint extractedValue_7552_index_1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_7541_size_0, extractedValue_7552_index_1) ;
      GGS_string var_sizeStr_7569 = extractedValue_7541_size_0.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 177)) ;
      result_result = GGS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_7569, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (GGS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (var_sizeStr_7569, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (GGS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_7552_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)).add_operation (GGS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)) ;
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

GGS_bool extensionGetter_isStatic (const GGS_objectIR & inObject,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 187)), GGS_string ("<<@objectIR isStatic void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 187)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_7998__0 ;
      GGS_string extractedValue_7999__1 ;
      temp_0.getAssociatedValuesFor_reference (extractedValue_7998__0, extractedValue_7999__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_8032__0 ;
      temp_0.getAssociatedValuesFor_zero (extractedValue_8032__0) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_8064__0 ;
      temp_0.getAssociatedValuesFor_null (extractedValue_8064__0) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_8106__0 ;
      GGS_bigint extractedValue_8108__1 ;
      temp_0.getAssociatedValuesFor_literalInteger (extractedValue_8106__0, extractedValue_8108__1) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_8150__0 ;
      GGS_string extractedValue_8152__1 ;
      temp_0.getAssociatedValuesFor_llvmNamedValue (extractedValue_8150__0, extractedValue_8152__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_8199__0 ;
      GGS_sortedOperandIRList extractedValue_8201__1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_8199__0, extractedValue_8201__1) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_8251__0 ;
      GGS_operandIRList extractedValue_8251__1 ;
      GGS_uint extractedValue_8251__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_8251__0, extractedValue_8251__1, extractedValue_8251__2) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_8302__0 ;
      GGS_operandIRList extractedValue_8302__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_8302__0, extractedValue_8302__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_8345__0 ;
      GGS_uint extractedValue_8347__1 ;
      temp_0.getAssociatedValuesFor_literalString (extractedValue_8345__0, extractedValue_8347__1) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_8404__0 ;
      GGS_uint extractedValue_8404__1 ;
      GGS_objectIR extractedValue_8404__2 ;
      GGS_uint extractedValue_8404__3 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_8404__0, extractedValue_8404__1, extractedValue_8404__2, extractedValue_8404__3) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_8462__0 ;
      GGS_uint extractedValue_8462__1 ;
      GGS_objectIR extractedValue_8462__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_8462__0, extractedValue_8462__1, extractedValue_8462__2) ;
      result_result = GGS_bool (false) ;
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
  public: GGS_routineListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineListIR (const GGS_abstractRoutineIR & in_mRoutine
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineListIR (const GGS_routineListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_routineListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutine" ":") ;
  mObject.mProperty_mRoutine.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR::GGS_routineListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR::GGS_routineListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_routineListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_routineListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::enterElement (const GGS_routineListIR_2E_element & inValue,
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

GGS_routineListIR GGS_routineListIR::class_func_listWithValue (const GGS_abstractRoutineIR & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  GGS_routineListIR result ;
  if (inOperand0.isValid ()) {
    result = GGS_routineListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_routineListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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

void GGS_routineListIR::addAssign_operation (const GGS_abstractRoutineIR & inOperand0
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

void GGS_routineListIR::setter_append (const GGS_abstractRoutineIR inOperand0,
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

void GGS_routineListIR::setter_insertAtIndex (const GGS_abstractRoutineIR inOperand0,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::setter_removeAtIndex (GGS_abstractRoutineIR & outOperand0,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineListIR) ;
      outOperand0 = p->mObject.mProperty_mRoutine ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::setter_popFirst (GGS_abstractRoutineIR & outOperand0,
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

void GGS_routineListIR::setter_popLast (GGS_abstractRoutineIR & outOperand0,
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

void GGS_routineListIR::method_first (GGS_abstractRoutineIR & outOperand0,
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

void GGS_routineListIR::method_last (GGS_abstractRoutineIR & outOperand0,
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

GGS_routineListIR GGS_routineListIR::add_operation (const GGS_routineListIR & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineListIR result = GGS_routineListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineListIR result = GGS_routineListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR GGS_routineListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineListIR result = GGS_routineListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::plusAssign_operation (const GGS_routineListIR inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineListIR::setter_setMRoutineAtIndex (GGS_abstractRoutineIR inOperand,
                                                   GGS_uint inIndex,
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

GGS_abstractRoutineIR GGS_routineListIR::getter_mRoutineAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  GGS_abstractRoutineIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    result = p->mObject.mProperty_mRoutine ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineListIR::cEnumerator_routineListIR (const GGS_routineListIR & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineListIR_2E_element cEnumerator_routineListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineListIR * p = (const cCollectionElement_routineListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR cEnumerator_routineListIR::current_mRoutine (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_routineListIR::staticTypeDescriptor (void) const {
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
  cEnumerator_routineListIR enumerator_3794 (temp_0, EnumerationOrder::up) ;
  while (enumerator_3794.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GGS_string ("Routine ").add_operation (enumerator_3794.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex = GGS_uint (uint32_t (0U)) ;
    callExtensionMethod_llvmCodeGeneration ((cPtr_abstractRoutineIR *) enumerator_3794.current (HERE).readProperty_mRoutine ().ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 111)) ;
    enumerator_3794.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendNOP'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendNOP (GGS_instructionListIR & ioObject,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_nopIR::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 3)) ;
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

ComparisonResult GGS_nopIR::objectCompare (const GGS_nopIR & inOperand) const {
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

GGS_nopIR::GGS_nopIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nopIR GGS_nopIR::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_nopIR * object = nullptr ;
  macroMyNew (object, cPtr_nopIR (inCompiler COMMA_THERE)) ;
  object->nopIR_init (inCompiler) ;
  const GGS_nopIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nopIR::
nopIR_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nopIR::GGS_nopIR (const cPtr_nopIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nopIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_nopIR GGS_nopIR::class_func_new (LOCATION_ARGS) {
  GGS_nopIR result ;
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

const C_galgas_type_descriptor * GGS_nopIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nopIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nopIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nopIR GGS_nopIR::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_nopIR result ;
  const GGS_nopIR * p = (const GGS_nopIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nopIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nopIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nopIR_2E_weak::objectCompare (const GGS_nopIR_2E_weak & inOperand) const {
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

GGS_nopIR_2E_weak::GGS_nopIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nopIR_2E_weak & GGS_nopIR_2E_weak::operator = (const GGS_nopIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nopIR_2E_weak::GGS_nopIR_2E_weak (const GGS_nopIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nopIR_2E_weak GGS_nopIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nopIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nopIR GGS_nopIR_2E_weak::bang_nopIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nopIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nopIR) ;
      result = GGS_nopIR ((cPtr_nopIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nopIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR_2E_weak ("nopIR.weak",
                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nopIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nopIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nopIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nopIR_2E_weak GGS_nopIR_2E_weak::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_nopIR_2E_weak result ;
  const GGS_nopIR_2E_weak * p = (const GGS_nopIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nopIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nopIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendInstructionAsFreeString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendInstructionAsFreeString (GGS_instructionListIR & ioObject,
                                                    const GGS_string constinArgument_inString,
                                                    const GGS_stringset constinArgument_inInvokedFunctionSet,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_freeStringIR::init_21__21_ (constinArgument_inString, constinArgument_inInvokedFunctionSet, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 4)) ;
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

ComparisonResult GGS_freeStringIR::objectCompare (const GGS_freeStringIR & inOperand) const {
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

GGS_freeStringIR::GGS_freeStringIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_freeStringIR GGS_freeStringIR::
init_21__21_ (const GGS_string & in_mString,
              const GGS_stringset & in_mInvokedFunctionSet,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_freeStringIR * object = nullptr ;
  macroMyNew (object, cPtr_freeStringIR (inCompiler COMMA_THERE)) ;
  object->freeStringIR_init_21__21_ (in_mString, in_mInvokedFunctionSet, inCompiler) ;
  const GGS_freeStringIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::
freeStringIR_init_21__21_ (const GGS_string & in_mString,
                           const GGS_stringset & in_mInvokedFunctionSet,
                           Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR::GGS_freeStringIR (const cPtr_freeStringIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeStringIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_freeStringIR GGS_freeStringIR::class_func_new (const GGS_string & in_mString,
                                                   const GGS_stringset & in_mInvokedFunctionSet
                                                   COMMA_LOCATION_ARGS) {
  GGS_freeStringIR result ;
  macroMyNew (result.mObjectPtr, cPtr_freeStringIR (in_mString, in_mInvokedFunctionSet COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_freeStringIR::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_freeStringIR::setProperty_mString (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_freeStringIR::readProperty_mInvokedFunctionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mInvokedFunctionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_freeStringIR::setProperty_mInvokedFunctionSet (const GGS_stringset & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mInvokedFunctionSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @freeStringIR class
//--------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (const GGS_string & in_mString,
                                      const GGS_stringset & in_mInvokedFunctionSet
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

const C_galgas_type_descriptor * GGS_freeStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeStringIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR GGS_freeStringIR::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_freeStringIR result ;
  const GGS_freeStringIR * p = (const GGS_freeStringIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeStringIR_2E_weak::objectCompare (const GGS_freeStringIR_2E_weak & inOperand) const {
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

GGS_freeStringIR_2E_weak::GGS_freeStringIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR_2E_weak & GGS_freeStringIR_2E_weak::operator = (const GGS_freeStringIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR_2E_weak::GGS_freeStringIR_2E_weak (const GGS_freeStringIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_freeStringIR_2E_weak GGS_freeStringIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_freeStringIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR GGS_freeStringIR_2E_weak::bang_freeStringIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_freeStringIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeStringIR) ;
      result = GGS_freeStringIR ((cPtr_freeStringIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @freeStringIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR_2E_weak ("freeStringIR.weak",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_freeStringIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeStringIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeStringIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR_2E_weak GGS_freeStringIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_freeStringIR_2E_weak result ;
  const GGS_freeStringIR_2E_weak * p = (const GGS_freeStringIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeStringIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendExtend'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (GGS_instructionListIR & ioObject,
                                   const GGS_objectIR constinArgument_inResult,
                                   const GGS_objectIR constinArgument_inSource,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_extendIR::init_21__21_ (constinArgument_inResult, constinArgument_inSource, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6)) ;
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

ComparisonResult GGS_extendIR::objectCompare (const GGS_extendIR & inOperand) const {
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

GGS_extendIR::GGS_extendIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extendIR GGS_extendIR::
init_21__21_ (const GGS_objectIR & in_mResult,
              const GGS_objectIR & in_mSource,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_extendIR * object = nullptr ;
  macroMyNew (object, cPtr_extendIR (inCompiler COMMA_THERE)) ;
  object->extendIR_init_21__21_ (in_mResult, in_mSource, inCompiler) ;
  const GGS_extendIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extendIR::
extendIR_init_21__21_ (const GGS_objectIR & in_mResult,
                       const GGS_objectIR & in_mSource,
                       Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendIR::GGS_extendIR (const cPtr_extendIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_extendIR GGS_extendIR::class_func_new (const GGS_objectIR & in_mResult,
                                           const GGS_objectIR & in_mSource
                                           COMMA_LOCATION_ARGS) {
  GGS_extendIR result ;
  macroMyNew (result.mObjectPtr, cPtr_extendIR (in_mResult, in_mSource COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_extendIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendIR::setProperty_mResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_extendIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendIR::setProperty_mSource (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extendIR class
//--------------------------------------------------------------------------------------------------

cPtr_extendIR::cPtr_extendIR (const GGS_objectIR & in_mResult,
                              const GGS_objectIR & in_mSource
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

const C_galgas_type_descriptor * GGS_extendIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendIR GGS_extendIR::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_extendIR result ;
  const GGS_extendIR * p = (const GGS_extendIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extendIR_2E_weak::objectCompare (const GGS_extendIR_2E_weak & inOperand) const {
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

GGS_extendIR_2E_weak::GGS_extendIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendIR_2E_weak & GGS_extendIR_2E_weak::operator = (const GGS_extendIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendIR_2E_weak::GGS_extendIR_2E_weak (const GGS_extendIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extendIR_2E_weak GGS_extendIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extendIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendIR GGS_extendIR_2E_weak::bang_extendIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extendIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extendIR) ;
      result = GGS_extendIR ((cPtr_extendIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR_2E_weak ("extendIR.weak",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendIR_2E_weak GGS_extendIR_2E_weak::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_extendIR_2E_weak result ;
  const GGS_extendIR_2E_weak * p = (const GGS_extendIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendTrunc'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendTrunc (GGS_instructionListIR & ioObject,
                                  const GGS_omnibusType constinArgument_inResultType,
                                  GGS_objectIR & ioArgument_ioObject,
                                  GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioObject.getter_isLiteralInteger (SOURCE_FILE ("intermediate-trunc.galgas", 8)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_bigint var_value_342 ;
      GGS_omnibusType joker_315 ; // Joker input parameter
      ioArgument_ioObject.method_extractLiteralInteger (joker_315, var_value_342, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 9)) ;
      ioArgument_ioObject = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_value_342  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 10)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_objectIR var_result_477 ;
    {
    routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, var_result_477, inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 12)) ;
    }
    ioObject.addAssign_operation (GGS_truncIR::init_21__21_ (var_result_477, ioArgument_ioObject, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 13)) ;
    ioArgument_ioObject = var_result_477 ;
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

ComparisonResult GGS_truncIR::objectCompare (const GGS_truncIR & inOperand) const {
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

GGS_truncIR::GGS_truncIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_truncIR GGS_truncIR::
init_21__21_ (const GGS_objectIR & in_mResult,
              const GGS_objectIR & in_mSource,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_truncIR * object = nullptr ;
  macroMyNew (object, cPtr_truncIR (inCompiler COMMA_THERE)) ;
  object->truncIR_init_21__21_ (in_mResult, in_mSource, inCompiler) ;
  const GGS_truncIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_truncIR::
truncIR_init_21__21_ (const GGS_objectIR & in_mResult,
                      const GGS_objectIR & in_mSource,
                      Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncIR::GGS_truncIR (const cPtr_truncIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_truncIR GGS_truncIR::class_func_new (const GGS_objectIR & in_mResult,
                                         const GGS_objectIR & in_mSource
                                         COMMA_LOCATION_ARGS) {
  GGS_truncIR result ;
  macroMyNew (result.mObjectPtr, cPtr_truncIR (in_mResult, in_mSource COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_truncIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncIR::setProperty_mResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_truncIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncIR::setProperty_mSource (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @truncIR class
//--------------------------------------------------------------------------------------------------

cPtr_truncIR::cPtr_truncIR (const GGS_objectIR & in_mResult,
                            const GGS_objectIR & in_mSource
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

const C_galgas_type_descriptor * GGS_truncIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_truncIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_truncIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncIR GGS_truncIR::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_truncIR result ;
  const GGS_truncIR * p = (const GGS_truncIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_truncIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_truncIR_2E_weak::objectCompare (const GGS_truncIR_2E_weak & inOperand) const {
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

GGS_truncIR_2E_weak::GGS_truncIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_truncIR_2E_weak & GGS_truncIR_2E_weak::operator = (const GGS_truncIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncIR_2E_weak::GGS_truncIR_2E_weak (const GGS_truncIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_truncIR_2E_weak GGS_truncIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_truncIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncIR GGS_truncIR_2E_weak::bang_truncIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_truncIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_truncIR) ;
      result = GGS_truncIR ((cPtr_truncIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @truncIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR_2E_weak ("truncIR.weak",
                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_truncIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_truncIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_truncIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncIR_2E_weak GGS_truncIR_2E_weak::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_truncIR_2E_weak result ;
  const GGS_truncIR_2E_weak * p = (const GGS_truncIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_truncIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendBoolToUInt'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBoolToUInt (GGS_instructionListIR & ioObject,
                                       const GGS_objectIR constinArgument_inUIntResult,
                                       const GGS_objectIR constinArgument_inBoolSource,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_boolToUIntIR::init_21__21_ (constinArgument_inUIntResult, constinArgument_inBoolSource, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 6)) ;
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

ComparisonResult GGS_boolToUIntIR::objectCompare (const GGS_boolToUIntIR & inOperand) const {
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

GGS_boolToUIntIR::GGS_boolToUIntIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolToUIntIR GGS_boolToUIntIR::
init_21__21_ (const GGS_objectIR & in_mUIntResult,
              const GGS_objectIR & in_mBoolSource,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_boolToUIntIR * object = nullptr ;
  macroMyNew (object, cPtr_boolToUIntIR (inCompiler COMMA_THERE)) ;
  object->boolToUIntIR_init_21__21_ (in_mUIntResult, in_mBoolSource, inCompiler) ;
  const GGS_boolToUIntIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolToUIntIR::
boolToUIntIR_init_21__21_ (const GGS_objectIR & in_mUIntResult,
                           const GGS_objectIR & in_mBoolSource,
                           Compiler * /* inCompiler */) {
  mProperty_mUIntResult = in_mUIntResult ;
  mProperty_mBoolSource = in_mBoolSource ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolToUIntIR::GGS_boolToUIntIR (const cPtr_boolToUIntIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolToUIntIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_boolToUIntIR GGS_boolToUIntIR::class_func_new (const GGS_objectIR & in_mUIntResult,
                                                   const GGS_objectIR & in_mBoolSource
                                                   COMMA_LOCATION_ARGS) {
  GGS_boolToUIntIR result ;
  macroMyNew (result.mObjectPtr, cPtr_boolToUIntIR (in_mUIntResult, in_mBoolSource COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_boolToUIntIR::readProperty_mUIntResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    return p->mProperty_mUIntResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boolToUIntIR::setProperty_mUIntResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    p->mProperty_mUIntResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_boolToUIntIR::readProperty_mBoolSource (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    return p->mProperty_mBoolSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boolToUIntIR::setProperty_mBoolSource (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    p->mProperty_mBoolSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolToUIntIR class
//--------------------------------------------------------------------------------------------------

cPtr_boolToUIntIR::cPtr_boolToUIntIR (const GGS_objectIR & in_mUIntResult,
                                      const GGS_objectIR & in_mBoolSource
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

const C_galgas_type_descriptor * GGS_boolToUIntIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolToUIntIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolToUIntIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolToUIntIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolToUIntIR GGS_boolToUIntIR::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_boolToUIntIR result ;
  const GGS_boolToUIntIR * p = (const GGS_boolToUIntIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolToUIntIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolToUIntIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolToUIntIR_2E_weak::objectCompare (const GGS_boolToUIntIR_2E_weak & inOperand) const {
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

GGS_boolToUIntIR_2E_weak::GGS_boolToUIntIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolToUIntIR_2E_weak & GGS_boolToUIntIR_2E_weak::operator = (const GGS_boolToUIntIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolToUIntIR_2E_weak::GGS_boolToUIntIR_2E_weak (const GGS_boolToUIntIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolToUIntIR_2E_weak GGS_boolToUIntIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolToUIntIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolToUIntIR GGS_boolToUIntIR_2E_weak::bang_boolToUIntIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolToUIntIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolToUIntIR) ;
      result = GGS_boolToUIntIR ((cPtr_boolToUIntIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolToUIntIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR_2E_weak ("boolToUIntIR.weak",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolToUIntIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolToUIntIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolToUIntIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolToUIntIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolToUIntIR_2E_weak GGS_boolToUIntIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_boolToUIntIR_2E_weak result ;
  const GGS_boolToUIntIR_2E_weak * p = (const GGS_boolToUIntIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolToUIntIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolToUIntIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  ioObject.addAssign_operation (GGS_leftShiftIR::init_21__21__21_ (constinArgument_inResult, constinArgument_inSource, constinArgument_inShiftAmount, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 7)) ;
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

GGS_leftShiftIR GGS_leftShiftIR::class_func_new (const GGS_objectIR & in_mResult,
                                                 const GGS_objectIR & in_mSource,
                                                 const GGS_uint & in_mShiftAmount
                                                 COMMA_LOCATION_ARGS) {
  GGS_leftShiftIR result ;
  macroMyNew (result.mObjectPtr, cPtr_leftShiftIR (in_mResult, in_mSource, in_mShiftAmount COMMA_THERE)) ;
  return result ;
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

cPtr_leftShiftIR::cPtr_leftShiftIR (const GGS_objectIR & in_mResult,
                                    const GGS_objectIR & in_mSource,
                                    const GGS_uint & in_mShiftAmount
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

const C_galgas_type_descriptor * GGS_leftShiftIR::staticTypeDescriptor (void) const {
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
//
//     @leftShiftIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR_2E_weak ("leftShiftIR.weak",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_leftShiftIR_2E_weak::staticTypeDescriptor (void) const {
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioResult.getter_isLiteralInteger (SOURCE_FILE ("intermediate-logical-shift-right.galgas", 7)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_omnibusType var_type_245 ;
      GGS_bigint var_value_269 ;
      ioArgument_ioResult.method_extractLiteralInteger (var_type_245, var_value_269, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 8)) ;
      ioArgument_ioResult = GGS_objectIR::class_func_literalInteger (var_type_245, var_value_269.right_shift_operation (constinArgument_inShiftAmount, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 9))  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 9)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_appendLoadWhenReference (ioObject, ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 11)) ;
    }
    GGS_objectIR var_source_429 = ioArgument_ioResult ;
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_source_429, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 13)), ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 13)) ;
    }
    ioObject.addAssign_operation (GGS_logicalRightShiftIR::init_21__21__21_ (ioArgument_ioResult, var_source_429, constinArgument_inShiftAmount, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 14)) ;
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

GGS_logicalRightShiftIR GGS_logicalRightShiftIR::class_func_new (const GGS_objectIR & in_mResult,
                                                                 const GGS_objectIR & in_mSource,
                                                                 const GGS_uint & in_mShiftAmount
                                                                 COMMA_LOCATION_ARGS) {
  GGS_logicalRightShiftIR result ;
  macroMyNew (result.mObjectPtr, cPtr_logicalRightShiftIR (in_mResult, in_mSource, in_mShiftAmount COMMA_THERE)) ;
  return result ;
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

cPtr_logicalRightShiftIR::cPtr_logicalRightShiftIR (const GGS_objectIR & in_mResult,
                                                    const GGS_objectIR & in_mSource,
                                                    const GGS_uint & in_mShiftAmount
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

const C_galgas_type_descriptor * GGS_logicalRightShiftIR::staticTypeDescriptor (void) const {
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
//
//     @logicalRightShiftIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR_2E_weak ("logicalRightShiftIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logicalRightShiftIR_2E_weak::staticTypeDescriptor (void) const {
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
//
//Extension method '@instructionListIR appendBinaryOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBinaryOperation (GGS_instructionListIR & ioObject,
                                            const GGS_objectIR constinArgument_inTarget,
                                            const GGS_omnibusType constinArgument_inOperandType,
                                            const GGS_location constinArgument_inLocation,
                                            const GGS_objectIR constinArgument_inLeft,
                                            const GGS_llvmBinaryOperation constinArgument_inOperation,
                                            const GGS_objectIR constinArgument_inRight,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_binaryOperationIR::init_21__21__21__21__21__21_ (constinArgument_inTarget, constinArgument_inOperandType, constinArgument_inLeft, constinArgument_inOperation, constinArgument_inRight, constinArgument_inLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 51)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binaryOperationIR_2E_weak::objectCompare (const GGS_binaryOperationIR_2E_weak & inOperand) const {
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

GGS_binaryOperationIR_2E_weak::GGS_binaryOperationIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR_2E_weak & GGS_binaryOperationIR_2E_weak::operator = (const GGS_binaryOperationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR_2E_weak::GGS_binaryOperationIR_2E_weak (const GGS_binaryOperationIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR_2E_weak GGS_binaryOperationIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_binaryOperationIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR GGS_binaryOperationIR_2E_weak::bang_binaryOperationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_binaryOperationIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binaryOperationIR) ;
      result = GGS_binaryOperationIR ((cPtr_binaryOperationIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @binaryOperationIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR_2E_weak ("binaryOperationIR.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_binaryOperationIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperationIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperationIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR_2E_weak GGS_binaryOperationIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_binaryOperationIR_2E_weak result ;
  const GGS_binaryOperationIR_2E_weak * p = (const GGS_binaryOperationIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperationIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendShortCircuitAndOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShortCircuitAndOperation (GGS_instructionListIR & ioObject,
                                                     const GGS_objectIR constinArgument_inTargetOperand,
                                                     const GGS_string constinArgument_inLeftOperandLLVMName,
                                                     const GGS_instructionListIR constinArgument_inLeftInstructionList,
                                                     const GGS_string constinArgument_inRightOperandLLVMName,
                                                     const GGS_instructionListIR constinArgument_inRightInstructionList,
                                                     const GGS_location constinArgument_inLocation,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_shortCircuitAndOperationIR::init_21__21__21__21__21__21_ (constinArgument_inTargetOperand, constinArgument_inLeftOperandLLVMName, constinArgument_inLeftInstructionList, constinArgument_inRightOperandLLVMName, constinArgument_inRightInstructionList, constinArgument_inLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11)) ;
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

ComparisonResult GGS_shortCircuitAndOperationIR::objectCompare (const GGS_shortCircuitAndOperationIR & inOperand) const {
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

GGS_shortCircuitAndOperationIR::GGS_shortCircuitAndOperationIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_shortCircuitAndOperationIR GGS_shortCircuitAndOperationIR::
init_21__21__21__21__21__21_ (const GGS_objectIR & in_mTargetOperand,
                              const GGS_string & in_mLeftOperandLLVMName,
                              const GGS_instructionListIR & in_mLeftInstructionList,
                              const GGS_string & in_mRightOperandLLVMName,
                              const GGS_instructionListIR & in_mRightInstructionList,
                              const GGS_location & in_mLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_shortCircuitAndOperationIR * object = nullptr ;
  macroMyNew (object, cPtr_shortCircuitAndOperationIR (inCompiler COMMA_THERE)) ;
  object->shortCircuitAndOperationIR_init_21__21__21__21__21__21_ (in_mTargetOperand, in_mLeftOperandLLVMName, in_mLeftInstructionList, in_mRightOperandLLVMName, in_mRightInstructionList, in_mLocation, inCompiler) ;
  const GGS_shortCircuitAndOperationIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_shortCircuitAndOperationIR::
shortCircuitAndOperationIR_init_21__21__21__21__21__21_ (const GGS_objectIR & in_mTargetOperand,
                                                         const GGS_string & in_mLeftOperandLLVMName,
                                                         const GGS_instructionListIR & in_mLeftInstructionList,
                                                         const GGS_string & in_mRightOperandLLVMName,
                                                         const GGS_instructionListIR & in_mRightInstructionList,
                                                         const GGS_location & in_mLocation,
                                                         Compiler * /* inCompiler */) {
  mProperty_mTargetOperand = in_mTargetOperand ;
  mProperty_mLeftOperandLLVMName = in_mLeftOperandLLVMName ;
  mProperty_mLeftInstructionList = in_mLeftInstructionList ;
  mProperty_mRightOperandLLVMName = in_mRightOperandLLVMName ;
  mProperty_mRightInstructionList = in_mRightInstructionList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_shortCircuitAndOperationIR::GGS_shortCircuitAndOperationIR (const cPtr_shortCircuitAndOperationIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_shortCircuitAndOperationIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_shortCircuitAndOperationIR GGS_shortCircuitAndOperationIR::class_func_new (const GGS_objectIR & in_mTargetOperand,
                                                                               const GGS_string & in_mLeftOperandLLVMName,
                                                                               const GGS_instructionListIR & in_mLeftInstructionList,
                                                                               const GGS_string & in_mRightOperandLLVMName,
                                                                               const GGS_instructionListIR & in_mRightInstructionList,
                                                                               const GGS_location & in_mLocation
                                                                               COMMA_LOCATION_ARGS) {
  GGS_shortCircuitAndOperationIR result ;
  macroMyNew (result.mObjectPtr, cPtr_shortCircuitAndOperationIR (in_mTargetOperand, in_mLeftOperandLLVMName, in_mLeftInstructionList, in_mRightOperandLLVMName, in_mRightInstructionList, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_shortCircuitAndOperationIR::readProperty_mTargetOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mTargetOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_shortCircuitAndOperationIR::setProperty_mTargetOperand (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mTargetOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_shortCircuitAndOperationIR::readProperty_mLeftOperandLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLeftOperandLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_shortCircuitAndOperationIR::setProperty_mLeftOperandLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLeftOperandLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_shortCircuitAndOperationIR::readProperty_mLeftInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLeftInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_shortCircuitAndOperationIR::setProperty_mLeftInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLeftInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_shortCircuitAndOperationIR::readProperty_mRightOperandLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mRightOperandLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_shortCircuitAndOperationIR::setProperty_mRightOperandLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mRightOperandLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_shortCircuitAndOperationIR::readProperty_mRightInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mRightInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_shortCircuitAndOperationIR::setProperty_mRightInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mRightInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_shortCircuitAndOperationIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_shortCircuitAndOperationIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @shortCircuitAndOperationIR class
//--------------------------------------------------------------------------------------------------

cPtr_shortCircuitAndOperationIR::cPtr_shortCircuitAndOperationIR (const GGS_objectIR & in_mTargetOperand,
                                                                  const GGS_string & in_mLeftOperandLLVMName,
                                                                  const GGS_instructionListIR & in_mLeftInstructionList,
                                                                  const GGS_string & in_mRightOperandLLVMName,
                                                                  const GGS_instructionListIR & in_mRightInstructionList,
                                                                  const GGS_location & in_mLocation
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

const C_galgas_type_descriptor * GGS_shortCircuitAndOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_shortCircuitAndOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_shortCircuitAndOperationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_shortCircuitAndOperationIR GGS_shortCircuitAndOperationIR::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_shortCircuitAndOperationIR result ;
  const GGS_shortCircuitAndOperationIR * p = (const GGS_shortCircuitAndOperationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_shortCircuitAndOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("shortCircuitAndOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_shortCircuitAndOperationIR_2E_weak::objectCompare (const GGS_shortCircuitAndOperationIR_2E_weak & inOperand) const {
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

GGS_shortCircuitAndOperationIR_2E_weak::GGS_shortCircuitAndOperationIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_shortCircuitAndOperationIR_2E_weak & GGS_shortCircuitAndOperationIR_2E_weak::operator = (const GGS_shortCircuitAndOperationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_shortCircuitAndOperationIR_2E_weak::GGS_shortCircuitAndOperationIR_2E_weak (const GGS_shortCircuitAndOperationIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_shortCircuitAndOperationIR_2E_weak GGS_shortCircuitAndOperationIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_shortCircuitAndOperationIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_shortCircuitAndOperationIR GGS_shortCircuitAndOperationIR_2E_weak::bang_shortCircuitAndOperationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_shortCircuitAndOperationIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_shortCircuitAndOperationIR) ;
      result = GGS_shortCircuitAndOperationIR ((cPtr_shortCircuitAndOperationIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @shortCircuitAndOperationIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2E_weak ("shortCircuitAndOperationIR.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_shortCircuitAndOperationIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_shortCircuitAndOperationIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_shortCircuitAndOperationIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_shortCircuitAndOperationIR_2E_weak GGS_shortCircuitAndOperationIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_shortCircuitAndOperationIR_2E_weak result ;
  const GGS_shortCircuitAndOperationIR_2E_weak * p = (const GGS_shortCircuitAndOperationIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_shortCircuitAndOperationIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("shortCircuitAndOperationIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadFromReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadFromReference (GGS_instructionListIR & ioObject,
                                              const GGS_objectIR constinArgument_inTargetValue,
                                              const GGS_string constinArgument_inLLVMName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_loadFromReferenceIR::init_21__21_ (constinArgument_inTargetValue, constinArgument_inLLVMName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @loadFromReferenceIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_loadFromReferenceIR::cPtr_loadFromReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_mLLVMName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loadFromReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetValue.printNonNullClassInstanceProperties ("mTargetValue") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loadFromReferenceIR::objectCompare (const GGS_loadFromReferenceIR & inOperand) const {
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

GGS_loadFromReferenceIR::GGS_loadFromReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loadFromReferenceIR GGS_loadFromReferenceIR::
init_21__21_ (const GGS_objectIR & in_mTargetValue,
              const GGS_string & in_mLLVMName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_loadFromReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_loadFromReferenceIR (inCompiler COMMA_THERE)) ;
  object->loadFromReferenceIR_init_21__21_ (in_mTargetValue, in_mLLVMName, inCompiler) ;
  const GGS_loadFromReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loadFromReferenceIR::
loadFromReferenceIR_init_21__21_ (const GGS_objectIR & in_mTargetValue,
                                  const GGS_string & in_mLLVMName,
                                  Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_mLLVMName = in_mLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadFromReferenceIR::GGS_loadFromReferenceIR (const cPtr_loadFromReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadFromReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loadFromReferenceIR GGS_loadFromReferenceIR::class_func_new (const GGS_objectIR & in_mTargetValue,
                                                                 const GGS_string & in_mLLVMName
                                                                 COMMA_LOCATION_ARGS) {
  GGS_loadFromReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_loadFromReferenceIR (in_mTargetValue, in_mLLVMName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_loadFromReferenceIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_loadFromReferenceIR::setProperty_mTargetValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_loadFromReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_loadFromReferenceIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loadFromReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_loadFromReferenceIR::cPtr_loadFromReferenceIR (const GGS_objectIR & in_mTargetValue,
                                                    const GGS_string & in_mLLVMName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetValue (),
mProperty_mLLVMName () {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_mLLVMName = in_mLLVMName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loadFromReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromReferenceIR ;
}

void cPtr_loadFromReferenceIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@loadFromReferenceIR:") ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loadFromReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loadFromReferenceIR (mProperty_mTargetValue, mProperty_mLLVMName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @loadFromReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR ("loadFromReferenceIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loadFromReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loadFromReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loadFromReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadFromReferenceIR GGS_loadFromReferenceIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_loadFromReferenceIR result ;
  const GGS_loadFromReferenceIR * p = (const GGS_loadFromReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loadFromReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadFromReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loadFromReferenceIR_2E_weak::objectCompare (const GGS_loadFromReferenceIR_2E_weak & inOperand) const {
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

GGS_loadFromReferenceIR_2E_weak::GGS_loadFromReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loadFromReferenceIR_2E_weak & GGS_loadFromReferenceIR_2E_weak::operator = (const GGS_loadFromReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadFromReferenceIR_2E_weak::GGS_loadFromReferenceIR_2E_weak (const GGS_loadFromReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loadFromReferenceIR_2E_weak GGS_loadFromReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loadFromReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadFromReferenceIR GGS_loadFromReferenceIR_2E_weak::bang_loadFromReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loadFromReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loadFromReferenceIR) ;
      result = GGS_loadFromReferenceIR ((cPtr_loadFromReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loadFromReferenceIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR_2E_weak ("loadFromReferenceIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loadFromReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loadFromReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loadFromReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadFromReferenceIR_2E_weak GGS_loadFromReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_loadFromReferenceIR_2E_weak result ;
  const GGS_loadFromReferenceIR_2E_weak * p = (const GGS_loadFromReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loadFromReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadFromReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreToUniversalReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreToUniversalReference (GGS_instructionListIR & ioObject,
                                                      const GGS_string constinArgument_inLLVMVarName,
                                                      const GGS_omnibusType constinArgument_inTargetVarType,
                                                      const GGS_objectIR constinArgument_inSourceValue,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_storeToUniversalReferenceIR::init_21__21__21_ (constinArgument_inLLVMVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeToUniversalReferenceIR_2E_weak::objectCompare (const GGS_storeToUniversalReferenceIR_2E_weak & inOperand) const {
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

GGS_storeToUniversalReferenceIR_2E_weak::GGS_storeToUniversalReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR_2E_weak & GGS_storeToUniversalReferenceIR_2E_weak::operator = (const GGS_storeToUniversalReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR_2E_weak::GGS_storeToUniversalReferenceIR_2E_weak (const GGS_storeToUniversalReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR_2E_weak GGS_storeToUniversalReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_storeToUniversalReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR_2E_weak::bang_storeToUniversalReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_storeToUniversalReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeToUniversalReferenceIR) ;
      result = GGS_storeToUniversalReferenceIR ((cPtr_storeToUniversalReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @storeToUniversalReferenceIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2E_weak ("storeToUniversalReferenceIR.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_storeToUniversalReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeToUniversalReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeToUniversalReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR_2E_weak GGS_storeToUniversalReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_storeToUniversalReferenceIR_2E_weak result ;
  const GGS_storeToUniversalReferenceIR_2E_weak * p = (const GGS_storeToUniversalReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeToUniversalReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreTemporaryReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreTemporaryReference (GGS_instructionListIR & ioObject,
                                                    const GGS_omnibusType constinArgument_inTargetVarType,
                                                    const GGS_string constinArgument_inLLVMName,
                                                    const GGS_objectIR constinArgument_inSourceValue,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_storeFromTemporaryReferenceIR::init_21__21__21_ (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 8)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeFromTemporaryReferenceIR_2E_weak::objectCompare (const GGS_storeFromTemporaryReferenceIR_2E_weak & inOperand) const {
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

GGS_storeFromTemporaryReferenceIR_2E_weak::GGS_storeFromTemporaryReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR_2E_weak & GGS_storeFromTemporaryReferenceIR_2E_weak::operator = (const GGS_storeFromTemporaryReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR_2E_weak::GGS_storeFromTemporaryReferenceIR_2E_weak (const GGS_storeFromTemporaryReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR_2E_weak GGS_storeFromTemporaryReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_storeFromTemporaryReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR GGS_storeFromTemporaryReferenceIR_2E_weak::bang_storeFromTemporaryReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_storeFromTemporaryReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeFromTemporaryReferenceIR) ;
      result = GGS_storeFromTemporaryReferenceIR ((cPtr_storeFromTemporaryReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @storeFromTemporaryReferenceIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2E_weak ("storeFromTemporaryReferenceIR.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_storeFromTemporaryReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeFromTemporaryReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeFromTemporaryReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR_2E_weak GGS_storeFromTemporaryReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_storeFromTemporaryReferenceIR_2E_weak result ;
  const GGS_storeFromTemporaryReferenceIR_2E_weak * p = (const GGS_storeFromTemporaryReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeFromTemporaryReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeFromTemporaryReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_standaloneRoutineCallIR_2E_weak::objectCompare (const GGS_standaloneRoutineCallIR_2E_weak & inOperand) const {
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

GGS_standaloneRoutineCallIR_2E_weak::GGS_standaloneRoutineCallIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneRoutineCallIR_2E_weak & GGS_standaloneRoutineCallIR_2E_weak::operator = (const GGS_standaloneRoutineCallIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneRoutineCallIR_2E_weak::GGS_standaloneRoutineCallIR_2E_weak (const GGS_standaloneRoutineCallIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_standaloneRoutineCallIR_2E_weak GGS_standaloneRoutineCallIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_standaloneRoutineCallIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneRoutineCallIR GGS_standaloneRoutineCallIR_2E_weak::bang_standaloneRoutineCallIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_standaloneRoutineCallIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standaloneRoutineCallIR) ;
      result = GGS_standaloneRoutineCallIR ((cPtr_standaloneRoutineCallIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @standaloneRoutineCallIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2E_weak ("standaloneRoutineCallIR.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_standaloneRoutineCallIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_standaloneRoutineCallIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_standaloneRoutineCallIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneRoutineCallIR_2E_weak GGS_standaloneRoutineCallIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_standaloneRoutineCallIR_2E_weak result ;
  const GGS_standaloneRoutineCallIR_2E_weak * p = (const GGS_standaloneRoutineCallIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_standaloneRoutineCallIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneRoutineCallIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  ioObject.addAssign_operation (GGS_releaseIR::init_21__21_ (constinArgument_inType, constinArgument_in_5F_omnibusName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-release.galgas", 3)) ;
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
//
//     @releaseIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR_2E_weak ("releaseIR.weak",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_releaseIR_2E_weak::staticTypeDescriptor (void) const {
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
//
//Extension method '@instructionListIR appendComputeSubscriptedVolatileRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (GGS_instructionListIR & ioObject,
                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GGS_string & outArgument_outLLVMResultVarName,
                                                                      const GGS_objectIR constinArgument_inIndexIR,
                                                                      const GGS_string constinArgument_inAddressLLVMname,
                                                                      const GGS_uint constinArgument_inElementSize,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLLVMResultVarName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_outLLVMResultVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GGS_computeSubscriptedVolatileRegisterAddress::init_21__21__21__21_ (outArgument_outLLVMResultVarName, constinArgument_inIndexIR, constinArgument_inAddressLLVMname, constinArgument_inElementSize, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @computeSubscriptedVolatileRegisterAddress reference class
//--------------------------------------------------------------------------------------------------

cPtr_computeSubscriptedVolatileRegisterAddress::cPtr_computeSubscriptedVolatileRegisterAddress (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMResultVarName (),
mProperty_mIndexResult (),
mProperty_mAddressLLVMname (),
mProperty_mElementSize () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computeSubscriptedVolatileRegisterAddress::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMResultVarName.printNonNullClassInstanceProperties ("mLLVMResultVarName") ;
    mProperty_mIndexResult.printNonNullClassInstanceProperties ("mIndexResult") ;
    mProperty_mAddressLLVMname.printNonNullClassInstanceProperties ("mAddressLLVMname") ;
    mProperty_mElementSize.printNonNullClassInstanceProperties ("mElementSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computeSubscriptedVolatileRegisterAddress::objectCompare (const GGS_computeSubscriptedVolatileRegisterAddress & inOperand) const {
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

GGS_computeSubscriptedVolatileRegisterAddress::GGS_computeSubscriptedVolatileRegisterAddress (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress GGS_computeSubscriptedVolatileRegisterAddress::
init_21__21__21__21_ (const GGS_string & in_mLLVMResultVarName,
                      const GGS_objectIR & in_mIndexResult,
                      const GGS_string & in_mAddressLLVMname,
                      const GGS_uint & in_mElementSize,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_computeSubscriptedVolatileRegisterAddress * object = nullptr ;
  macroMyNew (object, cPtr_computeSubscriptedVolatileRegisterAddress (inCompiler COMMA_THERE)) ;
  object->computeSubscriptedVolatileRegisterAddress_init_21__21__21__21_ (in_mLLVMResultVarName, in_mIndexResult, in_mAddressLLVMname, in_mElementSize, inCompiler) ;
  const GGS_computeSubscriptedVolatileRegisterAddress result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computeSubscriptedVolatileRegisterAddress::
computeSubscriptedVolatileRegisterAddress_init_21__21__21__21_ (const GGS_string & in_mLLVMResultVarName,
                                                                const GGS_objectIR & in_mIndexResult,
                                                                const GGS_string & in_mAddressLLVMname,
                                                                const GGS_uint & in_mElementSize,
                                                                Compiler * /* inCompiler */) {
  mProperty_mLLVMResultVarName = in_mLLVMResultVarName ;
  mProperty_mIndexResult = in_mIndexResult ;
  mProperty_mAddressLLVMname = in_mAddressLLVMname ;
  mProperty_mElementSize = in_mElementSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress::GGS_computeSubscriptedVolatileRegisterAddress (const cPtr_computeSubscriptedVolatileRegisterAddress * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computeSubscriptedVolatileRegisterAddress) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress GGS_computeSubscriptedVolatileRegisterAddress::class_func_new (const GGS_string & in_mLLVMResultVarName,
                                                                                                             const GGS_objectIR & in_mIndexResult,
                                                                                                             const GGS_string & in_mAddressLLVMname,
                                                                                                             const GGS_uint & in_mElementSize
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_computeSubscriptedVolatileRegisterAddress result ;
  macroMyNew (result.mObjectPtr, cPtr_computeSubscriptedVolatileRegisterAddress (in_mLLVMResultVarName, in_mIndexResult, in_mAddressLLVMname, in_mElementSize COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_computeSubscriptedVolatileRegisterAddress::readProperty_mLLVMResultVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mLLVMResultVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeSubscriptedVolatileRegisterAddress::setProperty_mLLVMResultVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mLLVMResultVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_computeSubscriptedVolatileRegisterAddress::readProperty_mIndexResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mIndexResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeSubscriptedVolatileRegisterAddress::setProperty_mIndexResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mIndexResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_computeSubscriptedVolatileRegisterAddress::readProperty_mAddressLLVMname (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mAddressLLVMname ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeSubscriptedVolatileRegisterAddress::setProperty_mAddressLLVMname (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mAddressLLVMname = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_computeSubscriptedVolatileRegisterAddress::readProperty_mElementSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mElementSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeSubscriptedVolatileRegisterAddress::setProperty_mElementSize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mElementSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computeSubscriptedVolatileRegisterAddress class
//--------------------------------------------------------------------------------------------------

cPtr_computeSubscriptedVolatileRegisterAddress::cPtr_computeSubscriptedVolatileRegisterAddress (const GGS_string & in_mLLVMResultVarName,
                                                                                                const GGS_objectIR & in_mIndexResult,
                                                                                                const GGS_string & in_mAddressLLVMname,
                                                                                                const GGS_uint & in_mElementSize
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMResultVarName (),
mProperty_mIndexResult (),
mProperty_mAddressLLVMname (),
mProperty_mElementSize () {
  mProperty_mLLVMResultVarName = in_mLLVMResultVarName ;
  mProperty_mIndexResult = in_mIndexResult ;
  mProperty_mAddressLLVMname = in_mAddressLLVMname ;
  mProperty_mElementSize = in_mElementSize ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computeSubscriptedVolatileRegisterAddress::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;
}

void cPtr_computeSubscriptedVolatileRegisterAddress::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@computeSubscriptedVolatileRegisterAddress:") ;
  mProperty_mLLVMResultVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAddressLLVMname.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementSize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computeSubscriptedVolatileRegisterAddress::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computeSubscriptedVolatileRegisterAddress (mProperty_mLLVMResultVarName, mProperty_mIndexResult, mProperty_mAddressLLVMname, mProperty_mElementSize COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @computeSubscriptedVolatileRegisterAddress generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ("computeSubscriptedVolatileRegisterAddress",
                                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computeSubscriptedVolatileRegisterAddress::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computeSubscriptedVolatileRegisterAddress::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computeSubscriptedVolatileRegisterAddress (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress GGS_computeSubscriptedVolatileRegisterAddress::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_computeSubscriptedVolatileRegisterAddress result ;
  const GGS_computeSubscriptedVolatileRegisterAddress * p = (const GGS_computeSubscriptedVolatileRegisterAddress *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computeSubscriptedVolatileRegisterAddress *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeSubscriptedVolatileRegisterAddress", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::objectCompare (const GGS_computeSubscriptedVolatileRegisterAddress_2E_weak & inOperand) const {
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

GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::GGS_computeSubscriptedVolatileRegisterAddress_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress_2E_weak & GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::operator = (const GGS_computeSubscriptedVolatileRegisterAddress & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::GGS_computeSubscriptedVolatileRegisterAddress_2E_weak (const GGS_computeSubscriptedVolatileRegisterAddress & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress_2E_weak GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computeSubscriptedVolatileRegisterAddress_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::bang_computeSubscriptedVolatileRegisterAddress_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computeSubscriptedVolatileRegisterAddress result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computeSubscriptedVolatileRegisterAddress) ;
      result = GGS_computeSubscriptedVolatileRegisterAddress ((cPtr_computeSubscriptedVolatileRegisterAddress *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @computeSubscriptedVolatileRegisterAddress.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2E_weak ("computeSubscriptedVolatileRegisterAddress.weak",
                                                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computeSubscriptedVolatileRegisterAddress_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeSubscriptedVolatileRegisterAddress_2E_weak GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_computeSubscriptedVolatileRegisterAddress_2E_weak result ;
  const GGS_computeSubscriptedVolatileRegisterAddress_2E_weak * p = (const GGS_computeSubscriptedVolatileRegisterAddress_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computeSubscriptedVolatileRegisterAddress_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeSubscriptedVolatileRegisterAddress.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendEnterRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterAddress (GGS_instructionListIR & ioObject,
                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GGS_string & outArgument_out_5F_llvmName,
                                                 const GGS_bigint constinArgument_inBaseAddress,
                                                 const GGS_bigint constinArgument_inAddressOffset,
                                                 const GGS_string constinArgument_inRegisterName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_out_5F_llvmName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_out_5F_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GGS_enterRegisterAddressIR::init_21__21__21__21_ (outArgument_out_5F_llvmName, constinArgument_inBaseAddress, constinArgument_inAddressOffset, constinArgument_inRegisterName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @enterRegisterAddressIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_enterRegisterAddressIR::cPtr_enterRegisterAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMName (),
mProperty_mBaseAddress (),
mProperty_mAddressOffset (),
mProperty_mRegisterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enterRegisterAddressIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mBaseAddress.printNonNullClassInstanceProperties ("mBaseAddress") ;
    mProperty_mAddressOffset.printNonNullClassInstanceProperties ("mAddressOffset") ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enterRegisterAddressIR::objectCompare (const GGS_enterRegisterAddressIR & inOperand) const {
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

GGS_enterRegisterAddressIR::GGS_enterRegisterAddressIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enterRegisterAddressIR GGS_enterRegisterAddressIR::
init_21__21__21__21_ (const GGS_string & in_mLLVMName,
                      const GGS_bigint & in_mBaseAddress,
                      const GGS_bigint & in_mAddressOffset,
                      const GGS_string & in_mRegisterName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_enterRegisterAddressIR * object = nullptr ;
  macroMyNew (object, cPtr_enterRegisterAddressIR (inCompiler COMMA_THERE)) ;
  object->enterRegisterAddressIR_init_21__21__21__21_ (in_mLLVMName, in_mBaseAddress, in_mAddressOffset, in_mRegisterName, inCompiler) ;
  const GGS_enterRegisterAddressIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enterRegisterAddressIR::
enterRegisterAddressIR_init_21__21__21__21_ (const GGS_string & in_mLLVMName,
                                             const GGS_bigint & in_mBaseAddress,
                                             const GGS_bigint & in_mAddressOffset,
                                             const GGS_string & in_mRegisterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mBaseAddress = in_mBaseAddress ;
  mProperty_mAddressOffset = in_mAddressOffset ;
  mProperty_mRegisterName = in_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterAddressIR::GGS_enterRegisterAddressIR (const cPtr_enterRegisterAddressIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enterRegisterAddressIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enterRegisterAddressIR GGS_enterRegisterAddressIR::class_func_new (const GGS_string & in_mLLVMName,
                                                                       const GGS_bigint & in_mBaseAddress,
                                                                       const GGS_bigint & in_mAddressOffset,
                                                                       const GGS_string & in_mRegisterName
                                                                       COMMA_LOCATION_ARGS) {
  GGS_enterRegisterAddressIR result ;
  macroMyNew (result.mObjectPtr, cPtr_enterRegisterAddressIR (in_mLLVMName, in_mBaseAddress, in_mAddressOffset, in_mRegisterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_enterRegisterAddressIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enterRegisterAddressIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_enterRegisterAddressIR::readProperty_mBaseAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mBaseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enterRegisterAddressIR::setProperty_mBaseAddress (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mBaseAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_enterRegisterAddressIR::readProperty_mAddressOffset (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mAddressOffset ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enterRegisterAddressIR::setProperty_mAddressOffset (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mAddressOffset = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_enterRegisterAddressIR::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enterRegisterAddressIR::setProperty_mRegisterName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enterRegisterAddressIR class
//--------------------------------------------------------------------------------------------------

cPtr_enterRegisterAddressIR::cPtr_enterRegisterAddressIR (const GGS_string & in_mLLVMName,
                                                          const GGS_bigint & in_mBaseAddress,
                                                          const GGS_bigint & in_mAddressOffset,
                                                          const GGS_string & in_mRegisterName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMName (),
mProperty_mBaseAddress (),
mProperty_mAddressOffset (),
mProperty_mRegisterName () {
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mBaseAddress = in_mBaseAddress ;
  mProperty_mAddressOffset = in_mAddressOffset ;
  mProperty_mRegisterName = in_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enterRegisterAddressIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterAddressIR ;
}

void cPtr_enterRegisterAddressIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@enterRegisterAddressIR:") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseAddress.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAddressOffset.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enterRegisterAddressIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enterRegisterAddressIR (mProperty_mLLVMName, mProperty_mBaseAddress, mProperty_mAddressOffset, mProperty_mRegisterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enterRegisterAddressIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR ("enterRegisterAddressIR",
                                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enterRegisterAddressIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterAddressIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enterRegisterAddressIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enterRegisterAddressIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterAddressIR GGS_enterRegisterAddressIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_enterRegisterAddressIR result ;
  const GGS_enterRegisterAddressIR * p = (const GGS_enterRegisterAddressIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enterRegisterAddressIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterAddressIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enterRegisterAddressIR_2E_weak::objectCompare (const GGS_enterRegisterAddressIR_2E_weak & inOperand) const {
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

GGS_enterRegisterAddressIR_2E_weak::GGS_enterRegisterAddressIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterAddressIR_2E_weak & GGS_enterRegisterAddressIR_2E_weak::operator = (const GGS_enterRegisterAddressIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterAddressIR_2E_weak::GGS_enterRegisterAddressIR_2E_weak (const GGS_enterRegisterAddressIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enterRegisterAddressIR_2E_weak GGS_enterRegisterAddressIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enterRegisterAddressIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterAddressIR GGS_enterRegisterAddressIR_2E_weak::bang_enterRegisterAddressIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enterRegisterAddressIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enterRegisterAddressIR) ;
      result = GGS_enterRegisterAddressIR ((cPtr_enterRegisterAddressIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enterRegisterAddressIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR_2E_weak ("enterRegisterAddressIR.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enterRegisterAddressIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterAddressIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enterRegisterAddressIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enterRegisterAddressIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterAddressIR_2E_weak GGS_enterRegisterAddressIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_enterRegisterAddressIR_2E_weak result ;
  const GGS_enterRegisterAddressIR_2E_weak * p = (const GGS_enterRegisterAddressIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enterRegisterAddressIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterAddressIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendEnterRegisterGroupSubscriptedAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterGroupSubscriptedAddress (GGS_instructionListIR & ioObject,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_string & outArgument_out_5F_llvmName,
                                                                 const GGS_string constinArgument_inGroupName,
                                                                 const GGS_uint constinArgument_inGroupSize,
                                                                 const GGS_objectIR constinArgument_inIndexIR,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_out_5F_llvmName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_out_5F_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GGS_enterRegisterGroupSubscriptedAddressIR::init_21__21__21__21_ (outArgument_out_5F_llvmName, constinArgument_inGroupName, constinArgument_inGroupSize, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @enterRegisterGroupSubscriptedAddressIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_enterRegisterGroupSubscriptedAddressIR::cPtr_enterRegisterGroupSubscriptedAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMName (),
mProperty_mGroupName (),
mProperty_mGroupSize (),
mProperty_mIndexIR () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enterRegisterGroupSubscriptedAddressIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mGroupName.printNonNullClassInstanceProperties ("mGroupName") ;
    mProperty_mGroupSize.printNonNullClassInstanceProperties ("mGroupSize") ;
    mProperty_mIndexIR.printNonNullClassInstanceProperties ("mIndexIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enterRegisterGroupSubscriptedAddressIR::objectCompare (const GGS_enterRegisterGroupSubscriptedAddressIR & inOperand) const {
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

GGS_enterRegisterGroupSubscriptedAddressIR::GGS_enterRegisterGroupSubscriptedAddressIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR GGS_enterRegisterGroupSubscriptedAddressIR::
init_21__21__21__21_ (const GGS_string & in_mLLVMName,
                      const GGS_string & in_mGroupName,
                      const GGS_uint & in_mGroupSize,
                      const GGS_objectIR & in_mIndexIR,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_enterRegisterGroupSubscriptedAddressIR * object = nullptr ;
  macroMyNew (object, cPtr_enterRegisterGroupSubscriptedAddressIR (inCompiler COMMA_THERE)) ;
  object->enterRegisterGroupSubscriptedAddressIR_init_21__21__21__21_ (in_mLLVMName, in_mGroupName, in_mGroupSize, in_mIndexIR, inCompiler) ;
  const GGS_enterRegisterGroupSubscriptedAddressIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enterRegisterGroupSubscriptedAddressIR::
enterRegisterGroupSubscriptedAddressIR_init_21__21__21__21_ (const GGS_string & in_mLLVMName,
                                                             const GGS_string & in_mGroupName,
                                                             const GGS_uint & in_mGroupSize,
                                                             const GGS_objectIR & in_mIndexIR,
                                                             Compiler * /* inCompiler */) {
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mGroupName = in_mGroupName ;
  mProperty_mGroupSize = in_mGroupSize ;
  mProperty_mIndexIR = in_mIndexIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR::GGS_enterRegisterGroupSubscriptedAddressIR (const cPtr_enterRegisterGroupSubscriptedAddressIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR GGS_enterRegisterGroupSubscriptedAddressIR::class_func_new (const GGS_string & in_mLLVMName,
                                                                                                       const GGS_string & in_mGroupName,
                                                                                                       const GGS_uint & in_mGroupSize,
                                                                                                       const GGS_objectIR & in_mIndexIR
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_enterRegisterGroupSubscriptedAddressIR result ;
  macroMyNew (result.mObjectPtr, cPtr_enterRegisterGroupSubscriptedAddressIR (in_mLLVMName, in_mGroupName, in_mGroupSize, in_mIndexIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_enterRegisterGroupSubscriptedAddressIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enterRegisterGroupSubscriptedAddressIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_enterRegisterGroupSubscriptedAddressIR::readProperty_mGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mGroupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enterRegisterGroupSubscriptedAddressIR::setProperty_mGroupName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mGroupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enterRegisterGroupSubscriptedAddressIR::readProperty_mGroupSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mGroupSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enterRegisterGroupSubscriptedAddressIR::setProperty_mGroupSize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mGroupSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_enterRegisterGroupSubscriptedAddressIR::readProperty_mIndexIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mIndexIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enterRegisterGroupSubscriptedAddressIR::setProperty_mIndexIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mIndexIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enterRegisterGroupSubscriptedAddressIR class
//--------------------------------------------------------------------------------------------------

cPtr_enterRegisterGroupSubscriptedAddressIR::cPtr_enterRegisterGroupSubscriptedAddressIR (const GGS_string & in_mLLVMName,
                                                                                          const GGS_string & in_mGroupName,
                                                                                          const GGS_uint & in_mGroupSize,
                                                                                          const GGS_objectIR & in_mIndexIR
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMName (),
mProperty_mGroupName (),
mProperty_mGroupSize (),
mProperty_mIndexIR () {
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mGroupName = in_mGroupName ;
  mProperty_mGroupSize = in_mGroupSize ;
  mProperty_mIndexIR = in_mIndexIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enterRegisterGroupSubscriptedAddressIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;
}

void cPtr_enterRegisterGroupSubscriptedAddressIR::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@enterRegisterGroupSubscriptedAddressIR:") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGroupName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGroupSize.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enterRegisterGroupSubscriptedAddressIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enterRegisterGroupSubscriptedAddressIR (mProperty_mLLVMName, mProperty_mGroupName, mProperty_mGroupSize, mProperty_mIndexIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enterRegisterGroupSubscriptedAddressIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ("enterRegisterGroupSubscriptedAddressIR",
                                                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enterRegisterGroupSubscriptedAddressIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enterRegisterGroupSubscriptedAddressIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enterRegisterGroupSubscriptedAddressIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR GGS_enterRegisterGroupSubscriptedAddressIR::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_enterRegisterGroupSubscriptedAddressIR result ;
  const GGS_enterRegisterGroupSubscriptedAddressIR * p = (const GGS_enterRegisterGroupSubscriptedAddressIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enterRegisterGroupSubscriptedAddressIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterGroupSubscriptedAddressIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::objectCompare (const GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak & inOperand) const {
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

GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak & GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::operator = (const GGS_enterRegisterGroupSubscriptedAddressIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak (const GGS_enterRegisterGroupSubscriptedAddressIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::bang_enterRegisterGroupSubscriptedAddressIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enterRegisterGroupSubscriptedAddressIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
      result = GGS_enterRegisterGroupSubscriptedAddressIR ((cPtr_enterRegisterGroupSubscriptedAddressIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enterRegisterGroupSubscriptedAddressIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2E_weak ("enterRegisterGroupSubscriptedAddressIR.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak result ;
  const GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak * p = (const GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterGroupSubscriptedAddressIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadIndirectVolatileRegister (GGS_instructionListIR & ioObject,
                                                         const GGS_objectIR constinArgument_inTargetValue,
                                                         const GGS_string constinArgument_inLLVMName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_loadIndirectVolatileIR::init_21__21_ (constinArgument_inTargetValue, constinArgument_inLLVMName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @loadIndirectVolatileIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_loadIndirectVolatileIR::cPtr_loadIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_mLLVMName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loadIndirectVolatileIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetValue.printNonNullClassInstanceProperties ("mTargetValue") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loadIndirectVolatileIR::objectCompare (const GGS_loadIndirectVolatileIR & inOperand) const {
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

GGS_loadIndirectVolatileIR::GGS_loadIndirectVolatileIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loadIndirectVolatileIR GGS_loadIndirectVolatileIR::
init_21__21_ (const GGS_objectIR & in_mTargetValue,
              const GGS_string & in_mLLVMName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_loadIndirectVolatileIR * object = nullptr ;
  macroMyNew (object, cPtr_loadIndirectVolatileIR (inCompiler COMMA_THERE)) ;
  object->loadIndirectVolatileIR_init_21__21_ (in_mTargetValue, in_mLLVMName, inCompiler) ;
  const GGS_loadIndirectVolatileIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loadIndirectVolatileIR::
loadIndirectVolatileIR_init_21__21_ (const GGS_objectIR & in_mTargetValue,
                                     const GGS_string & in_mLLVMName,
                                     Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_mLLVMName = in_mLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadIndirectVolatileIR::GGS_loadIndirectVolatileIR (const cPtr_loadIndirectVolatileIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadIndirectVolatileIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loadIndirectVolatileIR GGS_loadIndirectVolatileIR::class_func_new (const GGS_objectIR & in_mTargetValue,
                                                                       const GGS_string & in_mLLVMName
                                                                       COMMA_LOCATION_ARGS) {
  GGS_loadIndirectVolatileIR result ;
  macroMyNew (result.mObjectPtr, cPtr_loadIndirectVolatileIR (in_mTargetValue, in_mLLVMName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_loadIndirectVolatileIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_loadIndirectVolatileIR::setProperty_mTargetValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_loadIndirectVolatileIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_loadIndirectVolatileIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loadIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

cPtr_loadIndirectVolatileIR::cPtr_loadIndirectVolatileIR (const GGS_objectIR & in_mTargetValue,
                                                          const GGS_string & in_mLLVMName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetValue (),
mProperty_mLLVMName () {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_mLLVMName = in_mLLVMName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loadIndirectVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;
}

void cPtr_loadIndirectVolatileIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@loadIndirectVolatileIR:") ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loadIndirectVolatileIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loadIndirectVolatileIR (mProperty_mTargetValue, mProperty_mLLVMName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @loadIndirectVolatileIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR ("loadIndirectVolatileIR",
                                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loadIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loadIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loadIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadIndirectVolatileIR GGS_loadIndirectVolatileIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_loadIndirectVolatileIR result ;
  const GGS_loadIndirectVolatileIR * p = (const GGS_loadIndirectVolatileIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loadIndirectVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadIndirectVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loadIndirectVolatileIR_2E_weak::objectCompare (const GGS_loadIndirectVolatileIR_2E_weak & inOperand) const {
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

GGS_loadIndirectVolatileIR_2E_weak::GGS_loadIndirectVolatileIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loadIndirectVolatileIR_2E_weak & GGS_loadIndirectVolatileIR_2E_weak::operator = (const GGS_loadIndirectVolatileIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadIndirectVolatileIR_2E_weak::GGS_loadIndirectVolatileIR_2E_weak (const GGS_loadIndirectVolatileIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loadIndirectVolatileIR_2E_weak GGS_loadIndirectVolatileIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loadIndirectVolatileIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadIndirectVolatileIR GGS_loadIndirectVolatileIR_2E_weak::bang_loadIndirectVolatileIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loadIndirectVolatileIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loadIndirectVolatileIR) ;
      result = GGS_loadIndirectVolatileIR ((cPtr_loadIndirectVolatileIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loadIndirectVolatileIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2E_weak ("loadIndirectVolatileIR.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loadIndirectVolatileIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loadIndirectVolatileIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loadIndirectVolatileIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loadIndirectVolatileIR_2E_weak GGS_loadIndirectVolatileIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_loadIndirectVolatileIR_2E_weak result ;
  const GGS_loadIndirectVolatileIR_2E_weak * p = (const GGS_loadIndirectVolatileIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loadIndirectVolatileIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadIndirectVolatileIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreIndirectVolatileRegister (GGS_instructionListIR & ioObject,
                                                          const GGS_omnibusType constinArgument_inTargetVarType,
                                                          const GGS_string constinArgument_inLLVMName,
                                                          const GGS_objectIR constinArgument_inSourceValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GGS_storeIndirectVolatileIR::init_21__21__21_ (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 7)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeIndirectVolatileIR_2E_weak::objectCompare (const GGS_storeIndirectVolatileIR_2E_weak & inOperand) const {
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

GGS_storeIndirectVolatileIR_2E_weak::GGS_storeIndirectVolatileIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR_2E_weak & GGS_storeIndirectVolatileIR_2E_weak::operator = (const GGS_storeIndirectVolatileIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR_2E_weak::GGS_storeIndirectVolatileIR_2E_weak (const GGS_storeIndirectVolatileIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR_2E_weak GGS_storeIndirectVolatileIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_storeIndirectVolatileIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR GGS_storeIndirectVolatileIR_2E_weak::bang_storeIndirectVolatileIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_storeIndirectVolatileIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeIndirectVolatileIR) ;
      result = GGS_storeIndirectVolatileIR ((cPtr_storeIndirectVolatileIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @storeIndirectVolatileIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2E_weak ("storeIndirectVolatileIR.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_storeIndirectVolatileIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeIndirectVolatileIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeIndirectVolatileIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR_2E_weak GGS_storeIndirectVolatileIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_storeIndirectVolatileIR_2E_weak result ;
  const GGS_storeIndirectVolatileIR_2E_weak * p = (const GGS_storeIndirectVolatileIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeIndirectVolatileIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeIndirectVolatileIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadWhenReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadWhenReference (GGS_instructionListIR & ioObject,
                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GGS_objectIR & ioArgument_ioObject,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioObject.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-load-when-reference.galgas", 9)), GGS_string ("<<@instructionListIR appendLoadWhenReference void>>"), fixItArray0  COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 9)) ;
      ioArgument_ioObject.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_369_type_0 ;
      GGS_string extractedValue_374_llvmName_1 ;
      ioArgument_ioObject.getAssociatedValuesFor_reference (extractedValue_369_type_0, extractedValue_374_llvmName_1) ;
      GGS_objectIR var_resultingValue_434 ;
      {
      routine_getNewTempValue_3F__26__21_ (extractedValue_369_type_0, ioArgument_ioTemporaries, var_resultingValue_434, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 11)) ;
      }
      {
      extensionSetter_appendLoadFromReference (ioObject, var_resultingValue_434, extractedValue_374_llvmName_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 12)) ;
      }
      ioArgument_ioObject = var_resultingValue_434 ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendCopyFromReferences'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendCopyFromReferences (GGS_instructionListIR & ioObject,
                                               const GGS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               const GGS_location constinArgument_inErrorLocation,
                                               const GGS_objectIR constinArgument_inSourcePossibleReference,
                                               const GGS_LValueRepresentation constinArgument_inTargetReference,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("intermediate-copy-from-references.galgas", 11)).operator_not (SOURCE_FILE ("intermediate-copy-from-references.galgas", 11)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_objectIR var_loadedResultValue_470 = constinArgument_inSourcePossibleReference ;
      {
      extensionSetter_appendLoadWhenReference (ioObject, ioArgument_ioTemporaries, var_loadedResultValue_470, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 13)) ;
      }
      GGS_objectIR var_result_614 = function_checkAssignmentCompatibility (constinArgument_inAssignmentOperatorMap, var_loadedResultValue_470, constinArgument_inTargetReference.readProperty_type (), constinArgument_inErrorLocation, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 17)) ;
      {
      extensionSetter_appendStoreToUniversalReference (ioObject, constinArgument_inTargetReference.readProperty_llvmName (), constinArgument_inTargetReference.readProperty_type (), var_result_614, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 24)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_omnibusType var_sourceType_1034 ;
    GGS_string var_sourceLLVMName_1059 ;
    constinArgument_inSourcePossibleReference.method_extractReference (var_sourceType_1034, var_sourceLLVMName_1059, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 26)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_sourceType_1034.readProperty_omnibusTypeDescriptionName ().objectCompare (constinArgument_inTargetReference.readProperty_type ().readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("object of type ").add_operation (constinArgument_inTargetReference.readProperty_type ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 29)).add_operation (GGS_string (" cannot be assigned from expression of type "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 29)).add_operation (var_sourceType_1034.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 30)), fixItArray2  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 28)) ;
      }
    }
    ioObject.addAssign_operation (GGS_copyFromReferencesIR::init_21__21_ (constinArgument_inTargetReference, var_sourceLLVMName_1059, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 32)) ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_copyFromReferencesIR_2E_weak::objectCompare (const GGS_copyFromReferencesIR_2E_weak & inOperand) const {
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

GGS_copyFromReferencesIR_2E_weak::GGS_copyFromReferencesIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR_2E_weak & GGS_copyFromReferencesIR_2E_weak::operator = (const GGS_copyFromReferencesIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR_2E_weak::GGS_copyFromReferencesIR_2E_weak (const GGS_copyFromReferencesIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR_2E_weak GGS_copyFromReferencesIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_copyFromReferencesIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR GGS_copyFromReferencesIR_2E_weak::bang_copyFromReferencesIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_copyFromReferencesIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_copyFromReferencesIR) ;
      result = GGS_copyFromReferencesIR ((cPtr_copyFromReferencesIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @copyFromReferencesIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR_2E_weak ("copyFromReferencesIR.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_copyFromReferencesIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_copyFromReferencesIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_copyFromReferencesIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR_2E_weak GGS_copyFromReferencesIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_copyFromReferencesIR_2E_weak result ;
  const GGS_copyFromReferencesIR_2E_weak * p = (const GGS_copyFromReferencesIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_copyFromReferencesIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("copyFromReferencesIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

