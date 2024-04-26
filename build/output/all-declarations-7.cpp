#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_shortCircuitAndOperationIR_2D_weak::objectCompare (const GALGAS_shortCircuitAndOperationIR_2D_weak & inOperand) const {
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

GALGAS_shortCircuitAndOperationIR_2D_weak::GALGAS_shortCircuitAndOperationIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR_2D_weak & GALGAS_shortCircuitAndOperationIR_2D_weak::operator = (const GALGAS_shortCircuitAndOperationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR_2D_weak::GALGAS_shortCircuitAndOperationIR_2D_weak (const GALGAS_shortCircuitAndOperationIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR_2D_weak GALGAS_shortCircuitAndOperationIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR_2D_weak::bang_shortCircuitAndOperationIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_shortCircuitAndOperationIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_shortCircuitAndOperationIR) ;
      result = GALGAS_shortCircuitAndOperationIR ((cPtr_shortCircuitAndOperationIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @shortCircuitAndOperationIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2D_weak ("shortCircuitAndOperationIR-weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_shortCircuitAndOperationIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_shortCircuitAndOperationIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_shortCircuitAndOperationIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR_2D_weak GALGAS_shortCircuitAndOperationIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR_2D_weak result ;
  const GALGAS_shortCircuitAndOperationIR_2D_weak * p = (const GALGAS_shortCircuitAndOperationIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_shortCircuitAndOperationIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("shortCircuitAndOperationIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadFromReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadFromReference (GALGAS_instructionListIR & ioObject,
                                              const GALGAS_objectIR constinArgument_inTargetValue,
                                              const GALGAS_string constinArgument_inLLVMName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadFromReferenceIR::init_21__21_ (constinArgument_inTargetValue, constinArgument_inLLVMName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 6)) ;
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

ComparisonResult GALGAS_loadFromReferenceIR::objectCompare (const GALGAS_loadFromReferenceIR & inOperand) const {
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

GALGAS_loadFromReferenceIR::GALGAS_loadFromReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_loadFromReferenceIR GALGAS_loadFromReferenceIR::
init_21__21_ (const GALGAS_objectIR & in_mTargetValue,
              const GALGAS_string & in_mLLVMName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_loadFromReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_loadFromReferenceIR (inCompiler COMMA_THERE)) ;
  object->loadFromReferenceIR_init_21__21_ (in_mTargetValue, in_mLLVMName, inCompiler) ;
  const GALGAS_loadFromReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loadFromReferenceIR::
loadFromReferenceIR_init_21__21_ (const GALGAS_objectIR & in_mTargetValue,
                                  const GALGAS_string & in_mLLVMName,
                                  Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_mLLVMName = in_mLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR::GALGAS_loadFromReferenceIR (const cPtr_loadFromReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadFromReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR GALGAS_loadFromReferenceIR::class_func_new (const GALGAS_objectIR & in_mTargetValue,
                                                                       const GALGAS_string & in_mLLVMName
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_loadFromReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_loadFromReferenceIR (in_mTargetValue, in_mLLVMName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_loadFromReferenceIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_loadFromReferenceIR::setProperty_mTargetValue (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_loadFromReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_loadFromReferenceIR::setProperty_mLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loadFromReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_loadFromReferenceIR::cPtr_loadFromReferenceIR (const GALGAS_objectIR & in_mTargetValue,
                                                    const GALGAS_string & in_mLLVMName
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

const C_galgas_type_descriptor * GALGAS_loadFromReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loadFromReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadFromReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR GALGAS_loadFromReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loadFromReferenceIR result ;
  const GALGAS_loadFromReferenceIR * p = (const GALGAS_loadFromReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loadFromReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadFromReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_loadFromReferenceIR_2D_weak::objectCompare (const GALGAS_loadFromReferenceIR_2D_weak & inOperand) const {
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

GALGAS_loadFromReferenceIR_2D_weak::GALGAS_loadFromReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR_2D_weak & GALGAS_loadFromReferenceIR_2D_weak::operator = (const GALGAS_loadFromReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR_2D_weak::GALGAS_loadFromReferenceIR_2D_weak (const GALGAS_loadFromReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR_2D_weak GALGAS_loadFromReferenceIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_loadFromReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR GALGAS_loadFromReferenceIR_2D_weak::bang_loadFromReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loadFromReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loadFromReferenceIR) ;
      result = GALGAS_loadFromReferenceIR ((cPtr_loadFromReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loadFromReferenceIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR_2D_weak ("loadFromReferenceIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loadFromReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromReferenceIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loadFromReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadFromReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR_2D_weak GALGAS_loadFromReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loadFromReferenceIR_2D_weak result ;
  const GALGAS_loadFromReferenceIR_2D_weak * p = (const GALGAS_loadFromReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loadFromReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadFromReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreToUniversalReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreToUniversalReference (GALGAS_instructionListIR & ioObject,
                                                      const GALGAS_string constinArgument_inLLVMVarName,
                                                      const GALGAS_omnibusType constinArgument_inTargetVarType,
                                                      const GALGAS_objectIR constinArgument_inSourceValue,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeToUniversalReferenceIR::init_21__21__21_ (constinArgument_inLLVMVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_storeToUniversalReferenceIR_2D_weak::objectCompare (const GALGAS_storeToUniversalReferenceIR_2D_weak & inOperand) const {
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

GALGAS_storeToUniversalReferenceIR_2D_weak::GALGAS_storeToUniversalReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR_2D_weak & GALGAS_storeToUniversalReferenceIR_2D_weak::operator = (const GALGAS_storeToUniversalReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR_2D_weak::GALGAS_storeToUniversalReferenceIR_2D_weak (const GALGAS_storeToUniversalReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR_2D_weak GALGAS_storeToUniversalReferenceIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR_2D_weak::bang_storeToUniversalReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_storeToUniversalReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeToUniversalReferenceIR) ;
      result = GALGAS_storeToUniversalReferenceIR ((cPtr_storeToUniversalReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @storeToUniversalReferenceIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2D_weak ("storeToUniversalReferenceIR-weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeToUniversalReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeToUniversalReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeToUniversalReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR_2D_weak GALGAS_storeToUniversalReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR_2D_weak result ;
  const GALGAS_storeToUniversalReferenceIR_2D_weak * p = (const GALGAS_storeToUniversalReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeToUniversalReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreTemporaryReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreTemporaryReference (GALGAS_instructionListIR & ioObject,
                                                    const GALGAS_omnibusType constinArgument_inTargetVarType,
                                                    const GALGAS_string constinArgument_inLLVMName,
                                                    const GALGAS_objectIR constinArgument_inSourceValue,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeFromTemporaryReferenceIR::init_21__21__21_ (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 8)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_storeFromTemporaryReferenceIR_2D_weak::objectCompare (const GALGAS_storeFromTemporaryReferenceIR_2D_weak & inOperand) const {
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

GALGAS_storeFromTemporaryReferenceIR_2D_weak::GALGAS_storeFromTemporaryReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR_2D_weak & GALGAS_storeFromTemporaryReferenceIR_2D_weak::operator = (const GALGAS_storeFromTemporaryReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR_2D_weak::GALGAS_storeFromTemporaryReferenceIR_2D_weak (const GALGAS_storeFromTemporaryReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR_2D_weak GALGAS_storeFromTemporaryReferenceIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR_2D_weak::bang_storeFromTemporaryReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_storeFromTemporaryReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeFromTemporaryReferenceIR) ;
      result = GALGAS_storeFromTemporaryReferenceIR ((cPtr_storeFromTemporaryReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @storeFromTemporaryReferenceIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2D_weak ("storeFromTemporaryReferenceIR-weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeFromTemporaryReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeFromTemporaryReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeFromTemporaryReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR_2D_weak GALGAS_storeFromTemporaryReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR_2D_weak result ;
  const GALGAS_storeFromTemporaryReferenceIR_2D_weak * p = (const GALGAS_storeFromTemporaryReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeFromTemporaryReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeFromTemporaryReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_standaloneRoutineCallIR_2D_weak::objectCompare (const GALGAS_standaloneRoutineCallIR_2D_weak & inOperand) const {
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

GALGAS_standaloneRoutineCallIR_2D_weak::GALGAS_standaloneRoutineCallIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR_2D_weak & GALGAS_standaloneRoutineCallIR_2D_weak::operator = (const GALGAS_standaloneRoutineCallIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR_2D_weak::GALGAS_standaloneRoutineCallIR_2D_weak (const GALGAS_standaloneRoutineCallIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR_2D_weak GALGAS_standaloneRoutineCallIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR_2D_weak::bang_standaloneRoutineCallIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_standaloneRoutineCallIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standaloneRoutineCallIR) ;
      result = GALGAS_standaloneRoutineCallIR ((cPtr_standaloneRoutineCallIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @standaloneRoutineCallIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2D_weak ("standaloneRoutineCallIR-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standaloneRoutineCallIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standaloneRoutineCallIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneRoutineCallIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR_2D_weak GALGAS_standaloneRoutineCallIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR_2D_weak result ;
  const GALGAS_standaloneRoutineCallIR_2D_weak * p = (const GALGAS_standaloneRoutineCallIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_standaloneRoutineCallIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneRoutineCallIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR generateRelease'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_generateRelease (GALGAS_instructionListIR & ioObject,
                                      const GALGAS_omnibusType constinArgument_inType,
                                      const GALGAS_lstring constinArgument_in_5F_omnibusName,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_releaseIR::init_21__21_ (constinArgument_inType, constinArgument_in_5F_omnibusName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-release.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_releaseIR_2D_weak::objectCompare (const GALGAS_releaseIR_2D_weak & inOperand) const {
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

GALGAS_releaseIR_2D_weak::GALGAS_releaseIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR_2D_weak & GALGAS_releaseIR_2D_weak::operator = (const GALGAS_releaseIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR_2D_weak::GALGAS_releaseIR_2D_weak (const GALGAS_releaseIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR_2D_weak GALGAS_releaseIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_releaseIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR GALGAS_releaseIR_2D_weak::bang_releaseIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_releaseIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_releaseIR) ;
      result = GALGAS_releaseIR ((cPtr_releaseIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @releaseIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR_2D_weak ("releaseIR-weak",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_releaseIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_releaseIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_releaseIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR_2D_weak GALGAS_releaseIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_releaseIR_2D_weak result ;
  const GALGAS_releaseIR_2D_weak * p = (const GALGAS_releaseIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_releaseIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("releaseIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendComputeSubscriptedVolatileRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (GALGAS_instructionListIR & ioObject,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_string & outArgument_outLLVMResultVarName,
                                                                      const GALGAS_objectIR constinArgument_inIndexIR,
                                                                      const GALGAS_string constinArgument_inAddressLLVMname,
                                                                      const GALGAS_uint constinArgument_inElementSize,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLLVMResultVarName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_outLLVMResultVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GALGAS_computeSubscriptedVolatileRegisterAddress::init_21__21__21__21_ (outArgument_outLLVMResultVarName, constinArgument_inIndexIR, constinArgument_inAddressLLVMname, constinArgument_inElementSize, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 10)) ;
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

ComparisonResult GALGAS_computeSubscriptedVolatileRegisterAddress::objectCompare (const GALGAS_computeSubscriptedVolatileRegisterAddress & inOperand) const {
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

GALGAS_computeSubscriptedVolatileRegisterAddress::GALGAS_computeSubscriptedVolatileRegisterAddress (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress GALGAS_computeSubscriptedVolatileRegisterAddress::
init_21__21__21__21_ (const GALGAS_string & in_mLLVMResultVarName,
                      const GALGAS_objectIR & in_mIndexResult,
                      const GALGAS_string & in_mAddressLLVMname,
                      const GALGAS_uint & in_mElementSize,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_computeSubscriptedVolatileRegisterAddress * object = nullptr ;
  macroMyNew (object, cPtr_computeSubscriptedVolatileRegisterAddress (inCompiler COMMA_THERE)) ;
  object->computeSubscriptedVolatileRegisterAddress_init_21__21__21__21_ (in_mLLVMResultVarName, in_mIndexResult, in_mAddressLLVMname, in_mElementSize, inCompiler) ;
  const GALGAS_computeSubscriptedVolatileRegisterAddress result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computeSubscriptedVolatileRegisterAddress::
computeSubscriptedVolatileRegisterAddress_init_21__21__21__21_ (const GALGAS_string & in_mLLVMResultVarName,
                                                                const GALGAS_objectIR & in_mIndexResult,
                                                                const GALGAS_string & in_mAddressLLVMname,
                                                                const GALGAS_uint & in_mElementSize,
                                                                Compiler * /* inCompiler */) {
  mProperty_mLLVMResultVarName = in_mLLVMResultVarName ;
  mProperty_mIndexResult = in_mIndexResult ;
  mProperty_mAddressLLVMname = in_mAddressLLVMname ;
  mProperty_mElementSize = in_mElementSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress::GALGAS_computeSubscriptedVolatileRegisterAddress (const cPtr_computeSubscriptedVolatileRegisterAddress * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computeSubscriptedVolatileRegisterAddress) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress GALGAS_computeSubscriptedVolatileRegisterAddress::class_func_new (const GALGAS_string & in_mLLVMResultVarName,
                                                                                                                   const GALGAS_objectIR & in_mIndexResult,
                                                                                                                   const GALGAS_string & in_mAddressLLVMname,
                                                                                                                   const GALGAS_uint & in_mElementSize
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_computeSubscriptedVolatileRegisterAddress result ;
  macroMyNew (result.mObjectPtr, cPtr_computeSubscriptedVolatileRegisterAddress (in_mLLVMResultVarName, in_mIndexResult, in_mAddressLLVMname, in_mElementSize COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computeSubscriptedVolatileRegisterAddress::readProperty_mLLVMResultVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mLLVMResultVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computeSubscriptedVolatileRegisterAddress::setProperty_mLLVMResultVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mLLVMResultVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_computeSubscriptedVolatileRegisterAddress::readProperty_mIndexResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mIndexResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computeSubscriptedVolatileRegisterAddress::setProperty_mIndexResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mIndexResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computeSubscriptedVolatileRegisterAddress::readProperty_mAddressLLVMname (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mAddressLLVMname ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computeSubscriptedVolatileRegisterAddress::setProperty_mAddressLLVMname (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mAddressLLVMname = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_computeSubscriptedVolatileRegisterAddress::readProperty_mElementSize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mElementSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computeSubscriptedVolatileRegisterAddress::setProperty_mElementSize (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mElementSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computeSubscriptedVolatileRegisterAddress class
//--------------------------------------------------------------------------------------------------

cPtr_computeSubscriptedVolatileRegisterAddress::cPtr_computeSubscriptedVolatileRegisterAddress (const GALGAS_string & in_mLLVMResultVarName,
                                                                                                const GALGAS_objectIR & in_mIndexResult,
                                                                                                const GALGAS_string & in_mAddressLLVMname,
                                                                                                const GALGAS_uint & in_mElementSize
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

const C_galgas_type_descriptor * GALGAS_computeSubscriptedVolatileRegisterAddress::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computeSubscriptedVolatileRegisterAddress::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computeSubscriptedVolatileRegisterAddress (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress GALGAS_computeSubscriptedVolatileRegisterAddress::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_computeSubscriptedVolatileRegisterAddress result ;
  const GALGAS_computeSubscriptedVolatileRegisterAddress * p = (const GALGAS_computeSubscriptedVolatileRegisterAddress *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computeSubscriptedVolatileRegisterAddress *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeSubscriptedVolatileRegisterAddress", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::objectCompare (const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak & inOperand) const {
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

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak & GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::operator = (const GALGAS_computeSubscriptedVolatileRegisterAddress & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak (const GALGAS_computeSubscriptedVolatileRegisterAddress & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::bang_computeSubscriptedVolatileRegisterAddress_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computeSubscriptedVolatileRegisterAddress result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computeSubscriptedVolatileRegisterAddress) ;
      result = GALGAS_computeSubscriptedVolatileRegisterAddress ((cPtr_computeSubscriptedVolatileRegisterAddress *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @computeSubscriptedVolatileRegisterAddress-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak ("computeSubscriptedVolatileRegisterAddress-weak",
                                                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak result ;
  const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak * p = (const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeSubscriptedVolatileRegisterAddress-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendEnterRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterAddress (GALGAS_instructionListIR & ioObject,
                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GALGAS_string & outArgument_out_5F_llvmName,
                                                 const GALGAS_bigint constinArgument_inBaseAddress,
                                                 const GALGAS_bigint constinArgument_inAddressOffset,
                                                 const GALGAS_string constinArgument_inRegisterName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_out_5F_llvmName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_out_5F_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GALGAS_enterRegisterAddressIR::init_21__21__21__21_ (outArgument_out_5F_llvmName, constinArgument_inBaseAddress, constinArgument_inAddressOffset, constinArgument_inRegisterName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 10)) ;
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

ComparisonResult GALGAS_enterRegisterAddressIR::objectCompare (const GALGAS_enterRegisterAddressIR & inOperand) const {
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

GALGAS_enterRegisterAddressIR::GALGAS_enterRegisterAddressIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_enterRegisterAddressIR GALGAS_enterRegisterAddressIR::
init_21__21__21__21_ (const GALGAS_string & in_mLLVMName,
                      const GALGAS_bigint & in_mBaseAddress,
                      const GALGAS_bigint & in_mAddressOffset,
                      const GALGAS_string & in_mRegisterName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_enterRegisterAddressIR * object = nullptr ;
  macroMyNew (object, cPtr_enterRegisterAddressIR (inCompiler COMMA_THERE)) ;
  object->enterRegisterAddressIR_init_21__21__21__21_ (in_mLLVMName, in_mBaseAddress, in_mAddressOffset, in_mRegisterName, inCompiler) ;
  const GALGAS_enterRegisterAddressIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enterRegisterAddressIR::
enterRegisterAddressIR_init_21__21__21__21_ (const GALGAS_string & in_mLLVMName,
                                             const GALGAS_bigint & in_mBaseAddress,
                                             const GALGAS_bigint & in_mAddressOffset,
                                             const GALGAS_string & in_mRegisterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mBaseAddress = in_mBaseAddress ;
  mProperty_mAddressOffset = in_mAddressOffset ;
  mProperty_mRegisterName = in_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR::GALGAS_enterRegisterAddressIR (const cPtr_enterRegisterAddressIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enterRegisterAddressIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR GALGAS_enterRegisterAddressIR::class_func_new (const GALGAS_string & in_mLLVMName,
                                                                             const GALGAS_bigint & in_mBaseAddress,
                                                                             const GALGAS_bigint & in_mAddressOffset,
                                                                             const GALGAS_string & in_mRegisterName
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterAddressIR result ;
  macroMyNew (result.mObjectPtr, cPtr_enterRegisterAddressIR (in_mLLVMName, in_mBaseAddress, in_mAddressOffset, in_mRegisterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enterRegisterAddressIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterAddressIR::setProperty_mLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_enterRegisterAddressIR::readProperty_mBaseAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mBaseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterAddressIR::setProperty_mBaseAddress (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mBaseAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_enterRegisterAddressIR::readProperty_mAddressOffset (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mAddressOffset ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterAddressIR::setProperty_mAddressOffset (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mAddressOffset = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enterRegisterAddressIR::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterAddressIR::setProperty_mRegisterName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enterRegisterAddressIR class
//--------------------------------------------------------------------------------------------------

cPtr_enterRegisterAddressIR::cPtr_enterRegisterAddressIR (const GALGAS_string & in_mLLVMName,
                                                          const GALGAS_bigint & in_mBaseAddress,
                                                          const GALGAS_bigint & in_mAddressOffset,
                                                          const GALGAS_string & in_mRegisterName
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

const C_galgas_type_descriptor * GALGAS_enterRegisterAddressIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterAddressIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enterRegisterAddressIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enterRegisterAddressIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR GALGAS_enterRegisterAddressIR::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterAddressIR result ;
  const GALGAS_enterRegisterAddressIR * p = (const GALGAS_enterRegisterAddressIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enterRegisterAddressIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterAddressIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enterRegisterAddressIR_2D_weak::objectCompare (const GALGAS_enterRegisterAddressIR_2D_weak & inOperand) const {
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

GALGAS_enterRegisterAddressIR_2D_weak::GALGAS_enterRegisterAddressIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR_2D_weak & GALGAS_enterRegisterAddressIR_2D_weak::operator = (const GALGAS_enterRegisterAddressIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR_2D_weak::GALGAS_enterRegisterAddressIR_2D_weak (const GALGAS_enterRegisterAddressIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR_2D_weak GALGAS_enterRegisterAddressIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_enterRegisterAddressIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR GALGAS_enterRegisterAddressIR_2D_weak::bang_enterRegisterAddressIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enterRegisterAddressIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enterRegisterAddressIR) ;
      result = GALGAS_enterRegisterAddressIR ((cPtr_enterRegisterAddressIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enterRegisterAddressIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR_2D_weak ("enterRegisterAddressIR-weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enterRegisterAddressIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterAddressIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enterRegisterAddressIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enterRegisterAddressIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR_2D_weak GALGAS_enterRegisterAddressIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterAddressIR_2D_weak result ;
  const GALGAS_enterRegisterAddressIR_2D_weak * p = (const GALGAS_enterRegisterAddressIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enterRegisterAddressIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterAddressIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendEnterRegisterGroupSubscriptedAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterGroupSubscriptedAddress (GALGAS_instructionListIR & ioObject,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_string & outArgument_out_5F_llvmName,
                                                                 const GALGAS_string constinArgument_inGroupName,
                                                                 const GALGAS_uint constinArgument_inGroupSize,
                                                                 const GALGAS_objectIR constinArgument_inIndexIR,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_out_5F_llvmName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_out_5F_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GALGAS_enterRegisterGroupSubscriptedAddressIR::init_21__21__21__21_ (outArgument_out_5F_llvmName, constinArgument_inGroupName, constinArgument_inGroupSize, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 10)) ;
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

ComparisonResult GALGAS_enterRegisterGroupSubscriptedAddressIR::objectCompare (const GALGAS_enterRegisterGroupSubscriptedAddressIR & inOperand) const {
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

GALGAS_enterRegisterGroupSubscriptedAddressIR::GALGAS_enterRegisterGroupSubscriptedAddressIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR GALGAS_enterRegisterGroupSubscriptedAddressIR::
init_21__21__21__21_ (const GALGAS_string & in_mLLVMName,
                      const GALGAS_string & in_mGroupName,
                      const GALGAS_uint & in_mGroupSize,
                      const GALGAS_objectIR & in_mIndexIR,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_enterRegisterGroupSubscriptedAddressIR * object = nullptr ;
  macroMyNew (object, cPtr_enterRegisterGroupSubscriptedAddressIR (inCompiler COMMA_THERE)) ;
  object->enterRegisterGroupSubscriptedAddressIR_init_21__21__21__21_ (in_mLLVMName, in_mGroupName, in_mGroupSize, in_mIndexIR, inCompiler) ;
  const GALGAS_enterRegisterGroupSubscriptedAddressIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enterRegisterGroupSubscriptedAddressIR::
enterRegisterGroupSubscriptedAddressIR_init_21__21__21__21_ (const GALGAS_string & in_mLLVMName,
                                                             const GALGAS_string & in_mGroupName,
                                                             const GALGAS_uint & in_mGroupSize,
                                                             const GALGAS_objectIR & in_mIndexIR,
                                                             Compiler * /* inCompiler */) {
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mGroupName = in_mGroupName ;
  mProperty_mGroupSize = in_mGroupSize ;
  mProperty_mIndexIR = in_mIndexIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR::GALGAS_enterRegisterGroupSubscriptedAddressIR (const cPtr_enterRegisterGroupSubscriptedAddressIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR GALGAS_enterRegisterGroupSubscriptedAddressIR::class_func_new (const GALGAS_string & in_mLLVMName,
                                                                                                             const GALGAS_string & in_mGroupName,
                                                                                                             const GALGAS_uint & in_mGroupSize,
                                                                                                             const GALGAS_objectIR & in_mIndexIR
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterGroupSubscriptedAddressIR result ;
  macroMyNew (result.mObjectPtr, cPtr_enterRegisterGroupSubscriptedAddressIR (in_mLLVMName, in_mGroupName, in_mGroupSize, in_mIndexIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enterRegisterGroupSubscriptedAddressIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterGroupSubscriptedAddressIR::setProperty_mLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enterRegisterGroupSubscriptedAddressIR::readProperty_mGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mGroupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterGroupSubscriptedAddressIR::setProperty_mGroupName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mGroupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_enterRegisterGroupSubscriptedAddressIR::readProperty_mGroupSize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mGroupSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterGroupSubscriptedAddressIR::setProperty_mGroupSize (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mGroupSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_enterRegisterGroupSubscriptedAddressIR::readProperty_mIndexIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mIndexIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterGroupSubscriptedAddressIR::setProperty_mIndexIR (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mIndexIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enterRegisterGroupSubscriptedAddressIR class
//--------------------------------------------------------------------------------------------------

cPtr_enterRegisterGroupSubscriptedAddressIR::cPtr_enterRegisterGroupSubscriptedAddressIR (const GALGAS_string & in_mLLVMName,
                                                                                          const GALGAS_string & in_mGroupName,
                                                                                          const GALGAS_uint & in_mGroupSize,
                                                                                          const GALGAS_objectIR & in_mIndexIR
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

const C_galgas_type_descriptor * GALGAS_enterRegisterGroupSubscriptedAddressIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enterRegisterGroupSubscriptedAddressIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enterRegisterGroupSubscriptedAddressIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR GALGAS_enterRegisterGroupSubscriptedAddressIR::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterGroupSubscriptedAddressIR result ;
  const GALGAS_enterRegisterGroupSubscriptedAddressIR * p = (const GALGAS_enterRegisterGroupSubscriptedAddressIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enterRegisterGroupSubscriptedAddressIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterGroupSubscriptedAddressIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::objectCompare (const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak & inOperand) const {
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

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak & GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::operator = (const GALGAS_enterRegisterGroupSubscriptedAddressIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak (const GALGAS_enterRegisterGroupSubscriptedAddressIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::bang_enterRegisterGroupSubscriptedAddressIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enterRegisterGroupSubscriptedAddressIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
      result = GALGAS_enterRegisterGroupSubscriptedAddressIR ((cPtr_enterRegisterGroupSubscriptedAddressIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enterRegisterGroupSubscriptedAddressIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak ("enterRegisterGroupSubscriptedAddressIR-weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak result ;
  const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak * p = (const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterGroupSubscriptedAddressIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadIndirectVolatileRegister (GALGAS_instructionListIR & ioObject,
                                                         const GALGAS_objectIR constinArgument_inTargetValue,
                                                         const GALGAS_string constinArgument_inLLVMName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadIndirectVolatileIR::init_21__21_ (constinArgument_inTargetValue, constinArgument_inLLVMName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 6)) ;
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

ComparisonResult GALGAS_loadIndirectVolatileIR::objectCompare (const GALGAS_loadIndirectVolatileIR & inOperand) const {
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

GALGAS_loadIndirectVolatileIR::GALGAS_loadIndirectVolatileIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR GALGAS_loadIndirectVolatileIR::
init_21__21_ (const GALGAS_objectIR & in_mTargetValue,
              const GALGAS_string & in_mLLVMName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_loadIndirectVolatileIR * object = nullptr ;
  macroMyNew (object, cPtr_loadIndirectVolatileIR (inCompiler COMMA_THERE)) ;
  object->loadIndirectVolatileIR_init_21__21_ (in_mTargetValue, in_mLLVMName, inCompiler) ;
  const GALGAS_loadIndirectVolatileIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loadIndirectVolatileIR::
loadIndirectVolatileIR_init_21__21_ (const GALGAS_objectIR & in_mTargetValue,
                                     const GALGAS_string & in_mLLVMName,
                                     Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_mLLVMName = in_mLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR::GALGAS_loadIndirectVolatileIR (const cPtr_loadIndirectVolatileIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadIndirectVolatileIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR GALGAS_loadIndirectVolatileIR::class_func_new (const GALGAS_objectIR & in_mTargetValue,
                                                                             const GALGAS_string & in_mLLVMName
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_loadIndirectVolatileIR result ;
  macroMyNew (result.mObjectPtr, cPtr_loadIndirectVolatileIR (in_mTargetValue, in_mLLVMName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_loadIndirectVolatileIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_loadIndirectVolatileIR::setProperty_mTargetValue (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_loadIndirectVolatileIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_loadIndirectVolatileIR::setProperty_mLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loadIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

cPtr_loadIndirectVolatileIR::cPtr_loadIndirectVolatileIR (const GALGAS_objectIR & in_mTargetValue,
                                                          const GALGAS_string & in_mLLVMName
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

const C_galgas_type_descriptor * GALGAS_loadIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loadIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR GALGAS_loadIndirectVolatileIR::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_loadIndirectVolatileIR result ;
  const GALGAS_loadIndirectVolatileIR * p = (const GALGAS_loadIndirectVolatileIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loadIndirectVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadIndirectVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_loadIndirectVolatileIR_2D_weak::objectCompare (const GALGAS_loadIndirectVolatileIR_2D_weak & inOperand) const {
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

GALGAS_loadIndirectVolatileIR_2D_weak::GALGAS_loadIndirectVolatileIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR_2D_weak & GALGAS_loadIndirectVolatileIR_2D_weak::operator = (const GALGAS_loadIndirectVolatileIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR_2D_weak::GALGAS_loadIndirectVolatileIR_2D_weak (const GALGAS_loadIndirectVolatileIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR_2D_weak GALGAS_loadIndirectVolatileIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_loadIndirectVolatileIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR GALGAS_loadIndirectVolatileIR_2D_weak::bang_loadIndirectVolatileIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loadIndirectVolatileIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loadIndirectVolatileIR) ;
      result = GALGAS_loadIndirectVolatileIR ((cPtr_loadIndirectVolatileIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loadIndirectVolatileIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2D_weak ("loadIndirectVolatileIR-weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loadIndirectVolatileIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loadIndirectVolatileIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadIndirectVolatileIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR_2D_weak GALGAS_loadIndirectVolatileIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_loadIndirectVolatileIR_2D_weak result ;
  const GALGAS_loadIndirectVolatileIR_2D_weak * p = (const GALGAS_loadIndirectVolatileIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loadIndirectVolatileIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadIndirectVolatileIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreIndirectVolatileRegister (GALGAS_instructionListIR & ioObject,
                                                          const GALGAS_omnibusType constinArgument_inTargetVarType,
                                                          const GALGAS_string constinArgument_inLLVMName,
                                                          const GALGAS_objectIR constinArgument_inSourceValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeIndirectVolatileIR::init_21__21__21_ (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 7)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_storeIndirectVolatileIR_2D_weak::objectCompare (const GALGAS_storeIndirectVolatileIR_2D_weak & inOperand) const {
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

GALGAS_storeIndirectVolatileIR_2D_weak::GALGAS_storeIndirectVolatileIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR_2D_weak & GALGAS_storeIndirectVolatileIR_2D_weak::operator = (const GALGAS_storeIndirectVolatileIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR_2D_weak::GALGAS_storeIndirectVolatileIR_2D_weak (const GALGAS_storeIndirectVolatileIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR_2D_weak GALGAS_storeIndirectVolatileIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR_2D_weak::bang_storeIndirectVolatileIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_storeIndirectVolatileIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeIndirectVolatileIR) ;
      result = GALGAS_storeIndirectVolatileIR ((cPtr_storeIndirectVolatileIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @storeIndirectVolatileIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2D_weak ("storeIndirectVolatileIR-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeIndirectVolatileIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeIndirectVolatileIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeIndirectVolatileIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR_2D_weak GALGAS_storeIndirectVolatileIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR_2D_weak result ;
  const GALGAS_storeIndirectVolatileIR_2D_weak * p = (const GALGAS_storeIndirectVolatileIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeIndirectVolatileIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeIndirectVolatileIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadWhenReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadWhenReference (GALGAS_instructionListIR & ioObject,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_objectIR & ioArgument_ioObject,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioObject.enumValue ()) {
  case GALGAS_objectIR::Enumeration::invalid:
    break ;
  case GALGAS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("intermediate-load-when-reference.galgas", 9)), GALGAS_string ("<<@instructionListIR appendLoadWhenReference void>>"), fixItArray0  COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 9)) ;
      ioArgument_ioObject.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_reference:
    {
      GALGAS_omnibusType extractedValue_391_type_0 ;
      GALGAS_string extractedValue_396_llvmName_1 ;
      ioArgument_ioObject.getAssociatedValuesFor_reference (extractedValue_391_type_0, extractedValue_396_llvmName_1) ;
      GALGAS_objectIR var_resultingValue_456 ;
      {
      routine_getNewTempValue_3F__26__21_ (extractedValue_391_type_0, ioArgument_ioTemporaries, var_resultingValue_456, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 11)) ;
      }
      {
      extensionSetter_appendLoadFromReference (ioObject, var_resultingValue_456, extractedValue_396_llvmName_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 12)) ;
      }
      ioArgument_ioObject = var_resultingValue_456 ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalInteger:
    break ;
  case GALGAS_objectIR::Enumeration::enum_null:
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmNamedValue:
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmStructureValue:
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalString:
    break ;
  case GALGAS_objectIR::Enumeration::enum_zero:
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendCopyFromReferences'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendCopyFromReferences (GALGAS_instructionListIR & ioObject,
                                               const GALGAS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                               const GALGAS_LValueRepresentation constinArgument_inTargetReference,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("intermediate-copy-from-references.galgas", 11)).operator_not (SOURCE_FILE ("intermediate-copy-from-references.galgas", 11)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_objectIR var_loadedResultValue_492 = constinArgument_inSourcePossibleReference ;
      {
      extensionSetter_appendLoadWhenReference (ioObject, ioArgument_ioTemporaries, var_loadedResultValue_492, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 13)) ;
      }
      GALGAS_objectIR var_result_636 = function_checkAssignmentCompatibility (constinArgument_inAssignmentOperatorMap, var_loadedResultValue_492, constinArgument_inTargetReference.readProperty_type (), constinArgument_inErrorLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 17)) ;
      {
      extensionSetter_appendStoreToUniversalReference (ioObject, constinArgument_inTargetReference.readProperty_llvmName (), constinArgument_inTargetReference.readProperty_type (), var_result_636, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 24)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_omnibusType var_sourceType_1056 ;
    GALGAS_string var_sourceLLVMName_1081 ;
    constinArgument_inSourcePossibleReference.method_extractReference (var_sourceType_1056, var_sourceLLVMName_1081, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 26)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, var_sourceType_1056.readProperty_omnibusTypeDescriptionName ().objectCompare (constinArgument_inTargetReference.readProperty_type ().readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type ").add_operation (constinArgument_inTargetReference.readProperty_type ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 29)).add_operation (var_sourceType_1056.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 30)), fixItArray2  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 28)) ;
      }
    }
    ioObject.addAssign_operation (GALGAS_copyFromReferencesIR::init_21__21_ (constinArgument_inTargetReference, var_sourceLLVMName_1081, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 32)) ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_copyFromReferencesIR_2D_weak::objectCompare (const GALGAS_copyFromReferencesIR_2D_weak & inOperand) const {
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

GALGAS_copyFromReferencesIR_2D_weak::GALGAS_copyFromReferencesIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR_2D_weak & GALGAS_copyFromReferencesIR_2D_weak::operator = (const GALGAS_copyFromReferencesIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR_2D_weak::GALGAS_copyFromReferencesIR_2D_weak (const GALGAS_copyFromReferencesIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR_2D_weak GALGAS_copyFromReferencesIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR_2D_weak::bang_copyFromReferencesIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_copyFromReferencesIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_copyFromReferencesIR) ;
      result = GALGAS_copyFromReferencesIR ((cPtr_copyFromReferencesIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @copyFromReferencesIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR_2D_weak ("copyFromReferencesIR-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_copyFromReferencesIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_copyFromReferencesIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_copyFromReferencesIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR_2D_weak GALGAS_copyFromReferencesIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR_2D_weak result ;
  const GALGAS_copyFromReferencesIR_2D_weak * p = (const GALGAS_copyFromReferencesIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_copyFromReferencesIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("copyFromReferencesIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR referenceFromPossibleValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_referenceFromPossibleValue (GALGAS_instructionListIR & ioObject,
                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                 GALGAS_objectIR & ioArgument_ioObjectIR,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_performStore_318 ;
  switch (ioArgument_ioObjectIR.enumValue ()) {
  case GALGAS_objectIR::Enumeration::invalid:
    break ;
  case GALGAS_objectIR::Enumeration::enum_void:
    {
      var_performStore_318 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_reference:
    {
      GALGAS_omnibusType extractedValue_421__0 ;
      GALGAS_string extractedValue_423__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_reference (extractedValue_421__0, extractedValue_423__1) ;
      var_performStore_318 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GALGAS_omnibusType extractedValue_510__0 ;
      GALGAS_string extractedValue_512__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmNamedValue (extractedValue_510__0, extractedValue_512__1) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalInteger:
    {
      GALGAS_omnibusType extractedValue_565__0 ;
      GALGAS_bigint extractedValue_567__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_literalInteger (extractedValue_565__0, extractedValue_567__1) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_null:
    {
      GALGAS_omnibusType extractedValue_609__0 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_null (extractedValue_609__0) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GALGAS_omnibusType extractedValue_665__0 ;
      GALGAS_sortedOperandIRList extractedValue_667__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmStructureValue (extractedValue_665__0, extractedValue_667__1) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GALGAS_omnibusType extractedValue_727__0 ;
      GALGAS_operandIRList extractedValue_727__1 ;
      GALGAS_uint extractedValue_727__2 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_727__0, extractedValue_727__1, extractedValue_727__2) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_literalString:
    {
      GALGAS_uint extractedValue_779__0 ;
      GALGAS_uint extractedValue_781__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_literalString (extractedValue_779__0, extractedValue_781__1) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_zero:
    {
      GALGAS_omnibusType extractedValue_823__0 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_zero (extractedValue_823__0) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GALGAS_omnibusType extractedValue_890__0 ;
      GALGAS_uint extractedValue_890__1 ;
      GALGAS_objectIR extractedValue_890__2 ;
      GALGAS_uint extractedValue_890__3 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_890__0, extractedValue_890__1, extractedValue_890__2, extractedValue_890__3) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GALGAS_omnibusType extractedValue_958__0 ;
      GALGAS_uint extractedValue_958__1 ;
      GALGAS_objectIR extractedValue_958__2 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_958__0, extractedValue_958__1, extractedValue_958__2) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GALGAS_omnibusType extractedValue_1019__0 ;
      GALGAS_operandIRList extractedValue_1019__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_1019__0, extractedValue_1019__1) ;
      var_performStore_318 = GALGAS_bool (true) ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_performStore_318.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_llvmTemporaryName_1145 = function_llvmNameForLocalVariable (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 39)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_llvmTemporaryName_1145, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 41)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 41)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioObject, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 43)), var_llvmTemporaryName_1145, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 43)) ;
      }
      ioArgument_ioObjectIR = GALGAS_objectIR::class_func_reference (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 44)), var_llvmTemporaryName_1145  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 44)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetUniversalPropertyReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (GALGAS_instructionListIR & ioObject,
                                                          const GALGAS_omnibusType constinArgument_inType,
                                                          const GALGAS_string constinArgument_inLLVMName,
                                                          const GALGAS_string constinArgument_inElementLLVMName,
                                                          const GALGAS_uint constinArgument_inPropertyIndex,
                                                          const GALGAS_string constinArgument_inPropertyName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_getUniversalPropertyReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementLLVMName, constinArgument_inPropertyIndex, constinArgument_inPropertyName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_getUniversalPropertyReferenceIR_2D_weak::objectCompare (const GALGAS_getUniversalPropertyReferenceIR_2D_weak & inOperand) const {
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

GALGAS_getUniversalPropertyReferenceIR_2D_weak::GALGAS_getUniversalPropertyReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR_2D_weak & GALGAS_getUniversalPropertyReferenceIR_2D_weak::operator = (const GALGAS_getUniversalPropertyReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR_2D_weak::GALGAS_getUniversalPropertyReferenceIR_2D_weak (const GALGAS_getUniversalPropertyReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR_2D_weak GALGAS_getUniversalPropertyReferenceIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR_2D_weak::bang_getUniversalPropertyReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getUniversalPropertyReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalPropertyReferenceIR) ;
      result = GALGAS_getUniversalPropertyReferenceIR ((cPtr_getUniversalPropertyReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getUniversalPropertyReferenceIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2D_weak ("getUniversalPropertyReferenceIR-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getUniversalPropertyReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getUniversalPropertyReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalPropertyReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR_2D_weak GALGAS_getUniversalPropertyReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR_2D_weak result ;
  const GALGAS_getUniversalPropertyReferenceIR_2D_weak * p = (const GALGAS_getUniversalPropertyReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getUniversalPropertyReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetUniversalArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (GALGAS_instructionListIR & ioObject,
                                                              const GALGAS_omnibusType constinArgument_inType,
                                                              const GALGAS_string constinArgument_inLLVMName,
                                                              const GALGAS_omnibusType constinArgument_inElementType,
                                                              const GALGAS_string constinArgument_inElementLLVMName,
                                                              const GALGAS_objectIR constinArgument_inIndexIR,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_getUniversalArrayElementReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementType, constinArgument_inElementLLVMName, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_getUniversalArrayElementReferenceIR_2D_weak::objectCompare (const GALGAS_getUniversalArrayElementReferenceIR_2D_weak & inOperand) const {
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

GALGAS_getUniversalArrayElementReferenceIR_2D_weak::GALGAS_getUniversalArrayElementReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR_2D_weak & GALGAS_getUniversalArrayElementReferenceIR_2D_weak::operator = (const GALGAS_getUniversalArrayElementReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR_2D_weak::GALGAS_getUniversalArrayElementReferenceIR_2D_weak (const GALGAS_getUniversalArrayElementReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR_2D_weak GALGAS_getUniversalArrayElementReferenceIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR_2D_weak::bang_getUniversalArrayElementReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalArrayElementReferenceIR) ;
      result = GALGAS_getUniversalArrayElementReferenceIR ((cPtr_getUniversalArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getUniversalArrayElementReferenceIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2D_weak ("getUniversalArrayElementReferenceIR-weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getUniversalArrayElementReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getUniversalArrayElementReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalArrayElementReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR_2D_weak GALGAS_getUniversalArrayElementReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR_2D_weak result ;
  const GALGAS_getUniversalArrayElementReferenceIR_2D_weak * p = (const GALGAS_getUniversalArrayElementReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getUniversalArrayElementReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetComputedPropertyValue (GALGAS_instructionListIR & ioObject,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     const GALGAS_objectIR constinArgument_inReceiverIR,
                                                     const GALGAS_string constinArgument_inLLVMGetterName,
                                                     const GALGAS_omnibusType constinArgument_inResultType,
                                                     GALGAS_objectIR & outArgument_outResultValueIR,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValueIR.drop () ; // Release 'out' argument
  GALGAS_string var_result_5F_llvmName_268 ;
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_result_5F_llvmName_268, inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 9)) ;
  }
  outArgument_outResultValueIR = GALGAS_objectIR::class_func_llvmNamedValue (constinArgument_inResultType, var_result_5F_llvmName_268  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 10)) ;
  ioObject.addAssign_operation (GALGAS_getComputedPropertyValueIR::init_21__21__21_ (constinArgument_inReceiverIR, constinArgument_inLLVMGetterName, outArgument_outResultValueIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 11)) ;
}


//--------------------------------------------------------------------------------------------------
// @getComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMGetterName (),
mProperty_mResultValueIR () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getComputedPropertyValueIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverIR.printNonNullClassInstanceProperties ("mReceiverIR") ;
    mProperty_mLLVMGetterName.printNonNullClassInstanceProperties ("mLLVMGetterName") ;
    mProperty_mResultValueIR.printNonNullClassInstanceProperties ("mResultValueIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_getComputedPropertyValueIR::objectCompare (const GALGAS_getComputedPropertyValueIR & inOperand) const {
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

GALGAS_getComputedPropertyValueIR::GALGAS_getComputedPropertyValueIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR GALGAS_getComputedPropertyValueIR::
init_21__21__21_ (const GALGAS_objectIR & in_mReceiverIR,
                  const GALGAS_string & in_mLLVMGetterName,
                  const GALGAS_objectIR & in_mResultValueIR,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_getComputedPropertyValueIR * object = nullptr ;
  macroMyNew (object, cPtr_getComputedPropertyValueIR (inCompiler COMMA_THERE)) ;
  object->getComputedPropertyValueIR_init_21__21__21_ (in_mReceiverIR, in_mLLVMGetterName, in_mResultValueIR, inCompiler) ;
  const GALGAS_getComputedPropertyValueIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getComputedPropertyValueIR::
getComputedPropertyValueIR_init_21__21__21_ (const GALGAS_objectIR & in_mReceiverIR,
                                             const GALGAS_string & in_mLLVMGetterName,
                                             const GALGAS_objectIR & in_mResultValueIR,
                                             Compiler * /* inCompiler */) {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMGetterName = in_mLLVMGetterName ;
  mProperty_mResultValueIR = in_mResultValueIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR::GALGAS_getComputedPropertyValueIR (const cPtr_getComputedPropertyValueIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getComputedPropertyValueIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR GALGAS_getComputedPropertyValueIR::class_func_new (const GALGAS_objectIR & in_mReceiverIR,
                                                                                     const GALGAS_string & in_mLLVMGetterName,
                                                                                     const GALGAS_objectIR & in_mResultValueIR
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_getComputedPropertyValueIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getComputedPropertyValueIR (in_mReceiverIR, in_mLLVMGetterName, in_mResultValueIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getComputedPropertyValueIR::readProperty_mReceiverIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mReceiverIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getComputedPropertyValueIR::setProperty_mReceiverIR (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mReceiverIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getComputedPropertyValueIR::readProperty_mLLVMGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mLLVMGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getComputedPropertyValueIR::setProperty_mLLVMGetterName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mLLVMGetterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getComputedPropertyValueIR::readProperty_mResultValueIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mResultValueIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getComputedPropertyValueIR::setProperty_mResultValueIR (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mResultValueIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (const GALGAS_objectIR & in_mReceiverIR,
                                                                  const GALGAS_string & in_mLLVMGetterName,
                                                                  const GALGAS_objectIR & in_mResultValueIR
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMGetterName (),
mProperty_mResultValueIR () {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMGetterName = in_mLLVMGetterName ;
  mProperty_mResultValueIR = in_mResultValueIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getComputedPropertyValueIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;
}

void cPtr_getComputedPropertyValueIR::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@getComputedPropertyValueIR:") ;
  mProperty_mReceiverIR.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultValueIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getComputedPropertyValueIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMGetterName, mProperty_mResultValueIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @getComputedPropertyValueIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR ("getComputedPropertyValueIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getComputedPropertyValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getComputedPropertyValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getComputedPropertyValueIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR GALGAS_getComputedPropertyValueIR::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getComputedPropertyValueIR result ;
  const GALGAS_getComputedPropertyValueIR * p = (const GALGAS_getComputedPropertyValueIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getComputedPropertyValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getComputedPropertyValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_getComputedPropertyValueIR_2D_weak::objectCompare (const GALGAS_getComputedPropertyValueIR_2D_weak & inOperand) const {
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

GALGAS_getComputedPropertyValueIR_2D_weak::GALGAS_getComputedPropertyValueIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR_2D_weak & GALGAS_getComputedPropertyValueIR_2D_weak::operator = (const GALGAS_getComputedPropertyValueIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR_2D_weak::GALGAS_getComputedPropertyValueIR_2D_weak (const GALGAS_getComputedPropertyValueIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR_2D_weak GALGAS_getComputedPropertyValueIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_getComputedPropertyValueIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR GALGAS_getComputedPropertyValueIR_2D_weak::bang_getComputedPropertyValueIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getComputedPropertyValueIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getComputedPropertyValueIR) ;
      result = GALGAS_getComputedPropertyValueIR ((cPtr_getComputedPropertyValueIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getComputedPropertyValueIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2D_weak ("getComputedPropertyValueIR-weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getComputedPropertyValueIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getComputedPropertyValueIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getComputedPropertyValueIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR_2D_weak GALGAS_getComputedPropertyValueIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getComputedPropertyValueIR_2D_weak result ;
  const GALGAS_getComputedPropertyValueIR_2D_weak * p = (const GALGAS_getComputedPropertyValueIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getComputedPropertyValueIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getComputedPropertyValueIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (GALGAS_instructionListIR & ioObject,
                                                       const GALGAS_objectIR constinArgument_inReceiverIR,
                                                       const GALGAS_string constinArgument_inLLVMSetterName,
                                                       const GALGAS_objectIR constinArgument_inValueIR,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeComputedPropertyValueIR::init_21__21__21_ (constinArgument_inReceiverIR, constinArgument_inLLVMSetterName, constinArgument_inValueIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 7)) ;
}


//--------------------------------------------------------------------------------------------------
// @storeComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_storeComputedPropertyValueIR::cPtr_storeComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMSetterName (),
mProperty_mValueIR () {
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

ComparisonResult GALGAS_storeComputedPropertyValueIR::objectCompare (const GALGAS_storeComputedPropertyValueIR & inOperand) const {
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

GALGAS_storeComputedPropertyValueIR::GALGAS_storeComputedPropertyValueIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR GALGAS_storeComputedPropertyValueIR::
init_21__21__21_ (const GALGAS_objectIR & in_mReceiverIR,
                  const GALGAS_string & in_mLLVMSetterName,
                  const GALGAS_objectIR & in_mValueIR,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeComputedPropertyValueIR * object = nullptr ;
  macroMyNew (object, cPtr_storeComputedPropertyValueIR (inCompiler COMMA_THERE)) ;
  object->storeComputedPropertyValueIR_init_21__21__21_ (in_mReceiverIR, in_mLLVMSetterName, in_mValueIR, inCompiler) ;
  const GALGAS_storeComputedPropertyValueIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeComputedPropertyValueIR::
storeComputedPropertyValueIR_init_21__21__21_ (const GALGAS_objectIR & in_mReceiverIR,
                                               const GALGAS_string & in_mLLVMSetterName,
                                               const GALGAS_objectIR & in_mValueIR,
                                               Compiler * /* inCompiler */) {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMSetterName = in_mLLVMSetterName ;
  mProperty_mValueIR = in_mValueIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR::GALGAS_storeComputedPropertyValueIR (const cPtr_storeComputedPropertyValueIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeComputedPropertyValueIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR GALGAS_storeComputedPropertyValueIR::class_func_new (const GALGAS_objectIR & in_mReceiverIR,
                                                                                         const GALGAS_string & in_mLLVMSetterName,
                                                                                         const GALGAS_objectIR & in_mValueIR
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_storeComputedPropertyValueIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeComputedPropertyValueIR (in_mReceiverIR, in_mLLVMSetterName, in_mValueIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeComputedPropertyValueIR::readProperty_mReceiverIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mReceiverIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeComputedPropertyValueIR::setProperty_mReceiverIR (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mReceiverIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_storeComputedPropertyValueIR::readProperty_mLLVMSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mLLVMSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeComputedPropertyValueIR::setProperty_mLLVMSetterName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mLLVMSetterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeComputedPropertyValueIR::readProperty_mValueIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mValueIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeComputedPropertyValueIR::setProperty_mValueIR (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mValueIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeComputedPropertyValueIR::cPtr_storeComputedPropertyValueIR (const GALGAS_objectIR & in_mReceiverIR,
                                                                      const GALGAS_string & in_mLLVMSetterName,
                                                                      const GALGAS_objectIR & in_mValueIR
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMSetterName (),
mProperty_mValueIR () {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMSetterName = in_mLLVMSetterName ;
  mProperty_mValueIR = in_mValueIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeComputedPropertyValueIR::classDescriptor (void) const {
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

acPtr_class * cPtr_storeComputedPropertyValueIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMSetterName, mProperty_mValueIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @storeComputedPropertyValueIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ("storeComputedPropertyValueIR",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeComputedPropertyValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeComputedPropertyValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeComputedPropertyValueIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR GALGAS_storeComputedPropertyValueIR::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeComputedPropertyValueIR result ;
  const GALGAS_storeComputedPropertyValueIR * p = (const GALGAS_storeComputedPropertyValueIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeComputedPropertyValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeComputedPropertyValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_storeComputedPropertyValueIR_2D_weak::objectCompare (const GALGAS_storeComputedPropertyValueIR_2D_weak & inOperand) const {
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

GALGAS_storeComputedPropertyValueIR_2D_weak::GALGAS_storeComputedPropertyValueIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR_2D_weak & GALGAS_storeComputedPropertyValueIR_2D_weak::operator = (const GALGAS_storeComputedPropertyValueIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR_2D_weak::GALGAS_storeComputedPropertyValueIR_2D_weak (const GALGAS_storeComputedPropertyValueIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR_2D_weak GALGAS_storeComputedPropertyValueIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_storeComputedPropertyValueIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR GALGAS_storeComputedPropertyValueIR_2D_weak::bang_storeComputedPropertyValueIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_storeComputedPropertyValueIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeComputedPropertyValueIR) ;
      result = GALGAS_storeComputedPropertyValueIR ((cPtr_storeComputedPropertyValueIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @storeComputedPropertyValueIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2D_weak ("storeComputedPropertyValueIR-weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeComputedPropertyValueIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeComputedPropertyValueIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeComputedPropertyValueIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR_2D_weak GALGAS_storeComputedPropertyValueIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeComputedPropertyValueIR_2D_weak result ;
  const GALGAS_storeComputedPropertyValueIR_2D_weak * p = (const GALGAS_storeComputedPropertyValueIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeComputedPropertyValueIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeComputedPropertyValueIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetArrayElementReference (GALGAS_instructionListIR & ioObject,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     const GALGAS_objectIR constinArgument_inArrayIR,
                                                     const GALGAS_omnibusType constinArgument_inElementType,
                                                     const GALGAS_objectIR constinArgument_inIndexIR,
                                                     GALGAS_objectIR & outArgument_outElementPtr,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outElementPtr.drop () ; // Release 'out' argument
  GALGAS_string var_llvmName_313 ;
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_313, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 9)) ;
  }
  outArgument_outElementPtr = GALGAS_objectIR::class_func_reference (constinArgument_inElementType, var_llvmName_313  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 11)) ;
  ioObject.addAssign_operation (GALGAS_getArrayElementReferenceIR::init_21__21__21_ (outArgument_outElementPtr, constinArgument_inArrayIR, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 12)) ;
}


//--------------------------------------------------------------------------------------------------
// @getArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_getArrayElementReferenceIR::cPtr_getArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mArray (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getArrayElementReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mArray.printNonNullClassInstanceProperties ("mArray") ;
    mProperty_mIndex.printNonNullClassInstanceProperties ("mIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_getArrayElementReferenceIR::objectCompare (const GALGAS_getArrayElementReferenceIR & inOperand) const {
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

GALGAS_getArrayElementReferenceIR::GALGAS_getArrayElementReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR GALGAS_getArrayElementReferenceIR::
init_21__21__21_ (const GALGAS_objectIR & in_mTarget,
                  const GALGAS_objectIR & in_mArray,
                  const GALGAS_objectIR & in_mIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_getArrayElementReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_getArrayElementReferenceIR (inCompiler COMMA_THERE)) ;
  object->getArrayElementReferenceIR_init_21__21__21_ (in_mTarget, in_mArray, in_mIndex, inCompiler) ;
  const GALGAS_getArrayElementReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getArrayElementReferenceIR::
getArrayElementReferenceIR_init_21__21__21_ (const GALGAS_objectIR & in_mTarget,
                                             const GALGAS_objectIR & in_mArray,
                                             const GALGAS_objectIR & in_mIndex,
                                             Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mArray = in_mArray ;
  mProperty_mIndex = in_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR::GALGAS_getArrayElementReferenceIR (const cPtr_getArrayElementReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getArrayElementReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR GALGAS_getArrayElementReferenceIR::class_func_new (const GALGAS_objectIR & in_mTarget,
                                                                                     const GALGAS_objectIR & in_mArray,
                                                                                     const GALGAS_objectIR & in_mIndex
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_getArrayElementReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getArrayElementReferenceIR (in_mTarget, in_mArray, in_mIndex COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getArrayElementReferenceIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getArrayElementReferenceIR::setProperty_mTarget (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getArrayElementReferenceIR::readProperty_mArray (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mArray ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getArrayElementReferenceIR::setProperty_mArray (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mArray = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getArrayElementReferenceIR::readProperty_mIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getArrayElementReferenceIR::setProperty_mIndex (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getArrayElementReferenceIR::cPtr_getArrayElementReferenceIR (const GALGAS_objectIR & in_mTarget,
                                                                  const GALGAS_objectIR & in_mArray,
                                                                  const GALGAS_objectIR & in_mIndex
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (),
mProperty_mArray (),
mProperty_mIndex () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mArray = in_mArray ;
  mProperty_mIndex = in_mIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getArrayElementReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;
}

void cPtr_getArrayElementReferenceIR::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@getArrayElementReferenceIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArray.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getArrayElementReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getArrayElementReferenceIR (mProperty_mTarget, mProperty_mArray, mProperty_mIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @getArrayElementReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR ("getArrayElementReferenceIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR GALGAS_getArrayElementReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getArrayElementReferenceIR result ;
  const GALGAS_getArrayElementReferenceIR * p = (const GALGAS_getArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_getArrayElementReferenceIR_2D_weak::objectCompare (const GALGAS_getArrayElementReferenceIR_2D_weak & inOperand) const {
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

GALGAS_getArrayElementReferenceIR_2D_weak::GALGAS_getArrayElementReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR_2D_weak & GALGAS_getArrayElementReferenceIR_2D_weak::operator = (const GALGAS_getArrayElementReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR_2D_weak::GALGAS_getArrayElementReferenceIR_2D_weak (const GALGAS_getArrayElementReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR_2D_weak GALGAS_getArrayElementReferenceIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_getArrayElementReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR GALGAS_getArrayElementReferenceIR_2D_weak::bang_getArrayElementReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getArrayElementReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getArrayElementReferenceIR) ;
      result = GALGAS_getArrayElementReferenceIR ((cPtr_getArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getArrayElementReferenceIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2D_weak ("getArrayElementReferenceIR-weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getArrayElementReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getArrayElementReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getArrayElementReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR_2D_weak GALGAS_getArrayElementReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getArrayElementReferenceIR_2D_weak result ;
  const GALGAS_getArrayElementReferenceIR_2D_weak * p = (const GALGAS_getArrayElementReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getArrayElementReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getArrayElementReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSelectOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_objectIR constinArgument_inTargetValue,
                                            const GALGAS_string constinArgument_in_5F_if_5F_variableLLVMName,
                                            const GALGAS_objectIR constinArgument_in_5F_then_5F_variable,
                                            const GALGAS_objectIR constinArgument_in_5F_else_5F_variable,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_selectInstructionIR::init_21__21__21__21_ (constinArgument_inTargetValue, constinArgument_in_5F_if_5F_variableLLVMName, constinArgument_in_5F_then_5F_variable, constinArgument_in_5F_else_5F_variable, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 8)) ;
}


//--------------------------------------------------------------------------------------------------
// @selectInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_m_5F_if_5F_variableLLVMName (),
mProperty_m_5F_then_5F_variable (),
mProperty_m_5F_else_5F_variable () {
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

ComparisonResult GALGAS_selectInstructionIR::objectCompare (const GALGAS_selectInstructionIR & inOperand) const {
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

GALGAS_selectInstructionIR::GALGAS_selectInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::
init_21__21__21__21_ (const GALGAS_objectIR & in_mTargetValue,
                      const GALGAS_string & in_m_5F_if_5F_variableLLVMName,
                      const GALGAS_objectIR & in_m_5F_then_5F_variable,
                      const GALGAS_objectIR & in_m_5F_else_5F_variable,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionIR (inCompiler COMMA_THERE)) ;
  object->selectInstructionIR_init_21__21__21__21_ (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable, inCompiler) ;
  const GALGAS_selectInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionIR::
selectInstructionIR_init_21__21__21__21_ (const GALGAS_objectIR & in_mTargetValue,
                                          const GALGAS_string & in_m_5F_if_5F_variableLLVMName,
                                          const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                          const GALGAS_objectIR & in_m_5F_else_5F_variable,
                                          Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_m_5F_if_5F_variableLLVMName = in_m_5F_if_5F_variableLLVMName ;
  mProperty_m_5F_then_5F_variable = in_m_5F_then_5F_variable ;
  mProperty_m_5F_else_5F_variable = in_m_5F_else_5F_variable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR::GALGAS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::class_func_new (const GALGAS_objectIR & in_mTargetValue,
                                                                       const GALGAS_string & in_m_5F_if_5F_variableLLVMName,
                                                                       const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                                                       const GALGAS_objectIR & in_m_5F_else_5F_variable
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstructionIR (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_selectInstructionIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionIR::setProperty_mTargetValue (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectInstructionIR::readProperty_m_5F_if_5F_variableLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_if_5F_variableLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionIR::setProperty_m_5F_if_5F_variableLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_if_5F_variableLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_selectInstructionIR::readProperty_m_5F_then_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_then_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionIR::setProperty_m_5F_then_5F_variable (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_then_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_selectInstructionIR::readProperty_m_5F_else_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_else_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionIR::setProperty_m_5F_else_5F_variable (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_else_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (const GALGAS_objectIR & in_mTargetValue,
                                                    const GALGAS_string & in_m_5F_if_5F_variableLLVMName,
                                                    const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                                    const GALGAS_objectIR & in_m_5F_else_5F_variable
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
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

const C_galgas_type_descriptor * cPtr_selectInstructionIR::classDescriptor (void) const {
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

acPtr_class * cPtr_selectInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionIR (mProperty_mTargetValue, mProperty_m_5F_if_5F_variableLLVMName, mProperty_m_5F_then_5F_variable, mProperty_m_5F_else_5F_variable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR ("selectInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR result ;
  const GALGAS_selectInstructionIR * p = (const GALGAS_selectInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selectInstructionIR_2D_weak::objectCompare (const GALGAS_selectInstructionIR_2D_weak & inOperand) const {
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

GALGAS_selectInstructionIR_2D_weak::GALGAS_selectInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR_2D_weak & GALGAS_selectInstructionIR_2D_weak::operator = (const GALGAS_selectInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR_2D_weak::GALGAS_selectInstructionIR_2D_weak (const GALGAS_selectInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR_2D_weak GALGAS_selectInstructionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selectInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR GALGAS_selectInstructionIR_2D_weak::bang_selectInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionIR) ;
      result = GALGAS_selectInstructionIR ((cPtr_selectInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR_2D_weak ("selectInstructionIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR_2D_weak GALGAS_selectInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR_2D_weak result ;
  const GALGAS_selectInstructionIR_2D_weak * p = (const GALGAS_selectInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR testArrayIndex'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_testArrayIndex (GALGAS_instructionListIR & ioObject,
                                     const GALGAS_objectIR constinArgument_inIndex,
                                     const GALGAS_location constinArgument_inErrorLocation,
                                     const GALGAS_bigint constinArgument_inSize,
                                     GALGAS_bool & outArgument_outGeneratePanicInstruction,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratePanicInstruction.drop () ; // Release 'out' argument
  GALGAS_bigint var_max_212 ;
  GALGAS_bool var_isUnsigned_230 ;
  GALGAS_bigint joker_199_1 ; // Joker input parameter
  GALGAS_uint joker_241_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)).readProperty_kind ().method_extractInteger (joker_199_1, var_max_212, var_isUnsigned_230, joker_241_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)) ;
  GALGAS_bool test_0 = var_isUnsigned_230.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 9)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_max_212.objectCompare (constinArgument_inSize)) ;
  }
  outArgument_outGeneratePanicInstruction = test_0 ;
  ioObject.addAssign_operation (GALGAS_testArrayIndexIR::init_21__21__21_ (constinArgument_inIndex, constinArgument_inErrorLocation, constinArgument_inSize, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @testArrayIndexIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mIndex (),
mProperty_mErrorLocation (),
mProperty_mSize () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testArrayIndexIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mIndex.printNonNullClassInstanceProperties ("mIndex") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mSize.printNonNullClassInstanceProperties ("mSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_testArrayIndexIR::objectCompare (const GALGAS_testArrayIndexIR & inOperand) const {
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

GALGAS_testArrayIndexIR::GALGAS_testArrayIndexIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::
init_21__21__21_ (const GALGAS_objectIR & in_mIndex,
                  const GALGAS_location & in_mErrorLocation,
                  const GALGAS_bigint & in_mSize,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_testArrayIndexIR * object = nullptr ;
  macroMyNew (object, cPtr_testArrayIndexIR (inCompiler COMMA_THERE)) ;
  object->testArrayIndexIR_init_21__21__21_ (in_mIndex, in_mErrorLocation, in_mSize, inCompiler) ;
  const GALGAS_testArrayIndexIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testArrayIndexIR::
testArrayIndexIR_init_21__21__21_ (const GALGAS_objectIR & in_mIndex,
                                   const GALGAS_location & in_mErrorLocation,
                                   const GALGAS_bigint & in_mSize,
                                   Compiler * /* inCompiler */) {
  mProperty_mIndex = in_mIndex ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR::GALGAS_testArrayIndexIR (const cPtr_testArrayIndexIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testArrayIndexIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::class_func_new (const GALGAS_objectIR & in_mIndex,
                                                                 const GALGAS_location & in_mErrorLocation,
                                                                 const GALGAS_bigint & in_mSize
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR result ;
  macroMyNew (result.mObjectPtr, cPtr_testArrayIndexIR (in_mIndex, in_mErrorLocation, in_mSize COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_testArrayIndexIR::readProperty_mIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_testArrayIndexIR::setProperty_mIndex (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_testArrayIndexIR::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_testArrayIndexIR::setProperty_mErrorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_testArrayIndexIR::readProperty_mSize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_testArrayIndexIR::setProperty_mSize (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testArrayIndexIR class
//--------------------------------------------------------------------------------------------------

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (const GALGAS_objectIR & in_mIndex,
                                              const GALGAS_location & in_mErrorLocation,
                                              const GALGAS_bigint & in_mSize
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mIndex (),
mProperty_mErrorLocation (),
mProperty_mSize () {
  mProperty_mIndex = in_mIndex ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testArrayIndexIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

void cPtr_testArrayIndexIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@testArrayIndexIR:") ;
  mProperty_mIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testArrayIndexIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testArrayIndexIR (mProperty_mIndex, mProperty_mErrorLocation, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @testArrayIndexIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR ("testArrayIndexIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testArrayIndexIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testArrayIndexIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testArrayIndexIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR result ;
  const GALGAS_testArrayIndexIR * p = (const GALGAS_testArrayIndexIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_testArrayIndexIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_testArrayIndexIR_2D_weak::objectCompare (const GALGAS_testArrayIndexIR_2D_weak & inOperand) const {
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

GALGAS_testArrayIndexIR_2D_weak::GALGAS_testArrayIndexIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR_2D_weak & GALGAS_testArrayIndexIR_2D_weak::operator = (const GALGAS_testArrayIndexIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR_2D_weak::GALGAS_testArrayIndexIR_2D_weak (const GALGAS_testArrayIndexIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR_2D_weak GALGAS_testArrayIndexIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_testArrayIndexIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR_2D_weak::bang_testArrayIndexIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_testArrayIndexIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testArrayIndexIR) ;
      result = GALGAS_testArrayIndexIR ((cPtr_testArrayIndexIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @testArrayIndexIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR_2D_weak ("testArrayIndexIR-weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testArrayIndexIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testArrayIndexIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testArrayIndexIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR_2D_weak GALGAS_testArrayIndexIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR_2D_weak result ;
  const GALGAS_testArrayIndexIR_2D_weak * p = (const GALGAS_testArrayIndexIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_testArrayIndexIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSourceLineComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (GALGAS_instructionListIR & ioObject,
                                              const GALGAS_location constinArgument_inSourceLocation,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_sourceLocationIR::init_21_ (constinArgument_inSourceLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @sourceLocationIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_sourceLocationIR::cPtr_sourceLocationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mSourceLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sourceLocationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mSourceLocation.printNonNullClassInstanceProperties ("mSourceLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sourceLocationIR::objectCompare (const GALGAS_sourceLocationIR & inOperand) const {
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

GALGAS_sourceLocationIR::GALGAS_sourceLocationIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::
init_21_ (const GALGAS_location & in_mSourceLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_sourceLocationIR * object = nullptr ;
  macroMyNew (object, cPtr_sourceLocationIR (inCompiler COMMA_THERE)) ;
  object->sourceLocationIR_init_21_ (in_mSourceLocation, inCompiler) ;
  const GALGAS_sourceLocationIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sourceLocationIR::
sourceLocationIR_init_21_ (const GALGAS_location & in_mSourceLocation,
                           Compiler * /* inCompiler */) {
  mProperty_mSourceLocation = in_mSourceLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR::GALGAS_sourceLocationIR (const cPtr_sourceLocationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sourceLocationIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::class_func_new (const GALGAS_location & in_mSourceLocation
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR result ;
  macroMyNew (result.mObjectPtr, cPtr_sourceLocationIR (in_mSourceLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_sourceLocationIR::readProperty_mSourceLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    return p->mProperty_mSourceLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sourceLocationIR::setProperty_mSourceLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    p->mProperty_mSourceLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sourceLocationIR class
//--------------------------------------------------------------------------------------------------

cPtr_sourceLocationIR::cPtr_sourceLocationIR (const GALGAS_location & in_mSourceLocation
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSourceLocation () {
  mProperty_mSourceLocation = in_mSourceLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sourceLocationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

void cPtr_sourceLocationIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@sourceLocationIR:") ;
  mProperty_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sourceLocationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sourceLocationIR (mProperty_mSourceLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sourceLocationIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR ("sourceLocationIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sourceLocationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sourceLocationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sourceLocationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR result ;
  const GALGAS_sourceLocationIR * p = (const GALGAS_sourceLocationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sourceLocationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sourceLocationIR_2D_weak::objectCompare (const GALGAS_sourceLocationIR_2D_weak & inOperand) const {
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

GALGAS_sourceLocationIR_2D_weak::GALGAS_sourceLocationIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR_2D_weak & GALGAS_sourceLocationIR_2D_weak::operator = (const GALGAS_sourceLocationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR_2D_weak::GALGAS_sourceLocationIR_2D_weak (const GALGAS_sourceLocationIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR_2D_weak GALGAS_sourceLocationIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sourceLocationIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR GALGAS_sourceLocationIR_2D_weak::bang_sourceLocationIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sourceLocationIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sourceLocationIR) ;
      result = GALGAS_sourceLocationIR ((cPtr_sourceLocationIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sourceLocationIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR_2D_weak ("sourceLocationIR-weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sourceLocationIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sourceLocationIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sourceLocationIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR_2D_weak GALGAS_sourceLocationIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR_2D_weak result ;
  const GALGAS_sourceLocationIR_2D_weak * p = (const GALGAS_sourceLocationIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sourceLocationIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendFreeComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (GALGAS_instructionListIR & ioObject,
                                        const GALGAS_string constinArgument_inComment,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_freeCommentIR::init_21_ (constinArgument_inComment, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @freeCommentIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_freeCommentIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mComment.printNonNullClassInstanceProperties ("mComment") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_freeCommentIR::objectCompare (const GALGAS_freeCommentIR & inOperand) const {
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

GALGAS_freeCommentIR::GALGAS_freeCommentIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_freeCommentIR GALGAS_freeCommentIR::
init_21_ (const GALGAS_string & in_mComment,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_freeCommentIR * object = nullptr ;
  macroMyNew (object, cPtr_freeCommentIR (inCompiler COMMA_THERE)) ;
  object->freeCommentIR_init_21_ (in_mComment, inCompiler) ;
  const GALGAS_freeCommentIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_freeCommentIR::
freeCommentIR_init_21_ (const GALGAS_string & in_mComment,
                        Compiler * /* inCompiler */) {
  mProperty_mComment = in_mComment ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR::GALGAS_freeCommentIR (const cPtr_freeCommentIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeCommentIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR GALGAS_freeCommentIR::class_func_new (const GALGAS_string & in_mComment
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_freeCommentIR result ;
  macroMyNew (result.mObjectPtr, cPtr_freeCommentIR (in_mComment COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_freeCommentIR::readProperty_mComment (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    return p->mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_freeCommentIR::setProperty_mComment (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    p->mProperty_mComment = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @freeCommentIR class
//--------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (const GALGAS_string & in_mComment
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mComment () {
  mProperty_mComment = in_mComment ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_freeCommentIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

void cPtr_freeCommentIR::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@freeCommentIR:") ;
  mProperty_mComment.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_freeCommentIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_freeCommentIR (mProperty_mComment COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @freeCommentIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeCommentIR ("freeCommentIR",
                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeCommentIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeCommentIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeCommentIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR GALGAS_freeCommentIR::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_freeCommentIR result ;
  const GALGAS_freeCommentIR * p = (const GALGAS_freeCommentIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_freeCommentIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_freeCommentIR_2D_weak::objectCompare (const GALGAS_freeCommentIR_2D_weak & inOperand) const {
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

GALGAS_freeCommentIR_2D_weak::GALGAS_freeCommentIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR_2D_weak & GALGAS_freeCommentIR_2D_weak::operator = (const GALGAS_freeCommentIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR_2D_weak::GALGAS_freeCommentIR_2D_weak (const GALGAS_freeCommentIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR_2D_weak GALGAS_freeCommentIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_freeCommentIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR GALGAS_freeCommentIR_2D_weak::bang_freeCommentIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_freeCommentIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeCommentIR) ;
      result = GALGAS_freeCommentIR ((cPtr_freeCommentIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @freeCommentIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeCommentIR_2D_weak ("freeCommentIR-weak",
                                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeCommentIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeCommentIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeCommentIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR_2D_weak GALGAS_freeCommentIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_freeCommentIR_2D_weak result ;
  const GALGAS_freeCommentIR_2D_weak * p = (const GALGAS_freeCommentIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_freeCommentIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterAccessibleEntities (const GALGAS_instructionListIR inObject,
                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_759 (temp_0, EnumerationOrder::up) ;
  while (enumerator_759.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_759.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 10)) ;
    enumerator_759.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Class for element of '@routineAccessibilityIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineAccessibilityIR : public cCollectionElement {
  public: GALGAS_routineAccessibilityIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_routineAccessibilityIR (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                     const GALGAS_stringset & in_mAccessibleRoutineSet
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineAccessibilityIR (const GALGAS_routineAccessibilityIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineAccessibilityIR::cCollectionElement_routineAccessibilityIR (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                                                      const GALGAS_stringset & in_mAccessibleRoutineSet
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutine, in_mAccessibleRoutineSet) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineAccessibilityIR::cCollectionElement_routineAccessibilityIR (const GALGAS_routineAccessibilityIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutine, inElement.mProperty_mAccessibleRoutineSet) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineAccessibilityIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineAccessibilityIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineAccessibilityIR (mObject.mProperty_mRoutine, mObject.mProperty_mAccessibleRoutineSet COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_routineAccessibilityIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutine" ":") ;
  mObject.mProperty_mRoutine.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccessibleRoutineSet" ":") ;
  mObject.mProperty_mAccessibleRoutineSet.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR::GALGAS_routineAccessibilityIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR::GALGAS_routineAccessibilityIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAccessibilityIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAccessibilityIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::enterElement (const GALGAS_routineAccessibilityIR_2D_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineAccessibilityIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::class_func_listWithValue (const GALGAS_abstractRoutineIR & inOperand0,
                                                                                       const GALGAS_stringset & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_routineAccessibilityIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineAccessibilityIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_abstractRoutineIR & in_mRoutine,
                                                               const GALGAS_stringset & in_mAccessibleRoutineSet
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineAccessibilityIR (in_mRoutine,
                                                            in_mAccessibleRoutineSet COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::addAssign_operation (const GALGAS_abstractRoutineIR & inOperand0,
                                                         const GALGAS_stringset & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineAccessibilityIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_append (const GALGAS_abstractRoutineIR inOperand0,
                                                   const GALGAS_stringset inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineAccessibilityIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_insertAtIndex (const GALGAS_abstractRoutineIR inOperand0,
                                                          const GALGAS_stringset inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_routineAccessibilityIR (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_routineAccessibilityIR::setter_removeAtIndex (GALGAS_abstractRoutineIR & outOperand0,
                                                          GALGAS_stringset & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
        outOperand0 = p->mObject.mProperty_mRoutine ;
        outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
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

void GALGAS_routineAccessibilityIR::setter_popFirst (GALGAS_abstractRoutineIR & outOperand0,
                                                     GALGAS_stringset & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_popLast (GALGAS_abstractRoutineIR & outOperand0,
                                                    GALGAS_stringset & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::method_first (GALGAS_abstractRoutineIR & outOperand0,
                                                  GALGAS_stringset & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::method_last (GALGAS_abstractRoutineIR & outOperand0,
                                                 GALGAS_stringset & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::add_operation (const GALGAS_routineAccessibilityIR & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAccessibilityIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineAccessibilityIR result = GALGAS_routineAccessibilityIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineAccessibilityIR result = GALGAS_routineAccessibilityIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineAccessibilityIR result = GALGAS_routineAccessibilityIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::plusAssign_operation (const GALGAS_routineAccessibilityIR inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_setMRoutineAtIndex (GALGAS_abstractRoutineIR inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutine = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_routineAccessibilityIR::getter_mRoutineAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  GALGAS_abstractRoutineIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    result = p->mObject.mProperty_mRoutine ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_setMAccessibleRoutineSetAtIndex (GALGAS_stringset inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAccessibleRoutineSet = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_routineAccessibilityIR::getter_mAccessibleRoutineSetAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  GALGAS_stringset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    result = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineAccessibilityIR::cEnumerator_routineAccessibilityIR (const GALGAS_routineAccessibilityIR & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element cEnumerator_routineAccessibilityIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR cEnumerator_routineAccessibilityIR::current_mRoutine (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject.mProperty_mRoutine ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_routineAccessibilityIR::current_mAccessibleRoutineSet (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject.mProperty_mAccessibleRoutineSet ;
}




//--------------------------------------------------------------------------------------------------
//
//     @routineAccessibilityIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAccessibilityIR ("routineAccessibilityIR",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineAccessibilityIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineAccessibilityIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineAccessibilityIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR result ;
  const GALGAS_routineAccessibilityIR * p = (const GALGAS_routineAccessibilityIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineAccessibilityIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (cPtr_abstractInstructionIR * inObject,
                                              GALGAS_string & io_ioLLVMcode,
                                              const GALGAS_generationContext constin_inGenerationContext,
                                              GALGAS_generationAdds & io_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    inObject->method_llvmInstructionCode (io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                                 GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (cPtr_abstractInstructionIR * inObject,
                                                  GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    inObject->method_enterAccessibleEntities  (io_ioInvokedRoutineSet, io_ioMaxBranchOfOnInstructions, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@instructionListListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListListIR : public cCollectionElement {
  public: GALGAS_instructionListListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_instructionListListIR (const GALGAS_instructionListIR & in_mInstructionList
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_instructionListListIR (const GALGAS_instructionListListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListListIR::cCollectionElement_instructionListListIR (const GALGAS_instructionListIR & in_mInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListListIR::cCollectionElement_instructionListListIR (const GALGAS_instructionListListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_instructionListListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_instructionListListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_instructionListListIR (mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_instructionListListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR::GALGAS_instructionListListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR::GALGAS_instructionListListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::enterElement (const GALGAS_instructionListListIR_2D_element & inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::class_func_listWithValue (const GALGAS_instructionListIR & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_instructionListListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionListListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_instructionListIR & in_mInstructionList
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListListIR (in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::addAssign_operation (const GALGAS_instructionListIR & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::setter_append (const GALGAS_instructionListIR inOperand0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::setter_insertAtIndex (const GALGAS_instructionListIR inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_instructionListListIR (inOperand0 COMMA_THERE)) ;
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

void GALGAS_instructionListListIR::setter_removeAtIndex (GALGAS_instructionListIR & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
        outOperand0 = p->mObject.mProperty_mInstructionList ;
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

void GALGAS_instructionListListIR::setter_popFirst (GALGAS_instructionListIR & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::setter_popLast (GALGAS_instructionListIR & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::method_first (GALGAS_instructionListIR & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::method_last (GALGAS_instructionListIR & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::add_operation (const GALGAS_instructionListListIR & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListListIR result = GALGAS_instructionListListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListListIR result = GALGAS_instructionListListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListListIR result = GALGAS_instructionListListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::plusAssign_operation (const GALGAS_instructionListListIR inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::setter_setMInstructionListAtIndex (GALGAS_instructionListIR inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListListIR::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_instructionListListIR::cEnumerator_instructionListListIR (const GALGAS_instructionListListIR & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR_2D_element cEnumerator_instructionListListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListListIR * p = (const cCollectionElement_instructionListListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR cEnumerator_instructionListListIR::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_instructionListListIR * p = (const cCollectionElement_instructionListListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @instructionListListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListListIR ("instructionListListIR",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionListListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionListListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_instructionListListIR result ;
  const GALGAS_instructionListListIR * p = (const GALGAS_instructionListListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionListListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctExpressionAST_2D_weak::objectCompare (const GALGAS_ctExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctExpressionAST_2D_weak::GALGAS_ctExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST_2D_weak & GALGAS_ctExpressionAST_2D_weak::operator = (const GALGAS_ctExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST_2D_weak::GALGAS_ctExpressionAST_2D_weak (const GALGAS_ctExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST_2D_weak GALGAS_ctExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ctExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctExpressionAST_2D_weak::bang_ctExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctExpressionAST) ;
      result = GALGAS_ctExpressionAST ((cPtr_ctExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak ("ctExpressionAST-weak",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST_2D_weak GALGAS_ctExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ctExpressionAST_2D_weak result ;
  const GALGAS_ctExpressionAST_2D_weak * p = (const GALGAS_ctExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctInfixExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mInfixOperator (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctInfixExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctInfixExpressionAST::objectCompare (const GALGAS_ctInfixExpressionAST & inOperand) const {
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

GALGAS_ctInfixExpressionAST::GALGAS_ctInfixExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ctInfixExpressionAST GALGAS_ctInfixExpressionAST::
init_21__21__21__21_ (const GALGAS_ctExpressionAST & in_mLeftExpression,
                      const GALGAS_location & in_mOperatorLocation,
                      const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                      const GALGAS_ctExpressionAST & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ctInfixExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctInfixExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctInfixExpressionAST_init_21__21__21__21_ (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression, inCompiler) ;
  const GALGAS_ctInfixExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::
ctInfixExpressionAST_init_21__21__21__21_ (const GALGAS_ctExpressionAST & in_mLeftExpression,
                                           const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                           const GALGAS_ctExpressionAST & in_mRightExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST::GALGAS_ctInfixExpressionAST (const cPtr_ctInfixExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctInfixExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST GALGAS_ctInfixExpressionAST::class_func_new (const GALGAS_ctExpressionAST & in_mLeftExpression,
                                                                         const GALGAS_location & in_mOperatorLocation,
                                                                         const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                         const GALGAS_ctExpressionAST & in_mRightExpression
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ctInfixExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctInfixExpressionAST (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctInfixExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctInfixExpressionAST::setProperty_mLeftExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ctInfixExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctInfixExpressionAST::setProperty_mOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_ctInfixExpressionAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimeInfixOperatorEnumeration () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctInfixExpressionAST::setProperty_mInfixOperator (const GALGAS_compileTimeInfixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctInfixExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctInfixExpressionAST::setProperty_mRightExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctInfixExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (const GALGAS_ctExpressionAST & in_mLeftExpression,
                                                      const GALGAS_location & in_mOperatorLocation,
                                                      const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                      const GALGAS_ctExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mInfixOperator (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctInfixExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST ;
}

void cPtr_ctInfixExpressionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ctInfixExpressionAST:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctInfixExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctInfixExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mInfixOperator, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctInfixExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST ("ctInfixExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctInfixExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctInfixExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctInfixExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST GALGAS_ctInfixExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctInfixExpressionAST result ;
  const GALGAS_ctInfixExpressionAST * p = (const GALGAS_ctInfixExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctInfixExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctInfixExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctInfixExpressionAST_2D_weak::objectCompare (const GALGAS_ctInfixExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctInfixExpressionAST_2D_weak::GALGAS_ctInfixExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST_2D_weak & GALGAS_ctInfixExpressionAST_2D_weak::operator = (const GALGAS_ctInfixExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST_2D_weak::GALGAS_ctInfixExpressionAST_2D_weak (const GALGAS_ctInfixExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST_2D_weak GALGAS_ctInfixExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ctInfixExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST GALGAS_ctInfixExpressionAST_2D_weak::bang_ctInfixExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctInfixExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctInfixExpressionAST) ;
      result = GALGAS_ctInfixExpressionAST ((cPtr_ctInfixExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctInfixExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST_2D_weak ("ctInfixExpressionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctInfixExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctInfixExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctInfixExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST_2D_weak GALGAS_ctInfixExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctInfixExpressionAST_2D_weak result ;
  const GALGAS_ctInfixExpressionAST_2D_weak * p = (const GALGAS_ctInfixExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctInfixExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctInfixExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctPrefixExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mPrefixOperator (),
mProperty_mExpression () {
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

ComparisonResult GALGAS_ctPrefixExpressionAST::objectCompare (const GALGAS_ctPrefixExpressionAST & inOperand) const {
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

GALGAS_ctPrefixExpressionAST::GALGAS_ctPrefixExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST GALGAS_ctPrefixExpressionAST::
init_21__21__21_ (const GALGAS_location & in_mOperatorLocation,
                  const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                  const GALGAS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ctPrefixExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctPrefixExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctPrefixExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mPrefixOperator, in_mExpression, inCompiler) ;
  const GALGAS_ctPrefixExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::
ctPrefixExpressionAST_init_21__21__21_ (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                        const GALGAS_ctExpressionAST & in_mExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST::GALGAS_ctPrefixExpressionAST (const cPtr_ctPrefixExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctPrefixExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST GALGAS_ctPrefixExpressionAST::class_func_new (const GALGAS_location & in_mOperatorLocation,
                                                                           const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                           const GALGAS_ctExpressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_ctPrefixExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctPrefixExpressionAST (in_mOperatorLocation, in_mPrefixOperator, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ctPrefixExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctPrefixExpressionAST::setProperty_mOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorEnumeration GALGAS_ctPrefixExpressionAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_compileTimePrefixOperatorEnumeration () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctPrefixExpressionAST::setProperty_mPrefixOperator (const GALGAS_compileTimePrefixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctPrefixExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctPrefixExpressionAST::setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctPrefixExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                        const GALGAS_ctExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mOperatorLocation (),
mProperty_mPrefixOperator (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctPrefixExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_ctPrefixExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctPrefixExpressionAST (mProperty_mOperatorLocation, mProperty_mPrefixOperator, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctPrefixExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST ("ctPrefixExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctPrefixExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctPrefixExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctPrefixExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST GALGAS_ctPrefixExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctPrefixExpressionAST result ;
  const GALGAS_ctPrefixExpressionAST * p = (const GALGAS_ctPrefixExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctPrefixExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctPrefixExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctPrefixExpressionAST_2D_weak::objectCompare (const GALGAS_ctPrefixExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctPrefixExpressionAST_2D_weak::GALGAS_ctPrefixExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST_2D_weak & GALGAS_ctPrefixExpressionAST_2D_weak::operator = (const GALGAS_ctPrefixExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST_2D_weak::GALGAS_ctPrefixExpressionAST_2D_weak (const GALGAS_ctPrefixExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST_2D_weak GALGAS_ctPrefixExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ctPrefixExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST GALGAS_ctPrefixExpressionAST_2D_weak::bang_ctPrefixExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctPrefixExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctPrefixExpressionAST) ;
      result = GALGAS_ctPrefixExpressionAST ((cPtr_ctPrefixExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctPrefixExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2D_weak ("ctPrefixExpressionAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctPrefixExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctPrefixExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctPrefixExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST_2D_weak GALGAS_ctPrefixExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctPrefixExpressionAST_2D_weak result ;
  const GALGAS_ctPrefixExpressionAST_2D_weak * p = (const GALGAS_ctPrefixExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctPrefixExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctPrefixExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctTrueExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctTrueExpressionAST::cPtr_ctTrueExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctTrueExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctTrueExpressionAST::objectCompare (const GALGAS_ctTrueExpressionAST & inOperand) const {
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

GALGAS_ctTrueExpressionAST::GALGAS_ctTrueExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ctTrueExpressionAST GALGAS_ctTrueExpressionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctTrueExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctTrueExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctTrueExpressionAST_init (inCompiler) ;
  const GALGAS_ctTrueExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::
ctTrueExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST::GALGAS_ctTrueExpressionAST (const cPtr_ctTrueExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctTrueExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST GALGAS_ctTrueExpressionAST::class_func_new (LOCATION_ARGS) {
  GALGAS_ctTrueExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctTrueExpressionAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctTrueExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctTrueExpressionAST::cPtr_ctTrueExpressionAST (LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctTrueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST ;
}

void cPtr_ctTrueExpressionAST::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@ctTrueExpressionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctTrueExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctTrueExpressionAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctTrueExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST ("ctTrueExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctTrueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctTrueExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctTrueExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST GALGAS_ctTrueExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ctTrueExpressionAST result ;
  const GALGAS_ctTrueExpressionAST * p = (const GALGAS_ctTrueExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctTrueExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctTrueExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctTrueExpressionAST_2D_weak::objectCompare (const GALGAS_ctTrueExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctTrueExpressionAST_2D_weak::GALGAS_ctTrueExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST_2D_weak & GALGAS_ctTrueExpressionAST_2D_weak::operator = (const GALGAS_ctTrueExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST_2D_weak::GALGAS_ctTrueExpressionAST_2D_weak (const GALGAS_ctTrueExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST_2D_weak GALGAS_ctTrueExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ctTrueExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST GALGAS_ctTrueExpressionAST_2D_weak::bang_ctTrueExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctTrueExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctTrueExpressionAST) ;
      result = GALGAS_ctTrueExpressionAST ((cPtr_ctTrueExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctTrueExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST_2D_weak ("ctTrueExpressionAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctTrueExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctTrueExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctTrueExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST_2D_weak GALGAS_ctTrueExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ctTrueExpressionAST_2D_weak result ;
  const GALGAS_ctTrueExpressionAST_2D_weak * p = (const GALGAS_ctTrueExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctTrueExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctTrueExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctFalseExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctFalseExpressionAST::cPtr_ctFalseExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctFalseExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctFalseExpressionAST::objectCompare (const GALGAS_ctFalseExpressionAST & inOperand) const {
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

GALGAS_ctFalseExpressionAST::GALGAS_ctFalseExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ctFalseExpressionAST GALGAS_ctFalseExpressionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctFalseExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctFalseExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctFalseExpressionAST_init (inCompiler) ;
  const GALGAS_ctFalseExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::
ctFalseExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST::GALGAS_ctFalseExpressionAST (const cPtr_ctFalseExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctFalseExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST GALGAS_ctFalseExpressionAST::class_func_new (LOCATION_ARGS) {
  GALGAS_ctFalseExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctFalseExpressionAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctFalseExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctFalseExpressionAST::cPtr_ctFalseExpressionAST (LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctFalseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST ;
}

void cPtr_ctFalseExpressionAST::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@ctFalseExpressionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctFalseExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctFalseExpressionAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctFalseExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST ("ctFalseExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctFalseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctFalseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctFalseExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST GALGAS_ctFalseExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctFalseExpressionAST result ;
  const GALGAS_ctFalseExpressionAST * p = (const GALGAS_ctFalseExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctFalseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctFalseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctFalseExpressionAST_2D_weak::objectCompare (const GALGAS_ctFalseExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctFalseExpressionAST_2D_weak::GALGAS_ctFalseExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST_2D_weak & GALGAS_ctFalseExpressionAST_2D_weak::operator = (const GALGAS_ctFalseExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST_2D_weak::GALGAS_ctFalseExpressionAST_2D_weak (const GALGAS_ctFalseExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST_2D_weak GALGAS_ctFalseExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ctFalseExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST GALGAS_ctFalseExpressionAST_2D_weak::bang_ctFalseExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctFalseExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctFalseExpressionAST) ;
      result = GALGAS_ctFalseExpressionAST ((cPtr_ctFalseExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctFalseExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST_2D_weak ("ctFalseExpressionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctFalseExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctFalseExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctFalseExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST_2D_weak GALGAS_ctFalseExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctFalseExpressionAST_2D_weak result ;
  const GALGAS_ctFalseExpressionAST_2D_weak * p = (const GALGAS_ctFalseExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctFalseExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctFalseExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctIntExpressionAST_2D_weak::objectCompare (const GALGAS_ctIntExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctIntExpressionAST_2D_weak::GALGAS_ctIntExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST_2D_weak & GALGAS_ctIntExpressionAST_2D_weak::operator = (const GALGAS_ctIntExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST_2D_weak::GALGAS_ctIntExpressionAST_2D_weak (const GALGAS_ctIntExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST_2D_weak GALGAS_ctIntExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ctIntExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST GALGAS_ctIntExpressionAST_2D_weak::bang_ctIntExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctIntExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctIntExpressionAST) ;
      result = GALGAS_ctIntExpressionAST ((cPtr_ctIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctIntExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIntExpressionAST_2D_weak ("ctIntExpressionAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST_2D_weak GALGAS_ctIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ctIntExpressionAST_2D_weak result ;
  const GALGAS_ctIntExpressionAST_2D_weak * p = (const GALGAS_ctIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ctIdentifierExpressionAST_2D_weak::objectCompare (const GALGAS_ctIdentifierExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctIdentifierExpressionAST_2D_weak::GALGAS_ctIdentifierExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST_2D_weak & GALGAS_ctIdentifierExpressionAST_2D_weak::operator = (const GALGAS_ctIdentifierExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST_2D_weak::GALGAS_ctIdentifierExpressionAST_2D_weak (const GALGAS_ctIdentifierExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST_2D_weak GALGAS_ctIdentifierExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ctIdentifierExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST GALGAS_ctIdentifierExpressionAST_2D_weak::bang_ctIdentifierExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctIdentifierExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctIdentifierExpressionAST) ;
      result = GALGAS_ctIdentifierExpressionAST ((cPtr_ctIdentifierExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctIdentifierExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2D_weak ("ctIdentifierExpressionAST-weak",
                                                                                         & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctIdentifierExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctIdentifierExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctIdentifierExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST_2D_weak GALGAS_ctIdentifierExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ctIdentifierExpressionAST_2D_weak result ;
  const GALGAS_ctIdentifierExpressionAST_2D_weak * p = (const GALGAS_ctIdentifierExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctIdentifierExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIdentifierExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctCheckMap::cMapElement_ctCheckMap (const GALGAS_ctCheckMap_2D_element & inValue
                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctCheckMap::cMapElement_ctCheckMap (const GALGAS_lstring & inKey
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_ctCheckMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ctCheckMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_ctCheckMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_ctCheckMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap::GALGAS_ctCheckMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap::GALGAS_ctCheckMap (const GALGAS_ctCheckMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap & GALGAS_ctCheckMap::operator = (const GALGAS_ctCheckMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_ctCheckMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element_3F_ GALGAS_ctCheckMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ctCheckMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_ctCheckMap * p = (cMapElement_ctCheckMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_ctCheckMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_ctCheckMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::class_func_mapWithMapToOverride (const GALGAS_ctCheckMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_ctCheckMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap::enterElement (const GALGAS_ctCheckMap_2D_element & inValue,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctCheckMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctCheckMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctCheckMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctCheckMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::add_operation (const GALGAS_ctCheckMap & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ctCheckMap result = *this ;
  cEnumerator_ctCheckMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap::setter_insertKey (GALGAS_lstring inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctCheckMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ctCheckMap_searchKey = "there is no '%K' key" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap::method_searchKey (GALGAS_lstring inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_ctCheckMap * p = (const cMapElement_ctCheckMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_ctCheckMap_searchKey
                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_ctCheckMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctCheckMap * GALGAS_ctCheckMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * result = (cMapElement_ctCheckMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ctCheckMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_ctCheckMap::cEnumerator_ctCheckMap (const GALGAS_ctCheckMap & inEnumeratedObject,
                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element cEnumerator_ctCheckMap::current (LOCATION_ARGS) const {
  const cMapElement_ctCheckMap * p = (const cMapElement_ctCheckMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctCheckMap) ;
  return GALGAS_ctCheckMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_ctCheckMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctCheckMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap ("ctCheckMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctCheckMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctCheckMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctCheckMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap result ;
  const GALGAS_ctCheckMap * p = (const GALGAS_ctCheckMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctCheckMap *> (p)) {
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
                                                     const GALGAS_ctCheckMap constin_inMap,
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

cMapElement_ctMap::cMapElement_ctMap (const GALGAS_ctMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mValue (inValue.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctMap::cMapElement_ctMap (const GALGAS_lstring & inKey,
                                      const GALGAS_bigint & in_mValue
                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_ctMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ctMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_ctMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_ctMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap::GALGAS_ctMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap::GALGAS_ctMap (const GALGAS_ctMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap & GALGAS_ctMap::operator = (const GALGAS_ctMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_ctMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_ctMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element_3F_ GALGAS_ctMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ctMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_ctMap * p = (cMapElement_ctMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_ctMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_ctMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mValue = p->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::class_func_mapWithMapToOverride (const GALGAS_ctMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ctMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_ctMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap::enterElement (const GALGAS_ctMap_2D_element & inValue,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap::addAssign_operation (const GALGAS_lstring & inKey,
                                        const GALGAS_bigint & inArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::add_operation (const GALGAS_ctMap & inOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ctMap result = *this ;
  cEnumerator_ctMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap::setter_insertKey (GALGAS_lstring inKey,
                                     GALGAS_bigint inArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * p = nullptr ;
  macroMyNew (p, cMapElement_ctMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ctMap_searchKey = "there is no '%K' key" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap::method_searchKey (GALGAS_lstring inKey,
                                     GALGAS_bigint & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) performSearch (inKey,
                                                                           inCompiler,
                                                                           kSearchErrorMessage_ctMap_searchKey
                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_ctMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_ctMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) attributes ;
  GALGAS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ctMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap::setter_setMValueForKey (GALGAS_bigint inAttributeValue,
                                           GALGAS_string inKey,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ctMap * p = (cMapElement_ctMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ctMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_ctMap * GALGAS_ctMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                     const GALGAS_string & inKey
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * result = (cMapElement_ctMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ctMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_ctMap::cEnumerator_ctMap (const GALGAS_ctMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element cEnumerator_ctMap::current (LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctMap) ;
  return GALGAS_ctMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_ctMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_ctMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap ("ctMap",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::extractObject (const GALGAS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctMap result ;
  const GALGAS_ctMap * p = (const GALGAS_ctMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctMap *> (p)) {
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
                                                       const GALGAS_ctMap constin_inMap,
                                                       GALGAS_bigint & out_outValue,
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

GALGAS_genericFormalParameter::GALGAS_genericFormalParameter (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter GALGAS_genericFormalParameter::class_func_constant (const GALGAS_lstring & inAssociatedValue0
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericFormalParameter result ;
  result.mEnum = Enumeration::enum_constant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_genericFormalParameter_2D_constant (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter GALGAS_genericFormalParameter::class_func_type (const GALGAS_lstring & inAssociatedValue0
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericFormalParameter result ;
  result.mEnum = Enumeration::enum_type ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_genericFormalParameter_2D_type (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter::method_extractConstant (GALGAS_lstring & outAssociatedValue_name,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_constant) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @genericFormalParameter.constant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_genericFormalParameter_2D_constant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter::method_extractType (GALGAS_lstring & outAssociatedValue_name,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_type) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @genericFormalParameter.type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_genericFormalParameter_2D_type *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_constant_3F_ GALGAS_genericFormalParameter::getter_getConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_genericFormalParameter_2D_constant_3F_ result ;
  if (mEnum == Enumeration::enum_constant) {
    const auto ptr = (const GALGAS_genericFormalParameter_2D_constant *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_genericFormalParameter_2D_constant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter::getAssociatedValuesFor_constant (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_genericFormalParameter_2D_constant *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter_2D_type_3F_ GALGAS_genericFormalParameter::getter_getType (UNUSED_LOCATION_ARGS) const {
  GALGAS_genericFormalParameter_2D_type_3F_ result ;
  if (mEnum == Enumeration::enum_type) {
    const auto ptr = (const GALGAS_genericFormalParameter_2D_type *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_genericFormalParameter_2D_type (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter::getAssociatedValuesFor_type (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_genericFormalParameter_2D_type *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_genericFormalParameter [3] = {
  "(not built)",
  "constant",
  "type"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_genericFormalParameter::getter_isConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_constant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_genericFormalParameter::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @genericFormalParameter: ") ;
  ioString.appendCString (gEnumNameArrayFor_genericFormalParameter [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_genericFormalParameter::objectCompare (const GALGAS_genericFormalParameter & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_constant: {
        const auto left = (GALGAS_genericFormalParameter_2D_constant *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GALGAS_genericFormalParameter_2D_constant *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_type: {
        const auto left = (GALGAS_genericFormalParameter_2D_type *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GALGAS_genericFormalParameter_2D_type *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//
//     @genericFormalParameter generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameter ("genericFormalParameter",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericFormalParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericFormalParameter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericFormalParameter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter GALGAS_genericFormalParameter::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameter result ;
  const GALGAS_genericFormalParameter * p = (const GALGAS_genericFormalParameter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericFormalParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement::GALGAS_llvmStringDefinitionElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement GALGAS_llvmStringDefinitionElement::class_func_variable (const GALGAS_lstring & inAssociatedValue0
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement result ;
  result.mEnum = Enumeration::enum_variable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_llvmStringDefinitionElement_2D_variable (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement GALGAS_llvmStringDefinitionElement::class_func_string (const GALGAS_lstring & inAssociatedValue0
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_llvmStringDefinitionElement_2D_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement::method_extractVariable (GALGAS_lstring & outAssociatedValue_name,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_variable) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmStringDefinitionElement.variable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_llvmStringDefinitionElement_2D_variable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement::method_extractString (GALGAS_lstring & outAssociatedValue_value,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @llvmStringDefinitionElement.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_llvmStringDefinitionElement_2D_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_variable_3F_ GALGAS_llvmStringDefinitionElement::getter_getVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinitionElement_2D_variable_3F_ result ;
  if (mEnum == Enumeration::enum_variable) {
    const auto ptr = (const GALGAS_llvmStringDefinitionElement_2D_variable *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_llvmStringDefinitionElement_2D_variable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement::getAssociatedValuesFor_variable (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_llvmStringDefinitionElement_2D_variable *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement_2D_string_3F_ GALGAS_llvmStringDefinitionElement::getter_getString (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinitionElement_2D_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GALGAS_llvmStringDefinitionElement_2D_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_llvmStringDefinitionElement_2D_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement::getAssociatedValuesFor_string (GALGAS_lstring & out_value) const {
  const auto ptr = (const GALGAS_llvmStringDefinitionElement_2D_string *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmStringDefinitionElement [3] = {
  "(not built)",
  "variable",
  "string"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmStringDefinitionElement::getter_isVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_variable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmStringDefinitionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @llvmStringDefinitionElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmStringDefinitionElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmStringDefinitionElement::objectCompare (const GALGAS_llvmStringDefinitionElement & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_variable: {
        const auto left = (GALGAS_llvmStringDefinitionElement_2D_variable *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GALGAS_llvmStringDefinitionElement_2D_variable *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_string: {
        const auto left = (GALGAS_llvmStringDefinitionElement_2D_string *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GALGAS_llvmStringDefinitionElement_2D_string *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//
//     @llvmStringDefinitionElement generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement ("llvmStringDefinitionElement",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmStringDefinitionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmStringDefinitionElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmStringDefinitionElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement GALGAS_llvmStringDefinitionElement::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement result ;
  const GALGAS_llvmStringDefinitionElement * p = (const GALGAS_llvmStringDefinitionElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmStringDefinitionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@llvmStringDefinition' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmStringDefinition : public cCollectionElement {
  public: GALGAS_llvmStringDefinition_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmStringDefinition (const GALGAS_llvmStringDefinitionElement & in_mElement
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmStringDefinition (const GALGAS_llvmStringDefinition_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmStringDefinition::cCollectionElement_llvmStringDefinition (const GALGAS_llvmStringDefinitionElement & in_mElement
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmStringDefinition::cCollectionElement_llvmStringDefinition (const GALGAS_llvmStringDefinition_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_llvmStringDefinition::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_llvmStringDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_llvmStringDefinition * operand = (cCollectionElement_llvmStringDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_llvmStringDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition::GALGAS_llvmStringDefinition (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition::GALGAS_llvmStringDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_llvmStringDefinition (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_llvmStringDefinition (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::enterElement (const GALGAS_llvmStringDefinition_2D_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmStringDefinition (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::class_func_listWithValue (const GALGAS_llvmStringDefinitionElement & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinition result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_llvmStringDefinition (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_llvmStringDefinition::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_llvmStringDefinitionElement & in_mElement
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmStringDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmStringDefinition (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::addAssign_operation (const GALGAS_llvmStringDefinitionElement & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmStringDefinition (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::setter_append (const GALGAS_llvmStringDefinitionElement inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmStringDefinition (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::setter_insertAtIndex (const GALGAS_llvmStringDefinitionElement inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_llvmStringDefinition (inOperand0 COMMA_THERE)) ;
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

void GALGAS_llvmStringDefinition::setter_removeAtIndex (GALGAS_llvmStringDefinitionElement & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_llvmStringDefinition::setter_popFirst (GALGAS_llvmStringDefinitionElement & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::setter_popLast (GALGAS_llvmStringDefinitionElement & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::method_first (GALGAS_llvmStringDefinitionElement & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::method_last (GALGAS_llvmStringDefinitionElement & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::add_operation (const GALGAS_llvmStringDefinition & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinition result = GALGAS_llvmStringDefinition::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinition result = GALGAS_llvmStringDefinition::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinition result = GALGAS_llvmStringDefinition::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::plusAssign_operation (const GALGAS_llvmStringDefinition inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::setter_setMElementAtIndex (GALGAS_llvmStringDefinitionElement inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement GALGAS_llvmStringDefinition::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  GALGAS_llvmStringDefinitionElement result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_llvmStringDefinition::cEnumerator_llvmStringDefinition (const GALGAS_llvmStringDefinition & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition_2D_element cEnumerator_llvmStringDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_llvmStringDefinition * p = (const cCollectionElement_llvmStringDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement cEnumerator_llvmStringDefinition::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_llvmStringDefinition * p = (const cCollectionElement_llvmStringDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//
//     @llvmStringDefinition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinition ("llvmStringDefinition",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmStringDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmStringDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmStringDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinition result ;
  const GALGAS_llvmStringDefinition * p = (const GALGAS_llvmStringDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmStringDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmGenericType_2D_weak::objectCompare (const GALGAS_llvmGenericType_2D_weak & inOperand) const {
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

GALGAS_llvmGenericType_2D_weak::GALGAS_llvmGenericType_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType_2D_weak & GALGAS_llvmGenericType_2D_weak::operator = (const GALGAS_llvmGenericType & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType_2D_weak::GALGAS_llvmGenericType_2D_weak (const GALGAS_llvmGenericType & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType_2D_weak GALGAS_llvmGenericType_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmGenericType_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType GALGAS_llvmGenericType_2D_weak::bang_llvmGenericType_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenericType result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenericType) ;
      result = GALGAS_llvmGenericType ((cPtr_llvmGenericType *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmGenericType-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenericType_2D_weak ("llvmGenericType-weak",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenericType_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenericType_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenericType_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType_2D_weak GALGAS_llvmGenericType_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenericType_2D_weak result ;
  const GALGAS_llvmGenericType_2D_weak * p = (const GALGAS_llvmGenericType_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenericType_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenericType-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@genericFormalParameterList buildFormalGenericConstantMap'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildFormalGenericConstantMap (const GALGAS_genericFormalParameterList inObject,
                                                    GALGAS_ctCheckMap & ioArgument_ioMap,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_genericFormalParameterList temp_0 = inObject ;
  cEnumerator_genericFormalParameterList enumerator_6717 (temp_0, EnumerationOrder::up) ;
  while (enumerator_6717.hasCurrentObject ()) {
    switch (enumerator_6717.current_mParameter (HERE).enumValue ()) {
    case GALGAS_genericFormalParameter::Enumeration::invalid:
      break ;
    case GALGAS_genericFormalParameter::Enumeration::enum_type:
      break ;
    case GALGAS_genericFormalParameter::Enumeration::enum_constant:
      {
        GALGAS_lstring extractedValue_6796_constantName_0 ;
        enumerator_6717.current_mParameter (HERE).getAssociatedValuesFor_constant (extractedValue_6796_constantName_0) ;
        {
        ioArgument_ioMap.setter_insertKey (extractedValue_6796_constantName_0, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 187)) ;
        }
      }
      break ;
    }
    enumerator_6717.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmStringDefinition checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompileTimeExpression (const GALGAS_llvmStringDefinition inObject,
                                                 const GALGAS_ctCheckMap constinArgument_inMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmStringDefinition temp_0 = inObject ;
  cEnumerator_llvmStringDefinition enumerator_7079 (temp_0, EnumerationOrder::up) ;
  while (enumerator_7079.hasCurrentObject ()) {
    switch (enumerator_7079.current_mElement (HERE).enumValue ()) {
    case GALGAS_llvmStringDefinitionElement::Enumeration::invalid:
      break ;
    case GALGAS_llvmStringDefinitionElement::Enumeration::enum_string:
      break ;
    case GALGAS_llvmStringDefinitionElement::Enumeration::enum_variable:
      {
        GALGAS_lstring extractedValue_7160_name_0 ;
        enumerator_7079.current_mElement (HERE).getAssociatedValuesFor_variable (extractedValue_7160_name_0) ;
        constinArgument_inMap.method_searchKey (extractedValue_7160_name_0, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 199)) ;
      }
      break ;
    }
    enumerator_7079.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::objectCompare (const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak & GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::operator = (const GALGAS_llvmAssignmentOperatorDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (const GALGAS_llvmAssignmentOperatorDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::bang_llvmAssignmentOperatorDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmAssignmentOperatorDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
      result = GALGAS_llvmAssignmentOperatorDeclarationAST ((cPtr_llvmAssignmentOperatorDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak ("llvmAssignmentOperatorDeclarationAST-weak",
                                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak result ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak * p = (const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       GALGAS_instructionListIR & io_ioInstructionListIR,
                                       GALGAS_allocaList & io_ioAllocaList,
                                       const GALGAS_omnibusType constin_inTargetType,
                                       const GALGAS_string constin_inTargetLLVMName,
                                       const GALGAS_objectIR constin_inSourcePossibleReference,
                                       const GALGAS_location constin_inErrorLocation,
                                       const GALGAS_bool constin_inTargetIsInitialized,
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

ComparisonResult GALGAS_llvmAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_llvmAssignmentOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_llvmAssignmentOperatorUsage_2D_weak::GALGAS_llvmAssignmentOperatorUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage_2D_weak & GALGAS_llvmAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_llvmAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage_2D_weak::GALGAS_llvmAssignmentOperatorUsage_2D_weak (const GALGAS_llvmAssignmentOperatorUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage_2D_weak GALGAS_llvmAssignmentOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage GALGAS_llvmAssignmentOperatorUsage_2D_weak::bang_llvmAssignmentOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorUsage) ;
      result = GALGAS_llvmAssignmentOperatorUsage ((cPtr_llvmAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2D_weak ("llvmAssignmentOperatorUsage-weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage_2D_weak GALGAS_llvmAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_llvmAssignmentOperatorUsage_2D_weak * p = (const GALGAS_llvmAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendAssignmentIR'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendAssignmentIR (GALGAS_instructionListIR & ioObject,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         const GALGAS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         const GALGAS_omnibusType constinArgument_inTargetType,
                                         const GALGAS_string constinArgument_inTargetLLVMName,
                                         const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_bool constinArgument_inTargetIsInitialized,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_16091 = function_assignmentOperatorKey (constinArgument_inTargetType, constinArgument_inErrorLocation, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)) ;
  GALGAS_abstractAssignmentOperatorUsage var_operatorUsage_16233 ;
  constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_16091, var_operatorUsage_16233, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)) ;
  GALGAS_instructionListIR temp_0 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 347)) ;
  GALGAS_instructionListIR var_instructions_16273 = temp_0 ;
  callExtensionMethod_generateCode ((cPtr_abstractAssignmentOperatorUsage *) var_operatorUsage_16233.ptr (), ioArgument_ioTemporaries, var_instructions_16273, ioArgument_ioAllocaList, constinArgument_inTargetType, constinArgument_inTargetLLVMName, constinArgument_inSourcePossibleReference, constinArgument_inErrorLocation, constinArgument_inTargetIsInitialized, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 348)) ;
  ioObject.plusAssign_operation(var_instructions_16273, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 358)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assignmentRoutineIR_2D_weak::objectCompare (const GALGAS_assignmentRoutineIR_2D_weak & inOperand) const {
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

GALGAS_assignmentRoutineIR_2D_weak::GALGAS_assignmentRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR_2D_weak & GALGAS_assignmentRoutineIR_2D_weak::operator = (const GALGAS_assignmentRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR_2D_weak::GALGAS_assignmentRoutineIR_2D_weak (const GALGAS_assignmentRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR_2D_weak GALGAS_assignmentRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assignmentRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR GALGAS_assignmentRoutineIR_2D_weak::bang_assignmentRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentRoutineIR) ;
      result = GALGAS_assignmentRoutineIR ((cPtr_assignmentRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR_2D_weak ("assignmentRoutineIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR_2D_weak GALGAS_assignmentRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentRoutineIR_2D_weak result ;
  const GALGAS_assignmentRoutineIR_2D_weak * p = (const GALGAS_assignmentRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::objectCompare (const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak & inOperand) const {
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

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak & GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::operator = (const GALGAS_simpleAssignmentCopyRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (const GALGAS_simpleAssignmentCopyRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_simpleAssignmentCopyRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::bang_simpleAssignmentCopyRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_simpleAssignmentCopyRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleAssignmentCopyRoutineIR) ;
      result = GALGAS_simpleAssignmentCopyRoutineIR ((cPtr_simpleAssignmentCopyRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @simpleAssignmentCopyRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2D_weak ("simpleAssignmentCopyRoutineIR-weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_simpleAssignmentCopyRoutineIR_2D_weak result ;
  const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak * p = (const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleAssignmentCopyRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @simpleCopyAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_simpleCopyAssignmentOperatorUsage::cPtr_simpleCopyAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_simpleCopyAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_simpleCopyAssignmentOperatorUsage::objectCompare (const GALGAS_simpleCopyAssignmentOperatorUsage & inOperand) const {
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

GALGAS_simpleCopyAssignmentOperatorUsage::GALGAS_simpleCopyAssignmentOperatorUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage GALGAS_simpleCopyAssignmentOperatorUsage::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_simpleCopyAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_simpleCopyAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->simpleCopyAssignmentOperatorUsage_init (inCompiler) ;
  const GALGAS_simpleCopyAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_simpleCopyAssignmentOperatorUsage::
simpleCopyAssignmentOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage::GALGAS_simpleCopyAssignmentOperatorUsage (const cPtr_simpleCopyAssignmentOperatorUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage GALGAS_simpleCopyAssignmentOperatorUsage::class_func_new (LOCATION_ARGS) {
  GALGAS_simpleCopyAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_simpleCopyAssignmentOperatorUsage (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @simpleCopyAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_simpleCopyAssignmentOperatorUsage::cPtr_simpleCopyAssignmentOperatorUsage (LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_simpleCopyAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

void cPtr_simpleCopyAssignmentOperatorUsage::description (String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@simpleCopyAssignmentOperatorUsage]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_simpleCopyAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_simpleCopyAssignmentOperatorUsage (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @simpleCopyAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ("simpleCopyAssignmentOperatorUsage",
                                                                                         & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleCopyAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleCopyAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleCopyAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage GALGAS_simpleCopyAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_simpleCopyAssignmentOperatorUsage result ;
  const GALGAS_simpleCopyAssignmentOperatorUsage * p = (const GALGAS_simpleCopyAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_simpleCopyAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak & GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_simpleCopyAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak (const GALGAS_simpleCopyAssignmentOperatorUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::bang_simpleCopyAssignmentOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_simpleCopyAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
      result = GALGAS_simpleCopyAssignmentOperatorUsage ((cPtr_simpleCopyAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @simpleCopyAssignmentOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak ("simpleCopyAssignmentOperatorUsage-weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak * p = (const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement::GALGAS_llvmGenerationInstructionElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElement::class_func_string (const GALGAS_string & inAssociatedValue0
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_llvmGenerationInstructionElement_2D_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElement::class_func_symbol (const GALGAS_lstring & inAssociatedValue0
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_symbol ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_llvmGenerationInstructionElement_2D_symbol (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElement::class_func_type (const GALGAS_lstring & inAssociatedValue0
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement result ;
  result.mEnum = Enumeration::enum_type ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_llvmGenerationInstructionElement_2D_type (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::method_extractString (GALGAS_string & outAssociatedValue_string,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_string.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_llvmGenerationInstructionElement_2D_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_string = ptr->mProperty_string ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::method_extractSymbol (GALGAS_lstring & outAssociatedValue_name,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_symbol) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.symbol invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_llvmGenerationInstructionElement_2D_symbol *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::method_extractType (GALGAS_lstring & outAssociatedValue_name,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_type) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @llvmGenerationInstructionElement.type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_llvmGenerationInstructionElement_2D_type *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_string_3F_ GALGAS_llvmGenerationInstructionElement::getter_getString (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElement_2D_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GALGAS_llvmGenerationInstructionElement_2D_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_llvmGenerationInstructionElement_2D_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::getAssociatedValuesFor_string (GALGAS_string & out_string) const {
  const auto ptr = (const GALGAS_llvmGenerationInstructionElement_2D_string *) mAssociatedValues.associatedValuesPointer () ;
  out_string = ptr->mProperty_string ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ GALGAS_llvmGenerationInstructionElement::getter_getSymbol (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElement_2D_symbol_3F_ result ;
  if (mEnum == Enumeration::enum_symbol) {
    const auto ptr = (const GALGAS_llvmGenerationInstructionElement_2D_symbol *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_llvmGenerationInstructionElement_2D_symbol (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::getAssociatedValuesFor_symbol (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_llvmGenerationInstructionElement_2D_symbol *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement_2D_type_3F_ GALGAS_llvmGenerationInstructionElement::getter_getType (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElement_2D_type_3F_ result ;
  if (mEnum == Enumeration::enum_type) {
    const auto ptr = (const GALGAS_llvmGenerationInstructionElement_2D_type *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_llvmGenerationInstructionElement_2D_type (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::getAssociatedValuesFor_type (GALGAS_lstring & out_name) const {
  const auto ptr = (const GALGAS_llvmGenerationInstructionElement_2D_type *) mAssociatedValues.associatedValuesPointer () ;
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

GALGAS_bool GALGAS_llvmGenerationInstructionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmGenerationInstructionElement::getter_isSymbol (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_symbol == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmGenerationInstructionElement::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @llvmGenerationInstructionElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmGenerationInstructionElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElement generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ("llvmGenerationInstructionElement",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElement::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement result ;
  const GALGAS_llvmGenerationInstructionElement * p = (const GALGAS_llvmGenerationInstructionElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstructionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@llvmGenerationInstructionElementList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_llvmGenerationInstructionElementList : public cCollectionElement {
  public: GALGAS_llvmGenerationInstructionElementList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElement & in_mElement
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElementList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionElementList::cCollectionElement_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElement & in_mElement
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionElementList::cCollectionElement_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElementList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_llvmGenerationInstructionElementList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList::GALGAS_llvmGenerationInstructionElementList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList::GALGAS_llvmGenerationInstructionElementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_llvmGenerationInstructionElementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_llvmGenerationInstructionElementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::enterElement (const GALGAS_llvmGenerationInstructionElementList_2D_element & inValue,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::class_func_listWithValue (const GALGAS_llvmGenerationInstructionElement & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElementList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_llvmGenerationInstructionElementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_llvmGenerationInstructionElementList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_llvmGenerationInstructionElement & in_mElement
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionElementList * p = nullptr ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::addAssign_operation (const GALGAS_llvmGenerationInstructionElement & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::setter_append (const GALGAS_llvmGenerationInstructionElement inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::setter_insertAtIndex (const GALGAS_llvmGenerationInstructionElement inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_llvmGenerationInstructionElementList::setter_removeAtIndex (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_llvmGenerationInstructionElementList::setter_popFirst (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::setter_popLast (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::method_first (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::method_last (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::add_operation (const GALGAS_llvmGenerationInstructionElementList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElementList result = GALGAS_llvmGenerationInstructionElementList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElementList result = GALGAS_llvmGenerationInstructionElementList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElementList result = GALGAS_llvmGenerationInstructionElementList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::plusAssign_operation (const GALGAS_llvmGenerationInstructionElementList inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::setter_setMElementAtIndex (GALGAS_llvmGenerationInstructionElement inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElementList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  GALGAS_llvmGenerationInstructionElement result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_llvmGenerationInstructionElementList::cEnumerator_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElementList & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList_2D_element cEnumerator_llvmGenerationInstructionElementList::current (LOCATION_ARGS) const {
  const cCollectionElement_llvmGenerationInstructionElementList * p = (const cCollectionElement_llvmGenerationInstructionElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement cEnumerator_llvmGenerationInstructionElementList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_llvmGenerationInstructionElementList * p = (const cCollectionElement_llvmGenerationInstructionElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElementList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ("llvmGenerationInstructionElementList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionElementList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionElementList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElementList result ;
  const GALGAS_llvmGenerationInstructionElementList * p = (const GALGAS_llvmGenerationInstructionElementList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstructionElementList *> (p)) {
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

cPtr_abstractLLVMInstruction::cPtr_abstractLLVMInstruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractLLVMInstruction::objectCompare (const GALGAS_abstractLLVMInstruction & inOperand) const {
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

GALGAS_abstractLLVMInstruction::GALGAS_abstractLLVMInstruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction::GALGAS_abstractLLVMInstruction (const cPtr_abstractLLVMInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLLVMInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLLVMInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLLVMInstruction::cPtr_abstractLLVMInstruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractLLVMInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction ("abstractLLVMInstruction",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLLVMInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLLVMInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLLVMInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLLVMInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction GALGAS_abstractLLVMInstruction::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractLLVMInstruction result ;
  const GALGAS_abstractLLVMInstruction * p = (const GALGAS_abstractLLVMInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractLLVMInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLLVMInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractLLVMInstruction_2D_weak::objectCompare (const GALGAS_abstractLLVMInstruction_2D_weak & inOperand) const {
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

GALGAS_abstractLLVMInstruction_2D_weak::GALGAS_abstractLLVMInstruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction_2D_weak & GALGAS_abstractLLVMInstruction_2D_weak::operator = (const GALGAS_abstractLLVMInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction_2D_weak::GALGAS_abstractLLVMInstruction_2D_weak (const GALGAS_abstractLLVMInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction_2D_weak GALGAS_abstractLLVMInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractLLVMInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction GALGAS_abstractLLVMInstruction_2D_weak::bang_abstractLLVMInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractLLVMInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLLVMInstruction) ;
      result = GALGAS_abstractLLVMInstruction ((cPtr_abstractLLVMInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractLLVMInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak ("abstractLLVMInstruction-weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLLVMInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLLVMInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLLVMInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction_2D_weak GALGAS_abstractLLVMInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractLLVMInstruction_2D_weak result ;
  const GALGAS_abstractLLVMInstruction_2D_weak * p = (const GALGAS_abstractLLVMInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractLLVMInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLLVMInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmGenerationInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mGenerationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmGenerationInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mGenerationList.printNonNullClassInstanceProperties ("mGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmGenerationInstruction::objectCompare (const GALGAS_llvmGenerationInstruction & inOperand) const {
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

GALGAS_llvmGenerationInstruction::GALGAS_llvmGenerationInstruction (void) :
GALGAS_abstractLLVMInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmGenerationInstruction GALGAS_llvmGenerationInstruction::
init_21_ (const GALGAS_llvmGenerationInstructionElementList & in_mGenerationList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_llvmGenerationInstruction * object = nullptr ;
  macroMyNew (object, cPtr_llvmGenerationInstruction (inCompiler COMMA_THERE)) ;
  object->llvmGenerationInstruction_init_21_ (in_mGenerationList, inCompiler) ;
  const GALGAS_llvmGenerationInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::
llvmGenerationInstruction_init_21_ (const GALGAS_llvmGenerationInstructionElementList & in_mGenerationList,
                                    Compiler * /* inCompiler */) {
  mProperty_mGenerationList = in_mGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction::GALGAS_llvmGenerationInstruction (const cPtr_llvmGenerationInstruction * inSourcePtr) :
GALGAS_abstractLLVMInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmGenerationInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction GALGAS_llvmGenerationInstruction::class_func_new (const GALGAS_llvmGenerationInstructionElementList & in_mGenerationList
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmGenerationInstruction (in_mGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstruction::readProperty_mGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionElementList () ;
  }else{
    cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
    return p->mProperty_mGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstruction::setProperty_mGenerationList (const GALGAS_llvmGenerationInstructionElementList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
    p->mProperty_mGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmGenerationInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (const GALGAS_llvmGenerationInstructionElementList & in_mGenerationList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (THERE),
mProperty_mGenerationList () {
  mProperty_mGenerationList = in_mGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmGenerationInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

void cPtr_llvmGenerationInstruction::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmGenerationInstruction:") ;
  mProperty_mGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmGenerationInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmGenerationInstruction (mProperty_mGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction ("llvmGenerationInstruction",
                                                                                 & kTypeDescriptor_GALGAS_abstractLLVMInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction GALGAS_llvmGenerationInstruction::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstruction result ;
  const GALGAS_llvmGenerationInstruction * p = (const GALGAS_llvmGenerationInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmGenerationInstruction_2D_weak::objectCompare (const GALGAS_llvmGenerationInstruction_2D_weak & inOperand) const {
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

GALGAS_llvmGenerationInstruction_2D_weak::GALGAS_llvmGenerationInstruction_2D_weak (void) :
GALGAS_abstractLLVMInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction_2D_weak & GALGAS_llvmGenerationInstruction_2D_weak::operator = (const GALGAS_llvmGenerationInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction_2D_weak::GALGAS_llvmGenerationInstruction_2D_weak (const GALGAS_llvmGenerationInstruction & inSource) :
GALGAS_abstractLLVMInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction_2D_weak GALGAS_llvmGenerationInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmGenerationInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction GALGAS_llvmGenerationInstruction_2D_weak::bang_llvmGenerationInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenerationInstruction) ;
      result = GALGAS_llvmGenerationInstruction ((cPtr_llvmGenerationInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction_2D_weak ("llvmGenerationInstruction-weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction_2D_weak GALGAS_llvmGenerationInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstruction_2D_weak result ;
  const GALGAS_llvmGenerationInstruction_2D_weak * p = (const GALGAS_llvmGenerationInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenerationInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_llvmVarInstruction_2D_weak::objectCompare (const GALGAS_llvmVarInstruction_2D_weak & inOperand) const {
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

GALGAS_llvmVarInstruction_2D_weak::GALGAS_llvmVarInstruction_2D_weak (void) :
GALGAS_abstractLLVMInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction_2D_weak & GALGAS_llvmVarInstruction_2D_weak::operator = (const GALGAS_llvmVarInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction_2D_weak::GALGAS_llvmVarInstruction_2D_weak (const GALGAS_llvmVarInstruction & inSource) :
GALGAS_abstractLLVMInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction_2D_weak GALGAS_llvmVarInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_llvmVarInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction GALGAS_llvmVarInstruction_2D_weak::bang_llvmVarInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmVarInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmVarInstruction) ;
      result = GALGAS_llvmVarInstruction ((cPtr_llvmVarInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @llvmVarInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmVarInstruction_2D_weak ("llvmVarInstruction-weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmVarInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmVarInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmVarInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction_2D_weak GALGAS_llvmVarInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_llvmVarInstruction_2D_weak result ;
  const GALGAS_llvmVarInstruction_2D_weak * p = (const GALGAS_llvmVarInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmVarInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmVarInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList appendReturn'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendReturn (GALGAS_llvmGenerationInstructionList & ioObject,
                                   const GALGAS_lstring constinArgument_inReturnType,
                                   const GALGAS_lstring constinArgument_inReturnValue,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 43)) ;
  GALGAS_llvmGenerationInstructionElementList var_elements_1857 = temp_0 ;
  var_elements_1857.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string ("ret ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44)) ;
  var_elements_1857.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_type (constinArgument_inReturnType  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45)) ;
  var_elements_1857.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46)) ;
  var_elements_1857.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (constinArgument_inReturnValue  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47)) ;
  ioObject.addAssign_operation (GALGAS_llvmGenerationInstruction::init_21_ (var_elements_1857, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 48)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkInstructionList (const GALGAS_llvmGenerationInstructionList inObject,
                                           const GALGAS_ctCheckMap constinArgument_inMap,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctCheckMap var_currentMap_4377 = constinArgument_inMap ;
  const GALGAS_llvmGenerationInstructionList temp_0 = inObject ;
  cEnumerator_llvmGenerationInstructionList enumerator_4403 (temp_0, EnumerationOrder::up) ;
  while (enumerator_4403.hasCurrentObject ()) {
    callExtensionMethod_checkInstructionList ((cPtr_abstractLLVMInstruction *) enumerator_4403.current_mInstruction (HERE).ptr (), var_currentMap_4377, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 109)) ;
    enumerator_4403.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkInstructionList (cPtr_abstractLLVMInstruction * inObject,
                                               GALGAS_ctCheckMap & io_ioMap,
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

cMapElement_assignmentGenerationVarMap::cMapElement_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap_2D_element & inValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mValue (inValue.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentGenerationVarMap::cMapElement_assignmentGenerationVarMap (const GALGAS_lstring & inKey,
                                                                                const GALGAS_string & in_mValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_assignmentGenerationVarMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_assignmentGenerationVarMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_assignmentGenerationVarMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_assignmentGenerationVarMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap::GALGAS_assignmentGenerationVarMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap::GALGAS_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap & GALGAS_assignmentGenerationVarMap::operator = (const GALGAS_assignmentGenerationVarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element_3F_ GALGAS_assignmentGenerationVarMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_assignmentGenerationVarMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_assignmentGenerationVarMap * p = (cMapElement_assignmentGenerationVarMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_assignmentGenerationVarMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_assignmentGenerationVarMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mValue = p->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::class_func_mapWithMapToOverride (const GALGAS_assignmentGenerationVarMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentGenerationVarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::enterElement (const GALGAS_assignmentGenerationVarMap_2D_element & inValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentGenerationVarMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentGenerationVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                             const GALGAS_string & inArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentGenerationVarMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentGenerationVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::add_operation (const GALGAS_assignmentGenerationVarMap & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentGenerationVarMap result = *this ;
  cEnumerator_assignmentGenerationVarMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::setter_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_string inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentGenerationVarMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_assignmentGenerationVarMap_searchKey = "internal error" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::method_searchKey (GALGAS_lstring inKey,
                                                          GALGAS_string & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_assignmentGenerationVarMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentGenerationVarMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::setter_setMValueForKey (GALGAS_string inAttributeValue,
                                                                GALGAS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_assignmentGenerationVarMap * p = (cMapElement_assignmentGenerationVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentGenerationVarMap * GALGAS_assignmentGenerationVarMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * result = (cMapElement_assignmentGenerationVarMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_assignmentGenerationVarMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_assignmentGenerationVarMap::cEnumerator_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element cEnumerator_assignmentGenerationVarMap::current (LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
  return GALGAS_assignmentGenerationVarMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_assignmentGenerationVarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_assignmentGenerationVarMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentGenerationVarMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap ("assignmentGenerationVarMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentGenerationVarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentGenerationVarMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentGenerationVarMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap result ;
  const GALGAS_assignmentGenerationVarMap * p = (const GALGAS_assignmentGenerationVarMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentGenerationVarMap *> (p)) {
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

void extensionMethod_generateIRCode (const GALGAS_llvmGenerationInstructionList inObject,
                                     const GALGAS_assignmentGenerationVarMap constinArgument_inVarMap,
                                     const GALGAS_assignmentGenerationVarMap constinArgument_inTypeMap,
                                     GALGAS_stringlist & ioArgument_ioInstructionAsStringListIR,
                                     GALGAS_uint & ioArgument_ioTemporaryIndex,
                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap var_varMap_6167 = constinArgument_inVarMap ;
  GALGAS_assignmentGenerationVarMap var_typeMap_6191 = constinArgument_inTypeMap ;
  const GALGAS_llvmGenerationInstructionList temp_0 = inObject ;
  cEnumerator_llvmGenerationInstructionList enumerator_6218 (temp_0, EnumerationOrder::up) ;
  while (enumerator_6218.hasCurrentObject ()) {
    callExtensionMethod_generateIRCode ((cPtr_abstractLLVMInstruction *) enumerator_6218.current_mInstruction (HERE).ptr (), var_varMap_6167, var_typeMap_6191, ioArgument_ioInstructionAsStringListIR, ioArgument_ioTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 159)) ;
    enumerator_6218.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateIRCode (cPtr_abstractLLVMInstruction * inObject,
                                         GALGAS_assignmentGenerationVarMap & io_ioVarMap,
                                         GALGAS_assignmentGenerationVarMap & io_ioTypeMap,
                                         GALGAS_stringlist & io_ioInstructionAsStringListIR,
                                         GALGAS_uint & io_ioTemporaryIndex,
                                         GALGAS_allocaList & io_ioAllocaList,
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

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element::~ GALGAS_declarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::init_21_ (const GALGAS_abstractDeclarationAST & in_mDeclaration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclarationAST & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::class_func_new (const GALGAS_abstractDeclarationAST & in_mDeclaration,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_declarationListAST_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2D_element ("declarationListAST-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  const GALGAS_declarationListAST_2D_element * p = (const GALGAS_declarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element::GALGAS_checkTargetListAST_2D_element (void) :
mProperty_mTargetConstructLocation (),
mProperty_mAcceptedTargetList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element::~ GALGAS_checkTargetListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element GALGAS_checkTargetListAST_2D_element::init_21__21_ (const GALGAS_location & in_mTargetConstructLocation,
                                                                                         const GALGAS_lstringlist & in_mAcceptedTargetList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_checkTargetListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetConstructLocation = in_mTargetConstructLocation ;
  result.mProperty_mAcceptedTargetList = in_mAcceptedTargetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element::GALGAS_checkTargetListAST_2D_element (const GALGAS_location & inOperand0,
                                                                            const GALGAS_lstringlist & inOperand1) :
mProperty_mTargetConstructLocation (inOperand0),
mProperty_mAcceptedTargetList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element GALGAS_checkTargetListAST_2D_element::class_func_new (const GALGAS_location & in_mTargetConstructLocation,
                                                                                           const GALGAS_lstringlist & in_mAcceptedTargetList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_checkTargetListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetConstructLocation = in_mTargetConstructLocation ;
  result.mProperty_mAcceptedTargetList = in_mAcceptedTargetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_checkTargetListAST_2D_element::isValid (void) const {
  return mProperty_mTargetConstructLocation.isValid () && mProperty_mAcceptedTargetList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST_2D_element::drop (void) {
  mProperty_mTargetConstructLocation.drop () ;
  mProperty_mAcceptedTargetList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @checkTargetListAST-element:") ;
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
//
//     @checkTargetListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkTargetListAST_2D_element ("checkTargetListAST-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkTargetListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkTargetListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkTargetListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element GALGAS_checkTargetListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST_2D_element result ;
  const GALGAS_checkTargetListAST_2D_element * p = (const GALGAS_checkTargetListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_checkTargetListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element::GALGAS_scopeStack_2D_element (void) :
mProperty_mScopeKind (),
mProperty_mFirstBranch (),
mProperty_mInitialStateMap (),
mProperty_mReferenceStateMap (),
mProperty_mObjectList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element::~ GALGAS_scopeStack_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_scopeStack_2D_element GALGAS_scopeStack_2D_element::init_21__21__21__21__21_ (const GALGAS_scopeKind & in_mScopeKind,
                                                                                     const GALGAS_bool & in_mFirstBranch,
                                                                                     const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                                                     const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                                                     const GALGAS_lstringlist & in_mObjectList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeStack_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScopeKind = in_mScopeKind ;
  result.mProperty_mFirstBranch = in_mFirstBranch ;
  result.mProperty_mInitialStateMap = in_mInitialStateMap ;
  result.mProperty_mReferenceStateMap = in_mReferenceStateMap ;
  result.mProperty_mObjectList = in_mObjectList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element::GALGAS_scopeStack_2D_element (const GALGAS_scopeKind & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_referenceStateMap & inOperand2,
                                                            const GALGAS_referenceStateMap & inOperand3,
                                                            const GALGAS_lstringlist & inOperand4) :
mProperty_mScopeKind (inOperand0),
mProperty_mFirstBranch (inOperand1),
mProperty_mInitialStateMap (inOperand2),
mProperty_mReferenceStateMap (inOperand3),
mProperty_mObjectList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element GALGAS_scopeStack_2D_element::class_func_new (const GALGAS_scopeKind & in_mScopeKind,
                                                                           const GALGAS_bool & in_mFirstBranch,
                                                                           const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                                           const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                                           const GALGAS_lstringlist & in_mObjectList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeStack_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScopeKind = in_mScopeKind ;
  result.mProperty_mFirstBranch = in_mFirstBranch ;
  result.mProperty_mInitialStateMap = in_mInitialStateMap ;
  result.mProperty_mReferenceStateMap = in_mReferenceStateMap ;
  result.mProperty_mObjectList = in_mObjectList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_scopeStack_2D_element::isValid (void) const {
  return mProperty_mScopeKind.isValid () && mProperty_mFirstBranch.isValid () && mProperty_mInitialStateMap.isValid () && mProperty_mReferenceStateMap.isValid () && mProperty_mObjectList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack_2D_element::drop (void) {
  mProperty_mScopeKind.drop () ;
  mProperty_mFirstBranch.drop () ;
  mProperty_mInitialStateMap.drop () ;
  mProperty_mReferenceStateMap.drop () ;
  mProperty_mObjectList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack_2D_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @scopeStack-element:") ;
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
//
//     @scopeStack-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack_2D_element ("scopeStack-element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeStack_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeStack_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeStack_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element GALGAS_scopeStack_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_scopeStack_2D_element result ;
  const GALGAS_scopeStack_2D_element * p = (const GALGAS_scopeStack_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_scopeStack_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant::GALGAS_valuedObject_2D_globalConstant (void) :
mProperty_objectIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant::~ GALGAS_valuedObject_2D_globalConstant (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant GALGAS_valuedObject_2D_globalConstant::init_21_ (const GALGAS_objectIR & in_objectIR,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject_2D_globalConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_objectIR = in_objectIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject_2D_globalConstant::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant::GALGAS_valuedObject_2D_globalConstant (const GALGAS_objectIR & inOperand0) :
mProperty_objectIR (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant GALGAS_valuedObject_2D_globalConstant::class_func_new (const GALGAS_objectIR & in_objectIR,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject_2D_globalConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_objectIR = in_objectIR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_valuedObject_2D_globalConstant::isValid (void) const {
  return mProperty_objectIR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject_2D_globalConstant::drop (void) {
  mProperty_objectIR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject_2D_globalConstant::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @valuedObject-globalConstant:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_objectIR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObject-globalConstant generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2D_globalConstant ("valuedObject-globalConstant",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_valuedObject_2D_globalConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2D_globalConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_valuedObject_2D_globalConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObject_2D_globalConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant GALGAS_valuedObject_2D_globalConstant::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject_2D_globalConstant result ;
  const GALGAS_valuedObject_2D_globalConstant * p = (const GALGAS_valuedObject_2D_globalConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_valuedObject_2D_globalConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject-globalConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @valuedObject_2D_globalConstant_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant_3F_::GALGAS_valuedObject_2D_globalConstant_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant_3F_::GALGAS_valuedObject_2D_globalConstant_3F_ (const GALGAS_valuedObject_2D_globalConstant & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant_3F_ GALGAS_valuedObject_2D_globalConstant_3F_::init_nil (void) {
  GALGAS_valuedObject_2D_globalConstant_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_valuedObject_2D_globalConstant_3F_::isValid (void) const {
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

bool GALGAS_valuedObject_2D_globalConstant_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject_2D_globalConstant_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_valuedObject_2D_globalConstant () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject_2D_globalConstant_3F_::description (String & ioString,
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
//
//     @valuedObject-globalConstant? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2D_globalConstant_3F_ ("valuedObject-globalConstant?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_valuedObject_2D_globalConstant_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2D_globalConstant_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_valuedObject_2D_globalConstant_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObject_2D_globalConstant_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant_3F_ GALGAS_valuedObject_2D_globalConstant_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject_2D_globalConstant_3F_ result ;
  const GALGAS_valuedObject_2D_globalConstant_3F_ * p = (const GALGAS_valuedObject_2D_globalConstant_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_valuedObject_2D_globalConstant_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject-globalConstant?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element::GALGAS_declarationDecorationList_2D_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element::~ GALGAS_declarationDecorationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element GALGAS_declarationDecorationList_2D_element::init_21_ (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationDecorationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element::GALGAS_declarationDecorationList_2D_element (const GALGAS_abstractDecoratedDeclaration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element GALGAS_declarationDecorationList_2D_element::class_func_new (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationDecorationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_declarationDecorationList_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationDecorationList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declarationDecorationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList_2D_element ("declarationDecorationList-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationDecorationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationDecorationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationDecorationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element GALGAS_declarationDecorationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_declarationDecorationList_2D_element result ;
  const GALGAS_declarationDecorationList_2D_element * p = (const GALGAS_declarationDecorationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationDecorationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple::GALGAS_constructorValue_2D_simple (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple::~ GALGAS_constructorValue_2D_simple (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_constructorValue_2D_simple GALGAS_constructorValue_2D_simple::init_21_ (const GALGAS_bigint & in_value,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorValue_2D_simple result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_simple::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple::GALGAS_constructorValue_2D_simple (const GALGAS_bigint & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple GALGAS_constructorValue_2D_simple::class_func_new (const GALGAS_bigint & in_value,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorValue_2D_simple result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue_2D_simple::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_simple::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_simple::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorValue-simple:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorValue-simple generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2D_simple ("constructorValue-simple",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorValue_2D_simple::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2D_simple ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorValue_2D_simple::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorValue_2D_simple (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple GALGAS_constructorValue_2D_simple::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue_2D_simple result ;
  const GALGAS_constructorValue_2D_simple * p = (const GALGAS_constructorValue_2D_simple *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorValue_2D_simple *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue-simple", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @constructorValue_2D_simple_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple_3F_::GALGAS_constructorValue_2D_simple_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple_3F_::GALGAS_constructorValue_2D_simple_3F_ (const GALGAS_constructorValue_2D_simple & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple_3F_ GALGAS_constructorValue_2D_simple_3F_::init_nil (void) {
  GALGAS_constructorValue_2D_simple_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue_2D_simple_3F_::isValid (void) const {
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

bool GALGAS_constructorValue_2D_simple_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_simple_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_constructorValue_2D_simple () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_simple_3F_::description (String & ioString,
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
//
//     @constructorValue-simple? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2D_simple_3F_ ("constructorValue-simple?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorValue_2D_simple_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2D_simple_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorValue_2D_simple_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorValue_2D_simple_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_simple_3F_ GALGAS_constructorValue_2D_simple_3F_::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue_2D_simple_3F_ result ;
  const GALGAS_constructorValue_2D_simple_3F_ * p = (const GALGAS_constructorValue_2D_simple_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorValue_2D_simple_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue-simple?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure::GALGAS_constructorValue_2D_structure (void) :
mProperty_sortedOperandList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure::~ GALGAS_constructorValue_2D_structure (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_constructorValue_2D_structure GALGAS_constructorValue_2D_structure::init_21_ (const GALGAS_sortedOperandIRList & in_sortedOperandList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorValue_2D_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sortedOperandList = in_sortedOperandList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_structure::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure::GALGAS_constructorValue_2D_structure (const GALGAS_sortedOperandIRList & inOperand0) :
mProperty_sortedOperandList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure GALGAS_constructorValue_2D_structure::class_func_new (const GALGAS_sortedOperandIRList & in_sortedOperandList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorValue_2D_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sortedOperandList = in_sortedOperandList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue_2D_structure::isValid (void) const {
  return mProperty_sortedOperandList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_structure::drop (void) {
  mProperty_sortedOperandList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_structure::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorValue-structure:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_sortedOperandList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorValue-structure generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2D_structure ("constructorValue-structure",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorValue_2D_structure::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2D_structure ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorValue_2D_structure::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorValue_2D_structure (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure GALGAS_constructorValue_2D_structure::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue_2D_structure result ;
  const GALGAS_constructorValue_2D_structure * p = (const GALGAS_constructorValue_2D_structure *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorValue_2D_structure *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue-structure", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @constructorValue_2D_structure_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure_3F_::GALGAS_constructorValue_2D_structure_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure_3F_::GALGAS_constructorValue_2D_structure_3F_ (const GALGAS_constructorValue_2D_structure & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure_3F_ GALGAS_constructorValue_2D_structure_3F_::init_nil (void) {
  GALGAS_constructorValue_2D_structure_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue_2D_structure_3F_::isValid (void) const {
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

bool GALGAS_constructorValue_2D_structure_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_structure_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_constructorValue_2D_structure () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue_2D_structure_3F_::description (String & ioString,
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
//
//     @constructorValue-structure? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2D_structure_3F_ ("constructorValue-structure?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorValue_2D_structure_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2D_structure_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorValue_2D_structure_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorValue_2D_structure_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue_2D_structure_3F_ GALGAS_constructorValue_2D_structure_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue_2D_structure_3F_ result ;
  const GALGAS_constructorValue_2D_structure_3F_ * p = (const GALGAS_constructorValue_2D_structure_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorValue_2D_structure_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue-structure?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty::GALGAS_propertyGetterKind_2D_computedProperty (void) :
mProperty_typeProxy (),
mProperty_modeDictionary () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty::~ GALGAS_propertyGetterKind_2D_computedProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty GALGAS_propertyGetterKind_2D_computedProperty::init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                           const GALGAS_routineLLVMNameDict & in_modeDictionary,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterKind_2D_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_modeDictionary = in_modeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_computedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty::GALGAS_propertyGetterKind_2D_computedProperty (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                              const GALGAS_routineLLVMNameDict & inOperand1) :
mProperty_typeProxy (inOperand0),
mProperty_modeDictionary (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty GALGAS_propertyGetterKind_2D_computedProperty::class_func_new (const GALGAS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                             const GALGAS_routineLLVMNameDict & in_modeDictionary,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterKind_2D_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_modeDictionary = in_modeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind_2D_computedProperty::isValid (void) const {
  return mProperty_typeProxy.isValid () && mProperty_modeDictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_computedProperty::drop (void) {
  mProperty_typeProxy.drop () ;
  mProperty_modeDictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_computedProperty::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterKind-computedProperty:") ;
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
//
//     @propertyGetterKind-computedProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2D_computedProperty ("propertyGetterKind-computedProperty",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterKind_2D_computedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2D_computedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterKind_2D_computedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterKind_2D_computedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty GALGAS_propertyGetterKind_2D_computedProperty::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind_2D_computedProperty result ;
  const GALGAS_propertyGetterKind_2D_computedProperty * p = (const GALGAS_propertyGetterKind_2D_computedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGetterKind_2D_computedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind-computedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyGetterKind_2D_computedProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty_3F_::GALGAS_propertyGetterKind_2D_computedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty_3F_::GALGAS_propertyGetterKind_2D_computedProperty_3F_ (const GALGAS_propertyGetterKind_2D_computedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty_3F_ GALGAS_propertyGetterKind_2D_computedProperty_3F_::init_nil (void) {
  GALGAS_propertyGetterKind_2D_computedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind_2D_computedProperty_3F_::isValid (void) const {
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

bool GALGAS_propertyGetterKind_2D_computedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_computedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_propertyGetterKind_2D_computedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_computedProperty_3F_::description (String & ioString,
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
//
//     @propertyGetterKind-computedProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2D_computedProperty_3F_ ("propertyGetterKind-computedProperty?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterKind_2D_computedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2D_computedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterKind_2D_computedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterKind_2D_computedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_computedProperty_3F_ GALGAS_propertyGetterKind_2D_computedProperty_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind_2D_computedProperty_3F_ result ;
  const GALGAS_propertyGetterKind_2D_computedProperty_3F_ * p = (const GALGAS_propertyGetterKind_2D_computedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGetterKind_2D_computedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind-computedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty::GALGAS_propertyGetterKind_2D_constantProperty (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty::~ GALGAS_propertyGetterKind_2D_constantProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty GALGAS_propertyGetterKind_2D_constantProperty::init_21_ (const GALGAS_objectIR & in_value,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterKind_2D_constantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_constantProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty::GALGAS_propertyGetterKind_2D_constantProperty (const GALGAS_objectIR & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty GALGAS_propertyGetterKind_2D_constantProperty::class_func_new (const GALGAS_objectIR & in_value,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterKind_2D_constantProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind_2D_constantProperty::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_constantProperty::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_constantProperty::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterKind-constantProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterKind-constantProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2D_constantProperty ("propertyGetterKind-constantProperty",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterKind_2D_constantProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2D_constantProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterKind_2D_constantProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterKind_2D_constantProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty GALGAS_propertyGetterKind_2D_constantProperty::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind_2D_constantProperty result ;
  const GALGAS_propertyGetterKind_2D_constantProperty * p = (const GALGAS_propertyGetterKind_2D_constantProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGetterKind_2D_constantProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind-constantProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyGetterKind_2D_constantProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty_3F_::GALGAS_propertyGetterKind_2D_constantProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty_3F_::GALGAS_propertyGetterKind_2D_constantProperty_3F_ (const GALGAS_propertyGetterKind_2D_constantProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty_3F_ GALGAS_propertyGetterKind_2D_constantProperty_3F_::init_nil (void) {
  GALGAS_propertyGetterKind_2D_constantProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind_2D_constantProperty_3F_::isValid (void) const {
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

bool GALGAS_propertyGetterKind_2D_constantProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_constantProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_propertyGetterKind_2D_constantProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind_2D_constantProperty_3F_::description (String & ioString,
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
//
//     @propertyGetterKind-constantProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2D_constantProperty_3F_ ("propertyGetterKind-constantProperty?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterKind_2D_constantProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2D_constantProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterKind_2D_constantProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterKind_2D_constantProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind_2D_constantProperty_3F_ GALGAS_propertyGetterKind_2D_constantProperty_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind_2D_constantProperty_3F_ result ;
  const GALGAS_propertyGetterKind_2D_constantProperty_3F_ * p = (const GALGAS_propertyGetterKind_2D_constantProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGetterKind_2D_constantProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind-constantProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty::GALGAS_propertySetterKind_2D_computedProperty (void) :
mProperty_typeProxy (),
mProperty_getterModeDictionary (),
mProperty_setterModeDictionary () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty::~ GALGAS_propertySetterKind_2D_computedProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty GALGAS_propertySetterKind_2D_computedProperty::init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                               const GALGAS_routineLLVMNameDict & in_getterModeDictionary,
                                                                                                               const GALGAS_routineLLVMNameDict & in_setterModeDictionary,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterKind_2D_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_getterModeDictionary = in_getterModeDictionary ;
  result.mProperty_setterModeDictionary = in_setterModeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind_2D_computedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty::GALGAS_propertySetterKind_2D_computedProperty (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                              const GALGAS_routineLLVMNameDict & inOperand1,
                                                                                              const GALGAS_routineLLVMNameDict & inOperand2) :
mProperty_typeProxy (inOperand0),
mProperty_getterModeDictionary (inOperand1),
mProperty_setterModeDictionary (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty GALGAS_propertySetterKind_2D_computedProperty::class_func_new (const GALGAS_unifiedTypeMapEntry & in_typeProxy,
                                                                                                             const GALGAS_routineLLVMNameDict & in_getterModeDictionary,
                                                                                                             const GALGAS_routineLLVMNameDict & in_setterModeDictionary,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterKind_2D_computedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeProxy = in_typeProxy ;
  result.mProperty_getterModeDictionary = in_getterModeDictionary ;
  result.mProperty_setterModeDictionary = in_setterModeDictionary ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterKind_2D_computedProperty::isValid (void) const {
  return mProperty_typeProxy.isValid () && mProperty_getterModeDictionary.isValid () && mProperty_setterModeDictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind_2D_computedProperty::drop (void) {
  mProperty_typeProxy.drop () ;
  mProperty_getterModeDictionary.drop () ;
  mProperty_setterModeDictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind_2D_computedProperty::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertySetterKind-computedProperty:") ;
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
//
//     @propertySetterKind-computedProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2D_computedProperty ("propertySetterKind-computedProperty",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertySetterKind_2D_computedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2D_computedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertySetterKind_2D_computedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertySetterKind_2D_computedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty GALGAS_propertySetterKind_2D_computedProperty::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterKind_2D_computedProperty result ;
  const GALGAS_propertySetterKind_2D_computedProperty * p = (const GALGAS_propertySetterKind_2D_computedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertySetterKind_2D_computedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind-computedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertySetterKind_2D_computedProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty_3F_::GALGAS_propertySetterKind_2D_computedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty_3F_::GALGAS_propertySetterKind_2D_computedProperty_3F_ (const GALGAS_propertySetterKind_2D_computedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty_3F_ GALGAS_propertySetterKind_2D_computedProperty_3F_::init_nil (void) {
  GALGAS_propertySetterKind_2D_computedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterKind_2D_computedProperty_3F_::isValid (void) const {
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

bool GALGAS_propertySetterKind_2D_computedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind_2D_computedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_propertySetterKind_2D_computedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind_2D_computedProperty_3F_::description (String & ioString,
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
//
//     @propertySetterKind-computedProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2D_computedProperty_3F_ ("propertySetterKind-computedProperty?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertySetterKind_2D_computedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2D_computedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertySetterKind_2D_computedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertySetterKind_2D_computedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind_2D_computedProperty_3F_ GALGAS_propertySetterKind_2D_computedProperty_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterKind_2D_computedProperty_3F_ result ;
  const GALGAS_propertySetterKind_2D_computedProperty_3F_ * p = (const GALGAS_propertySetterKind_2D_computedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertySetterKind_2D_computedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind-computedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (void) :
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element::~ GALGAS_operandIRList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::init_21_ (const GALGAS_objectIR & in_mOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (const GALGAS_objectIR & inOperand0) :
mProperty_mOperand (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::class_func_new (const GALGAS_objectIR & in_mOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_operandIRList_2D_element::objectCompare (const GALGAS_operandIRList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_operandIRList_2D_element::isValid (void) const {
  return mProperty_mOperand.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList_2D_element::drop (void) {
  mProperty_mOperand.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @operandIRList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @operandIRList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList_2D_element ("operandIRList-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_operandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_operandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  const GALGAS_operandIRList_2D_element * p = (const GALGAS_operandIRList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_operandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration::GALGAS_typeKind_2D_enumeration (void) :
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration::~ GALGAS_typeKind_2D_enumeration (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration GALGAS_typeKind_2D_enumeration::init_21_ (const GALGAS_uint & in_bitCount,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_enumeration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_enumeration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration::GALGAS_typeKind_2D_enumeration (const GALGAS_uint & inOperand0) :
mProperty_bitCount (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration GALGAS_typeKind_2D_enumeration::class_func_new (const GALGAS_uint & in_bitCount,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_enumeration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeKind_2D_enumeration::objectCompare (const GALGAS_typeKind_2D_enumeration & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitCount.objectCompare (inOperand.mProperty_bitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_enumeration::isValid (void) const {
  return mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_enumeration::drop (void) {
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_enumeration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind-enumeration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind-enumeration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_enumeration ("typeKind-enumeration",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_enumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_enumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_enumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_enumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration GALGAS_typeKind_2D_enumeration::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_enumeration result ;
  const GALGAS_typeKind_2D_enumeration * p = (const GALGAS_typeKind_2D_enumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_enumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-enumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2D_enumeration_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration_3F_::GALGAS_typeKind_2D_enumeration_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration_3F_::GALGAS_typeKind_2D_enumeration_3F_ (const GALGAS_typeKind_2D_enumeration & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration_3F_ GALGAS_typeKind_2D_enumeration_3F_::init_nil (void) {
  GALGAS_typeKind_2D_enumeration_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_enumeration_3F_::isValid (void) const {
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

bool GALGAS_typeKind_2D_enumeration_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_enumeration_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_typeKind_2D_enumeration () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_enumeration_3F_::description (String & ioString,
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
//
//     @typeKind-enumeration? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_enumeration_3F_ ("typeKind-enumeration?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_enumeration_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_enumeration_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_enumeration_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_enumeration_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_enumeration_3F_ GALGAS_typeKind_2D_enumeration_3F_::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_enumeration_3F_ result ;
  const GALGAS_typeKind_2D_enumeration_3F_ * p = (const GALGAS_typeKind_2D_enumeration_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_enumeration_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-enumeration?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure::GALGAS_typeKind_2D_structure (void) :
mProperty_propertyList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure::~ GALGAS_typeKind_2D_structure (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeKind_2D_structure GALGAS_typeKind_2D_structure::init_21_ (const GALGAS_propertyList & in_propertyList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyList = in_propertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_structure::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure::GALGAS_typeKind_2D_structure (const GALGAS_propertyList & inOperand0) :
mProperty_propertyList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure GALGAS_typeKind_2D_structure::class_func_new (const GALGAS_propertyList & in_propertyList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_structure result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyList = in_propertyList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeKind_2D_structure::objectCompare (const GALGAS_typeKind_2D_structure & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_propertyList.objectCompare (inOperand.mProperty_propertyList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_structure::isValid (void) const {
  return mProperty_propertyList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_structure::drop (void) {
  mProperty_propertyList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_structure::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind-structure:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind-structure generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_structure ("typeKind-structure",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_structure::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_structure ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_structure::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_structure (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure GALGAS_typeKind_2D_structure::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_structure result ;
  const GALGAS_typeKind_2D_structure * p = (const GALGAS_typeKind_2D_structure *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_structure *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-structure", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2D_structure_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure_3F_::GALGAS_typeKind_2D_structure_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure_3F_::GALGAS_typeKind_2D_structure_3F_ (const GALGAS_typeKind_2D_structure & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure_3F_ GALGAS_typeKind_2D_structure_3F_::init_nil (void) {
  GALGAS_typeKind_2D_structure_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_structure_3F_::isValid (void) const {
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

bool GALGAS_typeKind_2D_structure_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_structure_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_typeKind_2D_structure () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_structure_3F_::description (String & ioString,
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
//
//     @typeKind-structure? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_structure_3F_ ("typeKind-structure?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_structure_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_structure_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_structure_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_structure_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_structure_3F_ GALGAS_typeKind_2D_structure_3F_::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_structure_3F_ result ;
  const GALGAS_typeKind_2D_structure_3F_ * p = (const GALGAS_typeKind_2D_structure_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_structure_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-structure?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer::GALGAS_typeKind_2D_integer (void) :
mProperty_min (),
mProperty_max (),
mProperty_unsigned (),
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer::~ GALGAS_typeKind_2D_integer (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeKind_2D_integer GALGAS_typeKind_2D_integer::init_21__21__21__21_ (const GALGAS_bigint & in_min,
                                                                             const GALGAS_bigint & in_max,
                                                                             const GALGAS_bool & in_unsigned,
                                                                             const GALGAS_uint & in_bitCount,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_integer result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_min = in_min ;
  result.mProperty_max = in_max ;
  result.mProperty_unsigned = in_unsigned ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_integer::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer::GALGAS_typeKind_2D_integer (const GALGAS_bigint & inOperand0,
                                                        const GALGAS_bigint & inOperand1,
                                                        const GALGAS_bool & inOperand2,
                                                        const GALGAS_uint & inOperand3) :
mProperty_min (inOperand0),
mProperty_max (inOperand1),
mProperty_unsigned (inOperand2),
mProperty_bitCount (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer GALGAS_typeKind_2D_integer::class_func_new (const GALGAS_bigint & in_min,
                                                                       const GALGAS_bigint & in_max,
                                                                       const GALGAS_bool & in_unsigned,
                                                                       const GALGAS_uint & in_bitCount,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_integer result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_min = in_min ;
  result.mProperty_max = in_max ;
  result.mProperty_unsigned = in_unsigned ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeKind_2D_integer::objectCompare (const GALGAS_typeKind_2D_integer & inOperand) const {
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

bool GALGAS_typeKind_2D_integer::isValid (void) const {
  return mProperty_min.isValid () && mProperty_max.isValid () && mProperty_unsigned.isValid () && mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_integer::drop (void) {
  mProperty_min.drop () ;
  mProperty_max.drop () ;
  mProperty_unsigned.drop () ;
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_integer::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind-integer:") ;
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
//
//     @typeKind-integer generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_integer ("typeKind-integer",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_integer::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_integer ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_integer::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_integer (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer GALGAS_typeKind_2D_integer::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_integer result ;
  const GALGAS_typeKind_2D_integer * p = (const GALGAS_typeKind_2D_integer *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_integer *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-integer", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2D_integer_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer_3F_::GALGAS_typeKind_2D_integer_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer_3F_::GALGAS_typeKind_2D_integer_3F_ (const GALGAS_typeKind_2D_integer & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer_3F_ GALGAS_typeKind_2D_integer_3F_::init_nil (void) {
  GALGAS_typeKind_2D_integer_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_integer_3F_::isValid (void) const {
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

bool GALGAS_typeKind_2D_integer_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_integer_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_typeKind_2D_integer () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_integer_3F_::description (String & ioString,
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
//
//     @typeKind-integer? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_integer_3F_ ("typeKind-integer?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_integer_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_integer_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_integer_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_integer_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_integer_3F_ GALGAS_typeKind_2D_integer_3F_::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_integer_3F_ result ;
  const GALGAS_typeKind_2D_integer_3F_ * p = (const GALGAS_typeKind_2D_integer_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_integer_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-integer?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType::GALGAS_typeKind_2D_llvmType (void) :
mProperty_bitSize () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType::~ GALGAS_typeKind_2D_llvmType (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType GALGAS_typeKind_2D_llvmType::init_21_ (const GALGAS_bigint & in_bitSize,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_llvmType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitSize = in_bitSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_llvmType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType::GALGAS_typeKind_2D_llvmType (const GALGAS_bigint & inOperand0) :
mProperty_bitSize (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType GALGAS_typeKind_2D_llvmType::class_func_new (const GALGAS_bigint & in_bitSize,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_llvmType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitSize = in_bitSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeKind_2D_llvmType::objectCompare (const GALGAS_typeKind_2D_llvmType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitSize.objectCompare (inOperand.mProperty_bitSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_llvmType::isValid (void) const {
  return mProperty_bitSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_llvmType::drop (void) {
  mProperty_bitSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_llvmType::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind-llvmType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitSize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind-llvmType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_llvmType ("typeKind-llvmType",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_llvmType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_llvmType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_llvmType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_llvmType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType GALGAS_typeKind_2D_llvmType::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_llvmType result ;
  const GALGAS_typeKind_2D_llvmType * p = (const GALGAS_typeKind_2D_llvmType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_llvmType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-llvmType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2D_llvmType_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType_3F_::GALGAS_typeKind_2D_llvmType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType_3F_::GALGAS_typeKind_2D_llvmType_3F_ (const GALGAS_typeKind_2D_llvmType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType_3F_ GALGAS_typeKind_2D_llvmType_3F_::init_nil (void) {
  GALGAS_typeKind_2D_llvmType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_llvmType_3F_::isValid (void) const {
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

bool GALGAS_typeKind_2D_llvmType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_llvmType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_typeKind_2D_llvmType () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_llvmType_3F_::description (String & ioString,
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
//
//     @typeKind-llvmType? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_llvmType_3F_ ("typeKind-llvmType?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_llvmType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_llvmType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_llvmType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_llvmType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_llvmType_3F_ GALGAS_typeKind_2D_llvmType_3F_::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_llvmType_3F_ result ;
  const GALGAS_typeKind_2D_llvmType_3F_ * p = (const GALGAS_typeKind_2D_llvmType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_llvmType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-llvmType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic::GALGAS_typeKind_2D_generic (void) :
mProperty_parameters (),
mProperty_whereClause (),
mProperty_llvmNativeTypeNameExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic::~ GALGAS_typeKind_2D_generic (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeKind_2D_generic GALGAS_typeKind_2D_generic::init_21__21__21_ (const GALGAS_genericFormalParameterList & in_parameters,
                                                                         const GALGAS_ctExpressionAST & in_whereClause,
                                                                         const GALGAS_llvmStringDefinition & in_llvmNativeTypeNameExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_generic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_parameters = in_parameters ;
  result.mProperty_whereClause = in_whereClause ;
  result.mProperty_llvmNativeTypeNameExpression = in_llvmNativeTypeNameExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_generic::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic::GALGAS_typeKind_2D_generic (const GALGAS_genericFormalParameterList & inOperand0,
                                                        const GALGAS_ctExpressionAST & inOperand1,
                                                        const GALGAS_llvmStringDefinition & inOperand2) :
mProperty_parameters (inOperand0),
mProperty_whereClause (inOperand1),
mProperty_llvmNativeTypeNameExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic GALGAS_typeKind_2D_generic::class_func_new (const GALGAS_genericFormalParameterList & in_parameters,
                                                                       const GALGAS_ctExpressionAST & in_whereClause,
                                                                       const GALGAS_llvmStringDefinition & in_llvmNativeTypeNameExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_generic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_parameters = in_parameters ;
  result.mProperty_whereClause = in_whereClause ;
  result.mProperty_llvmNativeTypeNameExpression = in_llvmNativeTypeNameExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeKind_2D_generic::objectCompare (const GALGAS_typeKind_2D_generic & inOperand) const {
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

bool GALGAS_typeKind_2D_generic::isValid (void) const {
  return mProperty_parameters.isValid () && mProperty_whereClause.isValid () && mProperty_llvmNativeTypeNameExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_generic::drop (void) {
  mProperty_parameters.drop () ;
  mProperty_whereClause.drop () ;
  mProperty_llvmNativeTypeNameExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_generic::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind-generic:") ;
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
//
//     @typeKind-generic generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_generic ("typeKind-generic",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_generic::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_generic ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_generic::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_generic (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic GALGAS_typeKind_2D_generic::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_generic result ;
  const GALGAS_typeKind_2D_generic * p = (const GALGAS_typeKind_2D_generic *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_generic *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-generic", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2D_generic_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic_3F_::GALGAS_typeKind_2D_generic_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic_3F_::GALGAS_typeKind_2D_generic_3F_ (const GALGAS_typeKind_2D_generic & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic_3F_ GALGAS_typeKind_2D_generic_3F_::init_nil (void) {
  GALGAS_typeKind_2D_generic_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_generic_3F_::isValid (void) const {
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

bool GALGAS_typeKind_2D_generic_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_generic_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_typeKind_2D_generic () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_generic_3F_::description (String & ioString,
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
//
//     @typeKind-generic? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_generic_3F_ ("typeKind-generic?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_generic_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_generic_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_generic_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_generic_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_generic_3F_ GALGAS_typeKind_2D_generic_3F_::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_generic_3F_ result ;
  const GALGAS_typeKind_2D_generic_3F_ * p = (const GALGAS_typeKind_2D_generic_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_generic_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-generic?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque::GALGAS_typeKind_2D_opaque (void) :
mProperty_bitCount () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque::~ GALGAS_typeKind_2D_opaque (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeKind_2D_opaque GALGAS_typeKind_2D_opaque::init_21_ (const GALGAS_bigint & in_bitCount,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_opaque result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_opaque::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque::GALGAS_typeKind_2D_opaque (const GALGAS_bigint & inOperand0) :
mProperty_bitCount (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque GALGAS_typeKind_2D_opaque::class_func_new (const GALGAS_bigint & in_bitCount,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_opaque result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bitCount = in_bitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeKind_2D_opaque::objectCompare (const GALGAS_typeKind_2D_opaque & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bitCount.objectCompare (inOperand.mProperty_bitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_opaque::isValid (void) const {
  return mProperty_bitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_opaque::drop (void) {
  mProperty_bitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_opaque::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind-opaque:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind-opaque generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_opaque ("typeKind-opaque",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_opaque::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_opaque ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_opaque::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_opaque (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque GALGAS_typeKind_2D_opaque::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_opaque result ;
  const GALGAS_typeKind_2D_opaque * p = (const GALGAS_typeKind_2D_opaque *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_opaque *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-opaque", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2D_opaque_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque_3F_::GALGAS_typeKind_2D_opaque_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque_3F_::GALGAS_typeKind_2D_opaque_3F_ (const GALGAS_typeKind_2D_opaque & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque_3F_ GALGAS_typeKind_2D_opaque_3F_::init_nil (void) {
  GALGAS_typeKind_2D_opaque_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_opaque_3F_::isValid (void) const {
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

bool GALGAS_typeKind_2D_opaque_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_opaque_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_typeKind_2D_opaque () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_opaque_3F_::description (String & ioString,
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
//
//     @typeKind-opaque? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_opaque_3F_ ("typeKind-opaque?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_opaque_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_opaque_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_opaque_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_opaque_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_opaque_3F_ GALGAS_typeKind_2D_opaque_3F_::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_opaque_3F_ result ;
  const GALGAS_typeKind_2D_opaque_3F_ * p = (const GALGAS_typeKind_2D_opaque_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_opaque_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-opaque?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function::GALGAS_typeKind_2D_function (void) :
mProperty_mode (),
mProperty_signature (),
mProperty_returnTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function::~ GALGAS_typeKind_2D_function (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeKind_2D_function GALGAS_typeKind_2D_function::init_21__21__21_ (const GALGAS_mode & in_mode,
                                                                           const GALGAS_routineTypedSignature & in_signature,
                                                                           const GALGAS_unifiedTypeMapEntry & in_returnTypeProxy,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_signature = in_signature ;
  result.mProperty_returnTypeProxy = in_returnTypeProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_function::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function::GALGAS_typeKind_2D_function (const GALGAS_mode & inOperand0,
                                                          const GALGAS_routineTypedSignature & inOperand1,
                                                          const GALGAS_unifiedTypeMapEntry & inOperand2) :
mProperty_mode (inOperand0),
mProperty_signature (inOperand1),
mProperty_returnTypeProxy (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function GALGAS_typeKind_2D_function::class_func_new (const GALGAS_mode & in_mode,
                                                                         const GALGAS_routineTypedSignature & in_signature,
                                                                         const GALGAS_unifiedTypeMapEntry & in_returnTypeProxy,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind_2D_function result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mode = in_mode ;
  result.mProperty_signature = in_signature ;
  result.mProperty_returnTypeProxy = in_returnTypeProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeKind_2D_function::objectCompare (const GALGAS_typeKind_2D_function & inOperand) const {
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

bool GALGAS_typeKind_2D_function::isValid (void) const {
  return mProperty_mode.isValid () && mProperty_signature.isValid () && mProperty_returnTypeProxy.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_function::drop (void) {
  mProperty_mode.drop () ;
  mProperty_signature.drop () ;
  mProperty_returnTypeProxy.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_function::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind-function:") ;
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
//
//     @typeKind-function generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_function ("typeKind-function",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_function ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_function::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_function (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function GALGAS_typeKind_2D_function::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_function result ;
  const GALGAS_typeKind_2D_function * p = (const GALGAS_typeKind_2D_function *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2D_function_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function_3F_::GALGAS_typeKind_2D_function_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function_3F_::GALGAS_typeKind_2D_function_3F_ (const GALGAS_typeKind_2D_function & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function_3F_ GALGAS_typeKind_2D_function_3F_::init_nil (void) {
  GALGAS_typeKind_2D_function_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind_2D_function_3F_::isValid (void) const {
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

bool GALGAS_typeKind_2D_function_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_function_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_typeKind_2D_function () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind_2D_function_3F_::description (String & ioString,
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
//
//     @typeKind-function? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2D_function_3F_ ("typeKind-function?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind_2D_function_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2D_function_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind_2D_function_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind_2D_function_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind_2D_function_3F_ GALGAS_typeKind_2D_function_3F_::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind_2D_function_3F_ result ;
  const GALGAS_typeKind_2D_function_3F_ * p = (const GALGAS_typeKind_2D_function_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind_2D_function_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind-function?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element::GALGAS_userLLVMTypeDefinitionListIR_2D_element (void) :
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element::~ GALGAS_userLLVMTypeDefinitionListIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element GALGAS_userLLVMTypeDefinitionListIR_2D_element::init_21_ (const GALGAS_userLLVMTypeDefinitionIR & in_mType,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionListIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element::GALGAS_userLLVMTypeDefinitionListIR_2D_element (const GALGAS_userLLVMTypeDefinitionIR & inOperand0) :
mProperty_mType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element GALGAS_userLLVMTypeDefinitionListIR_2D_element::class_func_new (const GALGAS_userLLVMTypeDefinitionIR & in_mType,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionListIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_userLLVMTypeDefinitionListIR_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @userLLVMTypeDefinitionListIR-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @userLLVMTypeDefinitionListIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2D_element ("userLLVMTypeDefinitionListIR-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionListIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element GALGAS_userLLVMTypeDefinitionListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionListIR_2D_element result ;
  const GALGAS_userLLVMTypeDefinitionListIR_2D_element * p = (const GALGAS_userLLVMTypeDefinitionListIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_userLLVMTypeDefinitionListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element::GALGAS_unifiedTypeMapEntry_2D_element (void) :
mProperty_weakElement () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element::~ GALGAS_unifiedTypeMapEntry_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element GALGAS_unifiedTypeMapEntry_2D_element::init_21_ (const GALGAS_unifiedTypeMapElementClass_2D_weak & in_weakElement,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element::GALGAS_unifiedTypeMapEntry_2D_element (const GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0) :
mProperty_weakElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element GALGAS_unifiedTypeMapEntry_2D_element::class_func_new (const GALGAS_unifiedTypeMapElementClass_2D_weak & in_weakElement,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unifiedTypeMapEntry_2D_element::objectCompare (const GALGAS_unifiedTypeMapEntry_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_weakElement.objectCompare (inOperand.mProperty_weakElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntry_2D_element::isValid (void) const {
  return mProperty_weakElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element::drop (void) {
  mProperty_weakElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntry-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntry-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element ("unifiedTypeMapEntry-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntry_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntry_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntry_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element GALGAS_unifiedTypeMapEntry_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry_2D_element result ;
  const GALGAS_unifiedTypeMapEntry_2D_element * p = (const GALGAS_unifiedTypeMapEntry_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapEntry_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @unifiedTypeMapEntry_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element_3F_::GALGAS_unifiedTypeMapEntry_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element_3F_::GALGAS_unifiedTypeMapEntry_2D_element_3F_ (const GALGAS_unifiedTypeMapEntry_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element_3F_ GALGAS_unifiedTypeMapEntry_2D_element_3F_::init_nil (void) {
  GALGAS_unifiedTypeMapEntry_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntry_2D_element_3F_::isValid (void) const {
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

bool GALGAS_unifiedTypeMapEntry_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_unifiedTypeMapEntry_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element_3F_::description (String & ioString,
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
//
//     @unifiedTypeMapEntry-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element_3F_ ("unifiedTypeMapEntry-element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntry_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntry_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntry_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element_3F_ GALGAS_unifiedTypeMapEntry_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry_2D_element_3F_ result ;
  const GALGAS_unifiedTypeMapEntry_2D_element_3F_ * p = (const GALGAS_unifiedTypeMapEntry_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapEntry_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

